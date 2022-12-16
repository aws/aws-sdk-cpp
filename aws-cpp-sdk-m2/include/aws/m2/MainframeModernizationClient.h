/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/m2/MainframeModernizationServiceClientModel.h>

namespace Aws
{
namespace MainframeModernization
{
  /**
   * <p>Amazon Web Services Mainframe Modernization provides tools and resources to
   * help you plan and implement migration and modernization from mainframes to
   * Amazon Web Services managed runtime environments. It provides tools for
   * analyzing existing mainframe applications, developing or updating mainframe
   * applications using COBOL or PL/I, and implementing an automated pipeline for
   * continuous integration and continuous delivery (CI/CD) of the applications.</p>
   */
  class AWS_MAINFRAMEMODERNIZATION_API MainframeModernizationClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MainframeModernizationClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MainframeModernizationClient(const Aws::MainframeModernization::MainframeModernizationClientConfiguration& clientConfiguration = Aws::MainframeModernization::MainframeModernizationClientConfiguration(),
                                     std::shared_ptr<MainframeModernizationEndpointProviderBase> endpointProvider = Aws::MakeShared<MainframeModernizationEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MainframeModernizationClient(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<MainframeModernizationEndpointProviderBase> endpointProvider = Aws::MakeShared<MainframeModernizationEndpointProvider>(ALLOCATION_TAG),
                                     const Aws::MainframeModernization::MainframeModernizationClientConfiguration& clientConfiguration = Aws::MainframeModernization::MainframeModernizationClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MainframeModernizationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<MainframeModernizationEndpointProviderBase> endpointProvider = Aws::MakeShared<MainframeModernizationEndpointProvider>(ALLOCATION_TAG),
                                     const Aws::MainframeModernization::MainframeModernizationClientConfiguration& clientConfiguration = Aws::MainframeModernization::MainframeModernizationClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MainframeModernizationClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MainframeModernizationClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MainframeModernizationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * <p>Creates a new application with given parameters. Requires an existing runtime
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
         * <p>Creates and starts a deployment to deploy an application into a runtime
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
         * <p>Deletes a specific application from the specific runtime environment where it
         * was previously deployed. You cannot delete a runtime environment using
         * DeleteEnvironment if any application has ever been deployed to it. This API
         * removes the association of the application with the runtime environment so you
         * can delete the environment smoothly.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a specific runtime environment. The environment cannot contain
         * deployed applications. If it does, you must delete those applications before you
         * delete the environment.</p><p><h3>See Also:</h3>   <a
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
         * account. You can provide the unique identifier of a specific runtime environment
         * in a query parameter to see all applications associated with that
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
         * resources uploaded during the application creation. You can use the batch job
         * definitions in the list to start a batch job.</p><p><h3>See Also:</h3>   <a
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
         * deployed on runtime environments. This is known as importing data sets.
         * Currently, Amazon Web Services Mainframe Modernization can import data sets into
         * catalogs using <a
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
         * <p>Updates the configuration details for a specific runtime
         * environment.</p><p><h3>See Also:</h3>   <a
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
      std::shared_ptr<MainframeModernizationEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MainframeModernizationClient>;
      void init(const MainframeModernizationClientConfiguration& clientConfiguration);

      MainframeModernizationClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MainframeModernizationEndpointProviderBase> m_endpointProvider;
  };

} // namespace MainframeModernization
} // namespace Aws
