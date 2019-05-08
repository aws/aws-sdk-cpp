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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationCloudWatchLoggingOptionResult.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationInputResult.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationInputProcessingConfigurationResult.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationOutputResult.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationSnapshotResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationCloudWatchLoggingOptionResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationInputProcessingConfigurationResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationOutputResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationSnapshotResult.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationSnapshotResult.h>
#include <aws/kinesisanalyticsv2/model/DiscoverInputSchemaResult.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationSnapshotsResult.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationsResult.h>
#include <aws/kinesisanalyticsv2/model/ListTagsForResourceResult.h>
#include <aws/kinesisanalyticsv2/model/StartApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/StopApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/TagResourceResult.h>
#include <aws/kinesisanalyticsv2/model/UntagResourceResult.h>
#include <aws/kinesisanalyticsv2/model/UpdateApplicationResult.h>
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

namespace KinesisAnalyticsV2
{

namespace Model
{
        class AddApplicationCloudWatchLoggingOptionRequest;
        class AddApplicationInputRequest;
        class AddApplicationInputProcessingConfigurationRequest;
        class AddApplicationOutputRequest;
        class AddApplicationReferenceDataSourceRequest;
        class CreateApplicationRequest;
        class CreateApplicationSnapshotRequest;
        class DeleteApplicationRequest;
        class DeleteApplicationCloudWatchLoggingOptionRequest;
        class DeleteApplicationInputProcessingConfigurationRequest;
        class DeleteApplicationOutputRequest;
        class DeleteApplicationReferenceDataSourceRequest;
        class DeleteApplicationSnapshotRequest;
        class DescribeApplicationRequest;
        class DescribeApplicationSnapshotRequest;
        class DiscoverInputSchemaRequest;
        class ListApplicationSnapshotsRequest;
        class ListApplicationsRequest;
        class ListTagsForResourceRequest;
        class StartApplicationRequest;
        class StopApplicationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateApplicationRequest;

        typedef Aws::Utils::Outcome<AddApplicationCloudWatchLoggingOptionResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> AddApplicationCloudWatchLoggingOptionOutcome;
        typedef Aws::Utils::Outcome<AddApplicationInputResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> AddApplicationInputOutcome;
        typedef Aws::Utils::Outcome<AddApplicationInputProcessingConfigurationResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> AddApplicationInputProcessingConfigurationOutcome;
        typedef Aws::Utils::Outcome<AddApplicationOutputResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> AddApplicationOutputOutcome;
        typedef Aws::Utils::Outcome<AddApplicationReferenceDataSourceResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> AddApplicationReferenceDataSourceOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationSnapshotResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> CreateApplicationSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationCloudWatchLoggingOptionResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> DeleteApplicationCloudWatchLoggingOptionOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationInputProcessingConfigurationResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> DeleteApplicationInputProcessingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationOutputResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> DeleteApplicationOutputOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationReferenceDataSourceResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> DeleteApplicationReferenceDataSourceOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationSnapshotResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> DeleteApplicationSnapshotOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> DescribeApplicationOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationSnapshotResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> DescribeApplicationSnapshotOutcome;
        typedef Aws::Utils::Outcome<DiscoverInputSchemaResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> DiscoverInputSchemaOutcome;
        typedef Aws::Utils::Outcome<ListApplicationSnapshotsResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> ListApplicationSnapshotsOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartApplicationResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> StartApplicationOutcome;
        typedef Aws::Utils::Outcome<StopApplicationResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> StopApplicationOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, Aws::Client::AWSError<KinesisAnalyticsV2Errors>> UpdateApplicationOutcome;

        typedef std::future<AddApplicationCloudWatchLoggingOptionOutcome> AddApplicationCloudWatchLoggingOptionOutcomeCallable;
        typedef std::future<AddApplicationInputOutcome> AddApplicationInputOutcomeCallable;
        typedef std::future<AddApplicationInputProcessingConfigurationOutcome> AddApplicationInputProcessingConfigurationOutcomeCallable;
        typedef std::future<AddApplicationOutputOutcome> AddApplicationOutputOutcomeCallable;
        typedef std::future<AddApplicationReferenceDataSourceOutcome> AddApplicationReferenceDataSourceOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateApplicationSnapshotOutcome> CreateApplicationSnapshotOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteApplicationCloudWatchLoggingOptionOutcome> DeleteApplicationCloudWatchLoggingOptionOutcomeCallable;
        typedef std::future<DeleteApplicationInputProcessingConfigurationOutcome> DeleteApplicationInputProcessingConfigurationOutcomeCallable;
        typedef std::future<DeleteApplicationOutputOutcome> DeleteApplicationOutputOutcomeCallable;
        typedef std::future<DeleteApplicationReferenceDataSourceOutcome> DeleteApplicationReferenceDataSourceOutcomeCallable;
        typedef std::future<DeleteApplicationSnapshotOutcome> DeleteApplicationSnapshotOutcomeCallable;
        typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
        typedef std::future<DescribeApplicationSnapshotOutcome> DescribeApplicationSnapshotOutcomeCallable;
        typedef std::future<DiscoverInputSchemaOutcome> DiscoverInputSchemaOutcomeCallable;
        typedef std::future<ListApplicationSnapshotsOutcome> ListApplicationSnapshotsOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
        typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
} // namespace Model

  class KinesisAnalyticsV2Client;

    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationCloudWatchLoggingOptionRequest&, const Model::AddApplicationCloudWatchLoggingOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationCloudWatchLoggingOptionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationInputRequest&, const Model::AddApplicationInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationInputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationInputProcessingConfigurationRequest&, const Model::AddApplicationInputProcessingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationInputProcessingConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationOutputRequest&, const Model::AddApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationReferenceDataSourceRequest&, const Model::AddApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::CreateApplicationSnapshotRequest&, const Model::CreateApplicationSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationSnapshotResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationCloudWatchLoggingOptionRequest&, const Model::DeleteApplicationCloudWatchLoggingOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationInputProcessingConfigurationRequest&, const Model::DeleteApplicationInputProcessingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationInputProcessingConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationOutputRequest&, const Model::DeleteApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationReferenceDataSourceRequest&, const Model::DeleteApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationSnapshotRequest&, const Model::DeleteApplicationSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationSnapshotResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DescribeApplicationSnapshotRequest&, const Model::DescribeApplicationSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationSnapshotResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DiscoverInputSchemaRequest&, const Model::DiscoverInputSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DiscoverInputSchemaResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::ListApplicationSnapshotsRequest&, const Model::ListApplicationSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationSnapshotsResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::StartApplicationRequest&, const Model::StartApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::StopApplicationRequest&, const Model::StopApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;

  /**
   * <p>Amazon Kinesis Data Analytics is a fully managed service that you can use to
   * process and analyze streaming data using SQL or Java. The service enables you to
   * quickly author and run SQL or Java code against streaming sources to perform
   * time series analytics, feed real-time dashboards, and create real-time
   * metrics.</p>
   */
  class AWS_KINESISANALYTICSV2_API KinesisAnalyticsV2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsV2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsV2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisAnalyticsV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~KinesisAnalyticsV2Client();

        inline virtual const char* GetServiceClientName() const override { return "Kinesis Analytics V2"; }


        /**
         * <p>Adds an Amazon CloudWatch log stream to monitor application configuration
         * errors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationCloudWatchLoggingOptionOutcome AddApplicationCloudWatchLoggingOption(const Model::AddApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * <p>Adds an Amazon CloudWatch log stream to monitor application configuration
         * errors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationCloudWatchLoggingOptionOutcomeCallable AddApplicationCloudWatchLoggingOptionCallable(const Model::AddApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * <p>Adds an Amazon CloudWatch log stream to monitor application configuration
         * errors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationCloudWatchLoggingOptionAsync(const Model::AddApplicationCloudWatchLoggingOptionRequest& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Adds a streaming source to your SQL-based Amazon Kinesis Data Analytics
         * application. </p> <p>You can add a streaming source when you create an
         * application, or you can use this operation to add a streaming source after you
         * create an application. For more information, see <a>CreateApplication</a>.</p>
         * <p>Any configuration update, including adding a streaming source using this
         * operation, results in a new version of the application. You can use the
         * <a>DescribeApplication</a> operation to find the current application version.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationInput">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationInputOutcome AddApplicationInput(const Model::AddApplicationInputRequest& request) const;

        /**
         * <p> Adds a streaming source to your SQL-based Amazon Kinesis Data Analytics
         * application. </p> <p>You can add a streaming source when you create an
         * application, or you can use this operation to add a streaming source after you
         * create an application. For more information, see <a>CreateApplication</a>.</p>
         * <p>Any configuration update, including adding a streaming source using this
         * operation, results in a new version of the application. You can use the
         * <a>DescribeApplication</a> operation to find the current application version.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationInput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationInputOutcomeCallable AddApplicationInputCallable(const Model::AddApplicationInputRequest& request) const;

        /**
         * <p> Adds a streaming source to your SQL-based Amazon Kinesis Data Analytics
         * application. </p> <p>You can add a streaming source when you create an
         * application, or you can use this operation to add a streaming source after you
         * create an application. For more information, see <a>CreateApplication</a>.</p>
         * <p>Any configuration update, including adding a streaming source using this
         * operation, results in a new version of the application. You can use the
         * <a>DescribeApplication</a> operation to find the current application version.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationInput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationInputAsync(const Model::AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an <a>InputProcessingConfiguration</a> to an SQL-based Kinesis Data
         * Analytics application. An input processor pre-processes records on the input
         * stream before the application's SQL code executes. Currently, the only input
         * processor available is <a
         * href="https://aws.amazon.com/documentation/lambda/">AWS
         * Lambda</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationInputProcessingConfigurationOutcome AddApplicationInputProcessingConfiguration(const Model::AddApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * <p>Adds an <a>InputProcessingConfiguration</a> to an SQL-based Kinesis Data
         * Analytics application. An input processor pre-processes records on the input
         * stream before the application's SQL code executes. Currently, the only input
         * processor available is <a
         * href="https://aws.amazon.com/documentation/lambda/">AWS
         * Lambda</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationInputProcessingConfigurationOutcomeCallable AddApplicationInputProcessingConfigurationCallable(const Model::AddApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * <p>Adds an <a>InputProcessingConfiguration</a> to an SQL-based Kinesis Data
         * Analytics application. An input processor pre-processes records on the input
         * stream before the application's SQL code executes. Currently, the only input
         * processor available is <a
         * href="https://aws.amazon.com/documentation/lambda/">AWS
         * Lambda</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationInputProcessingConfigurationAsync(const Model::AddApplicationInputProcessingConfigurationRequest& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an external destination to your SQL-based Amazon Kinesis Data Analytics
         * application.</p> <p>If you want Kinesis Data Analytics to deliver data from an
         * in-application stream within your application to an external destination (such
         * as an Kinesis data stream, a Kinesis Data Firehose delivery stream, or an AWS
         * Lambda function), you add the relevant configuration to your application using
         * this operation. You can configure one or more outputs for your application. Each
         * output configuration maps an in-application stream and an external
         * destination.</p> <p> You can use one of the output configurations to deliver
         * data from your in-application error stream to an external destination so that
         * you can analyze the errors. </p> <p> Any configuration update, including adding
         * a streaming source using this operation, results in a new version of the
         * application. You can use the <a>DescribeApplication</a> operation to find the
         * current application version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationOutputOutcome AddApplicationOutput(const Model::AddApplicationOutputRequest& request) const;

        /**
         * <p>Adds an external destination to your SQL-based Amazon Kinesis Data Analytics
         * application.</p> <p>If you want Kinesis Data Analytics to deliver data from an
         * in-application stream within your application to an external destination (such
         * as an Kinesis data stream, a Kinesis Data Firehose delivery stream, or an AWS
         * Lambda function), you add the relevant configuration to your application using
         * this operation. You can configure one or more outputs for your application. Each
         * output configuration maps an in-application stream and an external
         * destination.</p> <p> You can use one of the output configurations to deliver
         * data from your in-application error stream to an external destination so that
         * you can analyze the errors. </p> <p> Any configuration update, including adding
         * a streaming source using this operation, results in a new version of the
         * application. You can use the <a>DescribeApplication</a> operation to find the
         * current application version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationOutput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationOutputOutcomeCallable AddApplicationOutputCallable(const Model::AddApplicationOutputRequest& request) const;

        /**
         * <p>Adds an external destination to your SQL-based Amazon Kinesis Data Analytics
         * application.</p> <p>If you want Kinesis Data Analytics to deliver data from an
         * in-application stream within your application to an external destination (such
         * as an Kinesis data stream, a Kinesis Data Firehose delivery stream, or an AWS
         * Lambda function), you add the relevant configuration to your application using
         * this operation. You can configure one or more outputs for your application. Each
         * output configuration maps an in-application stream and an external
         * destination.</p> <p> You can use one of the output configurations to deliver
         * data from your in-application error stream to an external destination so that
         * you can analyze the errors. </p> <p> Any configuration update, including adding
         * a streaming source using this operation, results in a new version of the
         * application. You can use the <a>DescribeApplication</a> operation to find the
         * current application version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationOutput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationOutputAsync(const Model::AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a reference data source to an existing SQL-based Amazon Kinesis Data
         * Analytics application.</p> <p>Kinesis Data Analytics reads reference data (that
         * is, an Amazon S3 object) and creates an in-application table within your
         * application. In the request, you provide the source (S3 bucket name and object
         * key name), name of the in-application table to create, and the necessary mapping
         * information that describes how data in an Amazon S3 object maps to columns in
         * the resulting in-application table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationReferenceDataSourceOutcome AddApplicationReferenceDataSource(const Model::AddApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Adds a reference data source to an existing SQL-based Amazon Kinesis Data
         * Analytics application.</p> <p>Kinesis Data Analytics reads reference data (that
         * is, an Amazon S3 object) and creates an in-application table within your
         * application. In the request, you provide the source (S3 bucket name and object
         * key name), name of the in-application table to create, and the necessary mapping
         * information that describes how data in an Amazon S3 object maps to columns in
         * the resulting in-application table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationReferenceDataSourceOutcomeCallable AddApplicationReferenceDataSourceCallable(const Model::AddApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Adds a reference data source to an existing SQL-based Amazon Kinesis Data
         * Analytics application.</p> <p>Kinesis Data Analytics reads reference data (that
         * is, an Amazon S3 object) and creates an in-application table within your
         * application. In the request, you provide the source (S3 bucket name and object
         * key name), name of the in-application table to create, and the necessary mapping
         * information that describes how data in an Amazon S3 object maps to columns in
         * the resulting in-application table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationReferenceDataSourceAsync(const Model::AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Kinesis Data Analytics application. For information about
         * creating a Kinesis Data Analytics application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/getting-started.html">Creating
         * an Application</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an Amazon Kinesis Data Analytics application. For information about
         * creating a Kinesis Data Analytics application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/getting-started.html">Creating
         * an Application</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an Amazon Kinesis Data Analytics application. For information about
         * creating a Kinesis Data Analytics application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/getting-started.html">Creating
         * an Application</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of the application's state data.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplicationSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationSnapshotOutcome CreateApplicationSnapshot(const Model::CreateApplicationSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of the application's state data.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplicationSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationSnapshotOutcomeCallable CreateApplicationSnapshotCallable(const Model::CreateApplicationSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of the application's state data.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplicationSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationSnapshotAsync(const Model::CreateApplicationSnapshotRequest& request, const CreateApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified application. Kinesis Data Analytics halts application
         * execution and deletes the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes the specified application. Kinesis Data Analytics halts application
         * execution and deletes the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes the specified application. Kinesis Data Analytics halts application
         * execution and deletes the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon CloudWatch log stream from an Amazon Kinesis Data Analytics
         * application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationCloudWatchLoggingOptionOutcome DeleteApplicationCloudWatchLoggingOption(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * <p>Deletes an Amazon CloudWatch log stream from an Amazon Kinesis Data Analytics
         * application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationCloudWatchLoggingOptionOutcomeCallable DeleteApplicationCloudWatchLoggingOptionCallable(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * <p>Deletes an Amazon CloudWatch log stream from an Amazon Kinesis Data Analytics
         * application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationCloudWatchLoggingOptionAsync(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an <a>InputProcessingConfiguration</a> from an input.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationInputProcessingConfigurationOutcome DeleteApplicationInputProcessingConfiguration(const Model::DeleteApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * <p>Deletes an <a>InputProcessingConfiguration</a> from an input.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationInputProcessingConfigurationOutcomeCallable DeleteApplicationInputProcessingConfigurationCallable(const Model::DeleteApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * <p>Deletes an <a>InputProcessingConfiguration</a> from an input.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationInputProcessingConfigurationAsync(const Model::DeleteApplicationInputProcessingConfigurationRequest& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the output destination configuration from your SQL-based Amazon
         * Kinesis Data Analytics application's configuration. Kinesis Data Analytics will
         * no longer write data from the corresponding in-application stream to the
         * external output destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutputOutcome DeleteApplicationOutput(const Model::DeleteApplicationOutputRequest& request) const;

        /**
         * <p>Deletes the output destination configuration from your SQL-based Amazon
         * Kinesis Data Analytics application's configuration. Kinesis Data Analytics will
         * no longer write data from the corresponding in-application stream to the
         * external output destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationOutput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutputOutcomeCallable DeleteApplicationOutputCallable(const Model::DeleteApplicationOutputRequest& request) const;

        /**
         * <p>Deletes the output destination configuration from your SQL-based Amazon
         * Kinesis Data Analytics application's configuration. Kinesis Data Analytics will
         * no longer write data from the corresponding in-application stream to the
         * external output destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationOutput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationOutputAsync(const Model::DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a reference data source configuration from the specified SQL-based
         * Amazon Kinesis Data Analytics application's configuration.</p> <p>If the
         * application is running, Kinesis Data Analytics immediately removes the
         * in-application table that you created using the
         * <a>AddApplicationReferenceDataSource</a> operation. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationReferenceDataSourceOutcome DeleteApplicationReferenceDataSource(const Model::DeleteApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Deletes a reference data source configuration from the specified SQL-based
         * Amazon Kinesis Data Analytics application's configuration.</p> <p>If the
         * application is running, Kinesis Data Analytics immediately removes the
         * in-application table that you created using the
         * <a>AddApplicationReferenceDataSource</a> operation. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationReferenceDataSourceOutcomeCallable DeleteApplicationReferenceDataSourceCallable(const Model::DeleteApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Deletes a reference data source configuration from the specified SQL-based
         * Amazon Kinesis Data Analytics application's configuration.</p> <p>If the
         * application is running, Kinesis Data Analytics immediately removes the
         * in-application table that you created using the
         * <a>AddApplicationReferenceDataSource</a> operation. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationReferenceDataSourceAsync(const Model::DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a snapshot of application state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationSnapshotOutcome DeleteApplicationSnapshot(const Model::DeleteApplicationSnapshotRequest& request) const;

        /**
         * <p>Deletes a snapshot of application state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationSnapshotOutcomeCallable DeleteApplicationSnapshotCallable(const Model::DeleteApplicationSnapshotRequest& request) const;

        /**
         * <p>Deletes a snapshot of application state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationSnapshotAsync(const Model::DeleteApplicationSnapshotRequest& request, const DeleteApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific Amazon Kinesis Data Analytics
         * application.</p> <p>If you want to retrieve a list of all applications in your
         * account, use the <a>ListApplications</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * <p>Returns information about a specific Amazon Kinesis Data Analytics
         * application.</p> <p>If you want to retrieve a list of all applications in your
         * account, use the <a>ListApplications</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request) const;

        /**
         * <p>Returns information about a specific Amazon Kinesis Data Analytics
         * application.</p> <p>If you want to retrieve a list of all applications in your
         * account, use the <a>ListApplications</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a snapshot of application state data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplicationSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationSnapshotOutcome DescribeApplicationSnapshot(const Model::DescribeApplicationSnapshotRequest& request) const;

        /**
         * <p>Returns information about a snapshot of application state data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplicationSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationSnapshotOutcomeCallable DescribeApplicationSnapshotCallable(const Model::DescribeApplicationSnapshotRequest& request) const;

        /**
         * <p>Returns information about a snapshot of application state data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplicationSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationSnapshotAsync(const Model::DescribeApplicationSnapshotRequest& request, const DescribeApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Infers a schema for an SQL-based Amazon Kinesis Data Analytics application by
         * evaluating sample records on the specified streaming source (Kinesis data stream
         * or Kinesis Data Firehose delivery stream) or Amazon S3 object. In the response,
         * the operation returns the inferred schema and also the sample records that the
         * operation used to infer the schema.</p> <p> You can use the inferred schema when
         * configuring a streaming source for your application. When you create an
         * application using the Kinesis Data Analytics console, the console uses this
         * operation to infer a schema and show it in the console user interface.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DiscoverInputSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DiscoverInputSchemaOutcome DiscoverInputSchema(const Model::DiscoverInputSchemaRequest& request) const;

        /**
         * <p>Infers a schema for an SQL-based Amazon Kinesis Data Analytics application by
         * evaluating sample records on the specified streaming source (Kinesis data stream
         * or Kinesis Data Firehose delivery stream) or Amazon S3 object. In the response,
         * the operation returns the inferred schema and also the sample records that the
         * operation used to infer the schema.</p> <p> You can use the inferred schema when
         * configuring a streaming source for your application. When you create an
         * application using the Kinesis Data Analytics console, the console uses this
         * operation to infer a schema and show it in the console user interface.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DiscoverInputSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DiscoverInputSchemaOutcomeCallable DiscoverInputSchemaCallable(const Model::DiscoverInputSchemaRequest& request) const;

        /**
         * <p>Infers a schema for an SQL-based Amazon Kinesis Data Analytics application by
         * evaluating sample records on the specified streaming source (Kinesis data stream
         * or Kinesis Data Firehose delivery stream) or Amazon S3 object. In the response,
         * the operation returns the inferred schema and also the sample records that the
         * operation used to infer the schema.</p> <p> You can use the inferred schema when
         * configuring a streaming source for your application. When you create an
         * application using the Kinesis Data Analytics console, the console uses this
         * operation to infer a schema and show it in the console user interface.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DiscoverInputSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DiscoverInputSchemaAsync(const Model::DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about the current application snapshots.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplicationSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationSnapshotsOutcome ListApplicationSnapshots(const Model::ListApplicationSnapshotsRequest& request) const;

        /**
         * <p>Lists information about the current application snapshots.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplicationSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationSnapshotsOutcomeCallable ListApplicationSnapshotsCallable(const Model::ListApplicationSnapshotsRequest& request) const;

        /**
         * <p>Lists information about the current application snapshots.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplicationSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationSnapshotsAsync(const Model::ListApplicationSnapshotsRequest& request, const ListApplicationSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Amazon Kinesis Data Analytics applications in your account.
         * For each application, the response includes the application name, Amazon
         * Resource Name (ARN), and status. </p> <p>If you want detailed information about
         * a specific application, use <a>DescribeApplication</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Returns a list of Amazon Kinesis Data Analytics applications in your account.
         * For each application, the response includes the application name, Amazon
         * Resource Name (ARN), and status. </p> <p>If you want detailed information about
         * a specific application, use <a>DescribeApplication</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Returns a list of Amazon Kinesis Data Analytics applications in your account.
         * For each application, the response includes the application name, Amazon
         * Resource Name (ARN), and status. </p> <p>If you want detailed information about
         * a specific application, use <a>DescribeApplication</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified Amazon Kinesis Data Analytics application. After
         * creating an application, you must exclusively call this operation to start your
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StartApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartApplicationOutcome StartApplication(const Model::StartApplicationRequest& request) const;

        /**
         * <p>Starts the specified Amazon Kinesis Data Analytics application. After
         * creating an application, you must exclusively call this operation to start your
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StartApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartApplicationOutcomeCallable StartApplicationCallable(const Model::StartApplicationRequest& request) const;

        /**
         * <p>Starts the specified Amazon Kinesis Data Analytics application. After
         * creating an application, you must exclusively call this operation to start your
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StartApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartApplicationAsync(const Model::StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the application from processing data. You can stop an application only
         * if it is in the running state. You can use the <a>DescribeApplication</a>
         * operation to find the application state. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StopApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopApplicationOutcome StopApplication(const Model::StopApplicationRequest& request) const;

        /**
         * <p>Stops the application from processing data. You can stop an application only
         * if it is in the running state. You can use the <a>DescribeApplication</a>
         * operation to find the application state. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StopApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopApplicationOutcomeCallable StopApplicationCallable(const Model::StopApplicationRequest& request) const;

        /**
         * <p>Stops the application from processing data. You can stop an application only
         * if it is in the running state. You can use the <a>DescribeApplication</a>
         * operation to find the application state. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StopApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopApplicationAsync(const Model::StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more key-value tags to a Kinesis Analytics application. Note that
         * the maximum number of application tags includes system tags. The maximum number
         * of user-defined application tags is 50.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more key-value tags to a Kinesis Analytics application. Note that
         * the maximum number of application tags includes system tags. The maximum number
         * of user-defined application tags is 50.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more key-value tags to a Kinesis Analytics application. Note that
         * the maximum number of application tags includes system tags. The maximum number
         * of user-defined application tags is 50.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from a Kinesis Analytics application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a Kinesis Analytics application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a Kinesis Analytics application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Amazon Kinesis Data Analytics application. Using this
         * operation, you can update application code, input configuration, and output
         * configuration. </p> <p>Kinesis Data Analytics updates the
         * <code>ApplicationVersionId</code> each time you update your application.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates an existing Amazon Kinesis Data Analytics application. Using this
         * operation, you can update application code, input configuration, and output
         * configuration. </p> <p>Kinesis Data Analytics updates the
         * <code>ApplicationVersionId</code> each time you update your application.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates an existing Amazon Kinesis Data Analytics application. Using this
         * operation, you can update application code, input configuration, and output
         * configuration. </p> <p>Kinesis Data Analytics updates the
         * <code>ApplicationVersionId</code> each time you update your application.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UpdateApplication">AWS
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
        void CreateApplicationSnapshotAsyncHelper(const Model::CreateApplicationSnapshotRequest& request, const CreateApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationCloudWatchLoggingOptionAsyncHelper(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationInputProcessingConfigurationAsyncHelper(const Model::DeleteApplicationInputProcessingConfigurationRequest& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationOutputAsyncHelper(const Model::DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationReferenceDataSourceAsyncHelper(const Model::DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationSnapshotAsyncHelper(const Model::DeleteApplicationSnapshotRequest& request, const DeleteApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationAsyncHelper(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationSnapshotAsyncHelper(const Model::DescribeApplicationSnapshotRequest& request, const DescribeApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DiscoverInputSchemaAsyncHelper(const Model::DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationSnapshotsAsyncHelper(const Model::ListApplicationSnapshotsRequest& request, const ListApplicationSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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

} // namespace KinesisAnalyticsV2
} // namespace Aws
