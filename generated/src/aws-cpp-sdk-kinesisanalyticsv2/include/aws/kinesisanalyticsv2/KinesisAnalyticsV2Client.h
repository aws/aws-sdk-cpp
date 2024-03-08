/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2ServiceClientModel.h>

namespace Aws
{
namespace KinesisAnalyticsV2
{
  /**
   * <p>Amazon Kinesis Data Analytics is a fully managed service that you can use to
   * process and analyze streaming data using Java, SQL, or Scala. The service
   * enables you to quickly author and run Java, SQL, or Scala code against streaming
   * sources to perform time series analytics, feed real-time dashboards, and create
   * real-time metrics.</p>
   */
  class AWS_KINESISANALYTICSV2_API KinesisAnalyticsV2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KinesisAnalyticsV2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef KinesisAnalyticsV2ClientConfiguration ClientConfigurationType;
      typedef KinesisAnalyticsV2EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsV2Client(const Aws::KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration& clientConfiguration = Aws::KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration(),
                                 std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsV2Client(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration& clientConfiguration = Aws::KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisAnalyticsV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration& clientConfiguration = Aws::KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsV2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsV2Client(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisAnalyticsV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KinesisAnalyticsV2Client();

        /**
         * <p>Adds an Amazon CloudWatch log stream to monitor application configuration
         * errors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/AddApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationCloudWatchLoggingOptionOutcome AddApplicationCloudWatchLoggingOption(const Model::AddApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * A Callable wrapper for AddApplicationCloudWatchLoggingOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddApplicationCloudWatchLoggingOptionRequestT = Model::AddApplicationCloudWatchLoggingOptionRequest>
        Model::AddApplicationCloudWatchLoggingOptionOutcomeCallable AddApplicationCloudWatchLoggingOptionCallable(const AddApplicationCloudWatchLoggingOptionRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationCloudWatchLoggingOption, request);
        }

        /**
         * An Async wrapper for AddApplicationCloudWatchLoggingOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddApplicationCloudWatchLoggingOptionRequestT = Model::AddApplicationCloudWatchLoggingOptionRequest>
        void AddApplicationCloudWatchLoggingOptionAsync(const AddApplicationCloudWatchLoggingOptionRequestT& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationCloudWatchLoggingOption, request, handler, context);
        }

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
         * A Callable wrapper for AddApplicationInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddApplicationInputRequestT = Model::AddApplicationInputRequest>
        Model::AddApplicationInputOutcomeCallable AddApplicationInputCallable(const AddApplicationInputRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationInput, request);
        }

        /**
         * An Async wrapper for AddApplicationInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddApplicationInputRequestT = Model::AddApplicationInputRequest>
        void AddApplicationInputAsync(const AddApplicationInputRequestT& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationInput, request, handler, context);
        }

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
         * A Callable wrapper for AddApplicationInputProcessingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddApplicationInputProcessingConfigurationRequestT = Model::AddApplicationInputProcessingConfigurationRequest>
        Model::AddApplicationInputProcessingConfigurationOutcomeCallable AddApplicationInputProcessingConfigurationCallable(const AddApplicationInputProcessingConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationInputProcessingConfiguration, request);
        }

        /**
         * An Async wrapper for AddApplicationInputProcessingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddApplicationInputProcessingConfigurationRequestT = Model::AddApplicationInputProcessingConfigurationRequest>
        void AddApplicationInputProcessingConfigurationAsync(const AddApplicationInputProcessingConfigurationRequestT& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationInputProcessingConfiguration, request, handler, context);
        }

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
         * A Callable wrapper for AddApplicationOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddApplicationOutputRequestT = Model::AddApplicationOutputRequest>
        Model::AddApplicationOutputOutcomeCallable AddApplicationOutputCallable(const AddApplicationOutputRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationOutput, request);
        }

        /**
         * An Async wrapper for AddApplicationOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddApplicationOutputRequestT = Model::AddApplicationOutputRequest>
        void AddApplicationOutputAsync(const AddApplicationOutputRequestT& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationOutput, request, handler, context);
        }

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
         * A Callable wrapper for AddApplicationReferenceDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddApplicationReferenceDataSourceRequestT = Model::AddApplicationReferenceDataSourceRequest>
        Model::AddApplicationReferenceDataSourceOutcomeCallable AddApplicationReferenceDataSourceCallable(const AddApplicationReferenceDataSourceRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationReferenceDataSource, request);
        }

        /**
         * An Async wrapper for AddApplicationReferenceDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddApplicationReferenceDataSourceRequestT = Model::AddApplicationReferenceDataSourceRequest>
        void AddApplicationReferenceDataSourceAsync(const AddApplicationReferenceDataSourceRequestT& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationReferenceDataSource, request, handler, context);
        }

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
         * A Callable wrapper for AddApplicationVpcConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddApplicationVpcConfigurationRequestT = Model::AddApplicationVpcConfigurationRequest>
        Model::AddApplicationVpcConfigurationOutcomeCallable AddApplicationVpcConfigurationCallable(const AddApplicationVpcConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationVpcConfiguration, request);
        }

        /**
         * An Async wrapper for AddApplicationVpcConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddApplicationVpcConfigurationRequestT = Model::AddApplicationVpcConfigurationRequest>
        void AddApplicationVpcConfigurationAsync(const AddApplicationVpcConfigurationRequestT& request, const AddApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationVpcConfiguration, request, handler, context);
        }

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
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::CreateApplication, request, handler, context);
        }

        /**
         * <p>Creates and returns a URL that you can use to connect to an application's
         * extension.</p> <p>The IAM role or user used to call this API defines the
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
         * A Callable wrapper for CreateApplicationPresignedUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationPresignedUrlRequestT = Model::CreateApplicationPresignedUrlRequest>
        Model::CreateApplicationPresignedUrlOutcomeCallable CreateApplicationPresignedUrlCallable(const CreateApplicationPresignedUrlRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::CreateApplicationPresignedUrl, request);
        }

        /**
         * An Async wrapper for CreateApplicationPresignedUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationPresignedUrlRequestT = Model::CreateApplicationPresignedUrlRequest>
        void CreateApplicationPresignedUrlAsync(const CreateApplicationPresignedUrlRequestT& request, const CreateApplicationPresignedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::CreateApplicationPresignedUrl, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of the application's state data.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CreateApplicationSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationSnapshotOutcome CreateApplicationSnapshot(const Model::CreateApplicationSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateApplicationSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationSnapshotRequestT = Model::CreateApplicationSnapshotRequest>
        Model::CreateApplicationSnapshotOutcomeCallable CreateApplicationSnapshotCallable(const CreateApplicationSnapshotRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::CreateApplicationSnapshot, request);
        }

        /**
         * An Async wrapper for CreateApplicationSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationSnapshotRequestT = Model::CreateApplicationSnapshotRequest>
        void CreateApplicationSnapshotAsync(const CreateApplicationSnapshotRequestT& request, const CreateApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::CreateApplicationSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes the specified application. Kinesis Data Analytics halts application
         * execution and deletes the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon CloudWatch log stream from an Kinesis Data Analytics
         * application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationCloudWatchLoggingOptionOutcome DeleteApplicationCloudWatchLoggingOption(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationCloudWatchLoggingOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationCloudWatchLoggingOptionRequestT = Model::DeleteApplicationCloudWatchLoggingOptionRequest>
        Model::DeleteApplicationCloudWatchLoggingOptionOutcomeCallable DeleteApplicationCloudWatchLoggingOptionCallable(const DeleteApplicationCloudWatchLoggingOptionRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationCloudWatchLoggingOption, request);
        }

        /**
         * An Async wrapper for DeleteApplicationCloudWatchLoggingOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationCloudWatchLoggingOptionRequestT = Model::DeleteApplicationCloudWatchLoggingOptionRequest>
        void DeleteApplicationCloudWatchLoggingOptionAsync(const DeleteApplicationCloudWatchLoggingOptionRequestT& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationCloudWatchLoggingOption, request, handler, context);
        }

        /**
         * <p>Deletes an <a>InputProcessingConfiguration</a> from an input.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationInputProcessingConfigurationOutcome DeleteApplicationInputProcessingConfiguration(const Model::DeleteApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationInputProcessingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationInputProcessingConfigurationRequestT = Model::DeleteApplicationInputProcessingConfigurationRequest>
        Model::DeleteApplicationInputProcessingConfigurationOutcomeCallable DeleteApplicationInputProcessingConfigurationCallable(const DeleteApplicationInputProcessingConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationInputProcessingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteApplicationInputProcessingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationInputProcessingConfigurationRequestT = Model::DeleteApplicationInputProcessingConfigurationRequest>
        void DeleteApplicationInputProcessingConfigurationAsync(const DeleteApplicationInputProcessingConfigurationRequestT& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationInputProcessingConfiguration, request, handler, context);
        }

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
         * A Callable wrapper for DeleteApplicationOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationOutputRequestT = Model::DeleteApplicationOutputRequest>
        Model::DeleteApplicationOutputOutcomeCallable DeleteApplicationOutputCallable(const DeleteApplicationOutputRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationOutput, request);
        }

        /**
         * An Async wrapper for DeleteApplicationOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationOutputRequestT = Model::DeleteApplicationOutputRequest>
        void DeleteApplicationOutputAsync(const DeleteApplicationOutputRequestT& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationOutput, request, handler, context);
        }

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
         * A Callable wrapper for DeleteApplicationReferenceDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationReferenceDataSourceRequestT = Model::DeleteApplicationReferenceDataSourceRequest>
        Model::DeleteApplicationReferenceDataSourceOutcomeCallable DeleteApplicationReferenceDataSourceCallable(const DeleteApplicationReferenceDataSourceRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationReferenceDataSource, request);
        }

        /**
         * An Async wrapper for DeleteApplicationReferenceDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationReferenceDataSourceRequestT = Model::DeleteApplicationReferenceDataSourceRequest>
        void DeleteApplicationReferenceDataSourceAsync(const DeleteApplicationReferenceDataSourceRequestT& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationReferenceDataSource, request, handler, context);
        }

        /**
         * <p>Deletes a snapshot of application state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationSnapshotOutcome DeleteApplicationSnapshot(const Model::DeleteApplicationSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationSnapshotRequestT = Model::DeleteApplicationSnapshotRequest>
        Model::DeleteApplicationSnapshotOutcomeCallable DeleteApplicationSnapshotCallable(const DeleteApplicationSnapshotRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteApplicationSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationSnapshotRequestT = Model::DeleteApplicationSnapshotRequest>
        void DeleteApplicationSnapshotAsync(const DeleteApplicationSnapshotRequestT& request, const DeleteApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationSnapshot, request, handler, context);
        }

        /**
         * <p>Removes a VPC configuration from a Kinesis Data Analytics
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeleteApplicationVpcConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationVpcConfigurationOutcome DeleteApplicationVpcConfiguration(const Model::DeleteApplicationVpcConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationVpcConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationVpcConfigurationRequestT = Model::DeleteApplicationVpcConfigurationRequest>
        Model::DeleteApplicationVpcConfigurationOutcomeCallable DeleteApplicationVpcConfigurationCallable(const DeleteApplicationVpcConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationVpcConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteApplicationVpcConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationVpcConfigurationRequestT = Model::DeleteApplicationVpcConfigurationRequest>
        void DeleteApplicationVpcConfigurationAsync(const DeleteApplicationVpcConfigurationRequestT& request, const DeleteApplicationVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationVpcConfiguration, request, handler, context);
        }

        /**
         * <p>Returns information about a specific Kinesis Data Analytics application.</p>
         * <p>If you want to retrieve a list of all applications in your account, use the
         * <a>ListApplications</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
        Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const DescribeApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::DescribeApplication, request);
        }

        /**
         * An Async wrapper for DescribeApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
        void DescribeApplicationAsync(const DescribeApplicationRequestT& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::DescribeApplication, request, handler, context);
        }

        /**
         * <p>Returns information about a snapshot of application state data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DescribeApplicationSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationSnapshotOutcome DescribeApplicationSnapshot(const Model::DescribeApplicationSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationSnapshotRequestT = Model::DescribeApplicationSnapshotRequest>
        Model::DescribeApplicationSnapshotOutcomeCallable DescribeApplicationSnapshotCallable(const DescribeApplicationSnapshotRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::DescribeApplicationSnapshot, request);
        }

        /**
         * An Async wrapper for DescribeApplicationSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationSnapshotRequestT = Model::DescribeApplicationSnapshotRequest>
        void DescribeApplicationSnapshotAsync(const DescribeApplicationSnapshotRequestT& request, const DescribeApplicationSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::DescribeApplicationSnapshot, request, handler, context);
        }

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
         * A Callable wrapper for DescribeApplicationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationVersionRequestT = Model::DescribeApplicationVersionRequest>
        Model::DescribeApplicationVersionOutcomeCallable DescribeApplicationVersionCallable(const DescribeApplicationVersionRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::DescribeApplicationVersion, request);
        }

        /**
         * An Async wrapper for DescribeApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationVersionRequestT = Model::DescribeApplicationVersionRequest>
        void DescribeApplicationVersionAsync(const DescribeApplicationVersionRequestT& request, const DescribeApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::DescribeApplicationVersion, request, handler, context);
        }

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
         * A Callable wrapper for DiscoverInputSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DiscoverInputSchemaRequestT = Model::DiscoverInputSchemaRequest>
        Model::DiscoverInputSchemaOutcomeCallable DiscoverInputSchemaCallable(const DiscoverInputSchemaRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::DiscoverInputSchema, request);
        }

        /**
         * An Async wrapper for DiscoverInputSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DiscoverInputSchemaRequestT = Model::DiscoverInputSchemaRequest>
        void DiscoverInputSchemaAsync(const DiscoverInputSchemaRequestT& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::DiscoverInputSchema, request, handler, context);
        }

        /**
         * <p>Lists information about the current application snapshots.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplicationSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationSnapshotsOutcome ListApplicationSnapshots(const Model::ListApplicationSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationSnapshotsRequestT = Model::ListApplicationSnapshotsRequest>
        Model::ListApplicationSnapshotsOutcomeCallable ListApplicationSnapshotsCallable(const ListApplicationSnapshotsRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::ListApplicationSnapshots, request);
        }

        /**
         * An Async wrapper for ListApplicationSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationSnapshotsRequestT = Model::ListApplicationSnapshotsRequest>
        void ListApplicationSnapshotsAsync(const ListApplicationSnapshotsRequestT& request, const ListApplicationSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::ListApplicationSnapshots, request, handler, context);
        }

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
         * A Callable wrapper for ListApplicationVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationVersionsRequestT = Model::ListApplicationVersionsRequest>
        Model::ListApplicationVersionsOutcomeCallable ListApplicationVersionsCallable(const ListApplicationVersionsRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::ListApplicationVersions, request);
        }

        /**
         * An Async wrapper for ListApplicationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationVersionsRequestT = Model::ListApplicationVersionsRequest>
        void ListApplicationVersionsAsync(const ListApplicationVersionsRequestT& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::ListApplicationVersions, request, handler, context);
        }

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
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::ListApplications, request, handler, context);
        }

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
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::ListTagsForResource, request, handler, context);
        }

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
         * A Callable wrapper for RollbackApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RollbackApplicationRequestT = Model::RollbackApplicationRequest>
        Model::RollbackApplicationOutcomeCallable RollbackApplicationCallable(const RollbackApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::RollbackApplication, request);
        }

        /**
         * An Async wrapper for RollbackApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RollbackApplicationRequestT = Model::RollbackApplicationRequest>
        void RollbackApplicationAsync(const RollbackApplicationRequestT& request, const RollbackApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::RollbackApplication, request, handler, context);
        }

        /**
         * <p>Starts the specified Kinesis Data Analytics application. After creating an
         * application, you must exclusively call this operation to start your
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/StartApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartApplicationOutcome StartApplication(const Model::StartApplicationRequest& request) const;

        /**
         * A Callable wrapper for StartApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartApplicationRequestT = Model::StartApplicationRequest>
        Model::StartApplicationOutcomeCallable StartApplicationCallable(const StartApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::StartApplication, request);
        }

        /**
         * An Async wrapper for StartApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartApplicationRequestT = Model::StartApplicationRequest>
        void StartApplicationAsync(const StartApplicationRequestT& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::StartApplication, request, handler, context);
        }

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
         * A Callable wrapper for StopApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopApplicationRequestT = Model::StopApplicationRequest>
        Model::StopApplicationOutcomeCallable StopApplicationCallable(const StopApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::StopApplication, request);
        }

        /**
         * An Async wrapper for StopApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopApplicationRequestT = Model::StopApplicationRequest>
        void StopApplicationAsync(const StopApplicationRequestT& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::StopApplication, request, handler, context);
        }

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::TagResource, request, handler, context);
        }

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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::UntagResource, request, handler, context);
        }

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
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::UpdateApplication, request, handler, context);
        }

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
         * A Callable wrapper for UpdateApplicationMaintenanceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationMaintenanceConfigurationRequestT = Model::UpdateApplicationMaintenanceConfigurationRequest>
        Model::UpdateApplicationMaintenanceConfigurationOutcomeCallable UpdateApplicationMaintenanceConfigurationCallable(const UpdateApplicationMaintenanceConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsV2Client::UpdateApplicationMaintenanceConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateApplicationMaintenanceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationMaintenanceConfigurationRequestT = Model::UpdateApplicationMaintenanceConfigurationRequest>
        void UpdateApplicationMaintenanceConfigurationAsync(const UpdateApplicationMaintenanceConfigurationRequestT& request, const UpdateApplicationMaintenanceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsV2Client::UpdateApplicationMaintenanceConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KinesisAnalyticsV2Client>;
      void init(const KinesisAnalyticsV2ClientConfiguration& clientConfiguration);

      KinesisAnalyticsV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace KinesisAnalyticsV2
} // namespace Aws
