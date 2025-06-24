/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/FleetAttributes.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/LocationState.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{
  class CreateFleetResult
  {
  public:
    AWS_GAMELIFT_API CreateFleetResult() = default;
    AWS_GAMELIFT_API CreateFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties for the new fleet, including the current status. All fleets
     * are placed in <code>NEW</code> status on creation. </p>
     */
    inline const FleetAttributes& GetFleetAttributes() const { return m_fleetAttributes; }
    template<typename FleetAttributesT = FleetAttributes>
    void SetFleetAttributes(FleetAttributesT&& value) { m_fleetAttributesHasBeenSet = true; m_fleetAttributes = std::forward<FleetAttributesT>(value); }
    template<typename FleetAttributesT = FleetAttributes>
    CreateFleetResult& WithFleetAttributes(FleetAttributesT&& value) { SetFleetAttributes(std::forward<FleetAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet's locations and life-cycle status of each location. For new fleets,
     * the status of all locations is set to <code>NEW</code>. During fleet creation,
     * Amazon GameLift Servers updates each location status as instances are deployed
     * there and prepared for game hosting. This list includes an entry for the fleet's
     * home Region. For fleets with no remote locations, only one entry, representing
     * the home Region, is returned.</p>
     */
    inline const Aws::Vector<LocationState>& GetLocationStates() const { return m_locationStates; }
    template<typename LocationStatesT = Aws::Vector<LocationState>>
    void SetLocationStates(LocationStatesT&& value) { m_locationStatesHasBeenSet = true; m_locationStates = std::forward<LocationStatesT>(value); }
    template<typename LocationStatesT = Aws::Vector<LocationState>>
    CreateFleetResult& WithLocationStates(LocationStatesT&& value) { SetLocationStates(std::forward<LocationStatesT>(value)); return *this;}
    template<typename LocationStatesT = LocationState>
    CreateFleetResult& AddLocationStates(LocationStatesT&& value) { m_locationStatesHasBeenSet = true; m_locationStates.emplace_back(std::forward<LocationStatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFleetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FleetAttributes m_fleetAttributes;
    bool m_fleetAttributesHasBeenSet = false;

    Aws::Vector<LocationState> m_locationStates;
    bool m_locationStatesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
