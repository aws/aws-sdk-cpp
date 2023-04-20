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
    AWS_GAMELIFT_API CreateFleetLocationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleetLocations"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet to add locations to. You can use either the
     * fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet to add locations to. You can use either the
     * fleet ID or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet to add locations to. You can use either the
     * fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet to add locations to. You can use either the
     * fleet ID or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet to add locations to. You can use either the
     * fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet to add locations to. You can use either the
     * fleet ID or ARN value.</p>
     */
    inline CreateFleetLocationsRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet to add locations to. You can use either the
     * fleet ID or ARN value.</p>
     */
    inline CreateFleetLocationsRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet to add locations to. You can use either the
     * fleet ID or ARN value.</p>
     */
    inline CreateFleetLocationsRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A list of locations to deploy additional instances to and manage as part of
     * the fleet. You can add any Amazon GameLift-supported Amazon Web Services Region
     * as a remote location, in the form of an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline const Aws::Vector<LocationConfiguration>& GetLocations() const{ return m_locations; }

    /**
     * <p>A list of locations to deploy additional instances to and manage as part of
     * the fleet. You can add any Amazon GameLift-supported Amazon Web Services Region
     * as a remote location, in the form of an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }

    /**
     * <p>A list of locations to deploy additional instances to and manage as part of
     * the fleet. You can add any Amazon GameLift-supported Amazon Web Services Region
     * as a remote location, in the form of an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline void SetLocations(const Aws::Vector<LocationConfiguration>& value) { m_locationsHasBeenSet = true; m_locations = value; }

    /**
     * <p>A list of locations to deploy additional instances to and manage as part of
     * the fleet. You can add any Amazon GameLift-supported Amazon Web Services Region
     * as a remote location, in the form of an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline void SetLocations(Aws::Vector<LocationConfiguration>&& value) { m_locationsHasBeenSet = true; m_locations = std::move(value); }

    /**
     * <p>A list of locations to deploy additional instances to and manage as part of
     * the fleet. You can add any Amazon GameLift-supported Amazon Web Services Region
     * as a remote location, in the form of an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline CreateFleetLocationsRequest& WithLocations(const Aws::Vector<LocationConfiguration>& value) { SetLocations(value); return *this;}

    /**
     * <p>A list of locations to deploy additional instances to and manage as part of
     * the fleet. You can add any Amazon GameLift-supported Amazon Web Services Region
     * as a remote location, in the form of an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline CreateFleetLocationsRequest& WithLocations(Aws::Vector<LocationConfiguration>&& value) { SetLocations(std::move(value)); return *this;}

    /**
     * <p>A list of locations to deploy additional instances to and manage as part of
     * the fleet. You can add any Amazon GameLift-supported Amazon Web Services Region
     * as a remote location, in the form of an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline CreateFleetLocationsRequest& AddLocations(const LocationConfiguration& value) { m_locationsHasBeenSet = true; m_locations.push_back(value); return *this; }

    /**
     * <p>A list of locations to deploy additional instances to and manage as part of
     * the fleet. You can add any Amazon GameLift-supported Amazon Web Services Region
     * as a remote location, in the form of an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline CreateFleetLocationsRequest& AddLocations(LocationConfiguration&& value) { m_locationsHasBeenSet = true; m_locations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::Vector<LocationConfiguration> m_locations;
    bool m_locationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
