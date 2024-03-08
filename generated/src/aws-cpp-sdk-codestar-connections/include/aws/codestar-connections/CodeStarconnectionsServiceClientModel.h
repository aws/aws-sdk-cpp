/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codestar-connections/CodeStarconnectionsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codestar-connections/CodeStarconnectionsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeStarconnectionsClient header */
#include <aws/codestar-connections/model/CreateConnectionResult.h>
#include <aws/codestar-connections/model/CreateHostResult.h>
#include <aws/codestar-connections/model/CreateRepositoryLinkResult.h>
#include <aws/codestar-connections/model/CreateSyncConfigurationResult.h>
#include <aws/codestar-connections/model/DeleteConnectionResult.h>
#include <aws/codestar-connections/model/DeleteHostResult.h>
#include <aws/codestar-connections/model/DeleteRepositoryLinkResult.h>
#include <aws/codestar-connections/model/DeleteSyncConfigurationResult.h>
#include <aws/codestar-connections/model/GetConnectionResult.h>
#include <aws/codestar-connections/model/GetHostResult.h>
#include <aws/codestar-connections/model/GetRepositoryLinkResult.h>
#include <aws/codestar-connections/model/GetRepositorySyncStatusResult.h>
#include <aws/codestar-connections/model/GetResourceSyncStatusResult.h>
#include <aws/codestar-connections/model/GetSyncBlockerSummaryResult.h>
#include <aws/codestar-connections/model/GetSyncConfigurationResult.h>
#include <aws/codestar-connections/model/ListConnectionsResult.h>
#include <aws/codestar-connections/model/ListHostsResult.h>
#include <aws/codestar-connections/model/ListRepositoryLinksResult.h>
#include <aws/codestar-connections/model/ListRepositorySyncDefinitionsResult.h>
#include <aws/codestar-connections/model/ListSyncConfigurationsResult.h>
#include <aws/codestar-connections/model/ListTagsForResourceResult.h>
#include <aws/codestar-connections/model/TagResourceResult.h>
#include <aws/codestar-connections/model/UntagResourceResult.h>
#include <aws/codestar-connections/model/UpdateHostResult.h>
#include <aws/codestar-connections/model/UpdateRepositoryLinkResult.h>
#include <aws/codestar-connections/model/UpdateSyncBlockerResult.h>
#include <aws/codestar-connections/model/UpdateSyncConfigurationResult.h>
/* End of service model headers required in CodeStarconnectionsClient header */

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

  namespace CodeStarconnections
  {
    using CodeStarconnectionsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodeStarconnectionsEndpointProviderBase = Aws::CodeStarconnections::Endpoint::CodeStarconnectionsEndpointProviderBase;
    using CodeStarconnectionsEndpointProvider = Aws::CodeStarconnections::Endpoint::CodeStarconnectionsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeStarconnectionsClient header */
      class CreateConnectionRequest;
      class CreateHostRequest;
      class CreateRepositoryLinkRequest;
      class CreateSyncConfigurationRequest;
      class DeleteConnectionRequest;
      class DeleteHostRequest;
      class DeleteRepositoryLinkRequest;
      class DeleteSyncConfigurationRequest;
      class GetConnectionRequest;
      class GetHostRequest;
      class GetRepositoryLinkRequest;
      class GetRepositorySyncStatusRequest;
      class GetResourceSyncStatusRequest;
      class GetSyncBlockerSummaryRequest;
      class GetSyncConfigurationRequest;
      class ListConnectionsRequest;
      class ListHostsRequest;
      class ListRepositoryLinksRequest;
      class ListRepositorySyncDefinitionsRequest;
      class ListSyncConfigurationsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateHostRequest;
      class UpdateRepositoryLinkRequest;
      class UpdateSyncBlockerRequest;
      class UpdateSyncConfigurationRequest;
      /* End of service model forward declarations required in CodeStarconnectionsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateConnectionResult, CodeStarconnectionsError> CreateConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateHostResult, CodeStarconnectionsError> CreateHostOutcome;
      typedef Aws::Utils::Outcome<CreateRepositoryLinkResult, CodeStarconnectionsError> CreateRepositoryLinkOutcome;
      typedef Aws::Utils::Outcome<CreateSyncConfigurationResult, CodeStarconnectionsError> CreateSyncConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, CodeStarconnectionsError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteHostResult, CodeStarconnectionsError> DeleteHostOutcome;
      typedef Aws::Utils::Outcome<DeleteRepositoryLinkResult, CodeStarconnectionsError> DeleteRepositoryLinkOutcome;
      typedef Aws::Utils::Outcome<DeleteSyncConfigurationResult, CodeStarconnectionsError> DeleteSyncConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetConnectionResult, CodeStarconnectionsError> GetConnectionOutcome;
      typedef Aws::Utils::Outcome<GetHostResult, CodeStarconnectionsError> GetHostOutcome;
      typedef Aws::Utils::Outcome<GetRepositoryLinkResult, CodeStarconnectionsError> GetRepositoryLinkOutcome;
      typedef Aws::Utils::Outcome<GetRepositorySyncStatusResult, CodeStarconnectionsError> GetRepositorySyncStatusOutcome;
      typedef Aws::Utils::Outcome<GetResourceSyncStatusResult, CodeStarconnectionsError> GetResourceSyncStatusOutcome;
      typedef Aws::Utils::Outcome<GetSyncBlockerSummaryResult, CodeStarconnectionsError> GetSyncBlockerSummaryOutcome;
      typedef Aws::Utils::Outcome<GetSyncConfigurationResult, CodeStarconnectionsError> GetSyncConfigurationOutcome;
      typedef Aws::Utils::Outcome<ListConnectionsResult, CodeStarconnectionsError> ListConnectionsOutcome;
      typedef Aws::Utils::Outcome<ListHostsResult, CodeStarconnectionsError> ListHostsOutcome;
      typedef Aws::Utils::Outcome<ListRepositoryLinksResult, CodeStarconnectionsError> ListRepositoryLinksOutcome;
      typedef Aws::Utils::Outcome<ListRepositorySyncDefinitionsResult, CodeStarconnectionsError> ListRepositorySyncDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListSyncConfigurationsResult, CodeStarconnectionsError> ListSyncConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeStarconnectionsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CodeStarconnectionsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CodeStarconnectionsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateHostResult, CodeStarconnectionsError> UpdateHostOutcome;
      typedef Aws::Utils::Outcome<UpdateRepositoryLinkResult, CodeStarconnectionsError> UpdateRepositoryLinkOutcome;
      typedef Aws::Utils::Outcome<UpdateSyncBlockerResult, CodeStarconnectionsError> UpdateSyncBlockerOutcome;
      typedef Aws::Utils::Outcome<UpdateSyncConfigurationResult, CodeStarconnectionsError> UpdateSyncConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
      typedef std::future<CreateHostOutcome> CreateHostOutcomeCallable;
      typedef std::future<CreateRepositoryLinkOutcome> CreateRepositoryLinkOutcomeCallable;
      typedef std::future<CreateSyncConfigurationOutcome> CreateSyncConfigurationOutcomeCallable;
      typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
      typedef std::future<DeleteHostOutcome> DeleteHostOutcomeCallable;
      typedef std::future<DeleteRepositoryLinkOutcome> DeleteRepositoryLinkOutcomeCallable;
      typedef std::future<DeleteSyncConfigurationOutcome> DeleteSyncConfigurationOutcomeCallable;
      typedef std::future<GetConnectionOutcome> GetConnectionOutcomeCallable;
      typedef std::future<GetHostOutcome> GetHostOutcomeCallable;
      typedef std::future<GetRepositoryLinkOutcome> GetRepositoryLinkOutcomeCallable;
      typedef std::future<GetRepositorySyncStatusOutcome> GetRepositorySyncStatusOutcomeCallable;
      typedef std::future<GetResourceSyncStatusOutcome> GetResourceSyncStatusOutcomeCallable;
      typedef std::future<GetSyncBlockerSummaryOutcome> GetSyncBlockerSummaryOutcomeCallable;
      typedef std::future<GetSyncConfigurationOutcome> GetSyncConfigurationOutcomeCallable;
      typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
      typedef std::future<ListHostsOutcome> ListHostsOutcomeCallable;
      typedef std::future<ListRepositoryLinksOutcome> ListRepositoryLinksOutcomeCallable;
      typedef std::future<ListRepositorySyncDefinitionsOutcome> ListRepositorySyncDefinitionsOutcomeCallable;
      typedef std::future<ListSyncConfigurationsOutcome> ListSyncConfigurationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateHostOutcome> UpdateHostOutcomeCallable;
      typedef std::future<UpdateRepositoryLinkOutcome> UpdateRepositoryLinkOutcomeCallable;
      typedef std::future<UpdateSyncBlockerOutcome> UpdateSyncBlockerOutcomeCallable;
      typedef std::future<UpdateSyncConfigurationOutcome> UpdateSyncConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeStarconnectionsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::CreateHostRequest&, const Model::CreateHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHostResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::CreateRepositoryLinkRequest&, const Model::CreateRepositoryLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryLinkResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::CreateSyncConfigurationRequest&, const Model::CreateSyncConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSyncConfigurationResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::DeleteHostRequest&, const Model::DeleteHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHostResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::DeleteRepositoryLinkRequest&, const Model::DeleteRepositoryLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryLinkResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::DeleteSyncConfigurationRequest&, const Model::DeleteSyncConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSyncConfigurationResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::GetConnectionRequest&, const Model::GetConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::GetHostRequest&, const Model::GetHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::GetRepositoryLinkRequest&, const Model::GetRepositoryLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryLinkResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::GetRepositorySyncStatusRequest&, const Model::GetRepositorySyncStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositorySyncStatusResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::GetResourceSyncStatusRequest&, const Model::GetResourceSyncStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceSyncStatusResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::GetSyncBlockerSummaryRequest&, const Model::GetSyncBlockerSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSyncBlockerSummaryResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::GetSyncConfigurationRequest&, const Model::GetSyncConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSyncConfigurationResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectionsResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::ListHostsRequest&, const Model::ListHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHostsResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::ListRepositoryLinksRequest&, const Model::ListRepositoryLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoryLinksResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::ListRepositorySyncDefinitionsRequest&, const Model::ListRepositorySyncDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositorySyncDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::ListSyncConfigurationsRequest&, const Model::ListSyncConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSyncConfigurationsResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::UpdateHostRequest&, const Model::UpdateHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHostResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::UpdateRepositoryLinkRequest&, const Model::UpdateRepositoryLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRepositoryLinkResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::UpdateSyncBlockerRequest&, const Model::UpdateSyncBlockerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSyncBlockerResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::UpdateSyncConfigurationRequest&, const Model::UpdateSyncConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSyncConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeStarconnections
} // namespace Aws
