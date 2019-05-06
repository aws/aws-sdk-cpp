/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/DLMErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dlm/model/CreateLifecyclePolicyResult.h>
#include <aws/dlm/model/DeleteLifecyclePolicyResult.h>
#include <aws/dlm/model/GetLifecyclePoliciesResult.h>
#include <aws/dlm/model/GetLifecyclePolicyResult.h>
#include <aws/dlm/model/UpdateLifecyclePolicyResult.h>
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

namespace DLM
{

namespace Model
{
        class CreateLifecyclePolicyRequest;
        class DeleteLifecyclePolicyRequest;
        class GetLifecyclePoliciesRequest;
        class GetLifecyclePolicyRequest;
        class UpdateLifecyclePolicyRequest;

        typedef Aws::Utils::Outcome<CreateLifecyclePolicyResult, Aws::Client::AWSError<DLMErrors>> CreateLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteLifecyclePolicyResult, Aws::Client::AWSError<DLMErrors>> DeleteLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<GetLifecyclePoliciesResult, Aws::Client::AWSError<DLMErrors>> GetLifecyclePoliciesOutcome;
        typedef Aws::Utils::Outcome<GetLifecyclePolicyResult, Aws::Client::AWSError<DLMErrors>> GetLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<UpdateLifecyclePolicyResult, Aws::Client::AWSError<DLMErrors>> UpdateLifecyclePolicyOutcome;

        typedef std::future<CreateLifecyclePolicyOutcome> CreateLifecyclePolicyOutcomeCallable;
        typedef std::future<DeleteLifecyclePolicyOutcome> DeleteLifecyclePolicyOutcomeCallable;
        typedef std::future<GetLifecyclePoliciesOutcome> GetLifecyclePoliciesOutcomeCallable;
        typedef std::future<GetLifecyclePolicyOutcome> GetLifecyclePolicyOutcomeCallable;
        typedef std::future<UpdateLifecyclePolicyOutcome> UpdateLifecyclePolicyOutcomeCallable;
} // namespace Model

  class DLMClient;

    typedef std::function<void(const DLMClient*, const Model::CreateLifecyclePolicyRequest&, const Model::CreateLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const DLMClient*, const Model::DeleteLifecyclePolicyRequest&, const Model::DeleteLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const DLMClient*, const Model::GetLifecyclePoliciesRequest&, const Model::GetLifecyclePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLifecyclePoliciesResponseReceivedHandler;
    typedef std::function<void(const DLMClient*, const Model::GetLifecyclePolicyRequest&, const Model::GetLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const DLMClient*, const Model::UpdateLifecyclePolicyRequest&, const Model::UpdateLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLifecyclePolicyResponseReceivedHandler;

  /**
   * <fullname>Amazon Data Lifecycle Manager</fullname> <p>With Amazon Data Lifecycle
   * Manager, you can manage the lifecycle of your AWS resources. You create
   * lifecycle policies, which are used to automate operations on the specified
   * resources.</p> <p>Amazon DLM supports Amazon EBS volumes and snapshots. For
   * information about using Amazon DLM with Amazon EBS, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-lifecycle.html">Automating
   * the Amazon EBS Snapshot Lifecycle</a> in the <i>Amazon EC2 User Guide</i>.</p>
   */
  class AWS_DLM_API DLMClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DLMClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DLMClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DLMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DLMClient();

        inline virtual const char* GetServiceClientName() const override { return "DLM"; }


        /**
         * <p>Creates a policy to manage the lifecycle of the specified AWS resources. You
         * can create up to 100 lifecycle policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CreateLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLifecyclePolicyOutcome CreateLifecyclePolicy(const Model::CreateLifecyclePolicyRequest& request) const;

        /**
         * <p>Creates a policy to manage the lifecycle of the specified AWS resources. You
         * can create up to 100 lifecycle policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CreateLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLifecyclePolicyOutcomeCallable CreateLifecyclePolicyCallable(const Model::CreateLifecyclePolicyRequest& request) const;

        /**
         * <p>Creates a policy to manage the lifecycle of the specified AWS resources. You
         * can create up to 100 lifecycle policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CreateLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLifecyclePolicyAsync(const Model::CreateLifecyclePolicyRequest& request, const CreateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified lifecycle policy and halts the automated operations
         * that the policy specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLifecyclePolicyOutcome DeleteLifecyclePolicy(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * <p>Deletes the specified lifecycle policy and halts the automated operations
         * that the policy specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLifecyclePolicyOutcomeCallable DeleteLifecyclePolicyCallable(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * <p>Deletes the specified lifecycle policy and halts the automated operations
         * that the policy specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLifecyclePolicyAsync(const Model::DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about all or the specified data lifecycle
         * policies.</p> <p>To get complete information about a policy, use
         * <a>GetLifecyclePolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/GetLifecyclePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePoliciesOutcome GetLifecyclePolicies(const Model::GetLifecyclePoliciesRequest& request) const;

        /**
         * <p>Gets summary information about all or the specified data lifecycle
         * policies.</p> <p>To get complete information about a policy, use
         * <a>GetLifecyclePolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/GetLifecyclePolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLifecyclePoliciesOutcomeCallable GetLifecyclePoliciesCallable(const Model::GetLifecyclePoliciesRequest& request) const;

        /**
         * <p>Gets summary information about all or the specified data lifecycle
         * policies.</p> <p>To get complete information about a policy, use
         * <a>GetLifecyclePolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/GetLifecyclePolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLifecyclePoliciesAsync(const Model::GetLifecyclePoliciesRequest& request, const GetLifecyclePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets detailed information about the specified lifecycle policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePolicyOutcome GetLifecyclePolicy(const Model::GetLifecyclePolicyRequest& request) const;

        /**
         * <p>Gets detailed information about the specified lifecycle policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLifecyclePolicyOutcomeCallable GetLifecyclePolicyCallable(const Model::GetLifecyclePolicyRequest& request) const;

        /**
         * <p>Gets detailed information about the specified lifecycle policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLifecyclePolicyAsync(const Model::GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/UpdateLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLifecyclePolicyOutcome UpdateLifecyclePolicy(const Model::UpdateLifecyclePolicyRequest& request) const;

        /**
         * <p>Updates the specified lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/UpdateLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLifecyclePolicyOutcomeCallable UpdateLifecyclePolicyCallable(const Model::UpdateLifecyclePolicyRequest& request) const;

        /**
         * <p>Updates the specified lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/UpdateLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLifecyclePolicyAsync(const Model::UpdateLifecyclePolicyRequest& request, const UpdateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateLifecyclePolicyAsyncHelper(const Model::CreateLifecyclePolicyRequest& request, const CreateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLifecyclePolicyAsyncHelper(const Model::DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLifecyclePoliciesAsyncHelper(const Model::GetLifecyclePoliciesRequest& request, const GetLifecyclePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLifecyclePolicyAsyncHelper(const Model::GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLifecyclePolicyAsyncHelper(const Model::UpdateLifecyclePolicyRequest& request, const UpdateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DLM
} // namespace Aws
