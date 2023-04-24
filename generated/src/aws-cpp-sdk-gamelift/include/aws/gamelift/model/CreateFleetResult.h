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
    AWS_GAMELIFT_API CreateFleetResult();
    AWS_GAMELIFT_API CreateFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties for the new fleet, including the current status. All fleets
     * are placed in <code>NEW</code> status on creation. </p>
     */
    inline const FleetAttributes& GetFleetAttributes() const{ return m_fleetAttributes; }

    /**
     * <p>The properties for the new fleet, including the current status. All fleets
     * are placed in <code>NEW</code> status on creation. </p>
     */
    inline void SetFleetAttributes(const FleetAttributes& value) { m_fleetAttributes = value; }

    /**
     * <p>The properties for the new fleet, including the current status. All fleets
     * are placed in <code>NEW</code> status on creation. </p>
     */
    inline void SetFleetAttributes(FleetAttributes&& value) { m_fleetAttributes = std::move(value); }

    /**
     * <p>The properties for the new fleet, including the current status. All fleets
     * are placed in <code>NEW</code> status on creation. </p>
     */
    inline CreateFleetResult& WithFleetAttributes(const FleetAttributes& value) { SetFleetAttributes(value); return *this;}

    /**
     * <p>The properties for the new fleet, including the current status. All fleets
     * are placed in <code>NEW</code> status on creation. </p>
     */
    inline CreateFleetResult& WithFleetAttributes(FleetAttributes&& value) { SetFleetAttributes(std::move(value)); return *this;}


    /**
     * <p>The fleet's locations and life-cycle status of each location. For new fleets,
     * the status of all locations is set to <code>NEW</code>. During fleet creation,
     * Amazon GameLift updates each location status as instances are deployed there and
     * prepared for game hosting. This list includes an entry for the fleet's home
     * Region. For fleets with no remote locations, only one entry, representing the
     * home Region, is returned.</p>
     */
    inline const Aws::Vector<LocationState>& GetLocationStates() const{ return m_locationStates; }

    /**
     * <p>The fleet's locations and life-cycle status of each location. For new fleets,
     * the status of all locations is set to <code>NEW</code>. During fleet creation,
     * Amazon GameLift updates each location status as instances are deployed there and
     * prepared for game hosting. This list includes an entry for the fleet's home
     * Region. For fleets with no remote locations, only one entry, representing the
     * home Region, is returned.</p>
     */
    inline void SetLocationStates(const Aws::Vector<LocationState>& value) { m_locationStates = value; }

    /**
     * <p>The fleet's locations and life-cycle status of each location. For new fleets,
     * the status of all locations is set to <code>NEW</code>. During fleet creation,
     * Amazon GameLift updates each location status as instances are deployed there and
     * prepared for game hosting. This list includes an entry for the fleet's home
     * Region. For fleets with no remote locations, only one entry, representing the
     * home Region, is returned.</p>
     */
    inline void SetLocationStates(Aws::Vector<LocationState>&& value) { m_locationStates = std::move(value); }

    /**
     * <p>The fleet's locations and life-cycle status of each location. For new fleets,
     * the status of all locations is set to <code>NEW</code>. During fleet creation,
     * Amazon GameLift updates each location status as instances are deployed there and
     * prepared for game hosting. This list includes an entry for the fleet's home
     * Region. For fleets with no remote locations, only one entry, representing the
     * home Region, is returned.</p>
     */
    inline CreateFleetResult& WithLocationStates(const Aws::Vector<LocationState>& value) { SetLocationStates(value); return *this;}

    /**
     * <p>The fleet's locations and life-cycle status of each location. For new fleets,
     * the status of all locations is set to <code>NEW</code>. During fleet creation,
     * Amazon GameLift updates each location status as instances are deployed there and
     * prepared for game hosting. This list includes an entry for the fleet's home
     * Region. For fleets with no remote locations, only one entry, representing the
     * home Region, is returned.</p>
     */
    inline CreateFleetResult& WithLocationStates(Aws::Vector<LocationState>&& value) { SetLocationStates(std::move(value)); return *this;}

    /**
     * <p>The fleet's locations and life-cycle status of each location. For new fleets,
     * the status of all locations is set to <code>NEW</code>. During fleet creation,
     * Amazon GameLift updates each location status as instances are deployed there and
     * prepared for game hosting. This list includes an entry for the fleet's home
     * Region. For fleets with no remote locations, only one entry, representing the
     * home Region, is returned.</p>
     */
    inline CreateFleetResult& AddLocationStates(const LocationState& value) { m_locationStates.push_back(value); return *this; }

    /**
     * <p>The fleet's locations and life-cycle status of each location. For new fleets,
     * the status of all locations is set to <code>NEW</code>. During fleet creation,
     * Amazon GameLift updates each location status as instances are deployed there and
     * prepared for game hosting. This list includes an entry for the fleet's home
     * Region. For fleets with no remote locations, only one entry, representing the
     * home Region, is returned.</p>
     */
    inline CreateFleetResult& AddLocationStates(LocationState&& value) { m_locationStates.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateFleetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateFleetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateFleetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FleetAttributes m_fleetAttributes;

    Aws::Vector<LocationState> m_locationStates;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
