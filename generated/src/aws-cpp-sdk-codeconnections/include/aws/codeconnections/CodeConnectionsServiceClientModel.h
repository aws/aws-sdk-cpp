﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codeconnections/CodeConnectionsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codeconnections/CodeConnectionsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeConnectionsClient header */
#include <aws/codeconnections/model/CreateConnectionResult.h>
#include <aws/codeconnections/model/CreateHostResult.h>
#include <aws/codeconnections/model/CreateRepositoryLinkResult.h>
#include <aws/codeconnections/model/CreateSyncConfigurationResult.h>
#include <aws/codeconnections/model/DeleteConnectionResult.h>
#include <aws/codeconnections/model/DeleteHostResult.h>
#include <aws/codeconnections/model/DeleteRepositoryLinkResult.h>
#include <aws/codeconnections/model/DeleteSyncConfigurationResult.h>
#include <aws/codeconnections/model/GetConnectionResult.h>
#include <aws/codeconnections/model/GetHostResult.h>
#include <aws/codeconnections/model/GetRepositoryLinkResult.h>
#include <aws/codeconnections/model/GetRepositorySyncStatusResult.h>
#include <aws/codeconnections/model/GetResourceSyncStatusResult.h>
#include <aws/codeconnections/model/GetSyncBlockerSummaryResult.h>
#include <aws/codeconnections/model/GetSyncConfigurationResult.h>
#include <aws/codeconnections/model/ListConnectionsResult.h>
#include <aws/codeconnections/model/ListHostsResult.h>
#include <aws/codeconnections/model/ListRepositoryLinksResult.h>
#include <aws/codeconnections/model/ListRepositorySyncDefinitionsResult.h>
#include <aws/codeconnections/model/ListSyncConfigurationsResult.h>
#include <aws/codeconnections/model/ListTagsForResourceResult.h>
#include <aws/codeconnections/model/TagResourceResult.h>
#include <aws/codeconnections/model/UntagResourceResult.h>
#include <aws/codeconnections/model/UpdateHostResult.h>
#include <aws/codeconnections/model/UpdateRepositoryLinkResult.h>
#include <aws/codeconnections/model/UpdateSyncBlockerResult.h>
#include <aws/codeconnections/model/UpdateSyncConfigurationResult.h>
#include <aws/codeconnections/model/ListRepositoryLinksRequest.h>
#include <aws/codeconnections/model/ListHostsRequest.h>
#include <aws/codeconnections/model/ListConnectionsRequest.h>
/* End of service model headers required in CodeConnectionsClient header */

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

  namespace CodeConnections
  {
    using CodeConnectionsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using CodeConnectionsEndpointProviderBase = Aws::CodeConnections::Endpoint::CodeConnectionsEndpointProviderBase;
    using CodeConnectionsEndpointProvider = Aws::CodeConnections::Endpoint::CodeConnectionsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeConnectionsClient header */
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
      /* End of service model forward declarations required in CodeConnectionsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateConnectionResult, CodeConnectionsError> CreateConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateHostResult, CodeConnectionsError> CreateHostOutcome;
      typedef Aws::Utils::Outcome<CreateRepositoryLinkResult, CodeConnectionsError> CreateRepositoryLinkOutcome;
      typedef Aws::Utils::Outcome<CreateSyncConfigurationResult, CodeConnectionsError> CreateSyncConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, CodeConnectionsError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteHostResult, CodeConnectionsError> DeleteHostOutcome;
      typedef Aws::Utils::Outcome<DeleteRepositoryLinkResult, CodeConnectionsError> DeleteRepositoryLinkOutcome;
      typedef Aws::Utils::Outcome<DeleteSyncConfigurationResult, CodeConnectionsError> DeleteSyncConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetConnectionResult, CodeConnectionsError> GetConnectionOutcome;
      typedef Aws::Utils::Outcome<GetHostResult, CodeConnectionsError> GetHostOutcome;
      typedef Aws::Utils::Outcome<GetRepositoryLinkResult, CodeConnectionsError> GetRepositoryLinkOutcome;
      typedef Aws::Utils::Outcome<GetRepositorySyncStatusResult, CodeConnectionsError> GetRepositorySyncStatusOutcome;
      typedef Aws::Utils::Outcome<GetResourceSyncStatusResult, CodeConnectionsError> GetResourceSyncStatusOutcome;
      typedef Aws::Utils::Outcome<GetSyncBlockerSummaryResult, CodeConnectionsError> GetSyncBlockerSummaryOutcome;
      typedef Aws::Utils::Outcome<GetSyncConfigurationResult, CodeConnectionsError> GetSyncConfigurationOutcome;
      typedef Aws::Utils::Outcome<ListConnectionsResult, CodeConnectionsError> ListConnectionsOutcome;
      typedef Aws::Utils::Outcome<ListHostsResult, CodeConnectionsError> ListHostsOutcome;
      typedef Aws::Utils::Outcome<ListRepositoryLinksResult, CodeConnectionsError> ListRepositoryLinksOutcome;
      typedef Aws::Utils::Outcome<ListRepositorySyncDefinitionsResult, CodeConnectionsError> ListRepositorySyncDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListSyncConfigurationsResult, CodeConnectionsError> ListSyncConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeConnectionsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CodeConnectionsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CodeConnectionsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateHostResult, CodeConnectionsError> UpdateHostOutcome;
      typedef Aws::Utils::Outcome<UpdateRepositoryLinkResult, CodeConnectionsError> UpdateRepositoryLinkOutcome;
      typedef Aws::Utils::Outcome<UpdateSyncBlockerResult, CodeConnectionsError> UpdateSyncBlockerOutcome;
      typedef Aws::Utils::Outcome<UpdateSyncConfigurationResult, CodeConnectionsError> UpdateSyncConfigurationOutcome;
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

    class CodeConnectionsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeConnectionsClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::CreateHostRequest&, const Model::CreateHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHostResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::CreateRepositoryLinkRequest&, const Model::CreateRepositoryLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryLinkResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::CreateSyncConfigurationRequest&, const Model::CreateSyncConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSyncConfigurationResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::DeleteHostRequest&, const Model::DeleteHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHostResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::DeleteRepositoryLinkRequest&, const Model::DeleteRepositoryLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryLinkResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::DeleteSyncConfigurationRequest&, const Model::DeleteSyncConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSyncConfigurationResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::GetConnectionRequest&, const Model::GetConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::GetHostRequest&, const Model::GetHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::GetRepositoryLinkRequest&, const Model::GetRepositoryLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryLinkResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::GetRepositorySyncStatusRequest&, const Model::GetRepositorySyncStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositorySyncStatusResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::GetResourceSyncStatusRequest&, const Model::GetResourceSyncStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceSyncStatusResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::GetSyncBlockerSummaryRequest&, const Model::GetSyncBlockerSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSyncBlockerSummaryResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::GetSyncConfigurationRequest&, const Model::GetSyncConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSyncConfigurationResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectionsResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::ListHostsRequest&, const Model::ListHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHostsResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::ListRepositoryLinksRequest&, const Model::ListRepositoryLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoryLinksResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::ListRepositorySyncDefinitionsRequest&, const Model::ListRepositorySyncDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositorySyncDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::ListSyncConfigurationsRequest&, const Model::ListSyncConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSyncConfigurationsResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::UpdateHostRequest&, const Model::UpdateHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHostResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::UpdateRepositoryLinkRequest&, const Model::UpdateRepositoryLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRepositoryLinkResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::UpdateSyncBlockerRequest&, const Model::UpdateSyncBlockerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSyncBlockerResponseReceivedHandler;
    typedef std::function<void(const CodeConnectionsClient*, const Model::UpdateSyncConfigurationRequest&, const Model::UpdateSyncConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSyncConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeConnections
} // namespace Aws
