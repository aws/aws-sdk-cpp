/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-serverless/EMRServerlessServiceClientModel.h>

namespace Aws
{
namespace EMRServerless
{
  /**
   * <p>Amazon EMR Serverless is a new deployment option for Amazon EMR. Amazon EMR
   * Serverless provides a serverless runtime environment that simplifies running
   * analytics applications using the latest open source frameworks such as Apache
   * Spark and Apache Hive. With Amazon EMR Serverless, you don’t have to configure,
   * optimize, secure, or operate clusters to run applications with these
   * frameworks.</p> <p>The API reference to Amazon EMR Serverless is
   * <code>emr-serverless</code>. The <code>emr-serverless</code> prefix is used in
   * the following scenarios: </p> <ul> <li> <p>It is the prefix in the CLI commands
   * for Amazon EMR Serverless. For example, <code>aws emr-serverless
   * start-job-run</code>.</p> </li> <li> <p>It is the prefix before IAM policy
   * actions for Amazon EMR Serverless. For example, <code>"Action":
   * ["emr-serverless:StartJobRun"]</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/emr/latest/EMR-Serverless-UserGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
   * actions for Amazon EMR Serverless</a>.</p> </li> <li> <p>It is the prefix used
   * in Amazon EMR Serverless service endpoints. For example,
   * <code>emr-serverless.us-east-2.amazonaws.com</code>.</p> </li> </ul>
   */
  class AWS_EMRSERVERLESS_API EMRServerlessClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<EMRServerlessClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef EMRServerlessClientConfiguration ClientConfigurationType;
      typedef EMRServerlessEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRServerlessClient(const Aws::EMRServerless::EMRServerlessClientConfiguration& clientConfiguration = Aws::EMRServerless::EMRServerlessClientConfiguration(),
                            std::shared_ptr<EMRServerlessEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<EMRServerlessEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::EMRServerless::EMRServerlessClientConfiguration& clientConfiguration = Aws::EMRServerless::EMRServerlessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<EMRServerlessEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::EMRServerless::EMRServerlessClientConfiguration& clientConfiguration = Aws::EMRServerless::EMRServerlessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EMRServerlessClient();

        /**
         * <p>Cancels a job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/CancelJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobRunOutcome CancelJobRun(const Model::CancelJobRunRequest& request) const;

        /**
         * A Callable wrapper for CancelJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelJobRunRequestT = Model::CancelJobRunRequest>
        Model::CancelJobRunOutcomeCallable CancelJobRunCallable(const CancelJobRunRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::CancelJobRun, request);
        }

        /**
         * An Async wrapper for CancelJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelJobRunRequestT = Model::CancelJobRunRequest>
        void CancelJobRunAsync(const CancelJobRunRequestT& request, const CancelJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::CancelJobRun, request, handler, context);
        }

        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::CreateApplication, request, handler, context);
        }

        /**
         * <p>Deletes an application. An application has to be in a stopped or created
         * state in order to be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Displays detailed information about a specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::GetApplication, request);
        }

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::GetApplication, request, handler, context);
        }

        /**
         * <p>Creates and returns a URL that you can use to access the application UIs for
         * a job run.</p> <p>For jobs in a running state, the application UI is a live user
         * interface such as the Spark or Tez web UI. For completed jobs, the application
         * UI is a persistent application user interface such as the Spark History Server
         * or persistent Tez UI.</p>  <p>The URL is valid for one hour after you
         * generate it. To access the application UI after that hour elapses, you must
         * invoke the API again to generate a new URL.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/GetDashboardForJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDashboardForJobRunOutcome GetDashboardForJobRun(const Model::GetDashboardForJobRunRequest& request) const;

        /**
         * A Callable wrapper for GetDashboardForJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDashboardForJobRunRequestT = Model::GetDashboardForJobRunRequest>
        Model::GetDashboardForJobRunOutcomeCallable GetDashboardForJobRunCallable(const GetDashboardForJobRunRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::GetDashboardForJobRun, request);
        }

        /**
         * An Async wrapper for GetDashboardForJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDashboardForJobRunRequestT = Model::GetDashboardForJobRunRequest>
        void GetDashboardForJobRunAsync(const GetDashboardForJobRunRequestT& request, const GetDashboardForJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::GetDashboardForJobRun, request, handler, context);
        }

        /**
         * <p>Displays detailed information about a job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/GetJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobRunOutcome GetJobRun(const Model::GetJobRunRequest& request) const;

        /**
         * A Callable wrapper for GetJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobRunRequestT = Model::GetJobRunRequest>
        Model::GetJobRunOutcomeCallable GetJobRunCallable(const GetJobRunRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::GetJobRun, request);
        }

        /**
         * An Async wrapper for GetJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobRunRequestT = Model::GetJobRunRequest>
        void GetJobRunAsync(const GetJobRunRequestT& request, const GetJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::GetJobRun, request, handler, context);
        }

        /**
         * <p>Lists applications based on a set of parameters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Lists job runs based on a set of parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ListJobRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobRunsOutcome ListJobRuns(const Model::ListJobRunsRequest& request) const;

        /**
         * A Callable wrapper for ListJobRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobRunsRequestT = Model::ListJobRunsRequest>
        Model::ListJobRunsOutcomeCallable ListJobRunsCallable(const ListJobRunsRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::ListJobRuns, request);
        }

        /**
         * An Async wrapper for ListJobRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobRunsRequestT = Model::ListJobRunsRequest>
        void ListJobRunsAsync(const ListJobRunsRequestT& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::ListJobRuns, request, handler, context);
        }

        /**
         * <p>Lists the tags assigned to the resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts a specified application and initializes initial capacity if
         * configured.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/StartApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartApplicationOutcome StartApplication(const Model::StartApplicationRequest& request) const;

        /**
         * A Callable wrapper for StartApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartApplicationRequestT = Model::StartApplicationRequest>
        Model::StartApplicationOutcomeCallable StartApplicationCallable(const StartApplicationRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::StartApplication, request);
        }

        /**
         * An Async wrapper for StartApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartApplicationRequestT = Model::StartApplicationRequest>
        void StartApplicationAsync(const StartApplicationRequestT& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::StartApplication, request, handler, context);
        }

        /**
         * <p>Starts a job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;

        /**
         * A Callable wrapper for StartJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartJobRunRequestT = Model::StartJobRunRequest>
        Model::StartJobRunOutcomeCallable StartJobRunCallable(const StartJobRunRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::StartJobRun, request);
        }

        /**
         * An Async wrapper for StartJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartJobRunRequestT = Model::StartJobRunRequest>
        void StartJobRunAsync(const StartJobRunRequestT& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::StartJobRun, request, handler, context);
        }

        /**
         * <p>Stops a specified application and releases initial capacity if configured.
         * All scheduled and running jobs must be completed or cancelled before stopping an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/StopApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopApplicationOutcome StopApplication(const Model::StopApplicationRequest& request) const;

        /**
         * A Callable wrapper for StopApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopApplicationRequestT = Model::StopApplicationRequest>
        Model::StopApplicationOutcomeCallable StopApplicationCallable(const StopApplicationRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::StopApplication, request);
        }

        /**
         * An Async wrapper for StopApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopApplicationRequestT = Model::StopApplicationRequest>
        void StopApplicationAsync(const StopApplicationRequestT& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::StopApplication, request, handler, context);
        }

        /**
         * <p>Assigns tags to resources. A tag is a label that you assign to an Amazon Web
         * Services resource. Each tag consists of a key and an optional value, both of
         * which you define. Tags enable you to categorize your Amazon Web Services
         * resources by attributes such as purpose, owner, or environment. When you have
         * many resources of the same type, you can quickly identify a specific resource
         * based on the tags you've assigned to it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a specified application. An application has to be in a stopped or
         * created state in order to be updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&EMRServerlessClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRServerlessClient::UpdateApplication, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EMRServerlessEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<EMRServerlessClient>;
      void init(const EMRServerlessClientConfiguration& clientConfiguration);

      EMRServerlessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<EMRServerlessEndpointProviderBase> m_endpointProvider;
  };

} // namespace EMRServerless
} // namespace Aws
