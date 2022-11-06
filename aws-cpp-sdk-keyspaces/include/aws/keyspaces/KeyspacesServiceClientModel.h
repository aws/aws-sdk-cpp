/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/keyspaces/KeyspacesErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/keyspaces/KeyspacesEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KeyspacesClient header */
#include <aws/keyspaces/model/CreateKeyspaceResult.h>
#include <aws/keyspaces/model/CreateTableResult.h>
#include <aws/keyspaces/model/DeleteKeyspaceResult.h>
#include <aws/keyspaces/model/DeleteTableResult.h>
#include <aws/keyspaces/model/GetKeyspaceResult.h>
#include <aws/keyspaces/model/GetTableResult.h>
#include <aws/keyspaces/model/ListKeyspacesResult.h>
#include <aws/keyspaces/model/ListTablesResult.h>
#include <aws/keyspaces/model/ListTagsForResourceResult.h>
#include <aws/keyspaces/model/RestoreTableResult.h>
#include <aws/keyspaces/model/TagResourceResult.h>
#include <aws/keyspaces/model/UntagResourceResult.h>
#include <aws/keyspaces/model/UpdateTableResult.h>
/* End of service model headers required in KeyspacesClient header */

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

  namespace Keyspaces
  {
    using KeyspacesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KeyspacesEndpointProviderBase = Aws::Keyspaces::Endpoint::KeyspacesEndpointProviderBase;
    using KeyspacesEndpointProvider = Aws::Keyspaces::Endpoint::KeyspacesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KeyspacesClient header */
      class CreateKeyspaceRequest;
      class CreateTableRequest;
      class DeleteKeyspaceRequest;
      class DeleteTableRequest;
      class GetKeyspaceRequest;
      class GetTableRequest;
      class ListKeyspacesRequest;
      class ListTablesRequest;
      class ListTagsForResourceRequest;
      class RestoreTableRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateTableRequest;
      /* End of service model forward declarations required in KeyspacesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateKeyspaceResult, KeyspacesError> CreateKeyspaceOutcome;
      typedef Aws::Utils::Outcome<CreateTableResult, KeyspacesError> CreateTableOutcome;
      typedef Aws::Utils::Outcome<DeleteKeyspaceResult, KeyspacesError> DeleteKeyspaceOutcome;
      typedef Aws::Utils::Outcome<DeleteTableResult, KeyspacesError> DeleteTableOutcome;
      typedef Aws::Utils::Outcome<GetKeyspaceResult, KeyspacesError> GetKeyspaceOutcome;
      typedef Aws::Utils::Outcome<GetTableResult, KeyspacesError> GetTableOutcome;
      typedef Aws::Utils::Outcome<ListKeyspacesResult, KeyspacesError> ListKeyspacesOutcome;
      typedef Aws::Utils::Outcome<ListTablesResult, KeyspacesError> ListTablesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, KeyspacesError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RestoreTableResult, KeyspacesError> RestoreTableOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, KeyspacesError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, KeyspacesError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateTableResult, KeyspacesError> UpdateTableOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateKeyspaceOutcome> CreateKeyspaceOutcomeCallable;
      typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
      typedef std::future<DeleteKeyspaceOutcome> DeleteKeyspaceOutcomeCallable;
      typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
      typedef std::future<GetKeyspaceOutcome> GetKeyspaceOutcomeCallable;
      typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
      typedef std::future<ListKeyspacesOutcome> ListKeyspacesOutcomeCallable;
      typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RestoreTableOutcome> RestoreTableOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KeyspacesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KeyspacesClient*, const Model::CreateKeyspaceRequest&, const Model::CreateKeyspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeyspaceResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::CreateTableRequest&, const Model::CreateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTableResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::DeleteKeyspaceRequest&, const Model::DeleteKeyspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKeyspaceResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::DeleteTableRequest&, const Model::DeleteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::GetKeyspaceRequest&, const Model::GetKeyspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyspaceResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::GetTableRequest&, const Model::GetTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::ListKeyspacesRequest&, const Model::ListKeyspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeyspacesResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::RestoreTableRequest&, const Model::RestoreTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreTableResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KeyspacesClient*, const Model::UpdateTableRequest&, const Model::UpdateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Keyspaces
} // namespace Aws
