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
#include <aws/m2/model/GetSignedBluinsightsUrlRequest.h>

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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MainframeModernizationClientConfiguration ClientConfigurationType;
      typedef MainframeModernizationEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MainframeModernizationClient(const Aws::MainframeModernization::MainframeModernizationClientConfiguration& clientConfiguration = Aws::MainframeModernization::MainframeModernizationClientConfiguration(),
                                     std::shared_ptr<MainframeModernizationEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MainframeModernizationClient(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<MainframeModernizationEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::MainframeModernization::MainframeModernizationClientConfiguration& clientConfiguration = Aws::MainframeModernization::MainframeModernizationClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MainframeModernizationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<MainframeModernizationEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename CancelBatchJobExecutionRequestT = Model::CancelBatchJobExecutionRequest>
        Model::CancelBatchJobExecutionOutcomeCallable CancelBatchJobExecutionCallable(const CancelBatchJobExecutionRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::CancelBatchJobExecution, request);
        }

        /**
         * An Async wrapper for CancelBatchJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelBatchJobExecutionRequestT = Model::CancelBatchJobExecutionRequest>
        void CancelBatchJobExecutionAsync(const CancelBatchJobExecutionRequestT& request, const CancelBatchJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::CancelBatchJobExecution, request, handler, context);
        }

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
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::CreateApplication, request, handler, context);
        }

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
        template<typename CreateDataSetImportTaskRequestT = Model::CreateDataSetImportTaskRequest>
        Model::CreateDataSetImportTaskOutcomeCallable CreateDataSetImportTaskCallable(const CreateDataSetImportTaskRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::CreateDataSetImportTask, request);
        }

        /**
         * An Async wrapper for CreateDataSetImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSetImportTaskRequestT = Model::CreateDataSetImportTaskRequest>
        void CreateDataSetImportTaskAsync(const CreateDataSetImportTaskRequestT& request, const CreateDataSetImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::CreateDataSetImportTask, request, handler, context);
        }

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
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const CreateDeploymentRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::CreateDeployment, request);
        }

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        void CreateDeploymentAsync(const CreateDeploymentRequestT& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::CreateDeployment, request, handler, context);
        }

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
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const CreateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::CreateEnvironment, request);
        }

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        void CreateEnvironmentAsync(const CreateEnvironmentRequestT& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::CreateEnvironment, request, handler, context);
        }

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
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::DeleteApplication, request, handler, context);
        }

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
        template<typename DeleteApplicationFromEnvironmentRequestT = Model::DeleteApplicationFromEnvironmentRequest>
        Model::DeleteApplicationFromEnvironmentOutcomeCallable DeleteApplicationFromEnvironmentCallable(const DeleteApplicationFromEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::DeleteApplicationFromEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteApplicationFromEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationFromEnvironmentRequestT = Model::DeleteApplicationFromEnvironmentRequest>
        void DeleteApplicationFromEnvironmentAsync(const DeleteApplicationFromEnvironmentRequestT& request, const DeleteApplicationFromEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::DeleteApplicationFromEnvironment, request, handler, context);
        }

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
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const DeleteEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::DeleteEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        void DeleteEnvironmentAsync(const DeleteEnvironmentRequestT& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::DeleteEnvironment, request, handler, context);
        }

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
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::GetApplication, request);
        }

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::GetApplication, request, handler, context);
        }

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
        template<typename GetApplicationVersionRequestT = Model::GetApplicationVersionRequest>
        Model::GetApplicationVersionOutcomeCallable GetApplicationVersionCallable(const GetApplicationVersionRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::GetApplicationVersion, request);
        }

        /**
         * An Async wrapper for GetApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationVersionRequestT = Model::GetApplicationVersionRequest>
        void GetApplicationVersionAsync(const GetApplicationVersionRequestT& request, const GetApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::GetApplicationVersion, request, handler, context);
        }

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
        template<typename GetBatchJobExecutionRequestT = Model::GetBatchJobExecutionRequest>
        Model::GetBatchJobExecutionOutcomeCallable GetBatchJobExecutionCallable(const GetBatchJobExecutionRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::GetBatchJobExecution, request);
        }

        /**
         * An Async wrapper for GetBatchJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBatchJobExecutionRequestT = Model::GetBatchJobExecutionRequest>
        void GetBatchJobExecutionAsync(const GetBatchJobExecutionRequestT& request, const GetBatchJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::GetBatchJobExecution, request, handler, context);
        }

        /**
         * <p>Gets the details of a specific data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetDataSetDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSetDetailsOutcome GetDataSetDetails(const Model::GetDataSetDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetDataSetDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataSetDetailsRequestT = Model::GetDataSetDetailsRequest>
        Model::GetDataSetDetailsOutcomeCallable GetDataSetDetailsCallable(const GetDataSetDetailsRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::GetDataSetDetails, request);
        }

        /**
         * An Async wrapper for GetDataSetDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSetDetailsRequestT = Model::GetDataSetDetailsRequest>
        void GetDataSetDetailsAsync(const GetDataSetDetailsRequestT& request, const GetDataSetDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::GetDataSetDetails, request, handler, context);
        }

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
        template<typename GetDataSetImportTaskRequestT = Model::GetDataSetImportTaskRequest>
        Model::GetDataSetImportTaskOutcomeCallable GetDataSetImportTaskCallable(const GetDataSetImportTaskRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::GetDataSetImportTask, request);
        }

        /**
         * An Async wrapper for GetDataSetImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSetImportTaskRequestT = Model::GetDataSetImportTaskRequest>
        void GetDataSetImportTaskAsync(const GetDataSetImportTaskRequestT& request, const GetDataSetImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::GetDataSetImportTask, request, handler, context);
        }

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
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const GetDeploymentRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::GetDeployment, request);
        }

        /**
         * An Async wrapper for GetDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        void GetDeploymentAsync(const GetDeploymentRequestT& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::GetDeployment, request, handler, context);
        }

        /**
         * <p>Describes a specific runtime environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const GetEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::GetEnvironment, request);
        }

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        void GetEnvironmentAsync(const GetEnvironmentRequestT& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::GetEnvironment, request, handler, context);
        }

        /**
         * <p>Gets a single sign-on URL that can be used to connect to AWS Blu
         * Insights.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GetSignedBluinsightsUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSignedBluinsightsUrlOutcome GetSignedBluinsightsUrl(const Model::GetSignedBluinsightsUrlRequest& request = {}) const;

        /**
         * A Callable wrapper for GetSignedBluinsightsUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSignedBluinsightsUrlRequestT = Model::GetSignedBluinsightsUrlRequest>
        Model::GetSignedBluinsightsUrlOutcomeCallable GetSignedBluinsightsUrlCallable(const GetSignedBluinsightsUrlRequestT& request = {}) const
        {
            return SubmitCallable(&MainframeModernizationClient::GetSignedBluinsightsUrl, request);
        }

        /**
         * An Async wrapper for GetSignedBluinsightsUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSignedBluinsightsUrlRequestT = Model::GetSignedBluinsightsUrlRequest>
        void GetSignedBluinsightsUrlAsync(const GetSignedBluinsightsUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetSignedBluinsightsUrlRequestT& request = {}) const
        {
            return SubmitAsync(&MainframeModernizationClient::GetSignedBluinsightsUrl, request, handler, context);
        }

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
        template<typename ListApplicationVersionsRequestT = Model::ListApplicationVersionsRequest>
        Model::ListApplicationVersionsOutcomeCallable ListApplicationVersionsCallable(const ListApplicationVersionsRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::ListApplicationVersions, request);
        }

        /**
         * An Async wrapper for ListApplicationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationVersionsRequestT = Model::ListApplicationVersionsRequest>
        void ListApplicationVersionsAsync(const ListApplicationVersionsRequestT& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::ListApplicationVersions, request, handler, context);
        }

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
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::ListApplications, request, handler, context);
        }

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
        template<typename ListBatchJobDefinitionsRequestT = Model::ListBatchJobDefinitionsRequest>
        Model::ListBatchJobDefinitionsOutcomeCallable ListBatchJobDefinitionsCallable(const ListBatchJobDefinitionsRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::ListBatchJobDefinitions, request);
        }

        /**
         * An Async wrapper for ListBatchJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBatchJobDefinitionsRequestT = Model::ListBatchJobDefinitionsRequest>
        void ListBatchJobDefinitionsAsync(const ListBatchJobDefinitionsRequestT& request, const ListBatchJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::ListBatchJobDefinitions, request, handler, context);
        }

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
        template<typename ListBatchJobExecutionsRequestT = Model::ListBatchJobExecutionsRequest>
        Model::ListBatchJobExecutionsOutcomeCallable ListBatchJobExecutionsCallable(const ListBatchJobExecutionsRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::ListBatchJobExecutions, request);
        }

        /**
         * An Async wrapper for ListBatchJobExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBatchJobExecutionsRequestT = Model::ListBatchJobExecutionsRequest>
        void ListBatchJobExecutionsAsync(const ListBatchJobExecutionsRequestT& request, const ListBatchJobExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::ListBatchJobExecutions, request, handler, context);
        }

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
        template<typename ListDataSetImportHistoryRequestT = Model::ListDataSetImportHistoryRequest>
        Model::ListDataSetImportHistoryOutcomeCallable ListDataSetImportHistoryCallable(const ListDataSetImportHistoryRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::ListDataSetImportHistory, request);
        }

        /**
         * An Async wrapper for ListDataSetImportHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSetImportHistoryRequestT = Model::ListDataSetImportHistoryRequest>
        void ListDataSetImportHistoryAsync(const ListDataSetImportHistoryRequestT& request, const ListDataSetImportHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::ListDataSetImportHistory, request, handler, context);
        }

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
        template<typename ListDataSetsRequestT = Model::ListDataSetsRequest>
        Model::ListDataSetsOutcomeCallable ListDataSetsCallable(const ListDataSetsRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::ListDataSets, request);
        }

        /**
         * An Async wrapper for ListDataSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSetsRequestT = Model::ListDataSetsRequest>
        void ListDataSetsAsync(const ListDataSetsRequestT& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::ListDataSets, request, handler, context);
        }

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
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const ListDeploymentsRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::ListDeployments, request);
        }

        /**
         * An Async wrapper for ListDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        void ListDeploymentsAsync(const ListDeploymentsRequestT& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::ListDeployments, request, handler, context);
        }

        /**
         * <p>Lists the available engine versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngineVersionsOutcome ListEngineVersions(const Model::ListEngineVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListEngineVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEngineVersionsRequestT = Model::ListEngineVersionsRequest>
        Model::ListEngineVersionsOutcomeCallable ListEngineVersionsCallable(const ListEngineVersionsRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::ListEngineVersions, request);
        }

        /**
         * An Async wrapper for ListEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEngineVersionsRequestT = Model::ListEngineVersionsRequest>
        void ListEngineVersionsAsync(const ListEngineVersionsRequestT& request, const ListEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::ListEngineVersions, request, handler, context);
        }

        /**
         * <p>Lists the runtime environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const ListEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::ListEnvironments, request);
        }

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        void ListEnvironmentsAsync(const ListEnvironmentsRequestT& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::ListEnvironments, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename StartApplicationRequestT = Model::StartApplicationRequest>
        Model::StartApplicationOutcomeCallable StartApplicationCallable(const StartApplicationRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::StartApplication, request);
        }

        /**
         * An Async wrapper for StartApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartApplicationRequestT = Model::StartApplicationRequest>
        void StartApplicationAsync(const StartApplicationRequestT& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::StartApplication, request, handler, context);
        }

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
        template<typename StartBatchJobRequestT = Model::StartBatchJobRequest>
        Model::StartBatchJobOutcomeCallable StartBatchJobCallable(const StartBatchJobRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::StartBatchJob, request);
        }

        /**
         * An Async wrapper for StartBatchJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartBatchJobRequestT = Model::StartBatchJobRequest>
        void StartBatchJobAsync(const StartBatchJobRequestT& request, const StartBatchJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::StartBatchJob, request, handler, context);
        }

        /**
         * <p>Stops a running application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/StopApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopApplicationOutcome StopApplication(const Model::StopApplicationRequest& request) const;

        /**
         * A Callable wrapper for StopApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopApplicationRequestT = Model::StopApplicationRequest>
        Model::StopApplicationOutcomeCallable StopApplicationCallable(const StopApplicationRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::StopApplication, request);
        }

        /**
         * An Async wrapper for StopApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopApplicationRequestT = Model::StopApplicationRequest>
        void StopApplicationAsync(const StopApplicationRequestT& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::StopApplication, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::UpdateApplication, request, handler, context);
        }

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
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const UpdateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MainframeModernizationClient::UpdateEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        void UpdateEnvironmentAsync(const UpdateEnvironmentRequestT& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MainframeModernizationClient::UpdateEnvironment, request, handler, context);
        }


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
