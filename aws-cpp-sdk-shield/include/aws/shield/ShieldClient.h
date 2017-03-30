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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/shield/model/CreateProtectionResult.h>
#include <aws/shield/model/CreateSubscriptionResult.h>
#include <aws/shield/model/DeleteProtectionResult.h>
#include <aws/shield/model/DeleteSubscriptionResult.h>
#include <aws/shield/model/DescribeAttackResult.h>
#include <aws/shield/model/DescribeProtectionResult.h>
#include <aws/shield/model/DescribeSubscriptionResult.h>
#include <aws/shield/model/ListAttacksResult.h>
#include <aws/shield/model/ListProtectionsResult.h>
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

namespace Shield
{

namespace Model
{
        class CreateProtectionRequest;
        class CreateSubscriptionRequest;
        class DeleteProtectionRequest;
        class DeleteSubscriptionRequest;
        class DescribeAttackRequest;
        class DescribeProtectionRequest;
        class DescribeSubscriptionRequest;
        class ListAttacksRequest;
        class ListProtectionsRequest;

        typedef Aws::Utils::Outcome<CreateProtectionResult, Aws::Client::AWSError<ShieldErrors>> CreateProtectionOutcome;
        typedef Aws::Utils::Outcome<CreateSubscriptionResult, Aws::Client::AWSError<ShieldErrors>> CreateSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DeleteProtectionResult, Aws::Client::AWSError<ShieldErrors>> DeleteProtectionOutcome;
        typedef Aws::Utils::Outcome<DeleteSubscriptionResult, Aws::Client::AWSError<ShieldErrors>> DeleteSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DescribeAttackResult, Aws::Client::AWSError<ShieldErrors>> DescribeAttackOutcome;
        typedef Aws::Utils::Outcome<DescribeProtectionResult, Aws::Client::AWSError<ShieldErrors>> DescribeProtectionOutcome;
        typedef Aws::Utils::Outcome<DescribeSubscriptionResult, Aws::Client::AWSError<ShieldErrors>> DescribeSubscriptionOutcome;
        typedef Aws::Utils::Outcome<ListAttacksResult, Aws::Client::AWSError<ShieldErrors>> ListAttacksOutcome;
        typedef Aws::Utils::Outcome<ListProtectionsResult, Aws::Client::AWSError<ShieldErrors>> ListProtectionsOutcome;

        typedef std::future<CreateProtectionOutcome> CreateProtectionOutcomeCallable;
        typedef std::future<CreateSubscriptionOutcome> CreateSubscriptionOutcomeCallable;
        typedef std::future<DeleteProtectionOutcome> DeleteProtectionOutcomeCallable;
        typedef std::future<DeleteSubscriptionOutcome> DeleteSubscriptionOutcomeCallable;
        typedef std::future<DescribeAttackOutcome> DescribeAttackOutcomeCallable;
        typedef std::future<DescribeProtectionOutcome> DescribeProtectionOutcomeCallable;
        typedef std::future<DescribeSubscriptionOutcome> DescribeSubscriptionOutcomeCallable;
        typedef std::future<ListAttacksOutcome> ListAttacksOutcomeCallable;
        typedef std::future<ListProtectionsOutcome> ListProtectionsOutcomeCallable;
} // namespace Model

  class ShieldClient;

    typedef std::function<void(const ShieldClient*, const Model::CreateProtectionRequest&, const Model::CreateProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::CreateSubscriptionRequest&, const Model::CreateSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DeleteProtectionRequest&, const Model::DeleteProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DeleteSubscriptionRequest&, const Model::DeleteSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeAttackRequest&, const Model::DescribeAttackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAttackResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeProtectionRequest&, const Model::DescribeProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeSubscriptionRequest&, const Model::DescribeSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscriptionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListAttacksRequest&, const Model::ListAttacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttacksResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListProtectionsRequest&, const Model::ListProtectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectionsResponseReceivedHandler;

  /**
   * <fullname>AWS Shield Advanced</fullname> <p>This is the <i>AWS Shield Advanced
   * API Reference</i>. This guide is for developers who need detailed information
   * about the AWS Shield Advanced API actions, data types, and errors. For detailed
   * information about AWS WAF and AWS Shield Advanced features and an overview of
   * how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
   * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS
   * Shield Developer Guide</a>.</p>
   */
  class AWS_SHIELD_API ShieldClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ShieldClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~ShieldClient();

        /**
         * <p>Enables AWS Shield Advanced for a specific AWS resource. The resource can be
         * an Amazon CloudFront distribution, Elastic Load Balancing load balancer, or an
         * Amazon Route 53 hosted zone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProtectionOutcome CreateProtection(const Model::CreateProtectionRequest& request) const;

        /**
         * <p>Enables AWS Shield Advanced for a specific AWS resource. The resource can be
         * an Amazon CloudFront distribution, Elastic Load Balancing load balancer, or an
         * Amazon Route 53 hosted zone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProtectionOutcomeCallable CreateProtectionCallable(const Model::CreateProtectionRequest& request) const;

        /**
         * <p>Enables AWS Shield Advanced for a specific AWS resource. The resource can be
         * an Amazon CloudFront distribution, Elastic Load Balancing load balancer, or an
         * Amazon Route 53 hosted zone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProtectionAsync(const Model::CreateProtectionRequest& request, const CreateProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Activates AWS Shield Advanced for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionOutcome CreateSubscription(const Model::CreateSubscriptionRequest& request) const;

        /**
         * <p>Activates AWS Shield Advanced for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubscriptionOutcomeCallable CreateSubscriptionCallable(const Model::CreateSubscriptionRequest& request) const;

        /**
         * <p>Activates AWS Shield Advanced for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriptionAsync(const Model::CreateSubscriptionRequest& request, const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Shield Advanced <a>Protection</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProtectionOutcome DeleteProtection(const Model::DeleteProtectionRequest& request) const;

        /**
         * <p>Deletes an AWS Shield Advanced <a>Protection</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProtectionOutcomeCallable DeleteProtectionCallable(const Model::DeleteProtectionRequest& request) const;

        /**
         * <p>Deletes an AWS Shield Advanced <a>Protection</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProtectionAsync(const Model::DeleteProtectionRequest& request, const DeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes AWS Shield Advanced from an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriptionOutcome DeleteSubscription(const Model::DeleteSubscriptionRequest& request) const;

        /**
         * <p>Removes AWS Shield Advanced from an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubscriptionOutcomeCallable DeleteSubscriptionCallable(const Model::DeleteSubscriptionRequest& request) const;

        /**
         * <p>Removes AWS Shield Advanced from an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubscriptionAsync(const Model::DeleteSubscriptionRequest& request, const DeleteSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details of a DDoS attack. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeAttack">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAttackOutcome DescribeAttack(const Model::DescribeAttackRequest& request) const;

        /**
         * <p>Describes the details of a DDoS attack. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeAttack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAttackOutcomeCallable DescribeAttackCallable(const Model::DescribeAttackRequest& request) const;

        /**
         * <p>Describes the details of a DDoS attack. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeAttack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAttackAsync(const Model::DescribeAttackRequest& request, const DescribeAttackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the details of a <a>Protection</a> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProtectionOutcome DescribeProtection(const Model::DescribeProtectionRequest& request) const;

        /**
         * <p>Lists the details of a <a>Protection</a> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProtectionOutcomeCallable DescribeProtectionCallable(const Model::DescribeProtectionRequest& request) const;

        /**
         * <p>Lists the details of a <a>Protection</a> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProtectionAsync(const Model::DescribeProtectionRequest& request, const DescribeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides details about the AWS Shield Advanced subscription for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscriptionOutcome DescribeSubscription(const Model::DescribeSubscriptionRequest& request) const;

        /**
         * <p>Provides details about the AWS Shield Advanced subscription for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubscriptionOutcomeCallable DescribeSubscriptionCallable(const Model::DescribeSubscriptionRequest& request) const;

        /**
         * <p>Provides details about the AWS Shield Advanced subscription for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubscriptionAsync(const Model::DescribeSubscriptionRequest& request, const DescribeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all ongoing DDoS attacks or all DDoS attacks during a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListAttacks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttacksOutcome ListAttacks(const Model::ListAttacksRequest& request) const;

        /**
         * <p>Returns all ongoing DDoS attacks or all DDoS attacks during a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListAttacks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttacksOutcomeCallable ListAttacksCallable(const Model::ListAttacksRequest& request) const;

        /**
         * <p>Returns all ongoing DDoS attacks or all DDoS attacks during a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListAttacks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttacksAsync(const Model::ListAttacksRequest& request, const ListAttacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all <a>Protection</a> objects for the account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListProtections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectionsOutcome ListProtections(const Model::ListProtectionsRequest& request) const;

        /**
         * <p>Lists all <a>Protection</a> objects for the account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListProtections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProtectionsOutcomeCallable ListProtectionsCallable(const Model::ListProtectionsRequest& request) const;

        /**
         * <p>Lists all <a>Protection</a> objects for the account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListProtections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProtectionsAsync(const Model::ListProtectionsRequest& request, const ListProtectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateProtectionAsyncHelper(const Model::CreateProtectionRequest& request, const CreateProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSubscriptionAsyncHelper(const Model::CreateSubscriptionRequest& request, const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProtectionAsyncHelper(const Model::DeleteProtectionRequest& request, const DeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSubscriptionAsyncHelper(const Model::DeleteSubscriptionRequest& request, const DeleteSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAttackAsyncHelper(const Model::DescribeAttackRequest& request, const DescribeAttackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProtectionAsyncHelper(const Model::DescribeProtectionRequest& request, const DescribeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubscriptionAsyncHelper(const Model::DescribeSubscriptionRequest& request, const DescribeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttacksAsyncHelper(const Model::ListAttacksRequest& request, const ListAttacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProtectionsAsyncHelper(const Model::ListProtectionsRequest& request, const ListProtectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Shield
} // namespace Aws
