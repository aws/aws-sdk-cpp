/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsServiceClientModel.h>

namespace Aws
{
namespace MarketplaceCommerceAnalytics
{
  /**
   * Provides AWS Marketplace business intelligence data on-demand.
   */
  class AWS_MARKETPLACECOMMERCEANALYTICS_API MarketplaceCommerceAnalyticsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceCommerceAnalyticsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCommerceAnalyticsClient(const Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration = Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration(),
                                           std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider = Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCommerceAnalyticsClient(const Aws::Auth::AWSCredentials& credentials,
                                           std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider = Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG),
                                           const Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration = Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceCommerceAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider = Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG),
                                           const Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration = Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCommerceAnalyticsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCommerceAnalyticsClient(const Aws::Auth::AWSCredentials& credentials,
                                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceCommerceAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MarketplaceCommerceAnalyticsClient();

        /**
         * Given a data set type and data set publication date, asynchronously publishes
         * the requested data set to the specified S3 bucket and notifies the specified SNS
         * topic once the data is available. Returns a unique request identifier that can
         * be used to correlate requests with notifications from the SNS topic. Data sets
         * will be published in comma-separated values (CSV) format with the file name
         * {data_set_type}_YYYY-MM-DD.csv. If a file with the same name already exists
         * (e.g. if the same data set is requested twice), the original file will be
         * overwritten by the new file. Requires a Role with an attached permissions policy
         * providing Allow permissions for the following actions: s3:PutObject,
         * s3:GetBucketLocation, sns:GetTopicAttributes, sns:Publish,
         * iam:GetRolePolicy.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplacecommerceanalytics-2015-07-01/GenerateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateDataSetOutcome GenerateDataSet(const Model::GenerateDataSetRequest& request) const;

        /**
         * A Callable wrapper for GenerateDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateDataSetOutcomeCallable GenerateDataSetCallable(const Model::GenerateDataSetRequest& request) const;

        /**
         * An Async wrapper for GenerateDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateDataSetAsync(const Model::GenerateDataSetRequest& request, const GenerateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Given a data set type and a from date, asynchronously publishes the requested
         * customer support data to the specified S3 bucket and notifies the specified SNS
         * topic once the data is available. Returns a unique request identifier that can
         * be used to correlate requests with notifications from the SNS topic. Data sets
         * will be published in comma-separated values (CSV) format with the file name
         * {data_set_type}_YYYY-MM-DD'T'HH-mm-ss'Z'.csv. If a file with the same name
         * already exists (e.g. if the same data set is requested twice), the original file
         * will be overwritten by the new file. Requires a Role with an attached
         * permissions policy providing Allow permissions for the following actions:
         * s3:PutObject, s3:GetBucketLocation, sns:GetTopicAttributes, sns:Publish,
         * iam:GetRolePolicy.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplacecommerceanalytics-2015-07-01/StartSupportDataExport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSupportDataExportOutcome StartSupportDataExport(const Model::StartSupportDataExportRequest& request) const;

        /**
         * A Callable wrapper for StartSupportDataExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSupportDataExportOutcomeCallable StartSupportDataExportCallable(const Model::StartSupportDataExportRequest& request) const;

        /**
         * An Async wrapper for StartSupportDataExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSupportDataExportAsync(const Model::StartSupportDataExportRequest& request, const StartSupportDataExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceCommerceAnalyticsClient>;
      void init(const MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration);

      MarketplaceCommerceAnalyticsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> m_endpointProvider;
  };

} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
