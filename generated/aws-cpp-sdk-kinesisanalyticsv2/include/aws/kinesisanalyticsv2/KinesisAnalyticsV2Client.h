﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/kinesisanalyticsv2/model/AddApplicationVpcConfigurationResult.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationPresignedUrlResult.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationSnapshotResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationCloudWatchLoggingOptionResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationInputProcessingConfigurationResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationOutputResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationSnapshotResult.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationVpcConfigurationResult.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationSnapshotResult.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationVersionResult.h>
#include <aws/kinesisanalyticsv2/model/DiscoverInputSchemaResult.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationSnapshotsResult.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationVersionsResult.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationsResult.h>
#include <aws/kinesisanalyticsv2/model/ListTagsForResourceResult.h>
#include <aws/kinesisanalyticsv2/model/RollbackApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/StartApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/StopApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/TagResourceResult.h>
#include <aws/kinesisanalyticsv2/model/UntagResourceResult.h>
#include <aws/kinesisanalyticsv2/model/UpdateApplicationResult.h>
#include <aws/kinesisanalyticsv2/model/UpdateApplicationMaintenanceConfigurationResult.h>
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
        class AddApplicationVpcConfigurationRequest;
        class CreateApplicationRequest;
        class CreateApplicationPresignedUrlRequest;
        class CreateApplicationSnapshotRequest;
        class DeleteApplicationRequest;
        class DeleteApplicationCloudWatchLoggingOptionRequest;
        class DeleteApplicationInputProcessingConfigurationRequest;
        class DeleteApplicationOutputRequest;
        class DeleteApplicationReferenceDataSourceRequest;
        class DeleteApplicationSnapshotRequest;
        class DeleteApplicationVpcConfigurationRequest;
        class DescribeApplicationRequest;
        class DescribeApplicationSnapshotRequest;
        class DescribeApplicationVersionRequest;
        class DiscoverInputSchemaRequest;
        class ListApplicationSnapshotsRequest;
        class ListApplicationVersionsRequest;
        class ListApplicationsRequest;
        class ListTagsForResourceRequest;
        class RollbackApplicationRequest;
        class StartApplicationRequest;
        class StopApplicationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateApplicationRequest;
        class UpdateApplicationMaintenanceConfigurationRequest;

        typedef Aws::Utils::Outcome<AddApplicationCloudWatchLoggingOptionResult, KinesisAnalyticsV2Error> AddApplicationCloudWatchLoggingOptionOutcome;
        typedef Aws::Utils::Outcome<AddApplicationInputResult, KinesisAnalyticsV2Error> AddApplicationInputOutcome;
        typedef Aws::Utils::Outcome<AddApplicationInputProcessingConfigurationResult, KinesisAnalyticsV2Error> AddApplicationInputProcessingConfigurationOutcome;
        typedef Aws::Utils::Outcome<AddApplicationOutputResult, KinesisAnalyticsV2Error> AddApplicationOutputOutcome;
        typedef Aws::Utils::Outcome<AddApplicationReferenceDataSourceResult, KinesisAnalyticsV2Error> AddApplicationReferenceDataSourceOutcome;
        typedef Aws::Utils::Outcome<AddApplicationVpcConfigurationResult, KinesisAnalyticsV2Error> AddApplicationVpcConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, KinesisAnalyticsV2Error> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationPresignedUrlResult, KinesisAnalyticsV2Error> CreateApplicationPresignedUrlOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationSnapshotResult, KinesisAnalyticsV2Error> CreateApplicationSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationResult, KinesisAnalyticsV2Error> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationCloudWatchLoggingOptionResult, KinesisAnalyticsV2Error> DeleteApplicationCloudWatchLoggingOptionOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationInputProcessingConfigurationResult, KinesisAnalyticsV2Error> DeleteApplicationInputProcessingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationOutputResult, KinesisAnalyticsV2Error> DeleteApplicationOutputOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationReferenceDataSourceResult, KinesisAnalyticsV2Error> DeleteApplicationReferenceDataSourceOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationSnapshotResult, KinesisAnalyticsV2Error> DeleteApplicationSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationVpcConfigurationResult, KinesisAnalyticsV2Error> DeleteApplicationVpcConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationResult, KinesisAnalyticsV2Error> DescribeApplicationOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationSnapshotResult, KinesisAnalyticsV2Error> DescribeApplicationSnapshotOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationVersionResult, KinesisAnalyticsV2Error> DescribeApplicationVersionOutcome;
        typedef Aws::Utils::Outcome<DiscoverInputSchemaResult, KinesisAnalyticsV2Error> DiscoverInputSchemaOutcome;
        typedef Aws::Utils::Outcome<ListApplicationSnapshotsResult, KinesisAnalyticsV2Error> ListApplicationSnapshotsOutcome;
        typedef Aws::Utils::Outcome<ListApplicationVersionsResult, KinesisAnalyticsV2Error> ListApplicationVersionsOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, KinesisAnalyticsV2Error> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, KinesisAnalyticsV2Error> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<RollbackApplicationResult, KinesisAnalyticsV2Error> RollbackApplicationOutcome;
        typedef Aws::Utils::Outcome<StartApplicationResult, KinesisAnalyticsV2Error> StartApplicationOutcome;
        typedef Aws::Utils::Outcome<StopApplicationResult, KinesisAnalyticsV2Error> StopApplicationOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, KinesisAnalyticsV2Error> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, KinesisAnalyticsV2Error> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, KinesisAnalyticsV2Error> UpdateApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationMaintenanceConfigurationResult, KinesisAnalyticsV2Error> UpdateApplicationMaintenanceConfigurationOutcome;

        typedef std::future<AddApplicationCloudWatchLoggingOptionOutcome> AddApplicationCloudWatchLoggingOptionOutcomeCallable;
        typedef std::future<AddApplicationInputOutcome> AddApplicationInputOutcomeCallable;
        typedef std::future<AddApplicationInputProcessingConfigurationOutcome> AddApplicationInputProcessingConfigurationOutcomeCallable;
        typedef std::future<AddApplicationOutputOutcome> AddApplicationOutputOutcomeCallable;
        typedef std::future<AddApplicationReferenceDataSourceOutcome> AddApplicationReferenceDataSourceOutcomeCallable;
        typedef std::future<AddApplicationVpcConfigurationOutcome> AddApplicationVpcConfigurationOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateApplicationPresignedUrlOutcome> CreateApplicationPresignedUrlOutcomeCallable;
        typedef std::future<CreateApplicationSnapshotOutcome> CreateApplicationSnapshotOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteApplicationCloudWatchLoggingOptionOutcome> DeleteApplicationCloudWatchLoggingOptionOutcomeCallable;
        typedef std::future<DeleteApplicationInputProcessingConfigurationOutcome> DeleteApplicationInputProcessingConfigurationOutcomeCallable;
        typedef std::future<DeleteApplicationOutputOutcome> DeleteApplicationOutputOutcomeCallable;
        typedef std::future<DeleteApplicationReferenceDataSourceOutcome> DeleteApplicationReferenceDataSourceOutcomeCallable;
        typedef std::future<DeleteApplicationSnapshotOutcome> DeleteApplicationSnapshotOutcomeCallable;
        typedef std::future<DeleteApplicationVpcConfigurationOutcome> DeleteApplicationVpcConfigurationOutcomeCallable;
        typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
        typedef std::future<DescribeApplicationSnapshotOutcome> DescribeApplicationSnapshotOutcomeCallable;
        typedef std::future<DescribeApplicationVersionOutcome> DescribeApplicationVersionOutcomeCallable;
        typedef std::future<DiscoverInputSchemaOutcome> DiscoverInputSchemaOutcomeCallable;
        typedef std::future<ListApplicationSnapshotsOutcome> ListApplicationSnapshotsOutcomeCallable;
        typedef std::future<ListApplicationVersionsOutcome> ListApplicationVersionsOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RollbackApplicationOutcome> RollbackApplicationOutcomeCallable;
        typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
        typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
        typedef std::future<UpdateApplicationMaintenanceConfigurationOutcome> UpdateApplicationMaintenanceConfigurationOutcomeCallable;
} // namespace Model

  class KinesisAnalyticsV2Client;

    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationCloudWatchLoggingOptionRequest&, const Model::AddApplicationCloudWatchLoggingOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationCloudWatchLoggingOptionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationInputRequest&, const Model::AddApplicationInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationInputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationInputProcessingConfigurationRequest&, const Model::AddApplicationInputProcessingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationInputProcessingConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationOutputRequest&, const Model::AddApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationReferenceDataSourceRequest&, const Model::AddApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::AddApplicationVpcConfigurationRequest&, const Model::AddApplicationVpcConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationVpcConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::CreateApplicationPresignedUrlRequest&, const Model::CreateApplicationPresignedUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationPresignedUrlResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::CreateApplicationSnapshotRequest&, const Model::CreateApplicationSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationSnapshotResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationCloudWatchLoggingOptionRequest&, const Model::DeleteApplicationCloudWatchLoggingOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationInputProcessingConfigurationRequest&, const Model::DeleteApplicationInputProcessingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationInputProcessingConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationOutputRequest&, const Model::DeleteApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationReferenceDataSourceRequest&, const Model::DeleteApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationSnapshotRequest&, const Model::DeleteApplicationSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationSnapshotResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DeleteApplicationVpcConfigurationRequest&, const Model::DeleteApplicationVpcConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationVpcConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DescribeApplicationSnapshotRequest&, const Model::DescribeApplicationSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationSnapshotResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DescribeApplicationVersionRequest&, const Model::DescribeApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::DiscoverInputSchemaRequest&, const Model::DiscoverInputSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DiscoverInputSchemaResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::ListApplicationSnapshotsRequest&, const Model::ListApplicationSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationSnapshotsResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::ListApplicationVersionsRequest&, const Model::ListApplicationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationVersionsResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::RollbackApplicationRequest&, const Model::RollbackApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RollbackApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::StartApplicationRequest&, const Model::StartApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::StopApplicationRequest&, const Model::StopApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsV2Client*, const Model::UpdateApplicationMaintenanceConfigurationRequest&, const Model::UpdateApplicationMaintenanceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationMaintenanceConfigurationResponseReceivedHandler;

  /**
   * <p>Amazon Kinesis Data Analytics is a fully managed service that you can use to
   * process and analyze streaming data using Java, SQL, or Scala. The service
   * enables you to quickly author and run Java, SQL, or Scala code against streaming
   * sources to perform time series analytics, feed real-time dashboards, and create
   * real-time metrics.</p>
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
         * <p> Adds a streaming source to your SQL-based Kinesis Data Analytics
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
         * <p> Adds a streaming source to your SQL-based Kinesis Data Analytics
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
         * <p> Adds a streaming source to your SQL-based Kinesis Data Analytics
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
         * <p>Adds an <a>InputProcessingConfiguration</a> to a SQL-based Kinesis Data
         * Analytics application. An input processor pre-processes records on the input
         * stream before the application's SQL code executes. Currently, the only input
         * processor available is <a href="https://docs.aws.amazon.com/lambda/">Amazon
         * Lambda</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationInputProcessingConfigurationOutcome AddApplicationInputProcessingConfiguration(const Model::AddApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * <p>Adds an <a>InputProcessingConfiguration</a> to a SQL-based Kinesis Data
         * Analytics application. An input processor pre-processes records on the input
         * stream before the application's SQL code executes. Currently, the only input
         * processor available is <a href="https://docs.aws.amazon.com/lambda/">Amazon
         * Lambda</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationInputProcessingConfigurationOutcomeCallable AddApplicationInputProcessingConfigurationCallable(const Model::AddApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * <p>Adds an <a>InputProcessingConfiguration</a> to a SQL-based Kinesis Data
         * Analytics application. An input processor pre-processes records on the input
         * stream before the application's SQL code executes. Currently, the only input
         * processor available is <a href="https://docs.aws.amazon.com/lambda/">Amazon
         * Lambda</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationInputProcessingConfigurationAsync(const Model::AddApplicationInputProcessingConfigurationRequest& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an external destination to your SQL-based Kinesis Data Analytics
         * application.</p> <p>If you want Kinesis Data Analytics to deliver data from an
         * in-application stream within your application to an external destination (such
         * as an Kinesis data stream, a Kinesis Data Firehose delivery stream, or an Amazon
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
         * <p>Adds an external destination to your SQL-based Kinesis Data Analytics
         * application.</p> <p>If you want Kinesis Data Analytics to deliver data from an
         * in-application stream within your application to an external destination (such
         * as an Kinesis data stream, a Kinesis Data Firehose delivery stream, or an Amazon
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
         * <p>Adds an external destination to your SQL-based Kinesis Data Analytics
         * application.</p> <p>If you want Kinesis Data Analytics to deliver data from an
         * in-application stream within your application to an external destination (such
         * as an Kinesis data stream, a Kinesis Data Firehose delivery stream, or an Amazon
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
         * <p>Adds a reference data source to an existing SQL-based Kinesis Data Analytics
         * application.</p> <p>Kinesis Data Analytics reads reference data (that is, an
         * Amazon S3 object) and creates an in-application table within your application.
         * In the request, you provide the source (S3 bucket name and object key name),
         * name of the in-application table to create, and the necessary mapping
         * information that describes how data in an Amazon S3 object maps to columns in
         * the resulting in-application table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationReferenceDataSourceOutcome AddApplicationReferenceDataSource(const Model::AddApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Adds a reference data source to an existing SQL-based Kinesis Data Analytics
         * application.</p> <p>Kinesis Data Analytics reads reference data (that is, an
         * Amazon S3 object) and creates an in-application table within your application.
         * In the request, you provide the source (S3 bucket name and object key name),
         * name of the in-application table to create, and the necessary mapping
         * information that describes how data in an Amazon S3 object maps to columns in
         * the resulting in-application table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationReferenceDataSourceOutcomeCallable AddApplicationReferenceDataSourceCallable(const Model::AddApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Adds a reference data source to an existing SQL-based Kinesis Data Analytics
         * application.</p> <p>Kinesis Data Analytics reads reference data (that is, an
         * Amazon S3 object) and creates an in-application table within your application.
         * In the request, you provide the source (S3 bucket name and object key name),
         * name of the in-application table to create, and the necessary mapping
         * information that describes how data in an Amazon S3 object maps to columns in
         * the resulting in-application table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationReferenceDataSourceAsync(const Model::AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a Virtual Private Cloud (VPC) configuration to the application.
         * Applications can use VPCs to store and access resources securely.</p> <p>Note
         * the following about VPC configurations for Kinesis Data Analytics
         * applications:</p> <ul> <li> <p>VPC configurations are not supported for SQL
         * applications.</p> </li> <li> <p>When a VPC is added to a Kinesis Data Analytics
         * application, the application can no longer be accessed from the Internet
         * directly. To enable Internet access to the application, add an Internet gateway
         * to your VPC.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationVpcConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationVpcConfigurationOutcome AddApplicationVpcConfiguration(const Model::AddApplicationVpcConfigurationRequest& request) const;

        /**
         * <p>Adds a Virtual Private Cloud (VPC) configuration to the application.
         * Applications can use VPCs to store and access resources securely.</p> <p>Note
         * the following about VPC configurations for Kinesis Data Analytics
         * applications:</p> <ul> <li> <p>VPC configurations are not supported for SQL
         * applications.</p> </li> <li> <p>When a VPC is added to a Kinesis Data Analytics
         * application, the application can no longer be accessed from the Internet
         * directly. To enable Internet access to the application, add an Internet gateway
         * to your VPC.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationVpcConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationVpcConfigurationOutcomeCallable AddApplicationVpcConfigurationCallable(const Model::AddApplicationVpcConfigurationRequest& request) const;

        /**
         * <p>Adds a Virtual Private Cloud (VPC) configuration to the application.
         * Applications can use VPCs to store and access resources securely.</p> <p>Note
         * the following about VPC configurations for Kinesis Data Analytics
         * applications:</p> <ul> <li> <p>VPC configurations are not supported for SQL
         * applications.</p> </li> <li> <p>When a VPC is added to a Kinesis Data Analytics
         * application, the application can no longer be accessed from the Internet
         * directly. To enable Internet access to the application, add an Internet gateway
         * to your VPC.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationVpcConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationVpcConfigurationAsync(const Model::AddApplicationVpcConfigurationRequest& request, const AddApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Kinesis Data Analytics application. For information about creating
         * a Kinesis Data Analytics application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/getting-started.html">Creating
         * an Application</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates a Kinesis Data Analytics application. For information about creating
         * a Kinesis Data Analytics application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/getting-started.html">Creating
         * an Application</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates a Kinesis Data Analytics application. For information about creating
         * a Kinesis Data Analytics application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/getting-started.html">Creating
         * an Application</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and returns a URL that you can use to connect to an application's
         * extension. Currently, the only available extension is the Apache Flink
         * dashboard.</p> <p>The IAM role or user used to call this API defines the
         * permissions to access the extension. After the presigned URL is created, no
         * additional permission is required to access this URL. IAM authorization policies
         * for this API are also enforced for every HTTP request that attempts to connect
         * to the extension. </p> <p>You control the amount of time that the URL will be
         * valid using the <code>SessionExpirationDurationInSeconds</code> parameter. If
         * you do not provide this parameter, the returned URL is valid for twelve
         * hours.</p>  <p>The URL that you get from a call to
         * CreateApplicationPresignedUrl must be used within 3 minutes to be valid. If you
         * first try to use the URL after the 3-minute limit expires, the service returns
         * an HTTP 403 Forbidden error.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplicationPresignedUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationPresignedUrlOutcome CreateApplicationPresignedUrl(const Model::CreateApplicationPresignedUrlRequest& request) const;

        /**
         * <p>Creates and returns a URL that you can use to connect to an application's
         * extension. Currently, the only available extension is the Apache Flink
         * dashboard.</p> <p>The IAM role or user used to call this API defines the
         * permissions to access the extension. After the presigned URL is created, no
         * additional permission is required to access this URL. IAM authorization policies
         * for this API are also enforced for every HTTP request that attempts to connect
         * to the extension. </p> <p>You control the amount of time that the URL will be
         * valid using the <code>SessionExpirationDurationInSeconds</code> parameter. If
         * you do not provide this parameter, the returned URL is valid for twelve
         * hours.</p>  <p>The URL that you get from a call to
         * CreateApplicationPresignedUrl must be used within 3 minutes to be valid. If you
         * first try to use the URL after the 3-minute limit expires, the service returns
         * an HTTP 403 Forbidden error.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplicationPresignedUrl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationPresignedUrlOutcomeCallable CreateApplicationPresignedUrlCallable(const Model::CreateApplicationPresignedUrlRequest& request) const;

        /**
         * <p>Creates and returns a URL that you can use to connect to an application's
         * extension. Currently, the only available extension is the Apache Flink
         * dashboard.</p> <p>The IAM role or user used to call this API defines the
         * permissions to access the extension. After the presigned URL is created, no
         * additional permission is required to access this URL. IAM authorization policies
         * for this API are also enforced for every HTTP request that attempts to connect
         * to the extension. </p> <p>You control the amount of time that the URL will be
         * valid using the <code>SessionExpirationDurationInSeconds</code> parameter. If
         * you do not provide this parameter, the returned URL is valid for twelve
         * hours.</p>  <p>The URL that you get from a call to
         * CreateApplicationPresignedUrl must be used within 3 minutes to be valid. If you
         * first try to use the URL after the 3-minute limit expires, the service returns
         * an HTTP 403 Forbidden error.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplicationPresignedUrl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationPresignedUrlAsync(const Model::CreateApplicationPresignedUrlRequest& request, const CreateApplicationPresignedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes an Amazon CloudWatch log stream from an Kinesis Data Analytics
         * application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationCloudWatchLoggingOptionOutcome DeleteApplicationCloudWatchLoggingOption(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * <p>Deletes an Amazon CloudWatch log stream from an Kinesis Data Analytics
         * application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationCloudWatchLoggingOptionOutcomeCallable DeleteApplicationCloudWatchLoggingOptionCallable(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * <p>Deletes an Amazon CloudWatch log stream from an Kinesis Data Analytics
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
         * <p>Deletes the output destination configuration from your SQL-based Kinesis Data
         * Analytics application's configuration. Kinesis Data Analytics will no longer
         * write data from the corresponding in-application stream to the external output
         * destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutputOutcome DeleteApplicationOutput(const Model::DeleteApplicationOutputRequest& request) const;

        /**
         * <p>Deletes the output destination configuration from your SQL-based Kinesis Data
         * Analytics application's configuration. Kinesis Data Analytics will no longer
         * write data from the corresponding in-application stream to the external output
         * destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationOutput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutputOutcomeCallable DeleteApplicationOutputCallable(const Model::DeleteApplicationOutputRequest& request) const;

        /**
         * <p>Deletes the output destination configuration from your SQL-based Kinesis Data
         * Analytics application's configuration. Kinesis Data Analytics will no longer
         * write data from the corresponding in-application stream to the external output
         * destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationOutput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationOutputAsync(const Model::DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a reference data source configuration from the specified SQL-based
         * Kinesis Data Analytics application's configuration.</p> <p>If the application is
         * running, Kinesis Data Analytics immediately removes the in-application table
         * that you created using the <a>AddApplicationReferenceDataSource</a> operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationReferenceDataSourceOutcome DeleteApplicationReferenceDataSource(const Model::DeleteApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Deletes a reference data source configuration from the specified SQL-based
         * Kinesis Data Analytics application's configuration.</p> <p>If the application is
         * running, Kinesis Data Analytics immediately removes the in-application table
         * that you created using the <a>AddApplicationReferenceDataSource</a> operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationReferenceDataSourceOutcomeCallable DeleteApplicationReferenceDataSourceCallable(const Model::DeleteApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Deletes a reference data source configuration from the specified SQL-based
         * Kinesis Data Analytics application's configuration.</p> <p>If the application is
         * running, Kinesis Data Analytics immediately removes the in-application table
         * that you created using the <a>AddApplicationReferenceDataSource</a> operation.
         * </p><p><h3>See Also:</h3>   <a
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
         * <p>Removes a VPC configuration from a Kinesis Data Analytics
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationVpcConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationVpcConfigurationOutcome DeleteApplicationVpcConfiguration(const Model::DeleteApplicationVpcConfigurationRequest& request) const;

        /**
         * <p>Removes a VPC configuration from a Kinesis Data Analytics
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationVpcConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationVpcConfigurationOutcomeCallable DeleteApplicationVpcConfigurationCallable(const Model::DeleteApplicationVpcConfigurationRequest& request) const;

        /**
         * <p>Removes a VPC configuration from a Kinesis Data Analytics
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationVpcConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationVpcConfigurationAsync(const Model::DeleteApplicationVpcConfigurationRequest& request, const DeleteApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific Kinesis Data Analytics application.</p>
         * <p>If you want to retrieve a list of all applications in your account, use the
         * <a>ListApplications</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * <p>Returns information about a specific Kinesis Data Analytics application.</p>
         * <p>If you want to retrieve a list of all applications in your account, use the
         * <a>ListApplications</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request) const;

        /**
         * <p>Returns information about a specific Kinesis Data Analytics application.</p>
         * <p>If you want to retrieve a list of all applications in your account, use the
         * <a>ListApplications</a> operation.</p><p><h3>See Also:</h3>   <a
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
         * <p>Provides a detailed description of a specified version of the application. To
         * see a list of all the versions of an application, invoke the
         * <a>ListApplicationVersions</a> operation.</p>  <p>This operation is
         * supported only for Amazon Kinesis Data Analytics for Apache Flink.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationVersionOutcome DescribeApplicationVersion(const Model::DescribeApplicationVersionRequest& request) const;

        /**
         * <p>Provides a detailed description of a specified version of the application. To
         * see a list of all the versions of an application, invoke the
         * <a>ListApplicationVersions</a> operation.</p>  <p>This operation is
         * supported only for Amazon Kinesis Data Analytics for Apache Flink.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplicationVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationVersionOutcomeCallable DescribeApplicationVersionCallable(const Model::DescribeApplicationVersionRequest& request) const;

        /**
         * <p>Provides a detailed description of a specified version of the application. To
         * see a list of all the versions of an application, invoke the
         * <a>ListApplicationVersions</a> operation.</p>  <p>This operation is
         * supported only for Amazon Kinesis Data Analytics for Apache Flink.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplicationVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationVersionAsync(const Model::DescribeApplicationVersionRequest& request, const DescribeApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Infers a schema for a SQL-based Kinesis Data Analytics application by
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
         * <p>Infers a schema for a SQL-based Kinesis Data Analytics application by
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
         * <p>Infers a schema for a SQL-based Kinesis Data Analytics application by
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
         * <p>Lists all the versions for the specified application, including versions that
         * were rolled back. The response also includes a summary of the configuration
         * associated with each version.</p> <p>To get the complete description of a
         * specific application version, invoke the <a>DescribeApplicationVersion</a>
         * operation.</p>  <p>This operation is supported only for Amazon Kinesis
         * Data Analytics for Apache Flink.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplicationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationVersionsOutcome ListApplicationVersions(const Model::ListApplicationVersionsRequest& request) const;

        /**
         * <p>Lists all the versions for the specified application, including versions that
         * were rolled back. The response also includes a summary of the configuration
         * associated with each version.</p> <p>To get the complete description of a
         * specific application version, invoke the <a>DescribeApplicationVersion</a>
         * operation.</p>  <p>This operation is supported only for Amazon Kinesis
         * Data Analytics for Apache Flink.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplicationVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationVersionsOutcomeCallable ListApplicationVersionsCallable(const Model::ListApplicationVersionsRequest& request) const;

        /**
         * <p>Lists all the versions for the specified application, including versions that
         * were rolled back. The response also includes a summary of the configuration
         * associated with each version.</p> <p>To get the complete description of a
         * specific application version, invoke the <a>DescribeApplicationVersion</a>
         * operation.</p>  <p>This operation is supported only for Amazon Kinesis
         * Data Analytics for Apache Flink.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplicationVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationVersionsAsync(const Model::ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Kinesis Data Analytics applications in your account. For
         * each application, the response includes the application name, Amazon Resource
         * Name (ARN), and status. </p> <p>If you want detailed information about a
         * specific application, use <a>DescribeApplication</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Returns a list of Kinesis Data Analytics applications in your account. For
         * each application, the response includes the application name, Amazon Resource
         * Name (ARN), and status. </p> <p>If you want detailed information about a
         * specific application, use <a>DescribeApplication</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Returns a list of Kinesis Data Analytics applications in your account. For
         * each application, the response includes the application name, Amazon Resource
         * Name (ARN), and status. </p> <p>If you want detailed information about a
         * specific application, use <a>DescribeApplication</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the application. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the application. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the application. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reverts the application to the previous running version. You can roll back an
         * application if you suspect it is stuck in a transient status. </p> <p>You can
         * roll back an application only if it is in the <code>UPDATING</code> or
         * <code>AUTOSCALING</code> status.</p> <p>When you rollback an application, it
         * loads state data from the last successful snapshot. If the application has no
         * snapshots, Kinesis Data Analytics rejects the rollback request.</p> <p>This
         * action is not supported for Kinesis Data Analytics for SQL
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RollbackApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::RollbackApplicationOutcome RollbackApplication(const Model::RollbackApplicationRequest& request) const;

        /**
         * <p>Reverts the application to the previous running version. You can roll back an
         * application if you suspect it is stuck in a transient status. </p> <p>You can
         * roll back an application only if it is in the <code>UPDATING</code> or
         * <code>AUTOSCALING</code> status.</p> <p>When you rollback an application, it
         * loads state data from the last successful snapshot. If the application has no
         * snapshots, Kinesis Data Analytics rejects the rollback request.</p> <p>This
         * action is not supported for Kinesis Data Analytics for SQL
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RollbackApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RollbackApplicationOutcomeCallable RollbackApplicationCallable(const Model::RollbackApplicationRequest& request) const;

        /**
         * <p>Reverts the application to the previous running version. You can roll back an
         * application if you suspect it is stuck in a transient status. </p> <p>You can
         * roll back an application only if it is in the <code>UPDATING</code> or
         * <code>AUTOSCALING</code> status.</p> <p>When you rollback an application, it
         * loads state data from the last successful snapshot. If the application has no
         * snapshots, Kinesis Data Analytics rejects the rollback request.</p> <p>This
         * action is not supported for Kinesis Data Analytics for SQL
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RollbackApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RollbackApplicationAsync(const Model::RollbackApplicationRequest& request, const RollbackApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified Kinesis Data Analytics application. After creating an
         * application, you must exclusively call this operation to start your
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StartApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartApplicationOutcome StartApplication(const Model::StartApplicationRequest& request) const;

        /**
         * <p>Starts the specified Kinesis Data Analytics application. After creating an
         * application, you must exclusively call this operation to start your
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StartApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartApplicationOutcomeCallable StartApplicationCallable(const Model::StartApplicationRequest& request) const;

        /**
         * <p>Starts the specified Kinesis Data Analytics application. After creating an
         * application, you must exclusively call this operation to start your
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StartApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartApplicationAsync(const Model::StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the application from processing data. You can stop an application only
         * if it is in the running status, unless you set the <code>Force</code> parameter
         * to <code>true</code>.</p> <p>You can use the <a>DescribeApplication</a>
         * operation to find the application status. </p> <p>Kinesis Data Analytics takes a
         * snapshot when the application is stopped, unless <code>Force</code> is set to
         * <code>true</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StopApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopApplicationOutcome StopApplication(const Model::StopApplicationRequest& request) const;

        /**
         * <p>Stops the application from processing data. You can stop an application only
         * if it is in the running status, unless you set the <code>Force</code> parameter
         * to <code>true</code>.</p> <p>You can use the <a>DescribeApplication</a>
         * operation to find the application status. </p> <p>Kinesis Data Analytics takes a
         * snapshot when the application is stopped, unless <code>Force</code> is set to
         * <code>true</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StopApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopApplicationOutcomeCallable StopApplicationCallable(const Model::StopApplicationRequest& request) const;

        /**
         * <p>Stops the application from processing data. You can stop an application only
         * if it is in the running status, unless you set the <code>Force</code> parameter
         * to <code>true</code>.</p> <p>You can use the <a>DescribeApplication</a>
         * operation to find the application status. </p> <p>Kinesis Data Analytics takes a
         * snapshot when the application is stopped, unless <code>Force</code> is set to
         * <code>true</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StopApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopApplicationAsync(const Model::StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more key-value tags to a Kinesis Data Analytics application. Note
         * that the maximum number of application tags includes system tags. The maximum
         * number of user-defined application tags is 50. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more key-value tags to a Kinesis Data Analytics application. Note
         * that the maximum number of application tags includes system tags. The maximum
         * number of user-defined application tags is 50. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more key-value tags to a Kinesis Data Analytics application. Note
         * that the maximum number of application tags includes system tags. The maximum
         * number of user-defined application tags is 50. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from a Kinesis Data Analytics application. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a Kinesis Data Analytics application. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a Kinesis Data Analytics application. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Kinesis Data Analytics application. Using this operation,
         * you can update application code, input configuration, and output configuration.
         * </p> <p>Kinesis Data Analytics updates the <code>ApplicationVersionId</code>
         * each time you update your application. </p>  <p>You cannot update the
         * <code>RuntimeEnvironment</code> of an existing application. If you need to
         * update an application's <code>RuntimeEnvironment</code>, you must delete the
         * application and create it again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates an existing Kinesis Data Analytics application. Using this operation,
         * you can update application code, input configuration, and output configuration.
         * </p> <p>Kinesis Data Analytics updates the <code>ApplicationVersionId</code>
         * each time you update your application. </p>  <p>You cannot update the
         * <code>RuntimeEnvironment</code> of an existing application. If you need to
         * update an application's <code>RuntimeEnvironment</code>, you must delete the
         * application and create it again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates an existing Kinesis Data Analytics application. Using this operation,
         * you can update application code, input configuration, and output configuration.
         * </p> <p>Kinesis Data Analytics updates the <code>ApplicationVersionId</code>
         * each time you update your application. </p>  <p>You cannot update the
         * <code>RuntimeEnvironment</code> of an existing application. If you need to
         * update an application's <code>RuntimeEnvironment</code>, you must delete the
         * application and create it again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the maintenance configuration of the Kinesis Data Analytics
         * application. </p> <p>You can invoke this operation on an application that is in
         * one of the two following states: <code>READY</code> or <code>RUNNING</code>. If
         * you invoke it when the application is in a state other than these two states, it
         * throws a <code>ResourceInUseException</code>. The service makes use of the
         * updated configuration the next time it schedules maintenance for the
         * application. If you invoke this operation after the service schedules
         * maintenance, the service will apply the configuration update the next time it
         * schedules maintenance for the application. This means that you might not see the
         * maintenance configuration update applied to the maintenance process that follows
         * a successful invocation of this operation, but to the following maintenance
         * process instead.</p> <p>To see the current maintenance configuration of your
         * application, invoke the <a>DescribeApplication</a> operation.</p> <p>For
         * information about application maintenance, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/maintenance.html">Kinesis
         * Data Analytics for Apache Flink Maintenance</a>.</p>  <p>This operation is
         * supported only for Amazon Kinesis Data Analytics for Apache Flink.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UpdateApplicationMaintenanceConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationMaintenanceConfigurationOutcome UpdateApplicationMaintenanceConfiguration(const Model::UpdateApplicationMaintenanceConfigurationRequest& request) const;

        /**
         * <p>Updates the maintenance configuration of the Kinesis Data Analytics
         * application. </p> <p>You can invoke this operation on an application that is in
         * one of the two following states: <code>READY</code> or <code>RUNNING</code>. If
         * you invoke it when the application is in a state other than these two states, it
         * throws a <code>ResourceInUseException</code>. The service makes use of the
         * updated configuration the next time it schedules maintenance for the
         * application. If you invoke this operation after the service schedules
         * maintenance, the service will apply the configuration update the next time it
         * schedules maintenance for the application. This means that you might not see the
         * maintenance configuration update applied to the maintenance process that follows
         * a successful invocation of this operation, but to the following maintenance
         * process instead.</p> <p>To see the current maintenance configuration of your
         * application, invoke the <a>DescribeApplication</a> operation.</p> <p>For
         * information about application maintenance, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/maintenance.html">Kinesis
         * Data Analytics for Apache Flink Maintenance</a>.</p>  <p>This operation is
         * supported only for Amazon Kinesis Data Analytics for Apache Flink.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UpdateApplicationMaintenanceConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationMaintenanceConfigurationOutcomeCallable UpdateApplicationMaintenanceConfigurationCallable(const Model::UpdateApplicationMaintenanceConfigurationRequest& request) const;

        /**
         * <p>Updates the maintenance configuration of the Kinesis Data Analytics
         * application. </p> <p>You can invoke this operation on an application that is in
         * one of the two following states: <code>READY</code> or <code>RUNNING</code>. If
         * you invoke it when the application is in a state other than these two states, it
         * throws a <code>ResourceInUseException</code>. The service makes use of the
         * updated configuration the next time it schedules maintenance for the
         * application. If you invoke this operation after the service schedules
         * maintenance, the service will apply the configuration update the next time it
         * schedules maintenance for the application. This means that you might not see the
         * maintenance configuration update applied to the maintenance process that follows
         * a successful invocation of this operation, but to the following maintenance
         * process instead.</p> <p>To see the current maintenance configuration of your
         * application, invoke the <a>DescribeApplication</a> operation.</p> <p>For
         * information about application maintenance, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/maintenance.html">Kinesis
         * Data Analytics for Apache Flink Maintenance</a>.</p>  <p>This operation is
         * supported only for Amazon Kinesis Data Analytics for Apache Flink.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UpdateApplicationMaintenanceConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationMaintenanceConfigurationAsync(const Model::UpdateApplicationMaintenanceConfigurationRequest& request, const UpdateApplicationMaintenanceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddApplicationCloudWatchLoggingOptionAsyncHelper(const Model::AddApplicationCloudWatchLoggingOptionRequest& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddApplicationInputAsyncHelper(const Model::AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddApplicationInputProcessingConfigurationAsyncHelper(const Model::AddApplicationInputProcessingConfigurationRequest& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddApplicationOutputAsyncHelper(const Model::AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddApplicationReferenceDataSourceAsyncHelper(const Model::AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddApplicationVpcConfigurationAsyncHelper(const Model::AddApplicationVpcConfigurationRequest& request, const AddApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationPresignedUrlAsyncHelper(const Model::CreateApplicationPresignedUrlRequest& request, const CreateApplicationPresignedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationSnapshotAsyncHelper(const Model::CreateApplicationSnapshotRequest& request, const CreateApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationCloudWatchLoggingOptionAsyncHelper(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationInputProcessingConfigurationAsyncHelper(const Model::DeleteApplicationInputProcessingConfigurationRequest& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationOutputAsyncHelper(const Model::DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationReferenceDataSourceAsyncHelper(const Model::DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationSnapshotAsyncHelper(const Model::DeleteApplicationSnapshotRequest& request, const DeleteApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationVpcConfigurationAsyncHelper(const Model::DeleteApplicationVpcConfigurationRequest& request, const DeleteApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationAsyncHelper(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationSnapshotAsyncHelper(const Model::DescribeApplicationSnapshotRequest& request, const DescribeApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationVersionAsyncHelper(const Model::DescribeApplicationVersionRequest& request, const DescribeApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DiscoverInputSchemaAsyncHelper(const Model::DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationSnapshotsAsyncHelper(const Model::ListApplicationSnapshotsRequest& request, const ListApplicationSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationVersionsAsyncHelper(const Model::ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RollbackApplicationAsyncHelper(const Model::RollbackApplicationRequest& request, const RollbackApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartApplicationAsyncHelper(const Model::StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopApplicationAsyncHelper(const Model::StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationMaintenanceConfigurationAsyncHelper(const Model::UpdateApplicationMaintenanceConfigurationRequest& request, const UpdateApplicationMaintenanceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace KinesisAnalyticsV2
} // namespace Aws
