/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/controltower/ControlTowerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/controltower/ControlTowerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ControlTowerClient header */
#include <aws/controltower/model/CreateLandingZoneResult.h>
#include <aws/controltower/model/DeleteLandingZoneResult.h>
#include <aws/controltower/model/DisableBaselineResult.h>
#include <aws/controltower/model/DisableControlResult.h>
#include <aws/controltower/model/EnableBaselineResult.h>
#include <aws/controltower/model/EnableControlResult.h>
#include <aws/controltower/model/GetBaselineResult.h>
#include <aws/controltower/model/GetBaselineOperationResult.h>
#include <aws/controltower/model/GetControlOperationResult.h>
#include <aws/controltower/model/GetEnabledBaselineResult.h>
#include <aws/controltower/model/GetEnabledControlResult.h>
#include <aws/controltower/model/GetLandingZoneResult.h>
#include <aws/controltower/model/GetLandingZoneOperationResult.h>
#include <aws/controltower/model/ListBaselinesResult.h>
#include <aws/controltower/model/ListEnabledBaselinesResult.h>
#include <aws/controltower/model/ListEnabledControlsResult.h>
#include <aws/controltower/model/ListLandingZonesResult.h>
#include <aws/controltower/model/ListTagsForResourceResult.h>
#include <aws/controltower/model/ResetEnabledBaselineResult.h>
#include <aws/controltower/model/ResetLandingZoneResult.h>
#include <aws/controltower/model/TagResourceResult.h>
#include <aws/controltower/model/UntagResourceResult.h>
#include <aws/controltower/model/UpdateEnabledBaselineResult.h>
#include <aws/controltower/model/UpdateEnabledControlResult.h>
#include <aws/controltower/model/UpdateLandingZoneResult.h>
/* End of service model headers required in ControlTowerClient header */

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

  namespace ControlTower
  {
    using ControlTowerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ControlTowerEndpointProviderBase = Aws::ControlTower::Endpoint::ControlTowerEndpointProviderBase;
    using ControlTowerEndpointProvider = Aws::ControlTower::Endpoint::ControlTowerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ControlTowerClient header */
      class CreateLandingZoneRequest;
      class DeleteLandingZoneRequest;
      class DisableBaselineRequest;
      class DisableControlRequest;
      class EnableBaselineRequest;
      class EnableControlRequest;
      class GetBaselineRequest;
      class GetBaselineOperationRequest;
      class GetControlOperationRequest;
      class GetEnabledBaselineRequest;
      class GetEnabledControlRequest;
      class GetLandingZoneRequest;
      class GetLandingZoneOperationRequest;
      class ListBaselinesRequest;
      class ListEnabledBaselinesRequest;
      class ListEnabledControlsRequest;
      class ListLandingZonesRequest;
      class ListTagsForResourceRequest;
      class ResetEnabledBaselineRequest;
      class ResetLandingZoneRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateEnabledBaselineRequest;
      class UpdateEnabledControlRequest;
      class UpdateLandingZoneRequest;
      /* End of service model forward declarations required in ControlTowerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateLandingZoneResult, ControlTowerError> CreateLandingZoneOutcome;
      typedef Aws::Utils::Outcome<DeleteLandingZoneResult, ControlTowerError> DeleteLandingZoneOutcome;
      typedef Aws::Utils::Outcome<DisableBaselineResult, ControlTowerError> DisableBaselineOutcome;
      typedef Aws::Utils::Outcome<DisableControlResult, ControlTowerError> DisableControlOutcome;
      typedef Aws::Utils::Outcome<EnableBaselineResult, ControlTowerError> EnableBaselineOutcome;
      typedef Aws::Utils::Outcome<EnableControlResult, ControlTowerError> EnableControlOutcome;
      typedef Aws::Utils::Outcome<GetBaselineResult, ControlTowerError> GetBaselineOutcome;
      typedef Aws::Utils::Outcome<GetBaselineOperationResult, ControlTowerError> GetBaselineOperationOutcome;
      typedef Aws::Utils::Outcome<GetControlOperationResult, ControlTowerError> GetControlOperationOutcome;
      typedef Aws::Utils::Outcome<GetEnabledBaselineResult, ControlTowerError> GetEnabledBaselineOutcome;
      typedef Aws::Utils::Outcome<GetEnabledControlResult, ControlTowerError> GetEnabledControlOutcome;
      typedef Aws::Utils::Outcome<GetLandingZoneResult, ControlTowerError> GetLandingZoneOutcome;
      typedef Aws::Utils::Outcome<GetLandingZoneOperationResult, ControlTowerError> GetLandingZoneOperationOutcome;
      typedef Aws::Utils::Outcome<ListBaselinesResult, ControlTowerError> ListBaselinesOutcome;
      typedef Aws::Utils::Outcome<ListEnabledBaselinesResult, ControlTowerError> ListEnabledBaselinesOutcome;
      typedef Aws::Utils::Outcome<ListEnabledControlsResult, ControlTowerError> ListEnabledControlsOutcome;
      typedef Aws::Utils::Outcome<ListLandingZonesResult, ControlTowerError> ListLandingZonesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ControlTowerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ResetEnabledBaselineResult, ControlTowerError> ResetEnabledBaselineOutcome;
      typedef Aws::Utils::Outcome<ResetLandingZoneResult, ControlTowerError> ResetLandingZoneOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ControlTowerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ControlTowerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateEnabledBaselineResult, ControlTowerError> UpdateEnabledBaselineOutcome;
      typedef Aws::Utils::Outcome<UpdateEnabledControlResult, ControlTowerError> UpdateEnabledControlOutcome;
      typedef Aws::Utils::Outcome<UpdateLandingZoneResult, ControlTowerError> UpdateLandingZoneOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateLandingZoneOutcome> CreateLandingZoneOutcomeCallable;
      typedef std::future<DeleteLandingZoneOutcome> DeleteLandingZoneOutcomeCallable;
      typedef std::future<DisableBaselineOutcome> DisableBaselineOutcomeCallable;
      typedef std::future<DisableControlOutcome> DisableControlOutcomeCallable;
      typedef std::future<EnableBaselineOutcome> EnableBaselineOutcomeCallable;
      typedef std::future<EnableControlOutcome> EnableControlOutcomeCallable;
      typedef std::future<GetBaselineOutcome> GetBaselineOutcomeCallable;
      typedef std::future<GetBaselineOperationOutcome> GetBaselineOperationOutcomeCallable;
      typedef std::future<GetControlOperationOutcome> GetControlOperationOutcomeCallable;
      typedef std::future<GetEnabledBaselineOutcome> GetEnabledBaselineOutcomeCallable;
      typedef std::future<GetEnabledControlOutcome> GetEnabledControlOutcomeCallable;
      typedef std::future<GetLandingZoneOutcome> GetLandingZoneOutcomeCallable;
      typedef std::future<GetLandingZoneOperationOutcome> GetLandingZoneOperationOutcomeCallable;
      typedef std::future<ListBaselinesOutcome> ListBaselinesOutcomeCallable;
      typedef std::future<ListEnabledBaselinesOutcome> ListEnabledBaselinesOutcomeCallable;
      typedef std::future<ListEnabledControlsOutcome> ListEnabledControlsOutcomeCallable;
      typedef std::future<ListLandingZonesOutcome> ListLandingZonesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ResetEnabledBaselineOutcome> ResetEnabledBaselineOutcomeCallable;
      typedef std::future<ResetLandingZoneOutcome> ResetLandingZoneOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateEnabledBaselineOutcome> UpdateEnabledBaselineOutcomeCallable;
      typedef std::future<UpdateEnabledControlOutcome> UpdateEnabledControlOutcomeCallable;
      typedef std::future<UpdateLandingZoneOutcome> UpdateLandingZoneOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ControlTowerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ControlTowerClient*, const Model::CreateLandingZoneRequest&, const Model::CreateLandingZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLandingZoneResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::DeleteLandingZoneRequest&, const Model::DeleteLandingZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLandingZoneResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::DisableBaselineRequest&, const Model::DisableBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableBaselineResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::DisableControlRequest&, const Model::DisableControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableControlResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::EnableBaselineRequest&, const Model::EnableBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableBaselineResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::EnableControlRequest&, const Model::EnableControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableControlResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::GetBaselineRequest&, const Model::GetBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBaselineResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::GetBaselineOperationRequest&, const Model::GetBaselineOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBaselineOperationResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::GetControlOperationRequest&, const Model::GetControlOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetControlOperationResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::GetEnabledBaselineRequest&, const Model::GetEnabledBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnabledBaselineResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::GetEnabledControlRequest&, const Model::GetEnabledControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnabledControlResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::GetLandingZoneRequest&, const Model::GetLandingZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLandingZoneResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::GetLandingZoneOperationRequest&, const Model::GetLandingZoneOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLandingZoneOperationResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::ListBaselinesRequest&, const Model::ListBaselinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBaselinesResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::ListEnabledBaselinesRequest&, const Model::ListEnabledBaselinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnabledBaselinesResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::ListEnabledControlsRequest&, const Model::ListEnabledControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnabledControlsResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::ListLandingZonesRequest&, const Model::ListLandingZonesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLandingZonesResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::ResetEnabledBaselineRequest&, const Model::ResetEnabledBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetEnabledBaselineResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::ResetLandingZoneRequest&, const Model::ResetLandingZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetLandingZoneResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::UpdateEnabledBaselineRequest&, const Model::UpdateEnabledBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnabledBaselineResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::UpdateEnabledControlRequest&, const Model::UpdateEnabledControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnabledControlResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::UpdateLandingZoneRequest&, const Model::UpdateLandingZoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLandingZoneResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ControlTower
} // namespace Aws
