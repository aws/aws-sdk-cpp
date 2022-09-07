/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/m2/model/CancelBatchJobExecutionResult.h>
#include <aws/m2/model/CreateApplicationResult.h>
#include <aws/m2/model/CreateDataSetImportTaskResult.h>
#include <aws/m2/model/CreateDeploymentResult.h>
#include <aws/m2/model/CreateEnvironmentResult.h>
#include <aws/m2/model/DeleteApplicationResult.h>
#include <aws/m2/model/DeleteApplicationFromEnvironmentResult.h>
#include <aws/m2/model/DeleteEnvironmentResult.h>
#include <aws/m2/model/GetApplicationResult.h>
#include <aws/m2/model/GetApplicationVersionResult.h>
#include <aws/m2/model/GetBatchJobExecutionResult.h>
#include <aws/m2/model/GetDataSetDetailsResult.h>
#include <aws/m2/model/GetDataSetImportTaskResult.h>
#include <aws/m2/model/GetDeploymentResult.h>
#include <aws/m2/model/GetEnvironmentResult.h>
#include <aws/m2/model/ListApplicationVersionsResult.h>
#include <aws/m2/model/ListApplicationsResult.h>
#include <aws/m2/model/ListBatchJobDefinitionsResult.h>
#include <aws/m2/model/ListBatchJobExecutionsResult.h>
#include <aws/m2/model/ListDataSetImportHistoryResult.h>
#include <aws/m2/model/ListDataSetsResult.h>
#include <aws/m2/model/ListDeploymentsResult.h>
#include <aws/m2/model/ListEngineVersionsResult.h>
#include <aws/m2/model/ListEnvironmentsResult.h>
#include <aws/m2/model/ListTagsForResourceResult.h>
#include <aws/m2/model/StartApplicationResult.h>
#include <aws/m2/model/StartBatchJobResult.h>
#include <aws/m2/model/StopApplicationResult.h>
#include <aws/m2/model/TagResourceResult.h>
#include <aws/m2/model/UntagResourceResult.h>
#include <aws/m2/model/UpdateApplicationResult.h>
#include <aws/m2/model/UpdateEnvironmentResult.h>
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

namespace MainframeModernization
{

namespace Model
{
        class CancelBatchJobExecutionRequest;
        class CreateApplicationRequest;
        class CreateDataSetImportTaskRequest;
        class CreateDeploymentRequest;
        class CreateEnvironmentRequest;
        class DeleteApplicationRequest;
        class DeleteApplicationFromEnvironmentRequest;
        class DeleteEnvironmentRequest;
        class GetApplicationRequest;
        class GetApplicationVersionRequest;
        class GetBatchJobExecutionRequest;
        class GetDataSetDetailsRequest;
        class GetDataSetImportTaskRequest;
        class GetDeploymentRequest;
        class GetEnvironmentRequest;
        class ListApplicationVersionsRequest;
        class ListApplicationsRequest;
        class ListBatchJobDefinitionsRequest;
        class ListBatchJobExecutionsRequest;
        class ListDataSetImportHistoryRequest;
        class ListDataSetsRequest;
        class ListDeploymentsRequest;
        class ListEngineVersionsRequest;
        class ListEnvironmentsRequest;
        class ListTagsForResourceRequest;
        class StartApplicationRequest;
        class StartBatchJobRequest;
        class StopApplicationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateApplicationRequest;
        class UpdateEnvironmentRequest;

        typedef Aws::Utils::Outcome<CancelBatchJobExecutionResult, MainframeModernizationError> CancelBatchJobExecutionOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, MainframeModernizationError> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateDataSetImportTaskResult, MainframeModernizationError> CreateDataSetImportTaskOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentResult, MainframeModernizationError> CreateDeploymentOutcome;
        typedef Aws::Utils::Outcome<CreateEnvironmentResult, MainframeModernizationError> CreateEnvironmentOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationResult, MainframeModernizationError> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationFromEnvironmentResult, MainframeModernizationError> DeleteApplicationFromEnvironmentOutcome;
        typedef Aws::Utils::Outcome<DeleteEnvironmentResult, MainframeModernizationError> DeleteEnvironmentOutcome;
        typedef Aws::Utils::Outcome<GetApplicationResult, MainframeModernizationError> GetApplicationOutcome;
        typedef Aws::Utils::Outcome<GetApplicationVersionResult, MainframeModernizationError> GetApplicationVersionOutcome;
        typedef Aws::Utils::Outcome<GetBatchJobExecutionResult, MainframeModernizationError> GetBatchJobExecutionOutcome;
        typedef Aws::Utils::Outcome<GetDataSetDetailsResult, MainframeModernizationError> GetDataSetDetailsOutcome;
        typedef Aws::Utils::Outcome<GetDataSetImportTaskResult, MainframeModernizationError> GetDataSetImportTaskOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentResult, MainframeModernizationError> GetDeploymentOutcome;
        typedef Aws::Utils::Outcome<GetEnvironmentResult, MainframeModernizationError> GetEnvironmentOutcome;
        typedef Aws::Utils::Outcome<ListApplicationVersionsResult, MainframeModernizationError> ListApplicationVersionsOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, MainframeModernizationError> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListBatchJobDefinitionsResult, MainframeModernizationError> ListBatchJobDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListBatchJobExecutionsResult, MainframeModernizationError> ListBatchJobExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListDataSetImportHistoryResult, MainframeModernizationError> ListDataSetImportHistoryOutcome;
        typedef Aws::Utils::Outcome<ListDataSetsResult, MainframeModernizationError> ListDataSetsOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentsResult, MainframeModernizationError> ListDeploymentsOutcome;
        typedef Aws::Utils::Outcome<ListEngineVersionsResult, MainframeModernizationError> ListEngineVersionsOutcome;
        typedef Aws::Utils::Outcome<ListEnvironmentsResult, MainframeModernizationError> ListEnvironmentsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, MainframeModernizationError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartApplicationResult, MainframeModernizationError> StartApplicationOutcome;
        typedef Aws::Utils::Outcome<StartBatchJobResult, MainframeModernizationError> StartBatchJobOutcome;
        typedef Aws::Utils::Outcome<StopApplicationResult, MainframeModernizationError> StopApplicationOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, MainframeModernizationError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, MainframeModernizationError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, MainframeModernizationError> UpdateApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateEnvironmentResult, MainframeModernizationError> UpdateEnvironmentOutcome;

        typedef std::future<CancelBatchJobExecutionOutcome> CancelBatchJobExecutionOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateDataSetImportTaskOutcome> CreateDataSetImportTaskOutcomeCallable;
        typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
        typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteApplicationFromEnvironmentOutcome> DeleteApplicationFromEnvironmentOutcomeCallable;
        typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
        typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
        typedef std::future<GetApplicationVersionOutcome> GetApplicationVersionOutcomeCallable;
        typedef std::future<GetBatchJobExecutionOutcome> GetBatchJobExecutionOutcomeCallable;
        typedef std::future<GetDataSetDetailsOutcome> GetDataSetDetailsOutcomeCallable;
        typedef std::future<GetDataSetImportTaskOutcome> GetDataSetImportTaskOutcomeCallable;
        typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
        typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
        typedef std::future<ListApplicationVersionsOutcome> ListApplicationVersionsOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListBatchJobDefinitionsOutcome> ListBatchJobDefinitionsOutcomeCallable;
        typedef std::future<ListBatchJobExecutionsOutcome> ListBatchJobExecutionsOutcomeCallable;
        typedef std::future<ListDataSetImportHistoryOutcome> ListDataSetImportHistoryOutcomeCallable;
        typedef std::future<ListDataSetsOutcome> ListDataSetsOutcomeCallable;
        typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
        typedef std::future<ListEngineVersionsOutcome> ListEngineVersionsOutcomeCallable;
        typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
        typedef std::future<StartBatchJobOutcome> StartBatchJobOutcomeCallable;
        typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
        typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
} // namespace Model

  class MainframeModernizationClient;

    typedef std::function<void(const MainframeModernizationClient*, const Model::CancelBatchJobExecutionRequest&, const Model::CancelBatchJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelBatchJobExecutionResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::CreateDataSetImportTaskRequest&, const Model::CreateDataSetImportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSetImportTaskResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::DeleteApplicationFromEnvironmentRequest&, const Model::DeleteApplicationFromEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationFromEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetApplicationVersionRequest&, const Model::GetApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetBatchJobExecutionRequest&, const Model::GetBatchJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBatchJobExecutionResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetDataSetDetailsRequest&, const Model::GetDataSetDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSetDetailsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetDataSetImportTaskRequest&, const Model::GetDataSetImportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSetImportTaskResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListApplicationVersionsRequest&, const Model::ListApplicationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationVersionsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListBatchJobDefinitionsRequest&, const Model::ListBatchJobDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBatchJobDefinitionsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListBatchJobExecutionsRequest&, const Model::ListBatchJobExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBatchJobExecutionsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListDataSetImportHistoryRequest&, const Model::ListDataSetImportHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSetImportHistoryResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListDataSetsRequest&, const Model::ListDataSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSetsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListEngineVersionsRequest&, const Model::ListEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::StartApplicationRequest&, const Model::StartApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::StartBatchJobRequest&, const Model::StartBatchJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBatchJobResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::StopApplicationRequest&, const Model::StopApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;

  /**
   * <p>Amazon Web Services Mainframe Modernization provides tools and resources to
   * help you plan and implement migration and modernization from mainframes to
   * Amazon Web Services managed runtime environments. It provides tools for
   * analyzing existing mainframe applications, developing or updating mainframe
   * applications using COBOL or PL/I, and implementing an automated pipeline for
   * continuous integration and continuous delivery (CI/CD) of the applications.</p>
   */
  class AWS_MAINFRAMEMODERNIZATION_API MainframeModernizationClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MainframeModernizationClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MainframeModernizationClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MainframeModernizationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MainframeModernizationClient();


        /**
         * <p>Cancels the running of a specific batch job execution.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/CancelBatchJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelBatchJobExecutionOutcome CancelBatchJobExecution(const Model::CancelBatchJobExecutionRequest& request) const;

        /**
         * A Callable wrapper for CancelBatchJobExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelBatchJobExecutionOutcomeCallable CancelBatchJobExecutionCallable(const Model::CancelBatchJobExecutionRequest& request) const;

        /**
         * An Async wrapper for CancelBatchJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelBatchJobExecutionAsync(const Model::CancelBatchJobExecutionRequest& request, const CancelBatchJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new application with given parameters. Requires an existing
         * environment and application definition file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a data set import task for a specific application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/CreateDataSetImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSetImportTaskOutcome CreateDataSetImportTask(const Model::CreateDataSetImportTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSetImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSetImportTaskOutcomeCallable CreateDataSetImportTaskCallable(const Model::CreateDataSetImportTaskRequest& request) const;

        /**
         * An Async wrapper for CreateDataSetImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSetImportTaskAsync(const Model::CreateDataSetImportTaskRequest& request, const CreateDataSetImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and starts a deployment to deploy an application into an
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a runtime environment for a given runtime engine.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific application. You cannot delete a running
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific application from a specified environment where it has been
         * previously deployed. You cannot delete an environment using DeleteEnvironment,
         * if any application has ever been deployed to it. This API removes the
         * association of the application with the environment so you can delete the
         * environment smoothly.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DeleteApplicationFromEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationFromEnvironmentOutcome DeleteApplicationFromEnvironment(const Model::DeleteApplicationFromEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationFromEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationFromEnvironmentOutcomeCallable DeleteApplicationFromEnvironmentCallable(const Model::DeleteApplicationFromEnvironmentRequest& request) const;

        /**
         * An Async wrapper for DeleteApplicationFromEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationFromEnvironmentAsync(const Model::DeleteApplicationFromEnvironmentRequest& request, const DeleteApplicationFromEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific environment. The environment cannot contain deployed
         * applications. If it does, you must delete those applications before you delete
         * the environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentAsync(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details of a specific application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationOutcomeCallable GetApplicationCallable(const Model::GetApplicationRequest& request) const;

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about a specific version of a specific
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationVersionOutcome GetApplicationVersion(const Model::GetApplicationVersionRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationVersionOutcomeCallable GetApplicationVersionCallable(const Model::GetApplicationVersionRequest& request) const;

        /**
         * An Async wrapper for GetApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationVersionAsync(const Model::GetApplicationVersionRequest& request, const GetApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of a specific batch job execution for a specific
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetBatchJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBatchJobExecutionOutcome GetBatchJobExecution(const Model::GetBatchJobExecutionRequest& request) const;

        /**
         * A Callable wrapper for GetBatchJobExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBatchJobExecutionOutcomeCallable GetBatchJobExecutionCallable(const Model::GetBatchJobExecutionRequest& request) const;

        /**
         * An Async wrapper for GetBatchJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBatchJobExecutionAsync(const Model::GetBatchJobExecutionRequest& request, const GetBatchJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of a specific data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetDataSetDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSetDetailsOutcome GetDataSetDetails(const Model::GetDataSetDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetDataSetDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataSetDetailsOutcomeCallable GetDataSetDetailsCallable(const Model::GetDataSetDetailsRequest& request) const;

        /**
         * An Async wrapper for GetDataSetDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataSetDetailsAsync(const Model::GetDataSetDetailsRequest& request, const GetDataSetDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status of a data set import task initiated with the
         * <a>CreateDataSetImportTask</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetDataSetImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSetImportTaskOutcome GetDataSetImportTask(const Model::GetDataSetImportTaskRequest& request) const;

        /**
         * A Callable wrapper for GetDataSetImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataSetImportTaskOutcomeCallable GetDataSetImportTaskCallable(const Model::GetDataSetImportTaskRequest& request) const;

        /**
         * An Async wrapper for GetDataSetImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataSetImportTaskAsync(const Model::GetDataSetImportTaskRequest& request, const GetDataSetImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details of a specific deployment with a given deployment
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * A Callable wrapper for GetDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const Model::GetDeploymentRequest& request) const;

        /**
         * An Async wrapper for GetDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a specific runtime environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const Model::GetEnvironmentRequest& request) const;

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnvironmentAsync(const Model::GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the application versions for a specific
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListApplicationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationVersionsOutcome ListApplicationVersions(const Model::ListApplicationVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationVersionsOutcomeCallable ListApplicationVersionsCallable(const Model::ListApplicationVersionsRequest& request) const;

        /**
         * An Async wrapper for ListApplicationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationVersionsAsync(const Model::ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the applications associated with a specific Amazon Web Services
         * account. You can provide the unique identifier of a specific environment in a
         * query parameter to see all applications associated with that
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the available batch job definitions based on the batch job
         * resources uploaded during the application creation. The listed batch job
         * definitions can then be used to start a batch job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListBatchJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBatchJobDefinitionsOutcome ListBatchJobDefinitions(const Model::ListBatchJobDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListBatchJobDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBatchJobDefinitionsOutcomeCallable ListBatchJobDefinitionsCallable(const Model::ListBatchJobDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListBatchJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBatchJobDefinitionsAsync(const Model::ListBatchJobDefinitionsRequest& request, const ListBatchJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists historical, current, and scheduled batch job executions for a specific
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListBatchJobExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBatchJobExecutionsOutcome ListBatchJobExecutions(const Model::ListBatchJobExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListBatchJobExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBatchJobExecutionsOutcomeCallable ListBatchJobExecutionsCallable(const Model::ListBatchJobExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListBatchJobExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBatchJobExecutionsAsync(const Model::ListBatchJobExecutionsRequest& request, const ListBatchJobExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the data set imports for the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListDataSetImportHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSetImportHistoryOutcome ListDataSetImportHistory(const Model::ListDataSetImportHistoryRequest& request) const;

        /**
         * A Callable wrapper for ListDataSetImportHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSetImportHistoryOutcomeCallable ListDataSetImportHistoryCallable(const Model::ListDataSetImportHistoryRequest& request) const;

        /**
         * An Async wrapper for ListDataSetImportHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSetImportHistoryAsync(const Model::ListDataSetImportHistoryRequest& request, const ListDataSetImportHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the data sets imported for a specific application. In Amazon Web
         * Services Mainframe Modernization, data sets are associated with applications
         * deployed on environments. This is known as importing data sets. Currently,
         * Amazon Web Services Mainframe Modernization can import data sets into catalogs
         * using <a
         * href="https://docs.aws.amazon.com/m2/latest/APIReference/API_CreateDataSetImportTask.html">CreateDataSetImportTask</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListDataSets">AWS API
         * Reference</a></p>
         */
        virtual Model::ListDataSetsOutcome ListDataSets(const Model::ListDataSetsRequest& request) const;

        /**
         * A Callable wrapper for ListDataSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSetsOutcomeCallable ListDataSetsCallable(const Model::ListDataSetsRequest& request) const;

        /**
         * An Async wrapper for ListDataSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSetsAsync(const Model::ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all deployments of a specific application. A deployment is
         * a combination of a specific application and a specific version of that
         * application. Each deployment is mapped to a particular application
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ListDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;

        /**
         * An Async wrapper for ListDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentsAsync(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the available engine versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngineVersionsOutcome ListEngineVersions(const Model::ListEngineVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListEngineVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEngineVersionsOutcomeCallable ListEngineVersionsCallable(const Model::ListEngineVersionsRequest& request) const;

        /**
         * An Async wrapper for ListEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEngineVersionsAsync(const Model::ListEngineVersionsRequest& request, const ListEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the runtime environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const Model::ListEnvironmentsRequest& request) const;

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentsAsync(const Model::ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an application that is currently stopped.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/StartApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartApplicationOutcome StartApplication(const Model::StartApplicationRequest& request) const;

        /**
         * A Callable wrapper for StartApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartApplicationOutcomeCallable StartApplicationCallable(const Model::StartApplicationRequest& request) const;

        /**
         * An Async wrapper for StartApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartApplicationAsync(const Model::StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a batch job and returns the unique identifier of this execution of the
         * batch job. The associated application must be running in order to start the
         * batch job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/StartBatchJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBatchJobOutcome StartBatchJob(const Model::StartBatchJobRequest& request) const;

        /**
         * A Callable wrapper for StartBatchJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartBatchJobOutcomeCallable StartBatchJobCallable(const Model::StartBatchJobRequest& request) const;

        /**
         * An Async wrapper for StartBatchJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBatchJobAsync(const Model::StartBatchJobRequest& request, const StartBatchJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a running application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/StopApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopApplicationOutcome StopApplication(const Model::StopApplicationRequest& request) const;

        /**
         * A Callable wrapper for StopApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopApplicationOutcomeCallable StopApplicationCallable(const Model::StopApplicationRequest& request) const;

        /**
         * An Async wrapper for StopApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopApplicationAsync(const Model::StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an application and creates a new version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration details for a specific environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MainframeModernization
} // namespace Aws
