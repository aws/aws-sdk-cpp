/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/EMRServerlessErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-serverless/model/CancelJobRunResult.h>
#include <aws/emr-serverless/model/CreateApplicationResult.h>
#include <aws/emr-serverless/model/DeleteApplicationResult.h>
#include <aws/emr-serverless/model/GetApplicationResult.h>
#include <aws/emr-serverless/model/GetJobRunResult.h>
#include <aws/emr-serverless/model/ListApplicationsResult.h>
#include <aws/emr-serverless/model/ListJobRunsResult.h>
#include <aws/emr-serverless/model/ListTagsForResourceResult.h>
#include <aws/emr-serverless/model/StartApplicationResult.h>
#include <aws/emr-serverless/model/StartJobRunResult.h>
#include <aws/emr-serverless/model/StopApplicationResult.h>
#include <aws/emr-serverless/model/TagResourceResult.h>
#include <aws/emr-serverless/model/UntagResourceResult.h>
#include <aws/emr-serverless/model/UpdateApplicationResult.h>
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

namespace EMRServerless
{

namespace Model
{
        class CancelJobRunRequest;
        class CreateApplicationRequest;
        class DeleteApplicationRequest;
        class GetApplicationRequest;
        class GetJobRunRequest;
        class ListApplicationsRequest;
        class ListJobRunsRequest;
        class ListTagsForResourceRequest;
        class StartApplicationRequest;
        class StartJobRunRequest;
        class StopApplicationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateApplicationRequest;

        typedef Aws::Utils::Outcome<CancelJobRunResult, EMRServerlessError> CancelJobRunOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, EMRServerlessError> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationResult, EMRServerlessError> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<GetApplicationResult, EMRServerlessError> GetApplicationOutcome;
        typedef Aws::Utils::Outcome<GetJobRunResult, EMRServerlessError> GetJobRunOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, EMRServerlessError> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListJobRunsResult, EMRServerlessError> ListJobRunsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, EMRServerlessError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartApplicationResult, EMRServerlessError> StartApplicationOutcome;
        typedef Aws::Utils::Outcome<StartJobRunResult, EMRServerlessError> StartJobRunOutcome;
        typedef Aws::Utils::Outcome<StopApplicationResult, EMRServerlessError> StopApplicationOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, EMRServerlessError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, EMRServerlessError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, EMRServerlessError> UpdateApplicationOutcome;

        typedef std::future<CancelJobRunOutcome> CancelJobRunOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
        typedef std::future<GetJobRunOutcome> GetJobRunOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListJobRunsOutcome> ListJobRunsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
        typedef std::future<StartJobRunOutcome> StartJobRunOutcomeCallable;
        typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
} // namespace Model

  class EMRServerlessClient;

    typedef std::function<void(const EMRServerlessClient*, const Model::CancelJobRunRequest&, const Model::CancelJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::GetJobRunRequest&, const Model::GetJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::ListJobRunsRequest&, const Model::ListJobRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobRunsResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::StartApplicationRequest&, const Model::StartApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartApplicationResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::StartJobRunRequest&, const Model::StartJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::StopApplicationRequest&, const Model::StopApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopApplicationResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;

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
  class AWS_EMRSERVERLESS_API EMRServerlessClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EMRServerless
} // namespace Aws
