/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/evs/EVSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/evs/EVSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EVSClient header */
#include <aws/evs/model/AssociateEipToVlanResult.h>
#include <aws/evs/model/CreateEnvironmentResult.h>
#include <aws/evs/model/CreateEnvironmentHostResult.h>
#include <aws/evs/model/DeleteEnvironmentResult.h>
#include <aws/evs/model/DeleteEnvironmentHostResult.h>
#include <aws/evs/model/DisassociateEipFromVlanResult.h>
#include <aws/evs/model/GetEnvironmentResult.h>
#include <aws/evs/model/ListEnvironmentHostsResult.h>
#include <aws/evs/model/ListEnvironmentVlansResult.h>
#include <aws/evs/model/ListEnvironmentsResult.h>
#include <aws/evs/model/ListTagsForResourceResult.h>
#include <aws/evs/model/TagResourceResult.h>
#include <aws/evs/model/UntagResourceResult.h>
#include <aws/evs/model/ListEnvironmentsRequest.h>
/* End of service model headers required in EVSClient header */

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

  namespace EVS
  {
    using EVSClientConfiguration = Aws::Client::GenericClientConfiguration;
    using EVSEndpointProviderBase = Aws::EVS::Endpoint::EVSEndpointProviderBase;
    using EVSEndpointProvider = Aws::EVS::Endpoint::EVSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EVSClient header */
      class AssociateEipToVlanRequest;
      class CreateEnvironmentRequest;
      class CreateEnvironmentHostRequest;
      class DeleteEnvironmentRequest;
      class DeleteEnvironmentHostRequest;
      class DisassociateEipFromVlanRequest;
      class GetEnvironmentRequest;
      class ListEnvironmentHostsRequest;
      class ListEnvironmentVlansRequest;
      class ListEnvironmentsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in EVSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateEipToVlanResult, EVSError> AssociateEipToVlanOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, EVSError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentHostResult, EVSError> CreateEnvironmentHostOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentResult, EVSError> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentHostResult, EVSError> DeleteEnvironmentHostOutcome;
      typedef Aws::Utils::Outcome<DisassociateEipFromVlanResult, EVSError> DisassociateEipFromVlanOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentResult, EVSError> GetEnvironmentOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentHostsResult, EVSError> ListEnvironmentHostsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentVlansResult, EVSError> ListEnvironmentVlansOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, EVSError> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, EVSError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, EVSError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, EVSError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateEipToVlanOutcome> AssociateEipToVlanOutcomeCallable;
      typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
      typedef std::future<CreateEnvironmentHostOutcome> CreateEnvironmentHostOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<DeleteEnvironmentHostOutcome> DeleteEnvironmentHostOutcomeCallable;
      typedef std::future<DisassociateEipFromVlanOutcome> DisassociateEipFromVlanOutcomeCallable;
      typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
      typedef std::future<ListEnvironmentHostsOutcome> ListEnvironmentHostsOutcomeCallable;
      typedef std::future<ListEnvironmentVlansOutcome> ListEnvironmentVlansOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EVSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const EVSClient*, const Model::AssociateEipToVlanRequest&, const Model::AssociateEipToVlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateEipToVlanResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::CreateEnvironmentHostRequest&, const Model::CreateEnvironmentHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentHostResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::DeleteEnvironmentHostRequest&, const Model::DeleteEnvironmentHostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentHostResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::DisassociateEipFromVlanRequest&, const Model::DisassociateEipFromVlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateEipFromVlanResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::ListEnvironmentHostsRequest&, const Model::ListEnvironmentHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentHostsResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::ListEnvironmentVlansRequest&, const Model::ListEnvironmentVlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentVlansResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const EVSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EVS
} // namespace Aws
