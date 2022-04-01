﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/Cloud9Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloud9/model/CreateEnvironmentEC2Result.h>
#include <aws/cloud9/model/CreateEnvironmentMembershipResult.h>
#include <aws/cloud9/model/DeleteEnvironmentResult.h>
#include <aws/cloud9/model/DeleteEnvironmentMembershipResult.h>
#include <aws/cloud9/model/DescribeEnvironmentMembershipsResult.h>
#include <aws/cloud9/model/DescribeEnvironmentStatusResult.h>
#include <aws/cloud9/model/DescribeEnvironmentsResult.h>
#include <aws/cloud9/model/ListEnvironmentsResult.h>
#include <aws/cloud9/model/ListTagsForResourceResult.h>
#include <aws/cloud9/model/TagResourceResult.h>
#include <aws/cloud9/model/UntagResourceResult.h>
#include <aws/cloud9/model/UpdateEnvironmentResult.h>
#include <aws/cloud9/model/UpdateEnvironmentMembershipResult.h>
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

namespace Cloud9
{

namespace Model
{
        class CreateEnvironmentEC2Request;
        class CreateEnvironmentMembershipRequest;
        class DeleteEnvironmentRequest;
        class DeleteEnvironmentMembershipRequest;
        class DescribeEnvironmentMembershipsRequest;
        class DescribeEnvironmentStatusRequest;
        class DescribeEnvironmentsRequest;
        class ListEnvironmentsRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateEnvironmentRequest;
        class UpdateEnvironmentMembershipRequest;

        typedef Aws::Utils::Outcome<CreateEnvironmentEC2Result, Cloud9Error> CreateEnvironmentEC2Outcome;
        typedef Aws::Utils::Outcome<CreateEnvironmentMembershipResult, Cloud9Error> CreateEnvironmentMembershipOutcome;
        typedef Aws::Utils::Outcome<DeleteEnvironmentResult, Cloud9Error> DeleteEnvironmentOutcome;
        typedef Aws::Utils::Outcome<DeleteEnvironmentMembershipResult, Cloud9Error> DeleteEnvironmentMembershipOutcome;
        typedef Aws::Utils::Outcome<DescribeEnvironmentMembershipsResult, Cloud9Error> DescribeEnvironmentMembershipsOutcome;
        typedef Aws::Utils::Outcome<DescribeEnvironmentStatusResult, Cloud9Error> DescribeEnvironmentStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeEnvironmentsResult, Cloud9Error> DescribeEnvironmentsOutcome;
        typedef Aws::Utils::Outcome<ListEnvironmentsResult, Cloud9Error> ListEnvironmentsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Cloud9Error> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Cloud9Error> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Cloud9Error> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateEnvironmentResult, Cloud9Error> UpdateEnvironmentOutcome;
        typedef Aws::Utils::Outcome<UpdateEnvironmentMembershipResult, Cloud9Error> UpdateEnvironmentMembershipOutcome;

        typedef std::future<CreateEnvironmentEC2Outcome> CreateEnvironmentEC2OutcomeCallable;
        typedef std::future<CreateEnvironmentMembershipOutcome> CreateEnvironmentMembershipOutcomeCallable;
        typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
        typedef std::future<DeleteEnvironmentMembershipOutcome> DeleteEnvironmentMembershipOutcomeCallable;
        typedef std::future<DescribeEnvironmentMembershipsOutcome> DescribeEnvironmentMembershipsOutcomeCallable;
        typedef std::future<DescribeEnvironmentStatusOutcome> DescribeEnvironmentStatusOutcomeCallable;
        typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
        typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
        typedef std::future<UpdateEnvironmentMembershipOutcome> UpdateEnvironmentMembershipOutcomeCallable;
} // namespace Model

  class Cloud9Client;

    typedef std::function<void(const Cloud9Client*, const Model::CreateEnvironmentEC2Request&, const Model::CreateEnvironmentEC2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentEC2ResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::CreateEnvironmentMembershipRequest&, const Model::CreateEnvironmentMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentMembershipResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::DeleteEnvironmentMembershipRequest&, const Model::DeleteEnvironmentMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentMembershipResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::DescribeEnvironmentMembershipsRequest&, const Model::DescribeEnvironmentMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEnvironmentMembershipsResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::DescribeEnvironmentStatusRequest&, const Model::DescribeEnvironmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEnvironmentStatusResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::DescribeEnvironmentsRequest&, const Model::DescribeEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::UpdateEnvironmentMembershipRequest&, const Model::UpdateEnvironmentMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentMembershipResponseReceivedHandler;

  /**
   * <fullname>Cloud9</fullname> <p>Cloud9 is a collection of tools that you can use
   * to code, build, run, test, debug, and release software in the cloud.</p> <p>For
   * more information about Cloud9, see the <a
   * href="https://docs.aws.amazon.com/cloud9/latest/user-guide">Cloud9 User
   * Guide</a>.</p> <p>Cloud9 supports these operations:</p> <ul> <li> <p>
   * <code>CreateEnvironmentEC2</code>: Creates an Cloud9 development environment,
   * launches an Amazon EC2 instance, and then connects from the instance to the
   * environment.</p> </li> <li> <p> <code>CreateEnvironmentMembership</code>: Adds
   * an environment member to an environment.</p> </li> <li> <p>
   * <code>DeleteEnvironment</code>: Deletes an environment. If an Amazon EC2
   * instance is connected to the environment, also terminates the instance.</p>
   * </li> <li> <p> <code>DeleteEnvironmentMembership</code>: Deletes an environment
   * member from an environment.</p> </li> <li> <p>
   * <code>DescribeEnvironmentMemberships</code>: Gets information about environment
   * members for an environment.</p> </li> <li> <p>
   * <code>DescribeEnvironments</code>: Gets information about environments.</p>
   * </li> <li> <p> <code>DescribeEnvironmentStatus</code>: Gets status information
   * for an environment.</p> </li> <li> <p> <code>ListEnvironments</code>: Gets a
   * list of environment identifiers.</p> </li> <li> <p>
   * <code>ListTagsForResource</code>: Gets the tags for an environment.</p> </li>
   * <li> <p> <code>TagResource</code>: Adds tags to an environment.</p> </li> <li>
   * <p> <code>UntagResource</code>: Removes tags from an environment.</p> </li> <li>
   * <p> <code>UpdateEnvironment</code>: Changes the settings of an existing
   * environment.</p> </li> <li> <p> <code>UpdateEnvironmentMembership</code>:
   * Changes the settings of an existing environment member for an environment.</p>
   * </li> </ul>
   */
  class AWS_CLOUD9_API Cloud9Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Cloud9Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Cloud9Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Cloud9Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~Cloud9Client();


        /**
         * <p>Creates an Cloud9 development environment, launches an Amazon Elastic Compute
         * Cloud (Amazon EC2) instance, and then connects from the instance to the
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/CreateEnvironmentEC2">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentEC2Outcome CreateEnvironmentEC2(const Model::CreateEnvironmentEC2Request& request) const;

        /**
         * <p>Creates an Cloud9 development environment, launches an Amazon Elastic Compute
         * Cloud (Amazon EC2) instance, and then connects from the instance to the
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/CreateEnvironmentEC2">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentEC2OutcomeCallable CreateEnvironmentEC2Callable(const Model::CreateEnvironmentEC2Request& request) const;

        /**
         * <p>Creates an Cloud9 development environment, launches an Amazon Elastic Compute
         * Cloud (Amazon EC2) instance, and then connects from the instance to the
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/CreateEnvironmentEC2">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentEC2Async(const Model::CreateEnvironmentEC2Request& request, const CreateEnvironmentEC2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an environment member to an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/CreateEnvironmentMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentMembershipOutcome CreateEnvironmentMembership(const Model::CreateEnvironmentMembershipRequest& request) const;

        /**
         * <p>Adds an environment member to an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/CreateEnvironmentMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentMembershipOutcomeCallable CreateEnvironmentMembershipCallable(const Model::CreateEnvironmentMembershipRequest& request) const;

        /**
         * <p>Adds an environment member to an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/CreateEnvironmentMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentMembershipAsync(const Model::CreateEnvironmentMembershipRequest& request, const CreateEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Cloud9 development environment. If an Amazon EC2 instance is
         * connected to the environment, also terminates the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * <p>Deletes an Cloud9 development environment. If an Amazon EC2 instance is
         * connected to the environment, also terminates the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DeleteEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * <p>Deletes an Cloud9 development environment. If an Amazon EC2 instance is
         * connected to the environment, also terminates the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DeleteEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentAsync(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an environment member from an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DeleteEnvironmentMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentMembershipOutcome DeleteEnvironmentMembership(const Model::DeleteEnvironmentMembershipRequest& request) const;

        /**
         * <p>Deletes an environment member from an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DeleteEnvironmentMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentMembershipOutcomeCallable DeleteEnvironmentMembershipCallable(const Model::DeleteEnvironmentMembershipRequest& request) const;

        /**
         * <p>Deletes an environment member from an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DeleteEnvironmentMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentMembershipAsync(const Model::DeleteEnvironmentMembershipRequest& request, const DeleteEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about environment members for an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironmentMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentMembershipsOutcome DescribeEnvironmentMemberships(const Model::DescribeEnvironmentMembershipsRequest& request) const;

        /**
         * <p>Gets information about environment members for an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironmentMemberships">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEnvironmentMembershipsOutcomeCallable DescribeEnvironmentMembershipsCallable(const Model::DescribeEnvironmentMembershipsRequest& request) const;

        /**
         * <p>Gets information about environment members for an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironmentMemberships">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentMembershipsAsync(const Model::DescribeEnvironmentMembershipsRequest& request, const DescribeEnvironmentMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets status information for an Cloud9 development environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentStatusOutcome DescribeEnvironmentStatus(const Model::DescribeEnvironmentStatusRequest& request) const;

        /**
         * <p>Gets status information for an Cloud9 development environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironmentStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEnvironmentStatusOutcomeCallable DescribeEnvironmentStatusCallable(const Model::DescribeEnvironmentStatusRequest& request) const;

        /**
         * <p>Gets status information for an Cloud9 development environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironmentStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentStatusAsync(const Model::DescribeEnvironmentStatusRequest& request, const DescribeEnvironmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about Cloud9 development environments.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest& request) const;

        /**
         * <p>Gets information about Cloud9 development environments.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request) const;

        /**
         * <p>Gets information about Cloud9 development environments.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of Cloud9 development environment identifiers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * <p>Gets a list of Cloud9 development environment identifiers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/ListEnvironments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const Model::ListEnvironmentsRequest& request) const;

        /**
         * <p>Gets a list of Cloud9 development environment identifiers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/ListEnvironments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentsAsync(const Model::ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the tags associated with an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets a list of the tags associated with an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets a list of the tags associated with an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to an Cloud9 development environment.</p>  <p>Tags that
         * you add to an Cloud9 environment by using this method will NOT be automatically
         * propagated to underlying resources.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to an Cloud9 development environment.</p>  <p>Tags that
         * you add to an Cloud9 environment by using this method will NOT be automatically
         * propagated to underlying resources.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to an Cloud9 development environment.</p>  <p>Tags that
         * you add to an Cloud9 environment by using this method will NOT be automatically
         * propagated to underlying resources.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from an Cloud9 development environment.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from an Cloud9 development environment.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from an Cloud9 development environment.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the settings of an existing Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * <p>Changes the settings of an existing Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UpdateEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * <p>Changes the settings of an existing Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UpdateEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the settings of an existing environment member for an Cloud9
         * development environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UpdateEnvironmentMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentMembershipOutcome UpdateEnvironmentMembership(const Model::UpdateEnvironmentMembershipRequest& request) const;

        /**
         * <p>Changes the settings of an existing environment member for an Cloud9
         * development environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UpdateEnvironmentMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnvironmentMembershipOutcomeCallable UpdateEnvironmentMembershipCallable(const Model::UpdateEnvironmentMembershipRequest& request) const;

        /**
         * <p>Changes the settings of an existing environment member for an Cloud9
         * development environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UpdateEnvironmentMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentMembershipAsync(const Model::UpdateEnvironmentMembershipRequest& request, const UpdateEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateEnvironmentEC2AsyncHelper(const Model::CreateEnvironmentEC2Request& request, const CreateEnvironmentEC2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEnvironmentMembershipAsyncHelper(const Model::CreateEnvironmentMembershipRequest& request, const CreateEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEnvironmentAsyncHelper(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEnvironmentMembershipAsyncHelper(const Model::DeleteEnvironmentMembershipRequest& request, const DeleteEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEnvironmentMembershipsAsyncHelper(const Model::DescribeEnvironmentMembershipsRequest& request, const DescribeEnvironmentMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEnvironmentStatusAsyncHelper(const Model::DescribeEnvironmentStatusRequest& request, const DescribeEnvironmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEnvironmentsAsyncHelper(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEnvironmentsAsyncHelper(const Model::ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEnvironmentAsyncHelper(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEnvironmentMembershipAsyncHelper(const Model::UpdateEnvironmentMembershipRequest& request, const UpdateEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Cloud9
} // namespace Aws
