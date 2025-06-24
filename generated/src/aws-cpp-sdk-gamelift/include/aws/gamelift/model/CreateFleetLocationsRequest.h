/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/LocationConfiguration.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class CreateFleetLocationsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreateFleetLocationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleetLocations"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the fleet to add locations to. You can use either the
     * fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    CreateFleetLocationsRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of locations to deploy additional instances to and manage as part of
     * the fleet. You can add any Amazon GameLift Servers-supported Amazon Web Services
     * Region as a remote location, in the form of an Amazon Web Services Region code
     * such as <code>us-west-2</code>. </p>
     */
    inline const Aws::Vector<LocationConfiguration>& GetLocations() const { return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    template<typename LocationsT = Aws::Vector<LocationConfiguration>>
    void SetLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations = std::forward<LocationsT>(value); }
    template<typename LocationsT = Aws::Vector<LocationConfiguration>>
    CreateFleetLocationsRequest& WithLocations(LocationsT&& value) { SetLocations(std::forward<LocationsT>(value)); return *this;}
    template<typename LocationsT = LocationConfiguration>
    CreateFleetLocationsRequest& AddLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations.emplace_back(std::forward<LocationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::Vector<LocationConfiguration> m_locations;
    bool m_locationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
