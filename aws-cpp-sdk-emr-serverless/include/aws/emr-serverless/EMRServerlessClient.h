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
   * <p>Amazon EMR Serverless is a new deployment option for Amazon EMR. EMR
   * Serverless provides a serverless runtime environment that simplifies running
   * analytics applications using the latest open source frameworks such as Apache
   * Spark and Apache Hive. With EMR Serverless, you don’t have to configure,
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRServerlessClient(const Aws::EMRServerless::EMRServerlessClientConfiguration& clientConfiguration = Aws::EMRServerless::EMRServerlessClientConfiguration(),
                            std::shared_ptr<EMRServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<EMRServerlessEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<EMRServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<EMRServerlessEndpointProvider>(ALLOCATION_TAG),
                            const Aws::EMRServerless::EMRServerlessClientConfiguration& clientConfiguration = Aws::EMRServerless::EMRServerlessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<EMRServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<EMRServerlessEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::CancelJobRunOutcomeCallable CancelJobRunCallable(const Model::CancelJobRunRequest& request) const;

        /**
         * An Async wrapper for CancelJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobRunAsync(const Model::CancelJobRunRequest& request, const CancelJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/CreateApplication">AWS
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
         * <p>Deletes an application. An application has to be in a stopped or created
         * state in order to be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/DeleteApplication">AWS
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
         * <p>Displays detailed information about a specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/GetApplication">AWS
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
         * <p>Returns a URL to access the job run dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/GetDashboardForJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDashboardForJobRunOutcome GetDashboardForJobRun(const Model::GetDashboardForJobRunRequest& request) const;

        /**
         * A Callable wrapper for GetDashboardForJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDashboardForJobRunOutcomeCallable GetDashboardForJobRunCallable(const Model::GetDashboardForJobRunRequest& request) const;

        /**
         * An Async wrapper for GetDashboardForJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDashboardForJobRunAsync(const Model::GetDashboardForJobRunRequest& request, const GetDashboardForJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays detailed information about a job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/GetJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobRunOutcome GetJobRun(const Model::GetJobRunRequest& request) const;

        /**
         * A Callable wrapper for GetJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobRunOutcomeCallable GetJobRunCallable(const Model::GetJobRunRequest& request) const;

        /**
         * An Async wrapper for GetJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobRunAsync(const Model::GetJobRunRequest& request, const GetJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists job runs based on a set of parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ListJobRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobRunsOutcome ListJobRuns(const Model::ListJobRunsRequest& request) const;

        /**
         * A Callable wrapper for ListJobRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobRunsOutcomeCallable ListJobRunsCallable(const Model::ListJobRunsRequest& request) const;

        /**
         * An Async wrapper for ListJobRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobRunsAsync(const Model::ListJobRunsRequest& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags assigned to the resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ListTagsForResource">AWS
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
         * <p>Starts a specified application and initializes initial capacity if
         * configured.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/StartApplication">AWS
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
         * <p>Starts a job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;

        /**
         * A Callable wrapper for StartJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartJobRunOutcomeCallable StartJobRunCallable(const Model::StartJobRunRequest& request) const;

        /**
         * An Async wrapper for StartJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartJobRunAsync(const Model::StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopApplicationOutcomeCallable StopApplicationCallable(const Model::StopApplicationRequest& request) const;

        /**
         * An Async wrapper for StopApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopApplicationAsync(const Model::StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns tags to resources. A tag is a label that you assign to an AWS
         * resource. Each tag consists of a key and an optional value, both of which you
         * define. Tags enable you to categorize your AWS resources by attributes such as
         * purpose, owner, or environment. When you have many resources of the same type,
         * you can quickly identify a specific resource based on the tags you've assigned
         * to it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/TagResource">AWS
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
         * <p>Removes tags from resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/UntagResource">AWS
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
         * <p>Updates a specified application. An application has to be in a stopped or
         * created state in order to be updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/UpdateApplication">AWS
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
