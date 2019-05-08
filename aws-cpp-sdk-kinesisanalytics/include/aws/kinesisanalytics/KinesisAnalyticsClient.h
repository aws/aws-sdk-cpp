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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalytics/model/AddApplicationCloudWatchLoggingOptionResult.h>
#include <aws/kinesisanalytics/model/AddApplicationInputResult.h>
#include <aws/kinesisanalytics/model/AddApplicationInputProcessingConfigurationResult.h>
#include <aws/kinesisanalytics/model/AddApplicationOutputResult.h>
#include <aws/kinesisanalytics/model/AddApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalytics/model/CreateApplicationResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationCloudWatchLoggingOptionResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationInputProcessingConfigurationResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationOutputResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalytics/model/DescribeApplicationResult.h>
#include <aws/kinesisanalytics/model/DiscoverInputSchemaResult.h>
#include <aws/kinesisanalytics/model/ListApplicationsResult.h>
#include <aws/kinesisanalytics/model/ListTagsForResourceResult.h>
#include <aws/kinesisanalytics/model/StartApplicationResult.h>
#include <aws/kinesisanalytics/model/StopApplicationResult.h>
#include <aws/kinesisanalytics/model/TagResourceResult.h>
#include <aws/kinesisanalytics/model/UntagResourceResult.h>
#include <aws/kinesisanalytics/model/UpdateApplicationResult.h>
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

namespace KinesisAnalytics
{

namespace Model
{
        class AddApplicationCloudWatchLoggingOptionRequest;
        class AddApplicationInputRequest;
        class AddApplicationInputProcessingConfigurationRequest;
        class AddApplicationOutputRequest;
        class AddApplicationReferenceDataSourceRequest;
        class CreateApplicationRequest;
        class DeleteApplicationRequest;
        class DeleteApplicationCloudWatchLoggingOptionRequest;
        class DeleteApplicationInputProcessingConfigurationRequest;
        class DeleteApplicationOutputRequest;
        class DeleteApplicationReferenceDataSourceRequest;
        class DescribeApplicationRequest;
        class DiscoverInputSchemaRequest;
        class ListApplicationsRequest;
        class ListTagsForResourceRequest;
        class StartApplicationRequest;
        class StopApplicationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateApplicationRequest;

        typedef Aws::Utils::Outcome<AddApplicationCloudWatchLoggingOptionResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> AddApplicationCloudWatchLoggingOptionOutcome;
        typedef Aws::Utils::Outcome<AddApplicationInputResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> AddApplicationInputOutcome;
        typedef Aws::Utils::Outcome<AddApplicationInputProcessingConfigurationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> AddApplicationInputProcessingConfigurationOutcome;
        typedef Aws::Utils::Outcome<AddApplicationOutputResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> AddApplicationOutputOutcome;
        typedef Aws::Utils::Outcome<AddApplicationReferenceDataSourceResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> AddApplicationReferenceDataSourceOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationCloudWatchLoggingOptionResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DeleteApplicationCloudWatchLoggingOptionOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationInputProcessingConfigurationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DeleteApplicationInputProcessingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationOutputResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DeleteApplicationOutputOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationReferenceDataSourceResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DeleteApplicationReferenceDataSourceOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DescribeApplicationOutcome;
        typedef Aws::Utils::Outcome<DiscoverInputSchemaResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DiscoverInputSchemaOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> StartApplicationOutcome;
        typedef Aws::Utils::Outcome<StopApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> StopApplicationOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> UpdateApplicationOutcome;

        typedef std::future<AddApplicationCloudWatchLoggingOptionOutcome> AddApplicationCloudWatchLoggingOptionOutcomeCallable;
        typedef std::future<AddApplicationInputOutcome> AddApplicationInputOutcomeCallable;
        typedef std::future<AddApplicationInputProcessingConfigurationOutcome> AddApplicationInputProcessingConfigurationOutcomeCallable;
        typedef std::future<AddApplicationOutputOutcome> AddApplicationOutputOutcomeCallable;
        typedef std::future<AddApplicationReferenceDataSourceOutcome> AddApplicationReferenceDataSourceOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteApplicationCloudWatchLoggingOptionOutcome> DeleteApplicationCloudWatchLoggingOptionOutcomeCallable;
        typedef std::future<DeleteApplicationInputProcessingConfigurationOutcome> DeleteApplicationInputProcessingConfigurationOutcomeCallable;
        typedef std::future<DeleteApplicationOutputOutcome> DeleteApplicationOutputOutcomeCallable;
        typedef std::future<DeleteApplicationReferenceDataSourceOutcome> DeleteApplicationReferenceDataSourceOutcomeCallable;
        typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
        typedef std::future<DiscoverInputSchemaOutcome> DiscoverInputSchemaOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
        typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
} // namespace Model

  class KinesisAnalyticsClient;

    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationCloudWatchLoggingOptionRequest&, const Model::AddApplicationCloudWatchLoggingOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationCloudWatchLoggingOptionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationInputRequest&, const Model::AddApplicationInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationInputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationInputProcessingConfigurationRequest&, const Model::AddApplicationInputProcessingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationInputProcessingConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationOutputRequest&, const Model::AddApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationReferenceDataSourceRequest&, const Model::AddApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationCloudWatchLoggingOptionRequest&, const Model::DeleteApplicationCloudWatchLoggingOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationInputProcessingConfigurationRequest&, const Model::DeleteApplicationInputProcessingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationInputProcessingConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationOutputRequest&, const Model::DeleteApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationReferenceDataSourceRequest&, const Model::DeleteApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DiscoverInputSchemaRequest&, const Model::DiscoverInputSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DiscoverInputSchemaResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::StartApplicationRequest&, const Model::StartApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::StopApplicationRequest&, const Model::StopApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;

  /**
   * <fullname>Amazon Kinesis Analytics</fullname> <p> <b>Overview</b> </p> <note>
   * <p>This documentation is for version 1 of the Amazon Kinesis Data Analytics API,
   * which only supports SQL applications. Version 2 of the API supports SQL and Java
   * applications. For more information about version 2, see <a
   * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
   * API V2 Documentation</a>.</p> </note> <p>This is the <i>Amazon Kinesis Analytics
   * v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
   * additional information. </p>
   */
  class AWS_KINESISANALYTICS_API KinesisAnalyticsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~KinesisAnalyticsClient();

        inline virtual const char* GetServiceClientName() const override { return "Kinesis Analytics"; }


        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds a CloudWatch log stream to monitor
         * application configuration errors. For more information about using CloudWatch
         * log streams with Amazon Kinesis Analytics applications, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
         * with Amazon CloudWatch Logs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationCloudWatchLoggingOptionOutcome AddApplicationCloudWatchLoggingOption(const Model::AddApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds a CloudWatch log stream to monitor
         * application configuration errors. For more information about using CloudWatch
         * log streams with Amazon Kinesis Analytics applications, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
         * with Amazon CloudWatch Logs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationCloudWatchLoggingOptionOutcomeCallable AddApplicationCloudWatchLoggingOptionCallable(const Model::AddApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds a CloudWatch log stream to monitor
         * application configuration errors. For more information about using CloudWatch
         * log streams with Amazon Kinesis Analytics applications, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
         * with Amazon CloudWatch Logs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationCloudWatchLoggingOptionAsync(const Model::AddApplicationCloudWatchLoggingOptionRequest& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p> Adds a streaming source to your Amazon
         * Kinesis application. For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. </p> <p>You can add a streaming source either when you
         * create an application or you can use this operation to add a streaming source
         * after you create an application. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_CreateApplication.html">CreateApplication</a>.</p>
         * <p>Any configuration update, including adding a streaming source using this
         * operation, results in a new version of the application. You can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the current application version. </p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationInput</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationInput">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationInputOutcome AddApplicationInput(const Model::AddApplicationInputRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p> Adds a streaming source to your Amazon
         * Kinesis application. For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. </p> <p>You can add a streaming source either when you
         * create an application or you can use this operation to add a streaming source
         * after you create an application. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_CreateApplication.html">CreateApplication</a>.</p>
         * <p>Any configuration update, including adding a streaming source using this
         * operation, results in a new version of the application. You can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the current application version. </p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationInput</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationInput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationInputOutcomeCallable AddApplicationInputCallable(const Model::AddApplicationInputRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p> Adds a streaming source to your Amazon
         * Kinesis application. For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. </p> <p>You can add a streaming source either when you
         * create an application or you can use this operation to add a streaming source
         * after you create an application. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_CreateApplication.html">CreateApplication</a>.</p>
         * <p>Any configuration update, including adding a streaming source using this
         * operation, results in a new version of the application. You can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the current application version. </p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationInput</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationInput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationInputAsync(const Model::AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds an <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
         * to an application. An input processor preprocesses records on the input stream
         * before the application's SQL code executes. Currently, the only input processor
         * available is <a href="https://docs.aws.amazon.com/lambda/">AWS
         * Lambda</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationInputProcessingConfigurationOutcome AddApplicationInputProcessingConfiguration(const Model::AddApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds an <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
         * to an application. An input processor preprocesses records on the input stream
         * before the application's SQL code executes. Currently, the only input processor
         * available is <a href="https://docs.aws.amazon.com/lambda/">AWS
         * Lambda</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationInputProcessingConfigurationOutcomeCallable AddApplicationInputProcessingConfigurationCallable(const Model::AddApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds an <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
         * to an application. An input processor preprocesses records on the input stream
         * before the application's SQL code executes. Currently, the only input processor
         * available is <a href="https://docs.aws.amazon.com/lambda/">AWS
         * Lambda</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationInputProcessingConfigurationAsync(const Model::AddApplicationInputProcessingConfigurationRequest& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds an external destination to your
         * Amazon Kinesis Analytics application.</p> <p>If you want Amazon Kinesis
         * Analytics to deliver data from an in-application stream within your application
         * to an external destination (such as an Amazon Kinesis stream, an Amazon Kinesis
         * Firehose delivery stream, or an AWS Lambda function), you add the relevant
         * configuration to your application using this operation. You can configure one or
         * more outputs for your application. Each output configuration maps an
         * in-application stream and an external destination.</p> <p> You can use one of
         * the output configurations to deliver data from your in-application error stream
         * to an external destination so that you can analyze the errors. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Understanding
         * Application Output (Destination)</a>. </p> <p> Any configuration update,
         * including adding a streaming source using this operation, results in a new
         * version of the application. You can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the current application version.</p> <p>For the limits on the
         * number of application inputs and outputs you can configure, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationOutputOutcome AddApplicationOutput(const Model::AddApplicationOutputRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds an external destination to your
         * Amazon Kinesis Analytics application.</p> <p>If you want Amazon Kinesis
         * Analytics to deliver data from an in-application stream within your application
         * to an external destination (such as an Amazon Kinesis stream, an Amazon Kinesis
         * Firehose delivery stream, or an AWS Lambda function), you add the relevant
         * configuration to your application using this operation. You can configure one or
         * more outputs for your application. Each output configuration maps an
         * in-application stream and an external destination.</p> <p> You can use one of
         * the output configurations to deliver data from your in-application error stream
         * to an external destination so that you can analyze the errors. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Understanding
         * Application Output (Destination)</a>. </p> <p> Any configuration update,
         * including adding a streaming source using this operation, results in a new
         * version of the application. You can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the current application version.</p> <p>For the limits on the
         * number of application inputs and outputs you can configure, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationOutput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationOutputOutcomeCallable AddApplicationOutputCallable(const Model::AddApplicationOutputRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds an external destination to your
         * Amazon Kinesis Analytics application.</p> <p>If you want Amazon Kinesis
         * Analytics to deliver data from an in-application stream within your application
         * to an external destination (such as an Amazon Kinesis stream, an Amazon Kinesis
         * Firehose delivery stream, or an AWS Lambda function), you add the relevant
         * configuration to your application using this operation. You can configure one or
         * more outputs for your application. Each output configuration maps an
         * in-application stream and an external destination.</p> <p> You can use one of
         * the output configurations to deliver data from your in-application error stream
         * to an external destination so that you can analyze the errors. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Understanding
         * Application Output (Destination)</a>. </p> <p> Any configuration update,
         * including adding a streaming source using this operation, results in a new
         * version of the application. You can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the current application version.</p> <p>For the limits on the
         * number of application inputs and outputs you can configure, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationOutput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationOutputAsync(const Model::AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds a reference data source to an
         * existing application.</p> <p>Amazon Kinesis Analytics reads reference data (that
         * is, an Amazon S3 object) and creates an in-application table within your
         * application. In the request, you provide the source (S3 bucket name and object
         * key name), name of the in-application table to create, and the necessary mapping
         * information that describes how data in Amazon S3 object maps to columns in the
         * resulting in-application table.</p> <p> For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. For the limits on data sources you can add to your
         * application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
         * </p> <p> This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationReferenceDataSourceOutcome AddApplicationReferenceDataSource(const Model::AddApplicationReferenceDataSourceRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds a reference data source to an
         * existing application.</p> <p>Amazon Kinesis Analytics reads reference data (that
         * is, an Amazon S3 object) and creates an in-application table within your
         * application. In the request, you provide the source (S3 bucket name and object
         * key name), name of the in-application table to create, and the necessary mapping
         * information that describes how data in Amazon S3 object maps to columns in the
         * resulting in-application table.</p> <p> For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. For the limits on data sources you can add to your
         * application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
         * </p> <p> This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationReferenceDataSourceOutcomeCallable AddApplicationReferenceDataSourceCallable(const Model::AddApplicationReferenceDataSourceRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Adds a reference data source to an
         * existing application.</p> <p>Amazon Kinesis Analytics reads reference data (that
         * is, an Amazon S3 object) and creates an in-application table within your
         * application. In the request, you provide the source (S3 bucket name and object
         * key name), name of the in-application table to create, and the necessary mapping
         * information that describes how data in Amazon S3 object maps to columns in the
         * resulting in-application table.</p> <p> For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. For the limits on data sources you can add to your
         * application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
         * </p> <p> This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationReferenceDataSourceAsync(const Model::AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p> Creates an Amazon Kinesis Analytics
         * application. You can configure each application with one streaming source as
         * input, application code to process the input, and up to three destinations where
         * you want Amazon Kinesis Analytics to write the output data from your
         * application. For an overview, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works.html">How
         * it Works</a>. </p> <p>In the input configuration, you map the streaming source
         * to an in-application stream, which you can think of as a constantly updating
         * table. In the mapping, you must provide a schema for the in-application stream
         * and map each data column in the in-application stream to a data element in the
         * streaming source.</p> <p>Your application code is one or more SQL statements
         * that read input data, transform it, and generate output. Your application code
         * can create one or more SQL artifacts like SQL streams or pumps.</p> <p>In the
         * output configuration, you can configure the application to write data from
         * in-application streams created in your applications to up to three
         * destinations.</p> <p> To read data from your source stream or write data to
         * destination streams, Amazon Kinesis Analytics needs your permissions. You grant
         * these permissions by creating IAM roles. This operation requires permissions to
         * perform the <code>kinesisanalytics:CreateApplication</code> action. </p> <p> For
         * introductory exercises to create an Amazon Kinesis Analytics application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/getting-started.html">Getting
         * Started</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p> Creates an Amazon Kinesis Analytics
         * application. You can configure each application with one streaming source as
         * input, application code to process the input, and up to three destinations where
         * you want Amazon Kinesis Analytics to write the output data from your
         * application. For an overview, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works.html">How
         * it Works</a>. </p> <p>In the input configuration, you map the streaming source
         * to an in-application stream, which you can think of as a constantly updating
         * table. In the mapping, you must provide a schema for the in-application stream
         * and map each data column in the in-application stream to a data element in the
         * streaming source.</p> <p>Your application code is one or more SQL statements
         * that read input data, transform it, and generate output. Your application code
         * can create one or more SQL artifacts like SQL streams or pumps.</p> <p>In the
         * output configuration, you can configure the application to write data from
         * in-application streams created in your applications to up to three
         * destinations.</p> <p> To read data from your source stream or write data to
         * destination streams, Amazon Kinesis Analytics needs your permissions. You grant
         * these permissions by creating IAM roles. This operation requires permissions to
         * perform the <code>kinesisanalytics:CreateApplication</code> action. </p> <p> For
         * introductory exercises to create an Amazon Kinesis Analytics application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/getting-started.html">Getting
         * Started</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CreateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p> Creates an Amazon Kinesis Analytics
         * application. You can configure each application with one streaming source as
         * input, application code to process the input, and up to three destinations where
         * you want Amazon Kinesis Analytics to write the output data from your
         * application. For an overview, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works.html">How
         * it Works</a>. </p> <p>In the input configuration, you map the streaming source
         * to an in-application stream, which you can think of as a constantly updating
         * table. In the mapping, you must provide a schema for the in-application stream
         * and map each data column in the in-application stream to a data element in the
         * streaming source.</p> <p>Your application code is one or more SQL statements
         * that read input data, transform it, and generate output. Your application code
         * can create one or more SQL artifacts like SQL streams or pumps.</p> <p>In the
         * output configuration, you can configure the application to write data from
         * in-application streams created in your applications to up to three
         * destinations.</p> <p> To read data from your source stream or write data to
         * destination streams, Amazon Kinesis Analytics needs your permissions. You grant
         * these permissions by creating IAM roles. This operation requires permissions to
         * perform the <code>kinesisanalytics:CreateApplication</code> action. </p> <p> For
         * introductory exercises to create an Amazon Kinesis Analytics application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/getting-started.html">Getting
         * Started</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CreateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes the specified application.
         * Amazon Kinesis Analytics halts application execution and deletes the
         * application, including any application artifacts (such as in-application
         * streams, reference table, and application code).</p> <p>This operation requires
         * permissions to perform the <code>kinesisanalytics:DeleteApplication</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes the specified application.
         * Amazon Kinesis Analytics halts application execution and deletes the
         * application, including any application artifacts (such as in-application
         * streams, reference table, and application code).</p> <p>This operation requires
         * permissions to perform the <code>kinesisanalytics:DeleteApplication</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes the specified application.
         * Amazon Kinesis Analytics halts application execution and deletes the
         * application, including any application artifacts (such as in-application
         * streams, reference table, and application code).</p> <p>This operation requires
         * permissions to perform the <code>kinesisanalytics:DeleteApplication</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes a CloudWatch log stream from an
         * application. For more information about using CloudWatch log streams with Amazon
         * Kinesis Analytics applications, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
         * with Amazon CloudWatch Logs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationCloudWatchLoggingOptionOutcome DeleteApplicationCloudWatchLoggingOption(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes a CloudWatch log stream from an
         * application. For more information about using CloudWatch log streams with Amazon
         * Kinesis Analytics applications, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
         * with Amazon CloudWatch Logs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationCloudWatchLoggingOptionOutcomeCallable DeleteApplicationCloudWatchLoggingOptionCallable(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes a CloudWatch log stream from an
         * application. For more information about using CloudWatch log streams with Amazon
         * Kinesis Analytics applications, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
         * with Amazon CloudWatch Logs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationCloudWatchLoggingOptionAsync(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes an <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
         * from an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationInputProcessingConfigurationOutcome DeleteApplicationInputProcessingConfiguration(const Model::DeleteApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes an <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
         * from an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationInputProcessingConfigurationOutcomeCallable DeleteApplicationInputProcessingConfigurationCallable(const Model::DeleteApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes an <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
         * from an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationInputProcessingConfigurationAsync(const Model::DeleteApplicationInputProcessingConfigurationRequest& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes output destination
         * configuration from your application configuration. Amazon Kinesis Analytics will
         * no longer write data from the corresponding in-application stream to the
         * external output destination.</p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:DeleteApplicationOutput</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutputOutcome DeleteApplicationOutput(const Model::DeleteApplicationOutputRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes output destination
         * configuration from your application configuration. Amazon Kinesis Analytics will
         * no longer write data from the corresponding in-application stream to the
         * external output destination.</p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:DeleteApplicationOutput</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationOutput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutputOutcomeCallable DeleteApplicationOutputCallable(const Model::DeleteApplicationOutputRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes output destination
         * configuration from your application configuration. Amazon Kinesis Analytics will
         * no longer write data from the corresponding in-application stream to the
         * external output destination.</p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:DeleteApplicationOutput</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationOutput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationOutputAsync(const Model::DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes a reference data source
         * configuration from the specified application configuration.</p> <p>If the
         * application is running, Amazon Kinesis Analytics immediately removes the
         * in-application table that you created using the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
         * operation. </p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics.DeleteApplicationReferenceDataSource</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationReferenceDataSourceOutcome DeleteApplicationReferenceDataSource(const Model::DeleteApplicationReferenceDataSourceRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes a reference data source
         * configuration from the specified application configuration.</p> <p>If the
         * application is running, Amazon Kinesis Analytics immediately removes the
         * in-application table that you created using the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
         * operation. </p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics.DeleteApplicationReferenceDataSource</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationReferenceDataSourceOutcomeCallable DeleteApplicationReferenceDataSourceCallable(const Model::DeleteApplicationReferenceDataSourceRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Deletes a reference data source
         * configuration from the specified application configuration.</p> <p>If the
         * application is running, Amazon Kinesis Analytics immediately removes the
         * in-application table that you created using the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
         * operation. </p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics.DeleteApplicationReferenceDataSource</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationReferenceDataSourceAsync(const Model::DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Returns information about a specific
         * Amazon Kinesis Analytics application.</p> <p>If you want to retrieve a list of
         * all applications in your account, use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_ListApplications.html">ListApplications</a>
         * operation.</p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:DescribeApplication</code> action. You can use
         * <code>DescribeApplication</code> to get the current application versionId, which
         * you need to call other operations such as <code>Update</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Returns information about a specific
         * Amazon Kinesis Analytics application.</p> <p>If you want to retrieve a list of
         * all applications in your account, use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_ListApplications.html">ListApplications</a>
         * operation.</p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:DescribeApplication</code> action. You can use
         * <code>DescribeApplication</code> to get the current application versionId, which
         * you need to call other operations such as <code>Update</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DescribeApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Returns information about a specific
         * Amazon Kinesis Analytics application.</p> <p>If you want to retrieve a list of
         * all applications in your account, use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_ListApplications.html">ListApplications</a>
         * operation.</p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:DescribeApplication</code> action. You can use
         * <code>DescribeApplication</code> to get the current application versionId, which
         * you need to call other operations such as <code>Update</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DescribeApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Infers a schema by evaluating sample
         * records on the specified streaming source (Amazon Kinesis stream or Amazon
         * Kinesis Firehose delivery stream) or S3 object. In the response, the operation
         * returns the inferred schema and also the sample records that the operation used
         * to infer the schema.</p> <p> You can use the inferred schema when configuring a
         * streaming source for your application. For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. Note that when you create an application using the Amazon
         * Kinesis Analytics console, the console uses this operation to infer a schema and
         * show it in the console user interface. </p> <p> This operation requires
         * permissions to perform the <code>kinesisanalytics:DiscoverInputSchema</code>
         * action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DiscoverInputSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DiscoverInputSchemaOutcome DiscoverInputSchema(const Model::DiscoverInputSchemaRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Infers a schema by evaluating sample
         * records on the specified streaming source (Amazon Kinesis stream or Amazon
         * Kinesis Firehose delivery stream) or S3 object. In the response, the operation
         * returns the inferred schema and also the sample records that the operation used
         * to infer the schema.</p> <p> You can use the inferred schema when configuring a
         * streaming source for your application. For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. Note that when you create an application using the Amazon
         * Kinesis Analytics console, the console uses this operation to infer a schema and
         * show it in the console user interface. </p> <p> This operation requires
         * permissions to perform the <code>kinesisanalytics:DiscoverInputSchema</code>
         * action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DiscoverInputSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DiscoverInputSchemaOutcomeCallable DiscoverInputSchemaCallable(const Model::DiscoverInputSchemaRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Infers a schema by evaluating sample
         * records on the specified streaming source (Amazon Kinesis stream or Amazon
         * Kinesis Firehose delivery stream) or S3 object. In the response, the operation
         * returns the inferred schema and also the sample records that the operation used
         * to infer the schema.</p> <p> You can use the inferred schema when configuring a
         * streaming source for your application. For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. Note that when you create an application using the Amazon
         * Kinesis Analytics console, the console uses this operation to infer a schema and
         * show it in the console user interface. </p> <p> This operation requires
         * permissions to perform the <code>kinesisanalytics:DiscoverInputSchema</code>
         * action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DiscoverInputSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DiscoverInputSchemaAsync(const Model::DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Returns a list of Amazon Kinesis
         * Analytics applications in your account. For each application, the response
         * includes the application name, Amazon Resource Name (ARN), and status. If the
         * response returns the <code>HasMoreApplications</code> value as true, you can
         * send another request by adding the <code>ExclusiveStartApplicationName</code> in
         * the request body, and set the value of this to the last application name from
         * the previous response. </p> <p>If you want detailed information about a specific
         * application, use <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:ListApplications</code> action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Returns a list of Amazon Kinesis
         * Analytics applications in your account. For each application, the response
         * includes the application name, Amazon Resource Name (ARN), and status. If the
         * response returns the <code>HasMoreApplications</code> value as true, you can
         * send another request by adding the <code>ExclusiveStartApplicationName</code> in
         * the request body, and set the value of this to the last application name from
         * the previous response. </p> <p>If you want detailed information about a specific
         * application, use <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:ListApplications</code> action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ListApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Returns a list of Amazon Kinesis
         * Analytics applications in your account. For each application, the response
         * includes the application name, Amazon Resource Name (ARN), and status. If the
         * response returns the <code>HasMoreApplications</code> value as true, you can
         * send another request by adding the <code>ExclusiveStartApplicationName</code> in
         * the request body, and set the value of this to the last application name from
         * the previous response. </p> <p>If you want detailed information about a specific
         * application, use <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:ListApplications</code> action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ListApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Starts the specified Amazon Kinesis
         * Analytics application. After creating an application, you must exclusively call
         * this operation to start your application.</p> <p>After the application starts,
         * it begins consuming the input data, processes it, and writes the output to the
         * configured destination.</p> <p> The application status must be
         * <code>READY</code> for you to start an application. You can get the application
         * status in the console or using the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation.</p> <p>After you start the application, you can stop the application
         * from processing the input by calling the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_StopApplication.html">StopApplication</a>
         * operation.</p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:StartApplication</code> action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/StartApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartApplicationOutcome StartApplication(const Model::StartApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Starts the specified Amazon Kinesis
         * Analytics application. After creating an application, you must exclusively call
         * this operation to start your application.</p> <p>After the application starts,
         * it begins consuming the input data, processes it, and writes the output to the
         * configured destination.</p> <p> The application status must be
         * <code>READY</code> for you to start an application. You can get the application
         * status in the console or using the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation.</p> <p>After you start the application, you can stop the application
         * from processing the input by calling the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_StopApplication.html">StopApplication</a>
         * operation.</p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:StartApplication</code> action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/StartApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartApplicationOutcomeCallable StartApplicationCallable(const Model::StartApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Starts the specified Amazon Kinesis
         * Analytics application. After creating an application, you must exclusively call
         * this operation to start your application.</p> <p>After the application starts,
         * it begins consuming the input data, processes it, and writes the output to the
         * configured destination.</p> <p> The application status must be
         * <code>READY</code> for you to start an application. You can get the application
         * status in the console or using the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation.</p> <p>After you start the application, you can stop the application
         * from processing the input by calling the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_StopApplication.html">StopApplication</a>
         * operation.</p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:StartApplication</code> action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/StartApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartApplicationAsync(const Model::StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Stops the application from processing
         * input data. You can stop an application only if it is in the running state. You
         * can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the application state. After the application is stopped,
         * Amazon Kinesis Analytics stops reading data from the input, the application
         * stops processing data, and there is no output written to the destination. </p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:StopApplication</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/StopApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopApplicationOutcome StopApplication(const Model::StopApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Stops the application from processing
         * input data. You can stop an application only if it is in the running state. You
         * can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the application state. After the application is stopped,
         * Amazon Kinesis Analytics stops reading data from the input, the application
         * stops processing data, and there is no output written to the destination. </p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:StopApplication</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/StopApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopApplicationOutcomeCallable StopApplicationCallable(const Model::StopApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Stops the application from processing
         * input data. You can stop an application only if it is in the running state. You
         * can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the application state. After the application is stopped,
         * Amazon Kinesis Analytics stops reading data from the input, the application
         * stops processing data, and there is no output written to the destination. </p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:StopApplication</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/StopApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopApplicationAsync(const Model::StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more key-value tags to a Kinesis Analytics application. Note that
         * the maximum number of application tags includes system tags. The maximum number
         * of user-defined application tags is 50.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more key-value tags to a Kinesis Analytics application. Note that
         * the maximum number of application tags includes system tags. The maximum number
         * of user-defined application tags is 50.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more key-value tags to a Kinesis Analytics application. Note that
         * the maximum number of application tags includes system tags. The maximum number
         * of user-defined application tags is 50.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from a Kinesis Analytics application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a Kinesis Analytics application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a Kinesis Analytics application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Updates an existing Amazon Kinesis
         * Analytics application. Using this API, you can update application code, input
         * configuration, and output configuration. </p> <p>Note that Amazon Kinesis
         * Analytics updates the <code>CurrentApplicationVersionId</code> each time you
         * update your application. </p> <p>This operation requires permission for the
         * <code>kinesisanalytics:UpdateApplication</code> action.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Updates an existing Amazon Kinesis
         * Analytics application. Using this API, you can update application code, input
         * configuration, and output configuration. </p> <p>Note that Amazon Kinesis
         * Analytics updates the <code>CurrentApplicationVersionId</code> each time you
         * update your application. </p> <p>This operation requires permission for the
         * <code>kinesisanalytics:UpdateApplication</code> action.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <note> <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p> </note> <p>Updates an existing Amazon Kinesis
         * Analytics application. Using this API, you can update application code, input
         * configuration, and output configuration. </p> <p>Note that Amazon Kinesis
         * Analytics updates the <code>CurrentApplicationVersionId</code> each time you
         * update your application. </p> <p>This operation requires permission for the
         * <code>kinesisanalytics:UpdateApplication</code> action.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddApplicationCloudWatchLoggingOptionAsyncHelper(const Model::AddApplicationCloudWatchLoggingOptionRequest& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddApplicationInputAsyncHelper(const Model::AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddApplicationInputProcessingConfigurationAsyncHelper(const Model::AddApplicationInputProcessingConfigurationRequest& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddApplicationOutputAsyncHelper(const Model::AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddApplicationReferenceDataSourceAsyncHelper(const Model::AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationCloudWatchLoggingOptionAsyncHelper(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationInputProcessingConfigurationAsyncHelper(const Model::DeleteApplicationInputProcessingConfigurationRequest& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationOutputAsyncHelper(const Model::DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationReferenceDataSourceAsyncHelper(const Model::DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationAsyncHelper(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DiscoverInputSchemaAsyncHelper(const Model::DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartApplicationAsyncHelper(const Model::StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopApplicationAsyncHelper(const Model::StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace KinesisAnalytics
} // namespace Aws
