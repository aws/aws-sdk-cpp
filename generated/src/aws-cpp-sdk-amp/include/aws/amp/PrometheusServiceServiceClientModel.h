/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/amp/PrometheusServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/amp/PrometheusServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PrometheusServiceClient header */
#include <aws/amp/model/CreateAlertManagerDefinitionResult.h>
#include <aws/amp/model/CreateLoggingConfigurationResult.h>
#include <aws/amp/model/CreateRuleGroupsNamespaceResult.h>
#include <aws/amp/model/CreateWorkspaceResult.h>
#include <aws/amp/model/DescribeAlertManagerDefinitionResult.h>
#include <aws/amp/model/DescribeLoggingConfigurationResult.h>
#include <aws/amp/model/DescribeRuleGroupsNamespaceResult.h>
#include <aws/amp/model/DescribeWorkspaceResult.h>
#include <aws/amp/model/ListRuleGroupsNamespacesResult.h>
#include <aws/amp/model/ListTagsForResourceResult.h>
#include <aws/amp/model/ListWorkspacesResult.h>
#include <aws/amp/model/PutAlertManagerDefinitionResult.h>
#include <aws/amp/model/PutRuleGroupsNamespaceResult.h>
#include <aws/amp/model/TagResourceResult.h>
#include <aws/amp/model/UntagResourceResult.h>
#include <aws/amp/model/UpdateLoggingConfigurationResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in PrometheusServiceClient header */

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
    using PrometheusServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PrometheusServiceEndpointProviderBase = Aws::PrometheusService::Endpoint::PrometheusServiceEndpointProviderBase;
    using PrometheusServiceEndpointProvider = Aws::PrometheusService::Endpoint::PrometheusServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PrometheusServiceClient header */
      class CreateAlertManagerDefinitionRequest;
      class CreateLoggingConfigurationRequest;
      class CreateRuleGroupsNamespaceRequest;
      class CreateWorkspaceRequest;
      class DeleteAlertManagerDefinitionRequest;
      class DeleteLoggingConfigurationRequest;
      class DeleteRuleGroupsNamespaceRequest;
      class DeleteWorkspaceRequest;
      class DescribeAlertManagerDefinitionRequest;
      class DescribeLoggingConfigurationRequest;
      class DescribeRuleGroupsNamespaceRequest;
      class DescribeWorkspaceRequest;
      class ListRuleGroupsNamespacesRequest;
      class ListTagsForResourceRequest;
      class ListWorkspacesRequest;
      class PutAlertManagerDefinitionRequest;
      class PutRuleGroupsNamespaceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateLoggingConfigurationRequest;
      class UpdateWorkspaceAliasRequest;
      /* End of service model forward declarations required in PrometheusServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAlertManagerDefinitionResult, PrometheusServiceError> CreateAlertManagerDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateLoggingConfigurationResult, PrometheusServiceError> CreateLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateRuleGroupsNamespaceResult, PrometheusServiceError> CreateRuleGroupsNamespaceOutcome;
      typedef Aws::Utils::Outcome<CreateWorkspaceResult, PrometheusServiceError> CreateWorkspaceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PrometheusServiceError> DeleteAlertManagerDefinitionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PrometheusServiceError> DeleteLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PrometheusServiceError> DeleteRuleGroupsNamespaceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PrometheusServiceError> DeleteWorkspaceOutcome;
      typedef Aws::Utils::Outcome<DescribeAlertManagerDefinitionResult, PrometheusServiceError> DescribeAlertManagerDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeLoggingConfigurationResult, PrometheusServiceError> DescribeLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeRuleGroupsNamespaceResult, PrometheusServiceError> DescribeRuleGroupsNamespaceOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkspaceResult, PrometheusServiceError> DescribeWorkspaceOutcome;
      typedef Aws::Utils::Outcome<ListRuleGroupsNamespacesResult, PrometheusServiceError> ListRuleGroupsNamespacesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PrometheusServiceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWorkspacesResult, PrometheusServiceError> ListWorkspacesOutcome;
      typedef Aws::Utils::Outcome<PutAlertManagerDefinitionResult, PrometheusServiceError> PutAlertManagerDefinitionOutcome;
      typedef Aws::Utils::Outcome<PutRuleGroupsNamespaceResult, PrometheusServiceError> PutRuleGroupsNamespaceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, PrometheusServiceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, PrometheusServiceError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateLoggingConfigurationResult, PrometheusServiceError> UpdateLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PrometheusServiceError> UpdateWorkspaceAliasOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAlertManagerDefinitionOutcome> CreateAlertManagerDefinitionOutcomeCallable;
      typedef std::future<CreateLoggingConfigurationOutcome> CreateLoggingConfigurationOutcomeCallable;
      typedef std::future<CreateRuleGroupsNamespaceOutcome> CreateRuleGroupsNamespaceOutcomeCallable;
      typedef std::future<CreateWorkspaceOutcome> CreateWorkspaceOutcomeCallable;
      typedef std::future<DeleteAlertManagerDefinitionOutcome> DeleteAlertManagerDefinitionOutcomeCallable;
      typedef std::future<DeleteLoggingConfigurationOutcome> DeleteLoggingConfigurationOutcomeCallable;
      typedef std::future<DeleteRuleGroupsNamespaceOutcome> DeleteRuleGroupsNamespaceOutcomeCallable;
      typedef std::future<DeleteWorkspaceOutcome> DeleteWorkspaceOutcomeCallable;
      typedef std::future<DescribeAlertManagerDefinitionOutcome> DescribeAlertManagerDefinitionOutcomeCallable;
      typedef std::future<DescribeLoggingConfigurationOutcome> DescribeLoggingConfigurationOutcomeCallable;
      typedef std::future<DescribeRuleGroupsNamespaceOutcome> DescribeRuleGroupsNamespaceOutcomeCallable;
      typedef std::future<DescribeWorkspaceOutcome> DescribeWorkspaceOutcomeCallable;
      typedef std::future<ListRuleGroupsNamespacesOutcome> ListRuleGroupsNamespacesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWorkspacesOutcome> ListWorkspacesOutcomeCallable;
      typedef std::future<PutAlertManagerDefinitionOutcome> PutAlertManagerDefinitionOutcomeCallable;
      typedef std::future<PutRuleGroupsNamespaceOutcome> PutRuleGroupsNamespaceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateLoggingConfigurationOutcome> UpdateLoggingConfigurationOutcomeCallable;
      typedef std::future<UpdateWorkspaceAliasOutcome> UpdateWorkspaceAliasOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PrometheusServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PrometheusServiceClient*, const Model::CreateAlertManagerDefinitionRequest&, const Model::CreateAlertManagerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAlertManagerDefinitionResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::CreateLoggingConfigurationRequest&, const Model::CreateLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::CreateRuleGroupsNamespaceRequest&, const Model::CreateRuleGroupsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleGroupsNamespaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::CreateWorkspaceRequest&, const Model::CreateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DeleteAlertManagerDefinitionRequest&, const Model::DeleteAlertManagerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlertManagerDefinitionResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DeleteLoggingConfigurationRequest&, const Model::DeleteLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DeleteRuleGroupsNamespaceRequest&, const Model::DeleteRuleGroupsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleGroupsNamespaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DeleteWorkspaceRequest&, const Model::DeleteWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DescribeAlertManagerDefinitionRequest&, const Model::DescribeAlertManagerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlertManagerDefinitionResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DescribeLoggingConfigurationRequest&, const Model::DescribeLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DescribeRuleGroupsNamespaceRequest&, const Model::DescribeRuleGroupsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleGroupsNamespaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::DescribeWorkspaceRequest&, const Model::DescribeWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::ListRuleGroupsNamespacesRequest&, const Model::ListRuleGroupsNamespacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleGroupsNamespacesResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::ListWorkspacesRequest&, const Model::ListWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkspacesResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::PutAlertManagerDefinitionRequest&, const Model::PutAlertManagerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAlertManagerDefinitionResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::PutRuleGroupsNamespaceRequest&, const Model::PutRuleGroupsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRuleGroupsNamespaceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::UpdateLoggingConfigurationRequest&, const Model::UpdateLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const PrometheusServiceClient*, const Model::UpdateWorkspaceAliasRequest&, const Model::UpdateWorkspaceAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceAliasResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PrometheusService
} // namespace Aws
