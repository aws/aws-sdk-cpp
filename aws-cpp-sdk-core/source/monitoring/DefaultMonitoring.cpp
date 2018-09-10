/*
* Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/monitoring/DefaultMonitoring.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/utils/logging/LogMacros.h>
using namespace Aws::Utils;

namespace Aws
{
    namespace Monitoring
    {
        static const char DEFAULT_MONITORING_ALLOC_TAG[] = "DefaultMonitoringAllocTag";
        static const int CLIENT_ID_LENGTH_LIMIT = 256;
        static const int USER_AGENT_LENGHT_LIMIT = 256;
        static const int ERROR_MESSAGE_LENGTH_LIMIT = 512;

        const char DEFAULT_MONITORING_CLIENT_ID[] = ""; // default to empty;
        unsigned short DEFAULT_MONITORING_PORT = 31000; //default to 31000;
        bool DEFAULT_MONITORING_ENABLE = false; //default to false;

        const int DefaultMonitoring::DEFAULT_MONITORING_VERSION = 1;
        const char DefaultMonitoring::DEFAULT_CSM_CONFIG_ENABLED[] = "csm_enabled";
        const char DefaultMonitoring::DEFAULT_CSM_CONFIG_CLIENT_ID[] = "csm_client_id";
        const char DefaultMonitoring::DEFAULT_CSM_CONFIG_PORT[] = "csm_port";
        const char DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_ENABLED[] = "AWS_CSM_ENABLED";
        const char DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_CLIENT_ID[] = "AWS_CSM_CLIENT_ID";
        const char DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_PORT[] = "AWS_CSM_PORT";


        struct DefaultContext
        {
            Aws::Utils::DateTime apiCallStartTime;
            Aws::Utils::DateTime attemptStartTime;
            int retryCount = 0;
        };

        static inline void FillRequiredFieldsToJson(Json::JsonValue& json, 
            const Aws::String& type, 
            const Aws::String& service,
            const Aws::String& api,
            const Aws::String& clientId,
            const DateTime& timestamp,
            int version)
        {
            json.WithString("Type", type)
                .WithString("Service", service)
                .WithString("Api", api)
                .WithString("ClientId", clientId.substr(0, CLIENT_ID_LENGTH_LIMIT))
                .WithInt64("Timestamp", timestamp.Millis())
                .WithInteger("Version", version);
        }

        static inline void FillRequiredApiCallFieldsToJson(Json::JsonValue& json,
            int attemptCount,
            int64_t apiCallLatency)
        {
            json.WithInteger("AttemptCount", attemptCount)
                .WithInt64("Latency", apiCallLatency);
        }

        static inline void FillRequiredApiAttemptFieldsToJson(Json::JsonValue& json,
            const Aws::String& domainName,
            const Aws::String& userAgent,
            int64_t attemptLatency)
        {
            json.WithString("Fqdn", domainName)
                .WithString("UserAgent", userAgent.substr(0, USER_AGENT_LENGHT_LIMIT))
                .WithInt64("AttemptLatency", attemptLatency);
        }

        static inline void ExportResponseHeaderToJson(Json::JsonValue& json, const Aws::Http::HeaderValueCollection& headers, 
            const Aws::String& headerName, const Aws::String& targetName)
        {
            auto iter = headers.find(headerName);
            if (iter != headers.end())
            {
                json.WithString(targetName, iter->second);
            }
        }

        static inline void ExportHttpMetricsToJson(Json::JsonValue& json, const Aws::Monitoring::HttpClientMetricsCollection& httpMetrics, Aws::Monitoring::HttpClientMetricsType type)
        {
            auto iter = httpMetrics.find(GetHttpClientMetricNameByType(type));
            if (iter != httpMetrics.end())
            {
                json.WithInt64(GetHttpClientMetricNameByType(type), iter->second);
            }
        }

        static inline void FillOptionalApiAttemptFieldsToJson(Json::JsonValue& json,
            const std::shared_ptr<const Aws::Http::HttpRequest>& request,
            const Aws::Client::HttpResponseOutcome& outcome,
            const CoreMetricsCollection& metricsFromCore)
        {
            /**
             *No matter request succeeded or not, these fields should be included as long as their requirements
             *are met. We should be able to access response (so as to access original requeset) if the response has error.
             */
            if (request->HasAwsSessionToken() && !request->GetAwsSessionToken().empty())
            {
                json.WithString("SessionToken", request->GetAwsSessionToken());
            }
            if (!request->GetSigningRegion().empty())
            {
                json.WithString("Region", request->GetSigningRegion());
            }
            if (!request->GetSigningAccessKey().empty())
            {
                json.WithString("AccessKey", request->GetSigningAccessKey());
            }

            json.WithInteger("HttpStatusCode", static_cast<int>(outcome.IsSuccess() ? outcome.GetResult()->GetResponseCode() : outcome.GetError().GetResponseCode()));
            
            const auto& headers = outcome.IsSuccess() ? outcome.GetResult()->GetHeaders() : outcome.GetError().GetResponseHeaders();

            ExportResponseHeaderToJson(json, headers, StringUtils::ToLower("x-amzn-RequestId"), "XAmznRequestId");
            ExportResponseHeaderToJson(json, headers, StringUtils::ToLower("x-amz-request-id"), "XAmzRequestId");
            ExportResponseHeaderToJson(json, headers, StringUtils::ToLower("x-amz-id-2"), "XAmzId2");
            
            if (!outcome.IsSuccess())
            {
                if (outcome.GetError().GetExceptionName().empty()) // Not Aws Excecption
                {
                    json.WithString("ConnectionErrorMessage", outcome.GetError().GetMessage().substr(0, ERROR_MESSAGE_LENGTH_LIMIT));
                }
                else // Aws Exception
                {
                    Aws::String msg = outcome.GetError().GetExceptionName() + ":" + outcome.GetError().GetMessage();
                    json.WithString("AwsExceptionMessage", msg.substr(0, ERROR_MESSAGE_LENGTH_LIMIT));
                }
            }

            // Optional MetricsCollectedFromCore
            ExportHttpMetricsToJson(json, metricsFromCore.httpClientMetrics, HttpClientMetricsType::AcquireConnectionLatency);
            ExportHttpMetricsToJson(json, metricsFromCore.httpClientMetrics, HttpClientMetricsType::ConnectionReused);
            ExportHttpMetricsToJson(json, metricsFromCore.httpClientMetrics, HttpClientMetricsType::ConnectLatency);
            ExportHttpMetricsToJson(json, metricsFromCore.httpClientMetrics, HttpClientMetricsType::DestinationIp);
            ExportHttpMetricsToJson(json, metricsFromCore.httpClientMetrics, HttpClientMetricsType::DnsLatency);
            ExportHttpMetricsToJson(json, metricsFromCore.httpClientMetrics, HttpClientMetricsType::RequestLatency);
            ExportHttpMetricsToJson(json, metricsFromCore.httpClientMetrics, HttpClientMetricsType::SslLatency);
            ExportHttpMetricsToJson(json, metricsFromCore.httpClientMetrics, HttpClientMetricsType::TcpLatency);
        }

        DefaultMonitoring::DefaultMonitoring(const Aws::String& clientId, unsigned short port):
            m_clientId(clientId), m_port(port)
        {
            m_udp.ConnectToLocalHost(port);
        }

        void* DefaultMonitoring::OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request) const
        {
            AWS_UNREFERENCED_PARAM(request);

            AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "OnRequestStart Service: " << serviceName << "Request: " << requestName);
            auto context = Aws::New<DefaultContext>(DEFAULT_MONITORING_ALLOC_TAG);
            context->apiCallStartTime = Aws::Utils::DateTime::Now();
            context->attemptStartTime = context->apiCallStartTime;
            context->retryCount = 0;
            return context;
        }


        void DefaultMonitoring::OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const
        {
            AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "OnRequestSucceeded Service: " << serviceName << "Request: " << requestName);
            CollectAndSendAttemptData(serviceName, requestName, request, outcome, metricsFromCore, context);
        }

        void DefaultMonitoring::OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const
        {
            AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "OnRequestFailed Service: " << serviceName << "Request: " << requestName);
            CollectAndSendAttemptData(serviceName, requestName, request, outcome, metricsFromCore, context);
        }

        void DefaultMonitoring::OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName, 
            const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const
        {
            AWS_UNREFERENCED_PARAM(request);

            DefaultContext* defaultContext = static_cast<DefaultContext*>(context);
            defaultContext->retryCount++;
            defaultContext->attemptStartTime = Aws::Utils::DateTime::Now();
            AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "OnRequestRetry Service: " << serviceName << "Request: " << requestName << " RetryCnt:" << defaultContext->retryCount);
        }

        void DefaultMonitoring::OnFinish(const Aws::String& serviceName, const Aws::String& requestName, 
            const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const
        {
            AWS_UNREFERENCED_PARAM(request);
            AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "OnRequestFinish Service: " << serviceName << "Request: " << requestName);

            DefaultContext* defaultContext = reinterpret_cast<DefaultContext*>(context);
            Aws::Utils::Json::JsonValue json;
            FillRequiredFieldsToJson(json, "ApiCall", serviceName, requestName, m_clientId, defaultContext->apiCallStartTime, DEFAULT_MONITORING_VERSION);
            FillRequiredApiCallFieldsToJson(json, defaultContext->retryCount + 1, DateTime::Now().Millis() - defaultContext->apiCallStartTime.Millis());
            Aws::String compactData = json.View().WriteCompact();
            m_udp.SendDataToLocalHost(reinterpret_cast<const uint8_t*>(compactData.c_str()), static_cast<int>(compactData.size()), m_port);
            AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "Send API Metrics: \n" << json.View().WriteReadable());
            Aws::Delete(defaultContext);
        }

        void DefaultMonitoring::CollectAndSendAttemptData(const Aws::String& serviceName, const Aws::String& requestName,
            const std::shared_ptr<const Aws::Http::HttpRequest>& request, const Aws::Client::HttpResponseOutcome& outcome, 
            const CoreMetricsCollection& metricsFromCore, void* context) const
        {
            DefaultContext* defaultContext = reinterpret_cast<DefaultContext*>(context);
            Aws::Utils::Json::JsonValue json;
            FillRequiredFieldsToJson(json, "ApiCallAttempt", serviceName, requestName, m_clientId, defaultContext->attemptStartTime, DEFAULT_MONITORING_VERSION);
            FillRequiredApiAttemptFieldsToJson(json, request->GetUri().GetAuthority(), request->GetUserAgent(),
                DateTime::Now().Millis() - defaultContext->attemptStartTime.Millis());
            FillOptionalApiAttemptFieldsToJson(json, request, outcome, metricsFromCore);
            Aws::String compactData = json.View().WriteCompact();
            AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "Send Attempt Metrics: \n" << json.View().WriteReadable());
            m_udp.SendDataToLocalHost(reinterpret_cast<const uint8_t*>(compactData.c_str()), static_cast<int>(compactData.size()), m_port);
        }

        Aws::UniquePtr<MonitoringInterface> DefaultMonitoringFactory::CreateMonitoringInstance() const
        {   
            Aws::String clientId(DEFAULT_MONITORING_CLIENT_ID); // default to empty
            unsigned short port = DEFAULT_MONITORING_PORT; // default to 31000
            bool enable = DEFAULT_MONITORING_ENABLE; //default to false;

            //check profile_config
            Aws::String defaultConfigFile = Aws::Auth::ProfileConfigFileAWSCredentialsProvider::GetConfigProfileFilename();
            Aws::Config::AWSConfigFileProfileConfigLoader configLoader(defaultConfigFile, true/*use profile prefix for config file*/);

            if (configLoader.Load())
            {
                auto profilesMap = configLoader.GetProfiles();
                // If these variables set in multiple sections, the one set later will override the former one.
                for (const auto& iter : profilesMap)
                {
                    Aws::String tmpEnable = iter.second.GetValue(DefaultMonitoring::DEFAULT_CSM_CONFIG_ENABLED);
                    Aws::String tmpClientId = iter.second.GetValue(DefaultMonitoring::DEFAULT_CSM_CONFIG_CLIENT_ID);
                    Aws::String tmpPort = iter.second.GetValue(DefaultMonitoring::DEFAULT_CSM_CONFIG_PORT);

                    if (!tmpEnable.empty())
                    {
                        enable = StringUtils::CaselessCompare(tmpEnable.c_str(), "true") ? true : false;
                        AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "Resolved csm_enabled from profile_config to be " << enable);
                    }
                    if (!tmpClientId.empty())
                    {
                        clientId = tmpClientId;
                        AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "Resolved csm_client_id from profile_config to be " << clientId);
                    }
                    if (!tmpPort.empty())
                    {
                        port = static_cast<short>(StringUtils::ConvertToInt32(tmpPort.c_str()));
                        AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "Resolved csm_port from profile_config to be " << port);
                    }             
                }
            }

            // check environment variables
            Aws::String tmpEnable = Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_ENABLED);
            Aws::String tmpClientId = Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_CLIENT_ID);
            Aws::String tmpPort = Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_PORT);
            if (!tmpEnable.empty())
            {
                enable = StringUtils::CaselessCompare(tmpEnable.c_str(), "true") ? true : false;
                AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "Resolved AWS_CSM_ENABLED from Environment variable to be " << enable);
            }
            if (!tmpClientId.empty())
            {
                clientId = tmpClientId;
                AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "Resolved AWS_CSM_CLIENT_ID from Environment variable to be " << clientId);

            }
            if (!tmpPort.empty())
            {
                port = static_cast<unsigned short>(StringUtils::ConvertToInt32(tmpPort.c_str()));
                AWS_LOGSTREAM_DEBUG(DEFAULT_MONITORING_ALLOC_TAG, "Resolved AWS_CSM_PORT from Environment variable to be " << port);
            }

            if (!enable)
            {
                return nullptr;
            }
            return Aws::MakeUnique<DefaultMonitoring>(DEFAULT_MONITORING_ALLOC_TAG, clientId, port);
        }

    }
}
