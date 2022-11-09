/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/groundstation/GroundStationErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/groundstation/GroundStationEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GroundStationClient header */
#include <aws/groundstation/model/CancelContactResult.h>
#include <aws/groundstation/model/CreateConfigResult.h>
#include <aws/groundstation/model/CreateDataflowEndpointGroupResult.h>
#include <aws/groundstation/model/CreateEphemerisResult.h>
#include <aws/groundstation/model/CreateMissionProfileResult.h>
#include <aws/groundstation/model/DeleteConfigResult.h>
#include <aws/groundstation/model/DeleteDataflowEndpointGroupResult.h>
#include <aws/groundstation/model/DeleteEphemerisResult.h>
#include <aws/groundstation/model/DeleteMissionProfileResult.h>
#include <aws/groundstation/model/DescribeContactResult.h>
#include <aws/groundstation/model/DescribeEphemerisResult.h>
#include <aws/groundstation/model/GetConfigResult.h>
#include <aws/groundstation/model/GetDataflowEndpointGroupResult.h>
#include <aws/groundstation/model/GetMinuteUsageResult.h>
#include <aws/groundstation/model/GetMissionProfileResult.h>
#include <aws/groundstation/model/GetSatelliteResult.h>
#include <aws/groundstation/model/ListConfigsResult.h>
#include <aws/groundstation/model/ListContactsResult.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsResult.h>
#include <aws/groundstation/model/ListEphemeridesResult.h>
#include <aws/groundstation/model/ListGroundStationsResult.h>
#include <aws/groundstation/model/ListMissionProfilesResult.h>
#include <aws/groundstation/model/ListSatellitesResult.h>
#include <aws/groundstation/model/ListTagsForResourceResult.h>
#include <aws/groundstation/model/ReserveContactResult.h>
#include <aws/groundstation/model/TagResourceResult.h>
#include <aws/groundstation/model/UntagResourceResult.h>
#include <aws/groundstation/model/UpdateConfigResult.h>
#include <aws/groundstation/model/UpdateEphemerisResult.h>
#include <aws/groundstation/model/UpdateMissionProfileResult.h>
/* End of service model headers required in GroundStationClient header */

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

  namespace GroundStation
  {
    using GroundStationClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using GroundStationEndpointProviderBase = Aws::GroundStation::Endpoint::GroundStationEndpointProviderBase;
    using GroundStationEndpointProvider = Aws::GroundStation::Endpoint::GroundStationEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GroundStationClient header */
      class CancelContactRequest;
      class CreateConfigRequest;
      class CreateDataflowEndpointGroupRequest;
      class CreateEphemerisRequest;
      class CreateMissionProfileRequest;
      class DeleteConfigRequest;
      class DeleteDataflowEndpointGroupRequest;
      class DeleteEphemerisRequest;
      class DeleteMissionProfileRequest;
      class DescribeContactRequest;
      class DescribeEphemerisRequest;
      class GetConfigRequest;
      class GetDataflowEndpointGroupRequest;
      class GetMinuteUsageRequest;
      class GetMissionProfileRequest;
      class GetSatelliteRequest;
      class ListConfigsRequest;
      class ListContactsRequest;
      class ListDataflowEndpointGroupsRequest;
      class ListEphemeridesRequest;
      class ListGroundStationsRequest;
      class ListMissionProfilesRequest;
      class ListSatellitesRequest;
      class ListTagsForResourceRequest;
      class ReserveContactRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateConfigRequest;
      class UpdateEphemerisRequest;
      class UpdateMissionProfileRequest;
      /* End of service model forward declarations required in GroundStationClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelContactResult, GroundStationError> CancelContactOutcome;
      typedef Aws::Utils::Outcome<CreateConfigResult, GroundStationError> CreateConfigOutcome;
      typedef Aws::Utils::Outcome<CreateDataflowEndpointGroupResult, GroundStationError> CreateDataflowEndpointGroupOutcome;
      typedef Aws::Utils::Outcome<CreateEphemerisResult, GroundStationError> CreateEphemerisOutcome;
      typedef Aws::Utils::Outcome<CreateMissionProfileResult, GroundStationError> CreateMissionProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigResult, GroundStationError> DeleteConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteDataflowEndpointGroupResult, GroundStationError> DeleteDataflowEndpointGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteEphemerisResult, GroundStationError> DeleteEphemerisOutcome;
      typedef Aws::Utils::Outcome<DeleteMissionProfileResult, GroundStationError> DeleteMissionProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeContactResult, GroundStationError> DescribeContactOutcome;
      typedef Aws::Utils::Outcome<DescribeEphemerisResult, GroundStationError> DescribeEphemerisOutcome;
      typedef Aws::Utils::Outcome<GetConfigResult, GroundStationError> GetConfigOutcome;
      typedef Aws::Utils::Outcome<GetDataflowEndpointGroupResult, GroundStationError> GetDataflowEndpointGroupOutcome;
      typedef Aws::Utils::Outcome<GetMinuteUsageResult, GroundStationError> GetMinuteUsageOutcome;
      typedef Aws::Utils::Outcome<GetMissionProfileResult, GroundStationError> GetMissionProfileOutcome;
      typedef Aws::Utils::Outcome<GetSatelliteResult, GroundStationError> GetSatelliteOutcome;
      typedef Aws::Utils::Outcome<ListConfigsResult, GroundStationError> ListConfigsOutcome;
      typedef Aws::Utils::Outcome<ListContactsResult, GroundStationError> ListContactsOutcome;
      typedef Aws::Utils::Outcome<ListDataflowEndpointGroupsResult, GroundStationError> ListDataflowEndpointGroupsOutcome;
      typedef Aws::Utils::Outcome<ListEphemeridesResult, GroundStationError> ListEphemeridesOutcome;
      typedef Aws::Utils::Outcome<ListGroundStationsResult, GroundStationError> ListGroundStationsOutcome;
      typedef Aws::Utils::Outcome<ListMissionProfilesResult, GroundStationError> ListMissionProfilesOutcome;
      typedef Aws::Utils::Outcome<ListSatellitesResult, GroundStationError> ListSatellitesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, GroundStationError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ReserveContactResult, GroundStationError> ReserveContactOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, GroundStationError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, GroundStationError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigResult, GroundStationError> UpdateConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateEphemerisResult, GroundStationError> UpdateEphemerisOutcome;
      typedef Aws::Utils::Outcome<UpdateMissionProfileResult, GroundStationError> UpdateMissionProfileOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelContactOutcome> CancelContactOutcomeCallable;
      typedef std::future<CreateConfigOutcome> CreateConfigOutcomeCallable;
      typedef std::future<CreateDataflowEndpointGroupOutcome> CreateDataflowEndpointGroupOutcomeCallable;
      typedef std::future<CreateEphemerisOutcome> CreateEphemerisOutcomeCallable;
      typedef std::future<CreateMissionProfileOutcome> CreateMissionProfileOutcomeCallable;
      typedef std::future<DeleteConfigOutcome> DeleteConfigOutcomeCallable;
      typedef std::future<DeleteDataflowEndpointGroupOutcome> DeleteDataflowEndpointGroupOutcomeCallable;
      typedef std::future<DeleteEphemerisOutcome> DeleteEphemerisOutcomeCallable;
      typedef std::future<DeleteMissionProfileOutcome> DeleteMissionProfileOutcomeCallable;
      typedef std::future<DescribeContactOutcome> DescribeContactOutcomeCallable;
      typedef std::future<DescribeEphemerisOutcome> DescribeEphemerisOutcomeCallable;
      typedef std::future<GetConfigOutcome> GetConfigOutcomeCallable;
      typedef std::future<GetDataflowEndpointGroupOutcome> GetDataflowEndpointGroupOutcomeCallable;
      typedef std::future<GetMinuteUsageOutcome> GetMinuteUsageOutcomeCallable;
      typedef std::future<GetMissionProfileOutcome> GetMissionProfileOutcomeCallable;
      typedef std::future<GetSatelliteOutcome> GetSatelliteOutcomeCallable;
      typedef std::future<ListConfigsOutcome> ListConfigsOutcomeCallable;
      typedef std::future<ListContactsOutcome> ListContactsOutcomeCallable;
      typedef std::future<ListDataflowEndpointGroupsOutcome> ListDataflowEndpointGroupsOutcomeCallable;
      typedef std::future<ListEphemeridesOutcome> ListEphemeridesOutcomeCallable;
      typedef std::future<ListGroundStationsOutcome> ListGroundStationsOutcomeCallable;
      typedef std::future<ListMissionProfilesOutcome> ListMissionProfilesOutcomeCallable;
      typedef std::future<ListSatellitesOutcome> ListSatellitesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ReserveContactOutcome> ReserveContactOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConfigOutcome> UpdateConfigOutcomeCallable;
      typedef std::future<UpdateEphemerisOutcome> UpdateEphemerisOutcomeCallable;
      typedef std::future<UpdateMissionProfileOutcome> UpdateMissionProfileOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GroundStationClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GroundStationClient*, const Model::CancelContactRequest&, const Model::CancelContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelContactResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::CreateConfigRequest&, const Model::CreateConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::CreateDataflowEndpointGroupRequest&, const Model::CreateDataflowEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataflowEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::CreateEphemerisRequest&, const Model::CreateEphemerisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEphemerisResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::CreateMissionProfileRequest&, const Model::CreateMissionProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMissionProfileResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::DeleteConfigRequest&, const Model::DeleteConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::DeleteDataflowEndpointGroupRequest&, const Model::DeleteDataflowEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataflowEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::DeleteEphemerisRequest&, const Model::DeleteEphemerisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEphemerisResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::DeleteMissionProfileRequest&, const Model::DeleteMissionProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMissionProfileResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::DescribeContactRequest&, const Model::DescribeContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContactResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::DescribeEphemerisRequest&, const Model::DescribeEphemerisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEphemerisResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::GetConfigRequest&, const Model::GetConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::GetDataflowEndpointGroupRequest&, const Model::GetDataflowEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataflowEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::GetMinuteUsageRequest&, const Model::GetMinuteUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMinuteUsageResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::GetMissionProfileRequest&, const Model::GetMissionProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMissionProfileResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::GetSatelliteRequest&, const Model::GetSatelliteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSatelliteResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListConfigsRequest&, const Model::ListConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigsResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListContactsRequest&, const Model::ListContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactsResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListDataflowEndpointGroupsRequest&, const Model::ListDataflowEndpointGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataflowEndpointGroupsResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListEphemeridesRequest&, const Model::ListEphemeridesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEphemeridesResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListGroundStationsRequest&, const Model::ListGroundStationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroundStationsResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListMissionProfilesRequest&, const Model::ListMissionProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMissionProfilesResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListSatellitesRequest&, const Model::ListSatellitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSatellitesResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ReserveContactRequest&, const Model::ReserveContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReserveContactResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::UpdateConfigRequest&, const Model::UpdateConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::UpdateEphemerisRequest&, const Model::UpdateEphemerisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEphemerisResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::UpdateMissionProfileRequest&, const Model::UpdateMissionProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMissionProfileResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace GroundStation
} // namespace Aws
