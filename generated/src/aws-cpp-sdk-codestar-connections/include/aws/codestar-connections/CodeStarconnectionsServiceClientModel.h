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
#include <aws/codestar-connections/model/DeleteConnectionResult.h>
#include <aws/codestar-connections/model/DeleteHostResult.h>
#include <aws/codestar-connections/model/GetConnectionResult.h>
#include <aws/codestar-connections/model/GetHostResult.h>
#include <aws/codestar-connections/model/ListConnectionsResult.h>
#include <aws/codestar-connections/model/ListHostsResult.h>
#include <aws/codestar-connections/model/ListTagsForResourceResult.h>
#include <aws/codestar-connections/model/TagResourceResult.h>
#include <aws/codestar-connections/model/UntagResourceResult.h>
#include <aws/codestar-connections/model/UpdateHostResult.h>
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
      class DeleteConnectionRequest;
      class DeleteHostRequest;
      class GetConnectionRequest;
      class GetHostRequest;
      class ListConnectionsRequest;
      class ListHostsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateHostRequest;
      /* End of service model forward declarations required in CodeStarconnectionsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateConnectionResult, CodeStarconnectionsError> CreateConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateHostResult, CodeStarconnectionsError> CreateHostOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, CodeStarconnectionsError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteHostResult, CodeStarconnectionsError> DeleteHostOutcome;
      typedef Aws::Utils::Outcome<GetConnectionResult, CodeStarconnectionsError> GetConnectionOutcome;
      typedef Aws::Utils::Outcome<GetHostResult, CodeStarconnectionsError> GetHostOutcome;
      typedef Aws::Utils::Outcome<ListConnectionsResult, CodeStarconnectionsError> ListConnectionsOutcome;
      typedef Aws::Utils::Outcome<ListHostsResult, CodeStarconnectionsError> ListHostsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeStarconnectionsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CodeStarconnectionsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CodeStarconnectionsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateHostResult, CodeStarconnectionsError> UpdateHostOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
      typedef std::future<CreateHostOutcome> CreateHostOutcomeCallable;
      typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
      typedef std::future<DeleteHostOutcome> DeleteHostOutcomeCallable;
      typedef std::future<GetConnectionOutcome> GetConnectionOutcomeCallable;
      typedef std::future<GetHostOutcome> GetHostOutcomeCallable;
      typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
      typedef std::future<ListHostsOutcome> ListHostsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateHostOutcome> UpdateHostOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeStarconnectionsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::CreateHostRequest&, const Model::CreateHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHostResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::DeleteHostRequest&, const Model::DeleteHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHostResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::GetConnectionRequest&, const Model::GetConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::GetHostRequest&, const Model::GetHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectionsResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::ListHostsRequest&, const Model::ListHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHostsResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::UpdateHostRequest&, const Model::UpdateHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHostResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeStarconnections
} // namespace Aws
