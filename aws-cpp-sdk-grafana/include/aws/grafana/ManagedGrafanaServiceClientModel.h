/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/grafana/ManagedGrafanaErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/grafana/ManagedGrafanaEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ManagedGrafanaClient header */
#include <aws/grafana/model/AssociateLicenseResult.h>
#include <aws/grafana/model/CreateWorkspaceResult.h>
#include <aws/grafana/model/CreateWorkspaceApiKeyResult.h>
#include <aws/grafana/model/DeleteWorkspaceResult.h>
#include <aws/grafana/model/DeleteWorkspaceApiKeyResult.h>
#include <aws/grafana/model/DescribeWorkspaceResult.h>
#include <aws/grafana/model/DescribeWorkspaceAuthenticationResult.h>
#include <aws/grafana/model/DescribeWorkspaceConfigurationResult.h>
#include <aws/grafana/model/DisassociateLicenseResult.h>
#include <aws/grafana/model/ListPermissionsResult.h>
#include <aws/grafana/model/ListTagsForResourceResult.h>
#include <aws/grafana/model/ListWorkspacesResult.h>
#include <aws/grafana/model/TagResourceResult.h>
#include <aws/grafana/model/UntagResourceResult.h>
#include <aws/grafana/model/UpdatePermissionsResult.h>
#include <aws/grafana/model/UpdateWorkspaceResult.h>
#include <aws/grafana/model/UpdateWorkspaceAuthenticationResult.h>
#include <aws/grafana/model/UpdateWorkspaceConfigurationResult.h>
/* End of service model headers required in ManagedGrafanaClient header */

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

  namespace ManagedGrafana
  {
    using ManagedGrafanaClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ManagedGrafanaEndpointProviderBase = Aws::ManagedGrafana::Endpoint::ManagedGrafanaEndpointProviderBase;
    using ManagedGrafanaEndpointProvider = Aws::ManagedGrafana::Endpoint::ManagedGrafanaEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ManagedGrafanaClient header */
      class AssociateLicenseRequest;
      class CreateWorkspaceRequest;
      class CreateWorkspaceApiKeyRequest;
      class DeleteWorkspaceRequest;
      class DeleteWorkspaceApiKeyRequest;
      class DescribeWorkspaceRequest;
      class DescribeWorkspaceAuthenticationRequest;
      class DescribeWorkspaceConfigurationRequest;
      class DisassociateLicenseRequest;
      class ListPermissionsRequest;
      class ListTagsForResourceRequest;
      class ListWorkspacesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdatePermissionsRequest;
      class UpdateWorkspaceRequest;
      class UpdateWorkspaceAuthenticationRequest;
      class UpdateWorkspaceConfigurationRequest;
      /* End of service model forward declarations required in ManagedGrafanaClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateLicenseResult, ManagedGrafanaError> AssociateLicenseOutcome;
      typedef Aws::Utils::Outcome<CreateWorkspaceResult, ManagedGrafanaError> CreateWorkspaceOutcome;
      typedef Aws::Utils::Outcome<CreateWorkspaceApiKeyResult, ManagedGrafanaError> CreateWorkspaceApiKeyOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkspaceResult, ManagedGrafanaError> DeleteWorkspaceOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkspaceApiKeyResult, ManagedGrafanaError> DeleteWorkspaceApiKeyOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkspaceResult, ManagedGrafanaError> DescribeWorkspaceOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkspaceAuthenticationResult, ManagedGrafanaError> DescribeWorkspaceAuthenticationOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkspaceConfigurationResult, ManagedGrafanaError> DescribeWorkspaceConfigurationOutcome;
      typedef Aws::Utils::Outcome<DisassociateLicenseResult, ManagedGrafanaError> DisassociateLicenseOutcome;
      typedef Aws::Utils::Outcome<ListPermissionsResult, ManagedGrafanaError> ListPermissionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ManagedGrafanaError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWorkspacesResult, ManagedGrafanaError> ListWorkspacesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ManagedGrafanaError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ManagedGrafanaError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdatePermissionsResult, ManagedGrafanaError> UpdatePermissionsOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkspaceResult, ManagedGrafanaError> UpdateWorkspaceOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkspaceAuthenticationResult, ManagedGrafanaError> UpdateWorkspaceAuthenticationOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkspaceConfigurationResult, ManagedGrafanaError> UpdateWorkspaceConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateLicenseOutcome> AssociateLicenseOutcomeCallable;
      typedef std::future<CreateWorkspaceOutcome> CreateWorkspaceOutcomeCallable;
      typedef std::future<CreateWorkspaceApiKeyOutcome> CreateWorkspaceApiKeyOutcomeCallable;
      typedef std::future<DeleteWorkspaceOutcome> DeleteWorkspaceOutcomeCallable;
      typedef std::future<DeleteWorkspaceApiKeyOutcome> DeleteWorkspaceApiKeyOutcomeCallable;
      typedef std::future<DescribeWorkspaceOutcome> DescribeWorkspaceOutcomeCallable;
      typedef std::future<DescribeWorkspaceAuthenticationOutcome> DescribeWorkspaceAuthenticationOutcomeCallable;
      typedef std::future<DescribeWorkspaceConfigurationOutcome> DescribeWorkspaceConfigurationOutcomeCallable;
      typedef std::future<DisassociateLicenseOutcome> DisassociateLicenseOutcomeCallable;
      typedef std::future<ListPermissionsOutcome> ListPermissionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWorkspacesOutcome> ListWorkspacesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdatePermissionsOutcome> UpdatePermissionsOutcomeCallable;
      typedef std::future<UpdateWorkspaceOutcome> UpdateWorkspaceOutcomeCallable;
      typedef std::future<UpdateWorkspaceAuthenticationOutcome> UpdateWorkspaceAuthenticationOutcomeCallable;
      typedef std::future<UpdateWorkspaceConfigurationOutcome> UpdateWorkspaceConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ManagedGrafanaClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ManagedGrafanaClient*, const Model::AssociateLicenseRequest&, const Model::AssociateLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLicenseResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::CreateWorkspaceRequest&, const Model::CreateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspaceResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::CreateWorkspaceApiKeyRequest&, const Model::CreateWorkspaceApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspaceApiKeyResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::DeleteWorkspaceRequest&, const Model::DeleteWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::DeleteWorkspaceApiKeyRequest&, const Model::DeleteWorkspaceApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceApiKeyResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::DescribeWorkspaceRequest&, const Model::DescribeWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::DescribeWorkspaceAuthenticationRequest&, const Model::DescribeWorkspaceAuthenticationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceAuthenticationResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::DescribeWorkspaceConfigurationRequest&, const Model::DescribeWorkspaceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceConfigurationResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::DisassociateLicenseRequest&, const Model::DisassociateLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLicenseResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::ListPermissionsRequest&, const Model::ListPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionsResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::ListWorkspacesRequest&, const Model::ListWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkspacesResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::UpdatePermissionsRequest&, const Model::UpdatePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePermissionsResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::UpdateWorkspaceRequest&, const Model::UpdateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::UpdateWorkspaceAuthenticationRequest&, const Model::UpdateWorkspaceAuthenticationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceAuthenticationResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::UpdateWorkspaceConfigurationRequest&, const Model::UpdateWorkspaceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ManagedGrafana
} // namespace Aws
