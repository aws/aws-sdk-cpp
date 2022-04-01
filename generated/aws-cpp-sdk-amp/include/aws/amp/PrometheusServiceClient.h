﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amp/model/CreateAlertManagerDefinitionResult.h>
#include <aws/amp/model/CreateRuleGroupsNamespaceResult.h>
#include <aws/amp/model/CreateWorkspaceResult.h>
#include <aws/amp/model/DescribeAlertManagerDefinitionResult.h>
#include <aws/amp/model/DescribeRuleGroupsNamespaceResult.h>
#include <aws/amp/model/DescribeWorkspaceResult.h>
#include <aws/amp/model/ListRuleGroupsNamespacesResult.h>
#include <aws/amp/model/ListTagsForResourceResult.h>
#include <aws/amp/model/ListWorkspacesResult.h>
#include <aws/amp/model/PutAlertManagerDefinitionResult.h>
#include <aws/amp/model/PutRuleGroupsNamespaceResult.h>
#include <aws/amp/model/TagResourceResult.h>
#include <aws/amp/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
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

namespace PrometheusService
{

namespace Model
{
        class CreateAlertManagerDefinitionRequest;
        class CreateRuleGroupsNamespaceRequest;
        class CreateWorkspaceRequest;
        class DeleteAlertManagerDefinitionRequest;
        class DeleteRuleGroupsNamespaceRequest;
        class DeleteWorkspaceRequest;
        class DescribeAlertManagerDefinitionRequest;
        class DescribeRuleGroupsNamespaceRequest;
        class DescribeWorkspaceRequest;
        class ListRuleGroupsNamespacesRequest;
        class ListTagsForResourceRequest;
        class ListWorkspacesRequest;
        class PutAlertManagerDefinitionRequest;
        class PutRuleGroupsNamespaceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateWorkspaceAliasRequest;

        typedef Aws::Utils::Outcome<CreateAlertManagerDefinitionResult, PrometheusServiceError> CreateAlertManagerDefinitionOutcome;
        typedef Aws::Utils::Outcome<CreateRuleGroupsNamespaceResult, PrometheusServiceError> CreateRuleGroupsNamespaceOutcome;
        typedef Aws::Utils::Outcome<CreateWorkspaceResult, PrometheusServiceError> CreateWorkspaceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PrometheusServiceError> DeleteAlertManagerDefinitionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PrometheusServiceError> DeleteRuleGroupsNamespaceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PrometheusServiceError> DeleteWorkspaceOutcome;
        typedef Aws::Utils::Outcome<DescribeAlertManagerDefinitionResult, PrometheusServiceError> DescribeAlertManagerDefinitionOutcome;
        typedef Aws::Utils::Outcome<DescribeRuleGroupsNamespaceResult, PrometheusServiceError> DescribeRuleGroupsNamespaceOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceResult, PrometheusServiceError> DescribeWorkspaceOutcome;
        typedef Aws::Utils::Outcome<ListRuleGroupsNamespacesResult, PrometheusServiceError> ListRuleGroupsNamespacesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, PrometheusServiceError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListWorkspacesResult, PrometheusServiceError> ListWorkspacesOutcome;
        typedef Aws::Utils::Outcome<PutAlertManagerDefinitionResult, PrometheusServiceError> PutAlertManagerDefinitionOutcome;
        typedef Aws::Utils::Outcome<PutRuleGroupsNamespaceResult, PrometheusServiceError> PutRuleGroupsNamespaceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, PrometheusServiceError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, PrometheusServiceError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PrometheusServiceError> UpdateWorkspaceAliasOutcome;

        typedef std::future<CreateAlertManagerDefinitionOutcome> CreateAlertManagerDefinitionOutcomeCallable;
        typedef std::future<CreateRuleGroupsNamespaceOutcome> CreateRuleGroupsNamespaceOutcomeCallable;
        typedef std::future<CreateWorkspaceOutcome> CreateWorkspaceOutcomeCallable;
        typedef std::future<DeleteAlertManagerDefinitionOutcome> DeleteAlertManagerDefinitionOutcomeCallable;
        typedef std::future<DeleteRuleGroupsNamespaceOutcome> DeleteRuleGroupsNamespaceOutcomeCallable;
        typedef std::future<DeleteWorkspaceOutcome> DeleteWorkspaceOutcomeCallable;
        typedef std::future<DescribeAlertManagerDefinitionOutcome> DescribeAlertManagerDefinitionOutcomeCallable;
        typedef std::future<DescribeRuleGroupsNamespaceOutcome> DescribeRuleGroupsNamespaceOutcomeCallable;
        typedef std::future<DescribeWorkspaceOutcome> DescribeWorkspaceOutcomeCallable;
        typedef std::future<ListRuleGroupsNamespacesOutcome> ListRuleGroupsNamespacesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListWorkspacesOutcome> ListWorkspacesOutcomeCallable;
        typedef std::future<PutAlertManagerDefinitionOutcome> PutAlertManagerDefinitionOutcomeCallable;
        typedef std::future<PutRuleGroupsNamespaceOutcome> PutRuleGroupsNamespaceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateWorkspaceAliasOutcome> UpdateWorkspaceAliasOutcomeCallable;
} // namespace Model

  class PrometheusServiceClient;

    typedef std::function<void(const PrometheusServiceClient*, const Model::CreateAlertManagerDefinitionRequest&, const Model::CreateAlertManagerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAlertManagerDefinitionResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::CreateRuleGroupsNamespaceRequest&, const Model::CreateRuleGroupsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleGroupsNamespaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::CreateWorkspaceRequest&, const Model::CreateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DeleteAlertManagerDefinitionRequest&, const Model::DeleteAlertManagerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlertManagerDefinitionResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DeleteRuleGroupsNamespaceRequest&, const Model::DeleteRuleGroupsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleGroupsNamespaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DeleteWorkspaceRequest&, const Model::DeleteWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DescribeAlertManagerDefinitionRequest&, const Model::DescribeAlertManagerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlertManagerDefinitionResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DescribeRuleGroupsNamespaceRequest&, const Model::DescribeRuleGroupsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleGroupsNamespaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DescribeWorkspaceRequest&, const Model::DescribeWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::ListRuleGroupsNamespacesRequest&, const Model::ListRuleGroupsNamespacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleGroupsNamespacesResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::ListWorkspacesRequest&, const Model::ListWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkspacesResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::PutAlertManagerDefinitionRequest&, const Model::PutAlertManagerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAlertManagerDefinitionResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::PutRuleGroupsNamespaceRequest&, const Model::PutRuleGroupsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRuleGroupsNamespaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::UpdateWorkspaceAliasRequest&, const Model::UpdateWorkspaceAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceAliasResponseReceivedHandler;

  /**
   * <p>Amazon Managed Service for Prometheus</p>
   */
  class AWS_PROMETHEUSSERVICE_API PrometheusServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrometheusServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrometheusServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PrometheusServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~PrometheusServiceClient();


        /**
         * <p>Create an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAlertManagerDefinitionOutcome CreateAlertManagerDefinition(const Model::CreateAlertManagerDefinitionRequest& request) const;

        /**
         * <p>Create an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateAlertManagerDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAlertManagerDefinitionOutcomeCallable CreateAlertManagerDefinitionCallable(const Model::CreateAlertManagerDefinitionRequest& request) const;

        /**
         * <p>Create an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateAlertManagerDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAlertManagerDefinitionAsync(const Model::CreateAlertManagerDefinitionRequest& request, const CreateAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a rule group namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleGroupsNamespaceOutcome CreateRuleGroupsNamespace(const Model::CreateRuleGroupsNamespaceRequest& request) const;

        /**
         * <p>Create a rule group namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateRuleGroupsNamespace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleGroupsNamespaceOutcomeCallable CreateRuleGroupsNamespaceCallable(const Model::CreateRuleGroupsNamespaceRequest& request) const;

        /**
         * <p>Create a rule group namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateRuleGroupsNamespace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleGroupsNamespaceAsync(const Model::CreateRuleGroupsNamespaceRequest& request, const CreateRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceOutcome CreateWorkspace(const Model::CreateWorkspaceRequest& request) const;

        /**
         * <p>Creates a new AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateWorkspace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const Model::CreateWorkspaceRequest& request) const;

        /**
         * <p>Creates a new AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateWorkspace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkspaceAsync(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlertManagerDefinitionOutcome DeleteAlertManagerDefinition(const Model::DeleteAlertManagerDefinitionRequest& request) const;

        /**
         * <p>Deletes an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteAlertManagerDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAlertManagerDefinitionOutcomeCallable DeleteAlertManagerDefinitionCallable(const Model::DeleteAlertManagerDefinitionRequest& request) const;

        /**
         * <p>Deletes an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteAlertManagerDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlertManagerDefinitionAsync(const Model::DeleteAlertManagerDefinitionRequest& request, const DeleteAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleGroupsNamespaceOutcome DeleteRuleGroupsNamespace(const Model::DeleteRuleGroupsNamespaceRequest& request) const;

        /**
         * <p>Delete a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteRuleGroupsNamespace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleGroupsNamespaceOutcomeCallable DeleteRuleGroupsNamespaceCallable(const Model::DeleteRuleGroupsNamespaceRequest& request) const;

        /**
         * <p>Delete a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteRuleGroupsNamespace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleGroupsNamespaceAsync(const Model::DeleteRuleGroupsNamespaceRequest& request, const DeleteRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest& request) const;

        /**
         * <p>Deletes an AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteWorkspace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkspaceOutcomeCallable DeleteWorkspaceCallable(const Model::DeleteWorkspaceRequest& request) const;

        /**
         * <p>Deletes an AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteWorkspace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkspaceAsync(const Model::DeleteWorkspaceRequest& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlertManagerDefinitionOutcome DescribeAlertManagerDefinition(const Model::DescribeAlertManagerDefinitionRequest& request) const;

        /**
         * <p>Describes an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeAlertManagerDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlertManagerDefinitionOutcomeCallable DescribeAlertManagerDefinitionCallable(const Model::DescribeAlertManagerDefinitionRequest& request) const;

        /**
         * <p>Describes an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeAlertManagerDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlertManagerDefinitionAsync(const Model::DescribeAlertManagerDefinitionRequest& request, const DescribeAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleGroupsNamespaceOutcome DescribeRuleGroupsNamespace(const Model::DescribeRuleGroupsNamespaceRequest& request) const;

        /**
         * <p>Describe a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeRuleGroupsNamespace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuleGroupsNamespaceOutcomeCallable DescribeRuleGroupsNamespaceCallable(const Model::DescribeRuleGroupsNamespaceRequest& request) const;

        /**
         * <p>Describe a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeRuleGroupsNamespace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuleGroupsNamespaceAsync(const Model::DescribeRuleGroupsNamespaceRequest& request, const DescribeRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceOutcome DescribeWorkspace(const Model::DescribeWorkspaceRequest& request) const;

        /**
         * <p>Describes an existing AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeWorkspace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceOutcomeCallable DescribeWorkspaceCallable(const Model::DescribeWorkspaceRequest& request) const;

        /**
         * <p>Describes an existing AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeWorkspace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceAsync(const Model::DescribeWorkspaceRequest& request, const DescribeWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists rule groups namespaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListRuleGroupsNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleGroupsNamespacesOutcome ListRuleGroupsNamespaces(const Model::ListRuleGroupsNamespacesRequest& request) const;

        /**
         * <p>Lists rule groups namespaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListRuleGroupsNamespaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleGroupsNamespacesOutcomeCallable ListRuleGroupsNamespacesCallable(const Model::ListRuleGroupsNamespacesRequest& request) const;

        /**
         * <p>Lists rule groups namespaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListRuleGroupsNamespaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleGroupsNamespacesAsync(const Model::ListRuleGroupsNamespacesRequest& request, const ListRuleGroupsNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags you have assigned to the resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags you have assigned to the resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags you have assigned to the resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all AMP workspaces, including workspaces being created or
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkspacesOutcome ListWorkspaces(const Model::ListWorkspacesRequest& request) const;

        /**
         * <p>Lists all AMP workspaces, including workspaces being created or
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListWorkspaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkspacesOutcomeCallable ListWorkspacesCallable(const Model::ListWorkspacesRequest& request) const;

        /**
         * <p>Lists all AMP workspaces, including workspaces being created or
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListWorkspaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkspacesAsync(const Model::ListWorkspacesRequest& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAlertManagerDefinitionOutcome PutAlertManagerDefinition(const Model::PutAlertManagerDefinitionRequest& request) const;

        /**
         * <p>Update an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutAlertManagerDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAlertManagerDefinitionOutcomeCallable PutAlertManagerDefinitionCallable(const Model::PutAlertManagerDefinitionRequest& request) const;

        /**
         * <p>Update an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutAlertManagerDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAlertManagerDefinitionAsync(const Model::PutAlertManagerDefinitionRequest& request, const PutAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRuleGroupsNamespaceOutcome PutRuleGroupsNamespace(const Model::PutRuleGroupsNamespaceRequest& request) const;

        /**
         * <p>Update a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutRuleGroupsNamespace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRuleGroupsNamespaceOutcomeCallable PutRuleGroupsNamespaceCallable(const Model::PutRuleGroupsNamespaceRequest& request) const;

        /**
         * <p>Update a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutRuleGroupsNamespace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRuleGroupsNamespaceAsync(const Model::PutRuleGroupsNamespaceRequest& request, const PutRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Creates tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Creates tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an AMP workspace alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateWorkspaceAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceAliasOutcome UpdateWorkspaceAlias(const Model::UpdateWorkspaceAliasRequest& request) const;

        /**
         * <p>Updates an AMP workspace alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateWorkspaceAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkspaceAliasOutcomeCallable UpdateWorkspaceAliasCallable(const Model::UpdateWorkspaceAliasRequest& request) const;

        /**
         * <p>Updates an AMP workspace alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateWorkspaceAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkspaceAliasAsync(const Model::UpdateWorkspaceAliasRequest& request, const UpdateWorkspaceAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateAlertManagerDefinitionAsyncHelper(const Model::CreateAlertManagerDefinitionRequest& request, const CreateAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRuleGroupsNamespaceAsyncHelper(const Model::CreateRuleGroupsNamespaceRequest& request, const CreateRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkspaceAsyncHelper(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAlertManagerDefinitionAsyncHelper(const Model::DeleteAlertManagerDefinitionRequest& request, const DeleteAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRuleGroupsNamespaceAsyncHelper(const Model::DeleteRuleGroupsNamespaceRequest& request, const DeleteRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkspaceAsyncHelper(const Model::DeleteWorkspaceRequest& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlertManagerDefinitionAsyncHelper(const Model::DescribeAlertManagerDefinitionRequest& request, const DescribeAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRuleGroupsNamespaceAsyncHelper(const Model::DescribeRuleGroupsNamespaceRequest& request, const DescribeRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceAsyncHelper(const Model::DescribeWorkspaceRequest& request, const DescribeWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRuleGroupsNamespacesAsyncHelper(const Model::ListRuleGroupsNamespacesRequest& request, const ListRuleGroupsNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkspacesAsyncHelper(const Model::ListWorkspacesRequest& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAlertManagerDefinitionAsyncHelper(const Model::PutAlertManagerDefinitionRequest& request, const PutAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRuleGroupsNamespaceAsyncHelper(const Model::PutRuleGroupsNamespaceRequest& request, const PutRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkspaceAliasAsyncHelper(const Model::UpdateWorkspaceAliasRequest& request, const UpdateWorkspaceAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace PrometheusService
} // namespace Aws
