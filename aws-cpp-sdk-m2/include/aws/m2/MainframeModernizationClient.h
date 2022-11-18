/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/m2/MainframeModernizationServiceClientModel.h>
#include <aws/m2/MainframeModernizationLegacyAsyncMacros.h>

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
  class AWS_MAINFRAMEMODERNIZATION_API MainframeModernizationClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Cancels the running of a specific batch job execution.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/CancelBatchJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelBatchJobExecutionOutcome CancelBatchJobExecution(const Model::CancelBatchJobExecutionRequest& request) const;


        /**
         * <p>Creates a new application with given parameters. Requires an existing
         * environment and application definition file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;


        /**
         * <p>Starts a data set import task for a specific application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/CreateDataSetImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSetImportTaskOutcome CreateDataSetImportTask(const Model::CreateDataSetImportTaskRequest& request) const;


        /**
         * <p>Creates and starts a deployment to deploy an application into an
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;


        /**
         * <p>Creates a runtime environment for a given runtime engine.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;


        /**
         * <p>Deletes a specific application. You cannot delete a running
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;


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
         * <p>Deletes a specific environment. The environment cannot contain deployed
         * applications. If it does, you must delete those applications before you delete
         * the environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;


        /**
         * <p>Describes the details of a specific application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;


        /**
         * <p>Returns details about a specific version of a specific
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationVersionOutcome GetApplicationVersion(const Model::GetApplicationVersionRequest& request) const;


        /**
         * <p>Gets the details of a specific batch job execution for a specific
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetBatchJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBatchJobExecutionOutcome GetBatchJobExecution(const Model::GetBatchJobExecutionRequest& request) const;


        /**
         * <p>Gets the details of a specific data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetDataSetDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSetDetailsOutcome GetDataSetDetails(const Model::GetDataSetDetailsRequest& request) const;


        /**
         * <p>Gets the status of a data set import task initiated with the
         * <a>CreateDataSetImportTask</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetDataSetImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSetImportTaskOutcome GetDataSetImportTask(const Model::GetDataSetImportTaskRequest& request) const;


        /**
         * <p>Gets details of a specific deployment with a given deployment
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;


        /**
         * <p>Describes a specific runtime environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;


        /**
         * <p>Returns a list of the application versions for a specific
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListApplicationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationVersionsOutcome ListApplicationVersions(const Model::ListApplicationVersionsRequest& request) const;


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
         * <p>Lists all the available batch job definitions based on the batch job
         * resources uploaded during the application creation. The listed batch job
         * definitions can then be used to start a batch job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListBatchJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBatchJobDefinitionsOutcome ListBatchJobDefinitions(const Model::ListBatchJobDefinitionsRequest& request) const;


        /**
         * <p>Lists historical, current, and scheduled batch job executions for a specific
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListBatchJobExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBatchJobExecutionsOutcome ListBatchJobExecutions(const Model::ListBatchJobExecutionsRequest& request) const;


        /**
         * <p>Lists the data set imports for the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListDataSetImportHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSetImportHistoryOutcome ListDataSetImportHistory(const Model::ListDataSetImportHistoryRequest& request) const;


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
         * <p>Returns a list of all deployments of a specific application. A deployment is
         * a combination of a specific application and a specific version of that
         * application. Each deployment is mapped to a particular application
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;


        /**
         * <p>Lists the available engine versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngineVersionsOutcome ListEngineVersions(const Model::ListEngineVersionsRequest& request) const;


        /**
         * <p>Lists the runtime environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;


        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Starts an application that is currently stopped.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/StartApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartApplicationOutcome StartApplication(const Model::StartApplicationRequest& request) const;


        /**
         * <p>Starts a batch job and returns the unique identifier of this execution of the
         * batch job. The associated application must be running in order to start the
         * batch job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/StartBatchJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBatchJobOutcome StartBatchJob(const Model::StartBatchJobRequest& request) const;


        /**
         * <p>Stops a running application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/StopApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopApplicationOutcome StopApplication(const Model::StopApplicationRequest& request) const;


        /**
         * <p>Adds one or more tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an application and creates a new version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;


        /**
         * <p>Updates the configuration details for a specific environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MainframeModernizationEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MainframeModernizationClientConfiguration& clientConfiguration);

      MainframeModernizationClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MainframeModernizationEndpointProviderBase> m_endpointProvider;
  };

} // namespace MainframeModernization
} // namespace Aws
