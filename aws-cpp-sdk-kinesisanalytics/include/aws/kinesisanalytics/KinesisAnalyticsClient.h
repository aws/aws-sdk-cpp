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
#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalytics/model/AddApplicationInputResult.h>
#include <aws/kinesisanalytics/model/AddApplicationOutputResult.h>
#include <aws/kinesisanalytics/model/AddApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalytics/model/CreateApplicationResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationOutputResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalytics/model/DescribeApplicationResult.h>
#include <aws/kinesisanalytics/model/DiscoverInputSchemaResult.h>
#include <aws/kinesisanalytics/model/ListApplicationsResult.h>
#include <aws/kinesisanalytics/model/StartApplicationResult.h>
#include <aws/kinesisanalytics/model/StopApplicationResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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
        class AddApplicationInputRequest;
        class AddApplicationOutputRequest;
        class AddApplicationReferenceDataSourceRequest;
        class CreateApplicationRequest;
        class DeleteApplicationRequest;
        class DeleteApplicationOutputRequest;
        class DeleteApplicationReferenceDataSourceRequest;
        class DescribeApplicationRequest;
        class DiscoverInputSchemaRequest;
        class ListApplicationsRequest;
        class StartApplicationRequest;
        class StopApplicationRequest;
        class UpdateApplicationRequest;

        typedef Aws::Utils::Outcome<AddApplicationInputResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> AddApplicationInputOutcome;
        typedef Aws::Utils::Outcome<AddApplicationOutputResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> AddApplicationOutputOutcome;
        typedef Aws::Utils::Outcome<AddApplicationReferenceDataSourceResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> AddApplicationReferenceDataSourceOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationOutputResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DeleteApplicationOutputOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationReferenceDataSourceResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DeleteApplicationReferenceDataSourceOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DescribeApplicationOutcome;
        typedef Aws::Utils::Outcome<DiscoverInputSchemaResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> DiscoverInputSchemaOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<StartApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> StartApplicationOutcome;
        typedef Aws::Utils::Outcome<StopApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> StopApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, Aws::Client::AWSError<KinesisAnalyticsErrors>> UpdateApplicationOutcome;

        typedef std::future<AddApplicationInputOutcome> AddApplicationInputOutcomeCallable;
        typedef std::future<AddApplicationOutputOutcome> AddApplicationOutputOutcomeCallable;
        typedef std::future<AddApplicationReferenceDataSourceOutcome> AddApplicationReferenceDataSourceOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteApplicationOutputOutcome> DeleteApplicationOutputOutcomeCallable;
        typedef std::future<DeleteApplicationReferenceDataSourceOutcome> DeleteApplicationReferenceDataSourceOutcomeCallable;
        typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
        typedef std::future<DiscoverInputSchemaOutcome> DiscoverInputSchemaOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
        typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
} // namespace Model

  class KinesisAnalyticsClient;

    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationInputRequest&, const Model::AddApplicationInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationInputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationOutputRequest&, const Model::AddApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::AddApplicationReferenceDataSourceRequest&, const Model::AddApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationOutputRequest&, const Model::DeleteApplicationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationOutputResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DeleteApplicationReferenceDataSourceRequest&, const Model::DeleteApplicationReferenceDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationReferenceDataSourceResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::DiscoverInputSchemaRequest&, const Model::DiscoverInputSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DiscoverInputSchemaResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::StartApplicationRequest&, const Model::StartApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::StopApplicationRequest&, const Model::StopApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopApplicationResponseReceivedHandler;
    typedef std::function<void(const KinesisAnalyticsClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;

  class AWS_KINESISANALYTICS_API KinesisAnalyticsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisAnalyticsClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~KinesisAnalyticsClient();

        /**
         * <p> Adds a streaming source to your Amazon Kinesis application. For conceptual
         * information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. </p> <p>You can add a streaming source either when you
         * create an application or you can use this operation to add a streaming source
         * after you create an application. For more information, see
         * <a>CreateApplication</a>.</p> <p>Any configuration update, including adding a
         * streaming source using this operation, results in a new version of the
         * application. You can use the <a>DescribeApplication</a> operation to find the
         * current application version. </p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:AddApplicationInput</code> action.</p>
         */
        virtual Model::AddApplicationInputOutcome AddApplicationInput(const Model::AddApplicationInputRequest& request) const;

        /**
         * <p> Adds a streaming source to your Amazon Kinesis application. For conceptual
         * information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. </p> <p>You can add a streaming source either when you
         * create an application or you can use this operation to add a streaming source
         * after you create an application. For more information, see
         * <a>CreateApplication</a>.</p> <p>Any configuration update, including adding a
         * streaming source using this operation, results in a new version of the
         * application. You can use the <a>DescribeApplication</a> operation to find the
         * current application version. </p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:AddApplicationInput</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationInputOutcomeCallable AddApplicationInputCallable(const Model::AddApplicationInputRequest& request) const;

        /**
         * <p> Adds a streaming source to your Amazon Kinesis application. For conceptual
         * information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. </p> <p>You can add a streaming source either when you
         * create an application or you can use this operation to add a streaming source
         * after you create an application. For more information, see
         * <a>CreateApplication</a>.</p> <p>Any configuration update, including adding a
         * streaming source using this operation, results in a new version of the
         * application. You can use the <a>DescribeApplication</a> operation to find the
         * current application version. </p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:AddApplicationInput</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationInputAsync(const Model::AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an external destination to your Amazon Kinesis Analytics
         * application.</p> <p>If you want Amazon Kinesis Analytics to deliver data from an
         * in-application stream within your application to an external destination (such
         * as an Amazon Kinesis stream or a Firehose delivery stream), you add the relevant
         * configuration to your application using this operation. You can configure one or
         * more outputs for your application. Each output configuration maps an
         * in-application stream and an external destination.</p> <p> You can use one of
         * the output configurations to deliver data from your in-application error stream
         * to an external destination so that you can analyze the errors. For conceptual
         * information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Understanding
         * Application Output (Destination)</a>. </p> <p> Note that any configuration
         * update, including adding a streaming source using this operation, results in a
         * new version of the application. You can use the <a>DescribeApplication</a>
         * operation to find the current application version.</p> <p>For the limits on the
         * number of application inputs and outputs you can configure, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action.</p>
         */
        virtual Model::AddApplicationOutputOutcome AddApplicationOutput(const Model::AddApplicationOutputRequest& request) const;

        /**
         * <p>Adds an external destination to your Amazon Kinesis Analytics
         * application.</p> <p>If you want Amazon Kinesis Analytics to deliver data from an
         * in-application stream within your application to an external destination (such
         * as an Amazon Kinesis stream or a Firehose delivery stream), you add the relevant
         * configuration to your application using this operation. You can configure one or
         * more outputs for your application. Each output configuration maps an
         * in-application stream and an external destination.</p> <p> You can use one of
         * the output configurations to deliver data from your in-application error stream
         * to an external destination so that you can analyze the errors. For conceptual
         * information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Understanding
         * Application Output (Destination)</a>. </p> <p> Note that any configuration
         * update, including adding a streaming source using this operation, results in a
         * new version of the application. You can use the <a>DescribeApplication</a>
         * operation to find the current application version.</p> <p>For the limits on the
         * number of application inputs and outputs you can configure, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationOutputOutcomeCallable AddApplicationOutputCallable(const Model::AddApplicationOutputRequest& request) const;

        /**
         * <p>Adds an external destination to your Amazon Kinesis Analytics
         * application.</p> <p>If you want Amazon Kinesis Analytics to deliver data from an
         * in-application stream within your application to an external destination (such
         * as an Amazon Kinesis stream or a Firehose delivery stream), you add the relevant
         * configuration to your application using this operation. You can configure one or
         * more outputs for your application. Each output configuration maps an
         * in-application stream and an external destination.</p> <p> You can use one of
         * the output configurations to deliver data from your in-application error stream
         * to an external destination so that you can analyze the errors. For conceptual
         * information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Understanding
         * Application Output (Destination)</a>. </p> <p> Note that any configuration
         * update, including adding a streaming source using this operation, results in a
         * new version of the application. You can use the <a>DescribeApplication</a>
         * operation to find the current application version.</p> <p>For the limits on the
         * number of application inputs and outputs you can configure, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationOutputAsync(const Model::AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a reference data source to an existing application.</p> <p>Amazon
         * Kinesis Analytics reads reference data (that is, an Amazon S3 object) and
         * creates an in-application table within your application. In the request, you
         * provide the source (S3 bucket name and object key name), name of the
         * in-application table to create, and the necessary mapping information that
         * describes how data in Amazon S3 object maps to columns in the resulting
         * in-application table.</p> <p> For conceptual information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. For the limits on data sources you can add to your
         * application, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
         * </p> <p> This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action. </p>
         */
        virtual Model::AddApplicationReferenceDataSourceOutcome AddApplicationReferenceDataSource(const Model::AddApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Adds a reference data source to an existing application.</p> <p>Amazon
         * Kinesis Analytics reads reference data (that is, an Amazon S3 object) and
         * creates an in-application table within your application. In the request, you
         * provide the source (S3 bucket name and object key name), name of the
         * in-application table to create, and the necessary mapping information that
         * describes how data in Amazon S3 object maps to columns in the resulting
         * in-application table.</p> <p> For conceptual information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. For the limits on data sources you can add to your
         * application, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
         * </p> <p> This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddApplicationReferenceDataSourceOutcomeCallable AddApplicationReferenceDataSourceCallable(const Model::AddApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Adds a reference data source to an existing application.</p> <p>Amazon
         * Kinesis Analytics reads reference data (that is, an Amazon S3 object) and
         * creates an in-application table within your application. In the request, you
         * provide the source (S3 bucket name and object key name), name of the
         * in-application table to create, and the necessary mapping information that
         * describes how data in Amazon S3 object maps to columns in the resulting
         * in-application table.</p> <p> For conceptual information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. For the limits on data sources you can add to your
         * application, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
         * </p> <p> This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddApplicationReferenceDataSourceAsync(const Model::AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates an Amazon Kinesis Analytics application. You can configure each
         * application with one streaming source as input, application code to process the
         * input, and up to five streaming destinations where you want Amazon Kinesis
         * Analytics to write the output data from your application. For an overview, see
         * <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works.html">How
         * it Works</a>. </p> <p>In the input configuration, you map the streaming source
         * to an in-application stream, which you can think of as a constantly updating
         * table. In the mapping, you must provide a schema for the in-application stream
         * and map each data column in the in-application stream to a data element in the
         * streaming source, with the option of renaming, casting and dropping columns as
         * desired.</p> <p>Your application code is one or more SQL statements that read
         * input data, transform it, and generate output. Your application code can create
         * one or more SQL artifacts like SQL streams or pumps.</p> <p>In the output
         * configuration, you can configure the application to write data from
         * in-application streams created in your applications to up to five streaming
         * destinations.</p> <p> To read data from your source stream or write data to
         * destination streams, Amazon Kinesis Analytics needs your permissions. You grant
         * these permissions by creating IAM roles. This operation requires permissions to
         * perform the <code>kinesisanalytics:CreateApplication</code> action. </p> <p> For
         * introductory exercises to create an Amazon Kinesis Analytics application, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/getting-started.html">Getting
         * Started</a>. </p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p> Creates an Amazon Kinesis Analytics application. You can configure each
         * application with one streaming source as input, application code to process the
         * input, and up to five streaming destinations where you want Amazon Kinesis
         * Analytics to write the output data from your application. For an overview, see
         * <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works.html">How
         * it Works</a>. </p> <p>In the input configuration, you map the streaming source
         * to an in-application stream, which you can think of as a constantly updating
         * table. In the mapping, you must provide a schema for the in-application stream
         * and map each data column in the in-application stream to a data element in the
         * streaming source, with the option of renaming, casting and dropping columns as
         * desired.</p> <p>Your application code is one or more SQL statements that read
         * input data, transform it, and generate output. Your application code can create
         * one or more SQL artifacts like SQL streams or pumps.</p> <p>In the output
         * configuration, you can configure the application to write data from
         * in-application streams created in your applications to up to five streaming
         * destinations.</p> <p> To read data from your source stream or write data to
         * destination streams, Amazon Kinesis Analytics needs your permissions. You grant
         * these permissions by creating IAM roles. This operation requires permissions to
         * perform the <code>kinesisanalytics:CreateApplication</code> action. </p> <p> For
         * introductory exercises to create an Amazon Kinesis Analytics application, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/getting-started.html">Getting
         * Started</a>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p> Creates an Amazon Kinesis Analytics application. You can configure each
         * application with one streaming source as input, application code to process the
         * input, and up to five streaming destinations where you want Amazon Kinesis
         * Analytics to write the output data from your application. For an overview, see
         * <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works.html">How
         * it Works</a>. </p> <p>In the input configuration, you map the streaming source
         * to an in-application stream, which you can think of as a constantly updating
         * table. In the mapping, you must provide a schema for the in-application stream
         * and map each data column in the in-application stream to a data element in the
         * streaming source, with the option of renaming, casting and dropping columns as
         * desired.</p> <p>Your application code is one or more SQL statements that read
         * input data, transform it, and generate output. Your application code can create
         * one or more SQL artifacts like SQL streams or pumps.</p> <p>In the output
         * configuration, you can configure the application to write data from
         * in-application streams created in your applications to up to five streaming
         * destinations.</p> <p> To read data from your source stream or write data to
         * destination streams, Amazon Kinesis Analytics needs your permissions. You grant
         * these permissions by creating IAM roles. This operation requires permissions to
         * perform the <code>kinesisanalytics:CreateApplication</code> action. </p> <p> For
         * introductory exercises to create an Amazon Kinesis Analytics application, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/getting-started.html">Getting
         * Started</a>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified application. Amazon Kinesis Analytics halts application
         * execution and deletes the application, including any application artifacts (such
         * as in-application streams, reference table, and application code).</p> <p>This
         * operation requires permissions to perform the
         * <code>kinesisanalytics:DeleteApplication</code> action.</p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes the specified application. Amazon Kinesis Analytics halts application
         * execution and deletes the application, including any application artifacts (such
         * as in-application streams, reference table, and application code).</p> <p>This
         * operation requires permissions to perform the
         * <code>kinesisanalytics:DeleteApplication</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes the specified application. Amazon Kinesis Analytics halts application
         * execution and deletes the application, including any application artifacts (such
         * as in-application streams, reference table, and application code).</p> <p>This
         * operation requires permissions to perform the
         * <code>kinesisanalytics:DeleteApplication</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes output destination configuration from your application configuration.
         * Amazon Kinesis Analytics will no longer write data from the corresponding
         * in-application stream to the external output destination.</p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics:DeleteApplicationOutput</code> action.</p>
         */
        virtual Model::DeleteApplicationOutputOutcome DeleteApplicationOutput(const Model::DeleteApplicationOutputRequest& request) const;

        /**
         * <p>Deletes output destination configuration from your application configuration.
         * Amazon Kinesis Analytics will no longer write data from the corresponding
         * in-application stream to the external output destination.</p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics:DeleteApplicationOutput</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutputOutcomeCallable DeleteApplicationOutputCallable(const Model::DeleteApplicationOutputRequest& request) const;

        /**
         * <p>Deletes output destination configuration from your application configuration.
         * Amazon Kinesis Analytics will no longer write data from the corresponding
         * in-application stream to the external output destination.</p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics:DeleteApplicationOutput</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationOutputAsync(const Model::DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a reference data source configuration from the specified application
         * configuration.</p> <p>If the application is running, Amazon Kinesis Analytics
         * immediately removes the in-application table that you created using the
         * <a>AddApplicationReferenceDataSource</a> operation. </p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics.DeleteApplicationReferenceDataSource</code> action.</p>
         */
        virtual Model::DeleteApplicationReferenceDataSourceOutcome DeleteApplicationReferenceDataSource(const Model::DeleteApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Deletes a reference data source configuration from the specified application
         * configuration.</p> <p>If the application is running, Amazon Kinesis Analytics
         * immediately removes the in-application table that you created using the
         * <a>AddApplicationReferenceDataSource</a> operation. </p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics.DeleteApplicationReferenceDataSource</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationReferenceDataSourceOutcomeCallable DeleteApplicationReferenceDataSourceCallable(const Model::DeleteApplicationReferenceDataSourceRequest& request) const;

        /**
         * <p>Deletes a reference data source configuration from the specified application
         * configuration.</p> <p>If the application is running, Amazon Kinesis Analytics
         * immediately removes the in-application table that you created using the
         * <a>AddApplicationReferenceDataSource</a> operation. </p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics.DeleteApplicationReferenceDataSource</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationReferenceDataSourceAsync(const Model::DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific Amazon Kinesis Analytics
         * application.</p> <p>If you want to retrieve a list of all applications in your
         * account, use the <a>ListApplications</a> operation.</p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics:DescribeApplication</code> action. You can use
         * <code>DescribeApplication</code> to get the current application versionId, which
         * you need to call other operations such as <code>Update</code>. </p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * <p>Returns information about a specific Amazon Kinesis Analytics
         * application.</p> <p>If you want to retrieve a list of all applications in your
         * account, use the <a>ListApplications</a> operation.</p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics:DescribeApplication</code> action. You can use
         * <code>DescribeApplication</code> to get the current application versionId, which
         * you need to call other operations such as <code>Update</code>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request) const;

        /**
         * <p>Returns information about a specific Amazon Kinesis Analytics
         * application.</p> <p>If you want to retrieve a list of all applications in your
         * account, use the <a>ListApplications</a> operation.</p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics:DescribeApplication</code> action. You can use
         * <code>DescribeApplication</code> to get the current application versionId, which
         * you need to call other operations such as <code>Update</code>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Infers a schema by evaluating sample records on the specified streaming
         * source (Amazon Kinesis stream or Amazon Kinesis Firehose delivery stream). In
         * the response, the operation returns the inferred schema and also the sample
         * records that the operation used to infer the schema.</p> <p> You can use the
         * inferred schema when configuring a streaming source for your application. For
         * conceptual information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. Note that when you create an application using the Amazon
         * Kinesis Analytics console, the console uses this operation to infer a schema and
         * show it in the console user interface. </p> <p> This operation requires
         * permissions to perform the <code>kinesisanalytics:DiscoverInputSchema</code>
         * action. </p>
         */
        virtual Model::DiscoverInputSchemaOutcome DiscoverInputSchema(const Model::DiscoverInputSchemaRequest& request) const;

        /**
         * <p>Infers a schema by evaluating sample records on the specified streaming
         * source (Amazon Kinesis stream or Amazon Kinesis Firehose delivery stream). In
         * the response, the operation returns the inferred schema and also the sample
         * records that the operation used to infer the schema.</p> <p> You can use the
         * inferred schema when configuring a streaming source for your application. For
         * conceptual information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. Note that when you create an application using the Amazon
         * Kinesis Analytics console, the console uses this operation to infer a schema and
         * show it in the console user interface. </p> <p> This operation requires
         * permissions to perform the <code>kinesisanalytics:DiscoverInputSchema</code>
         * action. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DiscoverInputSchemaOutcomeCallable DiscoverInputSchemaCallable(const Model::DiscoverInputSchemaRequest& request) const;

        /**
         * <p>Infers a schema by evaluating sample records on the specified streaming
         * source (Amazon Kinesis stream or Amazon Kinesis Firehose delivery stream). In
         * the response, the operation returns the inferred schema and also the sample
         * records that the operation used to infer the schema.</p> <p> You can use the
         * inferred schema when configuring a streaming source for your application. For
         * conceptual information, see <a
         * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. Note that when you create an application using the Amazon
         * Kinesis Analytics console, the console uses this operation to infer a schema and
         * show it in the console user interface. </p> <p> This operation requires
         * permissions to perform the <code>kinesisanalytics:DiscoverInputSchema</code>
         * action. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DiscoverInputSchemaAsync(const Model::DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Amazon Kinesis Analytics applications in your account. For
         * each application, the response includes the application name, Amazon Resource
         * Name (ARN), and status. If the response returns the
         * <code>HasMoreApplications</code> value as true, you can send another request by
         * adding the <code>ExclusiveStartApplicationName</code> in the request body, and
         * set the value of this to the last application name from the previous response.
         * </p> <p>If you want detailed information about a specific application, use
         * <a>DescribeApplication</a>.</p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:ListApplications</code> action.</p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Returns a list of Amazon Kinesis Analytics applications in your account. For
         * each application, the response includes the application name, Amazon Resource
         * Name (ARN), and status. If the response returns the
         * <code>HasMoreApplications</code> value as true, you can send another request by
         * adding the <code>ExclusiveStartApplicationName</code> in the request body, and
         * set the value of this to the last application name from the previous response.
         * </p> <p>If you want detailed information about a specific application, use
         * <a>DescribeApplication</a>.</p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:ListApplications</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Returns a list of Amazon Kinesis Analytics applications in your account. For
         * each application, the response includes the application name, Amazon Resource
         * Name (ARN), and status. If the response returns the
         * <code>HasMoreApplications</code> value as true, you can send another request by
         * adding the <code>ExclusiveStartApplicationName</code> in the request body, and
         * set the value of this to the last application name from the previous response.
         * </p> <p>If you want detailed information about a specific application, use
         * <a>DescribeApplication</a>.</p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:ListApplications</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified Amazon Kinesis Analytics application. After creating an
         * application, you must exclusively call this operation to start your
         * application.</p> <p>After the application starts, it begins consuming the input
         * data, processes it, and writes the output to the configured destination.</p> <p>
         * The application status must be <code>READY</code> for you to start an
         * application. You can get the application status in the console or using the
         * <a>DescribeApplication</a> operation.</p> <p>After you start the application,
         * you can stop the application from processing the input by calling the
         * <a>StopApplication</a> operation.</p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:StartApplication</code> action.</p>
         */
        virtual Model::StartApplicationOutcome StartApplication(const Model::StartApplicationRequest& request) const;

        /**
         * <p>Starts the specified Amazon Kinesis Analytics application. After creating an
         * application, you must exclusively call this operation to start your
         * application.</p> <p>After the application starts, it begins consuming the input
         * data, processes it, and writes the output to the configured destination.</p> <p>
         * The application status must be <code>READY</code> for you to start an
         * application. You can get the application status in the console or using the
         * <a>DescribeApplication</a> operation.</p> <p>After you start the application,
         * you can stop the application from processing the input by calling the
         * <a>StopApplication</a> operation.</p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:StartApplication</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartApplicationOutcomeCallable StartApplicationCallable(const Model::StartApplicationRequest& request) const;

        /**
         * <p>Starts the specified Amazon Kinesis Analytics application. After creating an
         * application, you must exclusively call this operation to start your
         * application.</p> <p>After the application starts, it begins consuming the input
         * data, processes it, and writes the output to the configured destination.</p> <p>
         * The application status must be <code>READY</code> for you to start an
         * application. You can get the application status in the console or using the
         * <a>DescribeApplication</a> operation.</p> <p>After you start the application,
         * you can stop the application from processing the input by calling the
         * <a>StopApplication</a> operation.</p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:StartApplication</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartApplicationAsync(const Model::StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the application from processing input data. You can stop an application
         * only if it is in the running state. You can use the <a>DescribeApplication</a>
         * operation to find the application state. After the application is stopped,
         * Amazon Kinesis Analytics stops reading data from the input, the application
         * stops processing data, and there is no output written to the destination. </p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:StopApplication</code> action.</p>
         */
        virtual Model::StopApplicationOutcome StopApplication(const Model::StopApplicationRequest& request) const;

        /**
         * <p>Stops the application from processing input data. You can stop an application
         * only if it is in the running state. You can use the <a>DescribeApplication</a>
         * operation to find the application state. After the application is stopped,
         * Amazon Kinesis Analytics stops reading data from the input, the application
         * stops processing data, and there is no output written to the destination. </p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:StopApplication</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopApplicationOutcomeCallable StopApplicationCallable(const Model::StopApplicationRequest& request) const;

        /**
         * <p>Stops the application from processing input data. You can stop an application
         * only if it is in the running state. You can use the <a>DescribeApplication</a>
         * operation to find the application state. After the application is stopped,
         * Amazon Kinesis Analytics stops reading data from the input, the application
         * stops processing data, and there is no output written to the destination. </p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:StopApplication</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopApplicationAsync(const Model::StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Kinesis Analytics application. Using this API, you can
         * update application code, input configuration, and output configuration. </p>
         * <p>Note that Kinesis Analytics updates the
         * <code>CurrentApplicationVersionId</code> each time you update your application.
         * </p> <p>This opeation requires permission for the
         * <code>kinesisanalytics:UpdateApplication</code> action.</p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates an existing Kinesis Analytics application. Using this API, you can
         * update application code, input configuration, and output configuration. </p>
         * <p>Note that Kinesis Analytics updates the
         * <code>CurrentApplicationVersionId</code> each time you update your application.
         * </p> <p>This opeation requires permission for the
         * <code>kinesisanalytics:UpdateApplication</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates an existing Kinesis Analytics application. Using this API, you can
         * update application code, input configuration, and output configuration. </p>
         * <p>Note that Kinesis Analytics updates the
         * <code>CurrentApplicationVersionId</code> each time you update your application.
         * </p> <p>This opeation requires permission for the
         * <code>kinesisanalytics:UpdateApplication</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddApplicationInputAsyncHelper(const Model::AddApplicationInputRequest& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddApplicationOutputAsyncHelper(const Model::AddApplicationOutputRequest& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddApplicationReferenceDataSourceAsyncHelper(const Model::AddApplicationReferenceDataSourceRequest& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationOutputAsyncHelper(const Model::DeleteApplicationOutputRequest& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationReferenceDataSourceAsyncHelper(const Model::DeleteApplicationReferenceDataSourceRequest& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationAsyncHelper(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DiscoverInputSchemaAsyncHelper(const Model::DiscoverInputSchemaRequest& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartApplicationAsyncHelper(const Model::StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopApplicationAsyncHelper(const Model::StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace KinesisAnalytics
} // namespace Aws
