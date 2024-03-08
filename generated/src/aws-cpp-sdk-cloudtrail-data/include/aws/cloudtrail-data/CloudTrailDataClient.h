/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail-data/CloudTrailData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudtrail-data/CloudTrailDataServiceClientModel.h>

namespace Aws
{
namespace CloudTrailData
{
  /**
   * <p>The CloudTrail Data Service lets you ingest events into CloudTrail from any
   * source in your hybrid environments, such as in-house or SaaS applications hosted
   * on-premises or in the cloud, virtual machines, or containers. You can store,
   * access, analyze, troubleshoot and take action on this data without maintaining
   * multiple log aggregators and reporting tools. After you run
   * <code>PutAuditEvents</code> to ingest your application activity into CloudTrail,
   * you can use CloudTrail Lake to search, query, and analyze the data that is
   * logged from your applications.</p>
   */
  class AWS_CLOUDTRAILDATA_API CloudTrailDataClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudTrailDataClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudTrailDataClientConfiguration ClientConfigurationType;
      typedef CloudTrailDataEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailDataClient(const Aws::CloudTrailData::CloudTrailDataClientConfiguration& clientConfiguration = Aws::CloudTrailData::CloudTrailDataClientConfiguration(),
                             std::shared_ptr<CloudTrailDataEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailDataClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<CloudTrailDataEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::CloudTrailData::CloudTrailDataClientConfiguration& clientConfiguration = Aws::CloudTrailData::CloudTrailDataClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudTrailDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<CloudTrailDataEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::CloudTrailData::CloudTrailDataClientConfiguration& clientConfiguration = Aws::CloudTrailData::CloudTrailDataClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailDataClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailDataClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudTrailDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudTrailDataClient();

        /**
         * <p>Ingests your application events into CloudTrail Lake. A required parameter,
         * <code>auditEvents</code>, accepts the JSON records (also called <i>payload</i>)
         * of events that you want CloudTrail to ingest. You can add up to 100 of these
         * events (or up to 1 MB) per <code>PutAuditEvents</code> request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-data-2021-08-11/PutAuditEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAuditEventsOutcome PutAuditEvents(const Model::PutAuditEventsRequest& request) const;

        /**
         * A Callable wrapper for PutAuditEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAuditEventsRequestT = Model::PutAuditEventsRequest>
        Model::PutAuditEventsOutcomeCallable PutAuditEventsCallable(const PutAuditEventsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailDataClient::PutAuditEvents, request);
        }

        /**
         * An Async wrapper for PutAuditEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAuditEventsRequestT = Model::PutAuditEventsRequest>
        void PutAuditEventsAsync(const PutAuditEventsRequestT& request, const PutAuditEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailDataClient::PutAuditEvents, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudTrailDataEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudTrailDataClient>;
      void init(const CloudTrailDataClientConfiguration& clientConfiguration);

      CloudTrailDataClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudTrailDataEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudTrailData
} // namespace Aws
