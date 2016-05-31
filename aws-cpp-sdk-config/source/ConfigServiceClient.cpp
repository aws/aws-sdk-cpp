/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/config/ConfigServiceClient.h>
#include <aws/config/ConfigServiceEndpoint.h>
#include <aws/config/ConfigServiceErrorMarshaller.h>
#include <aws/config/model/DeleteConfigRuleRequest.h>
#include <aws/config/model/DeleteDeliveryChannelRequest.h>
#include <aws/config/model/DeliverConfigSnapshotRequest.h>
#include <aws/config/model/DescribeComplianceByConfigRuleRequest.h>
#include <aws/config/model/DescribeComplianceByResourceRequest.h>
#include <aws/config/model/DescribeConfigRuleEvaluationStatusRequest.h>
#include <aws/config/model/DescribeConfigRulesRequest.h>
#include <aws/config/model/DescribeConfigurationRecorderStatusRequest.h>
#include <aws/config/model/DescribeConfigurationRecordersRequest.h>
#include <aws/config/model/DescribeDeliveryChannelStatusRequest.h>
#include <aws/config/model/DescribeDeliveryChannelsRequest.h>
#include <aws/config/model/GetComplianceDetailsByConfigRuleRequest.h>
#include <aws/config/model/GetComplianceDetailsByResourceRequest.h>
#include <aws/config/model/GetComplianceSummaryByResourceTypeRequest.h>
#include <aws/config/model/GetResourceConfigHistoryRequest.h>
#include <aws/config/model/ListDiscoveredResourcesRequest.h>
#include <aws/config/model/PutConfigRuleRequest.h>
#include <aws/config/model/PutConfigurationRecorderRequest.h>
#include <aws/config/model/PutDeliveryChannelRequest.h>
#include <aws/config/model/PutEvaluationsRequest.h>
#include <aws/config/model/StartConfigurationRecorderRequest.h>
#include <aws/config/model/StopConfigurationRecorderRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ConfigService;
using namespace Aws::ConfigService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "config";
static const char* ALLOCATION_TAG = "ConfigServiceClient";

ConfigServiceClient::ConfigServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConfigServiceClient::ConfigServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConfigServiceClient::ConfigServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConfigServiceClient::~ConfigServiceClient()
{
}

void ConfigServiceClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << ConfigServiceEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

DeleteConfigRuleOutcome ConfigServiceClient::DeleteConfigRule(const DeleteConfigRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteConfigRuleOutcome(NoResult());
  }
  else
  {
    return DeleteConfigRuleOutcome(outcome.GetError());
  }
}

DeleteConfigRuleOutcomeCallable ConfigServiceClient::DeleteConfigRuleCallable(const DeleteConfigRuleRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::DeleteConfigRule, this, request);
}

void ConfigServiceClient::DeleteConfigRuleAsync(const DeleteConfigRuleRequest& request, const DeleteConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::DeleteConfigRuleAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::DeleteConfigRuleAsyncHelper(const DeleteConfigRuleRequest& request, const DeleteConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfigRule(request), context);
}

DeleteDeliveryChannelOutcome ConfigServiceClient::DeleteDeliveryChannel(const DeleteDeliveryChannelRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDeliveryChannelOutcome(NoResult());
  }
  else
  {
    return DeleteDeliveryChannelOutcome(outcome.GetError());
  }
}

DeleteDeliveryChannelOutcomeCallable ConfigServiceClient::DeleteDeliveryChannelCallable(const DeleteDeliveryChannelRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::DeleteDeliveryChannel, this, request);
}

void ConfigServiceClient::DeleteDeliveryChannelAsync(const DeleteDeliveryChannelRequest& request, const DeleteDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::DeleteDeliveryChannelAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::DeleteDeliveryChannelAsyncHelper(const DeleteDeliveryChannelRequest& request, const DeleteDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeliveryChannel(request), context);
}

DeliverConfigSnapshotOutcome ConfigServiceClient::DeliverConfigSnapshot(const DeliverConfigSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeliverConfigSnapshotOutcome(DeliverConfigSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return DeliverConfigSnapshotOutcome(outcome.GetError());
  }
}

DeliverConfigSnapshotOutcomeCallable ConfigServiceClient::DeliverConfigSnapshotCallable(const DeliverConfigSnapshotRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::DeliverConfigSnapshot, this, request);
}

void ConfigServiceClient::DeliverConfigSnapshotAsync(const DeliverConfigSnapshotRequest& request, const DeliverConfigSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::DeliverConfigSnapshotAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::DeliverConfigSnapshotAsyncHelper(const DeliverConfigSnapshotRequest& request, const DeliverConfigSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeliverConfigSnapshot(request), context);
}

DescribeComplianceByConfigRuleOutcome ConfigServiceClient::DescribeComplianceByConfigRule(const DescribeComplianceByConfigRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeComplianceByConfigRuleOutcome(DescribeComplianceByConfigRuleResult(outcome.GetResult()));
  }
  else
  {
    return DescribeComplianceByConfigRuleOutcome(outcome.GetError());
  }
}

DescribeComplianceByConfigRuleOutcomeCallable ConfigServiceClient::DescribeComplianceByConfigRuleCallable(const DescribeComplianceByConfigRuleRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::DescribeComplianceByConfigRule, this, request);
}

void ConfigServiceClient::DescribeComplianceByConfigRuleAsync(const DescribeComplianceByConfigRuleRequest& request, const DescribeComplianceByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::DescribeComplianceByConfigRuleAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::DescribeComplianceByConfigRuleAsyncHelper(const DescribeComplianceByConfigRuleRequest& request, const DescribeComplianceByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeComplianceByConfigRule(request), context);
}

DescribeComplianceByResourceOutcome ConfigServiceClient::DescribeComplianceByResource(const DescribeComplianceByResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeComplianceByResourceOutcome(DescribeComplianceByResourceResult(outcome.GetResult()));
  }
  else
  {
    return DescribeComplianceByResourceOutcome(outcome.GetError());
  }
}

DescribeComplianceByResourceOutcomeCallable ConfigServiceClient::DescribeComplianceByResourceCallable(const DescribeComplianceByResourceRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::DescribeComplianceByResource, this, request);
}

void ConfigServiceClient::DescribeComplianceByResourceAsync(const DescribeComplianceByResourceRequest& request, const DescribeComplianceByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::DescribeComplianceByResourceAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::DescribeComplianceByResourceAsyncHelper(const DescribeComplianceByResourceRequest& request, const DescribeComplianceByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeComplianceByResource(request), context);
}

DescribeConfigRuleEvaluationStatusOutcome ConfigServiceClient::DescribeConfigRuleEvaluationStatus(const DescribeConfigRuleEvaluationStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeConfigRuleEvaluationStatusOutcome(DescribeConfigRuleEvaluationStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigRuleEvaluationStatusOutcome(outcome.GetError());
  }
}

DescribeConfigRuleEvaluationStatusOutcomeCallable ConfigServiceClient::DescribeConfigRuleEvaluationStatusCallable(const DescribeConfigRuleEvaluationStatusRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::DescribeConfigRuleEvaluationStatus, this, request);
}

void ConfigServiceClient::DescribeConfigRuleEvaluationStatusAsync(const DescribeConfigRuleEvaluationStatusRequest& request, const DescribeConfigRuleEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::DescribeConfigRuleEvaluationStatusAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::DescribeConfigRuleEvaluationStatusAsyncHelper(const DescribeConfigRuleEvaluationStatusRequest& request, const DescribeConfigRuleEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigRuleEvaluationStatus(request), context);
}

DescribeConfigRulesOutcome ConfigServiceClient::DescribeConfigRules(const DescribeConfigRulesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeConfigRulesOutcome(DescribeConfigRulesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigRulesOutcome(outcome.GetError());
  }
}

DescribeConfigRulesOutcomeCallable ConfigServiceClient::DescribeConfigRulesCallable(const DescribeConfigRulesRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::DescribeConfigRules, this, request);
}

void ConfigServiceClient::DescribeConfigRulesAsync(const DescribeConfigRulesRequest& request, const DescribeConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::DescribeConfigRulesAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::DescribeConfigRulesAsyncHelper(const DescribeConfigRulesRequest& request, const DescribeConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigRules(request), context);
}

DescribeConfigurationRecorderStatusOutcome ConfigServiceClient::DescribeConfigurationRecorderStatus(const DescribeConfigurationRecorderStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeConfigurationRecorderStatusOutcome(DescribeConfigurationRecorderStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigurationRecorderStatusOutcome(outcome.GetError());
  }
}

DescribeConfigurationRecorderStatusOutcomeCallable ConfigServiceClient::DescribeConfigurationRecorderStatusCallable(const DescribeConfigurationRecorderStatusRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::DescribeConfigurationRecorderStatus, this, request);
}

void ConfigServiceClient::DescribeConfigurationRecorderStatusAsync(const DescribeConfigurationRecorderStatusRequest& request, const DescribeConfigurationRecorderStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::DescribeConfigurationRecorderStatusAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::DescribeConfigurationRecorderStatusAsyncHelper(const DescribeConfigurationRecorderStatusRequest& request, const DescribeConfigurationRecorderStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurationRecorderStatus(request), context);
}

DescribeConfigurationRecordersOutcome ConfigServiceClient::DescribeConfigurationRecorders(const DescribeConfigurationRecordersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeConfigurationRecordersOutcome(DescribeConfigurationRecordersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigurationRecordersOutcome(outcome.GetError());
  }
}

DescribeConfigurationRecordersOutcomeCallable ConfigServiceClient::DescribeConfigurationRecordersCallable(const DescribeConfigurationRecordersRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::DescribeConfigurationRecorders, this, request);
}

void ConfigServiceClient::DescribeConfigurationRecordersAsync(const DescribeConfigurationRecordersRequest& request, const DescribeConfigurationRecordersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::DescribeConfigurationRecordersAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::DescribeConfigurationRecordersAsyncHelper(const DescribeConfigurationRecordersRequest& request, const DescribeConfigurationRecordersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurationRecorders(request), context);
}

DescribeDeliveryChannelStatusOutcome ConfigServiceClient::DescribeDeliveryChannelStatus(const DescribeDeliveryChannelStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDeliveryChannelStatusOutcome(DescribeDeliveryChannelStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDeliveryChannelStatusOutcome(outcome.GetError());
  }
}

DescribeDeliveryChannelStatusOutcomeCallable ConfigServiceClient::DescribeDeliveryChannelStatusCallable(const DescribeDeliveryChannelStatusRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::DescribeDeliveryChannelStatus, this, request);
}

void ConfigServiceClient::DescribeDeliveryChannelStatusAsync(const DescribeDeliveryChannelStatusRequest& request, const DescribeDeliveryChannelStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::DescribeDeliveryChannelStatusAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::DescribeDeliveryChannelStatusAsyncHelper(const DescribeDeliveryChannelStatusRequest& request, const DescribeDeliveryChannelStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDeliveryChannelStatus(request), context);
}

DescribeDeliveryChannelsOutcome ConfigServiceClient::DescribeDeliveryChannels(const DescribeDeliveryChannelsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDeliveryChannelsOutcome(DescribeDeliveryChannelsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDeliveryChannelsOutcome(outcome.GetError());
  }
}

DescribeDeliveryChannelsOutcomeCallable ConfigServiceClient::DescribeDeliveryChannelsCallable(const DescribeDeliveryChannelsRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::DescribeDeliveryChannels, this, request);
}

void ConfigServiceClient::DescribeDeliveryChannelsAsync(const DescribeDeliveryChannelsRequest& request, const DescribeDeliveryChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::DescribeDeliveryChannelsAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::DescribeDeliveryChannelsAsyncHelper(const DescribeDeliveryChannelsRequest& request, const DescribeDeliveryChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDeliveryChannels(request), context);
}

GetComplianceDetailsByConfigRuleOutcome ConfigServiceClient::GetComplianceDetailsByConfigRule(const GetComplianceDetailsByConfigRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetComplianceDetailsByConfigRuleOutcome(GetComplianceDetailsByConfigRuleResult(outcome.GetResult()));
  }
  else
  {
    return GetComplianceDetailsByConfigRuleOutcome(outcome.GetError());
  }
}

GetComplianceDetailsByConfigRuleOutcomeCallable ConfigServiceClient::GetComplianceDetailsByConfigRuleCallable(const GetComplianceDetailsByConfigRuleRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::GetComplianceDetailsByConfigRule, this, request);
}

void ConfigServiceClient::GetComplianceDetailsByConfigRuleAsync(const GetComplianceDetailsByConfigRuleRequest& request, const GetComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::GetComplianceDetailsByConfigRuleAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::GetComplianceDetailsByConfigRuleAsyncHelper(const GetComplianceDetailsByConfigRuleRequest& request, const GetComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetComplianceDetailsByConfigRule(request), context);
}

GetComplianceDetailsByResourceOutcome ConfigServiceClient::GetComplianceDetailsByResource(const GetComplianceDetailsByResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetComplianceDetailsByResourceOutcome(GetComplianceDetailsByResourceResult(outcome.GetResult()));
  }
  else
  {
    return GetComplianceDetailsByResourceOutcome(outcome.GetError());
  }
}

GetComplianceDetailsByResourceOutcomeCallable ConfigServiceClient::GetComplianceDetailsByResourceCallable(const GetComplianceDetailsByResourceRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::GetComplianceDetailsByResource, this, request);
}

void ConfigServiceClient::GetComplianceDetailsByResourceAsync(const GetComplianceDetailsByResourceRequest& request, const GetComplianceDetailsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::GetComplianceDetailsByResourceAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::GetComplianceDetailsByResourceAsyncHelper(const GetComplianceDetailsByResourceRequest& request, const GetComplianceDetailsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetComplianceDetailsByResource(request), context);
}

GetComplianceSummaryByConfigRuleOutcome ConfigServiceClient::GetComplianceSummaryByConfigRule() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetComplianceSummaryByConfigRuleOutcome(GetComplianceSummaryByConfigRuleResult(outcome.GetResult()));
  }
  else
  {
    return GetComplianceSummaryByConfigRuleOutcome(outcome.GetError());
  }
}

GetComplianceSummaryByConfigRuleOutcomeCallable ConfigServiceClient::GetComplianceSummaryByConfigRuleCallable() const
{
  return std::async(std::launch::async, &ConfigServiceClient::GetComplianceSummaryByConfigRule, this);
}

void ConfigServiceClient::GetComplianceSummaryByConfigRuleAsync(const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::GetComplianceSummaryByConfigRuleAsyncHelper, this, handler, context);
}

void ConfigServiceClient::GetComplianceSummaryByConfigRuleAsyncHelper(const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, GetComplianceSummaryByConfigRule(), context);
}

GetComplianceSummaryByResourceTypeOutcome ConfigServiceClient::GetComplianceSummaryByResourceType(const GetComplianceSummaryByResourceTypeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetComplianceSummaryByResourceTypeOutcome(GetComplianceSummaryByResourceTypeResult(outcome.GetResult()));
  }
  else
  {
    return GetComplianceSummaryByResourceTypeOutcome(outcome.GetError());
  }
}

GetComplianceSummaryByResourceTypeOutcomeCallable ConfigServiceClient::GetComplianceSummaryByResourceTypeCallable(const GetComplianceSummaryByResourceTypeRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::GetComplianceSummaryByResourceType, this, request);
}

void ConfigServiceClient::GetComplianceSummaryByResourceTypeAsync(const GetComplianceSummaryByResourceTypeRequest& request, const GetComplianceSummaryByResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::GetComplianceSummaryByResourceTypeAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::GetComplianceSummaryByResourceTypeAsyncHelper(const GetComplianceSummaryByResourceTypeRequest& request, const GetComplianceSummaryByResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetComplianceSummaryByResourceType(request), context);
}

GetResourceConfigHistoryOutcome ConfigServiceClient::GetResourceConfigHistory(const GetResourceConfigHistoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetResourceConfigHistoryOutcome(GetResourceConfigHistoryResult(outcome.GetResult()));
  }
  else
  {
    return GetResourceConfigHistoryOutcome(outcome.GetError());
  }
}

GetResourceConfigHistoryOutcomeCallable ConfigServiceClient::GetResourceConfigHistoryCallable(const GetResourceConfigHistoryRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::GetResourceConfigHistory, this, request);
}

void ConfigServiceClient::GetResourceConfigHistoryAsync(const GetResourceConfigHistoryRequest& request, const GetResourceConfigHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::GetResourceConfigHistoryAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::GetResourceConfigHistoryAsyncHelper(const GetResourceConfigHistoryRequest& request, const GetResourceConfigHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourceConfigHistory(request), context);
}

ListDiscoveredResourcesOutcome ConfigServiceClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDiscoveredResourcesOutcome(ListDiscoveredResourcesResult(outcome.GetResult()));
  }
  else
  {
    return ListDiscoveredResourcesOutcome(outcome.GetError());
  }
}

ListDiscoveredResourcesOutcomeCallable ConfigServiceClient::ListDiscoveredResourcesCallable(const ListDiscoveredResourcesRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::ListDiscoveredResources, this, request);
}

void ConfigServiceClient::ListDiscoveredResourcesAsync(const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::ListDiscoveredResourcesAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::ListDiscoveredResourcesAsyncHelper(const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDiscoveredResources(request), context);
}

PutConfigRuleOutcome ConfigServiceClient::PutConfigRule(const PutConfigRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutConfigRuleOutcome(NoResult());
  }
  else
  {
    return PutConfigRuleOutcome(outcome.GetError());
  }
}

PutConfigRuleOutcomeCallable ConfigServiceClient::PutConfigRuleCallable(const PutConfigRuleRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::PutConfigRule, this, request);
}

void ConfigServiceClient::PutConfigRuleAsync(const PutConfigRuleRequest& request, const PutConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::PutConfigRuleAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::PutConfigRuleAsyncHelper(const PutConfigRuleRequest& request, const PutConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutConfigRule(request), context);
}

PutConfigurationRecorderOutcome ConfigServiceClient::PutConfigurationRecorder(const PutConfigurationRecorderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutConfigurationRecorderOutcome(NoResult());
  }
  else
  {
    return PutConfigurationRecorderOutcome(outcome.GetError());
  }
}

PutConfigurationRecorderOutcomeCallable ConfigServiceClient::PutConfigurationRecorderCallable(const PutConfigurationRecorderRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::PutConfigurationRecorder, this, request);
}

void ConfigServiceClient::PutConfigurationRecorderAsync(const PutConfigurationRecorderRequest& request, const PutConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::PutConfigurationRecorderAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::PutConfigurationRecorderAsyncHelper(const PutConfigurationRecorderRequest& request, const PutConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutConfigurationRecorder(request), context);
}

PutDeliveryChannelOutcome ConfigServiceClient::PutDeliveryChannel(const PutDeliveryChannelRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutDeliveryChannelOutcome(NoResult());
  }
  else
  {
    return PutDeliveryChannelOutcome(outcome.GetError());
  }
}

PutDeliveryChannelOutcomeCallable ConfigServiceClient::PutDeliveryChannelCallable(const PutDeliveryChannelRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::PutDeliveryChannel, this, request);
}

void ConfigServiceClient::PutDeliveryChannelAsync(const PutDeliveryChannelRequest& request, const PutDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::PutDeliveryChannelAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::PutDeliveryChannelAsyncHelper(const PutDeliveryChannelRequest& request, const PutDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDeliveryChannel(request), context);
}

PutEvaluationsOutcome ConfigServiceClient::PutEvaluations(const PutEvaluationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutEvaluationsOutcome(PutEvaluationsResult(outcome.GetResult()));
  }
  else
  {
    return PutEvaluationsOutcome(outcome.GetError());
  }
}

PutEvaluationsOutcomeCallable ConfigServiceClient::PutEvaluationsCallable(const PutEvaluationsRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::PutEvaluations, this, request);
}

void ConfigServiceClient::PutEvaluationsAsync(const PutEvaluationsRequest& request, const PutEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::PutEvaluationsAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::PutEvaluationsAsyncHelper(const PutEvaluationsRequest& request, const PutEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEvaluations(request), context);
}

StartConfigurationRecorderOutcome ConfigServiceClient::StartConfigurationRecorder(const StartConfigurationRecorderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StartConfigurationRecorderOutcome(NoResult());
  }
  else
  {
    return StartConfigurationRecorderOutcome(outcome.GetError());
  }
}

StartConfigurationRecorderOutcomeCallable ConfigServiceClient::StartConfigurationRecorderCallable(const StartConfigurationRecorderRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::StartConfigurationRecorder, this, request);
}

void ConfigServiceClient::StartConfigurationRecorderAsync(const StartConfigurationRecorderRequest& request, const StartConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::StartConfigurationRecorderAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::StartConfigurationRecorderAsyncHelper(const StartConfigurationRecorderRequest& request, const StartConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartConfigurationRecorder(request), context);
}

StopConfigurationRecorderOutcome ConfigServiceClient::StopConfigurationRecorder(const StopConfigurationRecorderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StopConfigurationRecorderOutcome(NoResult());
  }
  else
  {
    return StopConfigurationRecorderOutcome(outcome.GetError());
  }
}

StopConfigurationRecorderOutcomeCallable ConfigServiceClient::StopConfigurationRecorderCallable(const StopConfigurationRecorderRequest& request) const
{
  return std::async(std::launch::async, &ConfigServiceClient::StopConfigurationRecorder, this, request);
}

void ConfigServiceClient::StopConfigurationRecorderAsync(const StopConfigurationRecorderRequest& request, const StopConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ConfigServiceClient::StopConfigurationRecorderAsyncHelper, this, request, handler, context);
}

void ConfigServiceClient::StopConfigurationRecorderAsyncHelper(const StopConfigurationRecorderRequest& request, const StopConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopConfigurationRecorder(request), context);
}

