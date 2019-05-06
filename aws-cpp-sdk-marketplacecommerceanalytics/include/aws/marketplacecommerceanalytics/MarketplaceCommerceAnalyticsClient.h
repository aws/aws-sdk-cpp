/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplacecommerceanalytics/model/GenerateDataSetResult.h>
#include <aws/marketplacecommerceanalytics/model/StartSupportDataExportResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace MarketplaceCommerceAnalytics
{

namespace Model
{
        class GenerateDataSetRequest;
        class StartSupportDataExportRequest;

        typedef Aws::Utils::Outcome<GenerateDataSetResult, Aws::Client::AWSError<MarketplaceCommerceAnalyticsErrors>> GenerateDataSetOutcome;
        typedef Aws::Utils::Outcome<StartSupportDataExportResult, Aws::Client::AWSError<MarketplaceCommerceAnalyticsErrors>> StartSupportDataExportOutcome;

        typedef std::future<GenerateDataSetOutcome> GenerateDataSetOutcomeCallable;
        typedef std::future<StartSupportDataExportOutcome> StartSupportDataExportOutcomeCallable;
} // namespace Model

  class MarketplaceCommerceAnalyticsClient;

    typedef std::function<void(const MarketplaceCommerceAnalyticsClient*, const Model::GenerateDataSetRequest&, const Model::GenerateDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateDataSetResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCommerceAnalyticsClient*, const Model::StartSupportDataExportRequest&, const Model::StartSupportDataExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSupportDataExportResponseReceivedHandler;

  /**
   * Provides AWS Marketplace business intelligence data on-demand.
   */
  class AWS_MARKETPLACECOMMERCEANALYTICS_API MarketplaceCommerceAnalyticsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCommerceAnalyticsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCommerceAnalyticsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceCommerceAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MarketplaceCommerceAnalyticsClient();

        inline virtual const char* GetServiceClientName() const override { return "marketplacecommerceanalytics"; }


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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateDataSetOutcomeCallable GenerateDataSetCallable(const Model::GenerateDataSetRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSupportDataExportOutcomeCallable StartSupportDataExportCallable(const Model::StartSupportDataExportRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSupportDataExportAsync(const Model::StartSupportDataExportRequest& request, const StartSupportDataExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GenerateDataSetAsyncHelper(const Model::GenerateDataSetRequest& request, const GenerateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartSupportDataExportAsyncHelper(const Model::StartSupportDataExportRequest& request, const StartSupportDataExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
