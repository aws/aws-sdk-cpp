/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class UpdateFleetCapacityRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateFleetCapacityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleetCapacity"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the fleet to update capacity settings for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    UpdateFleetCapacityRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon EC2 instances you want to maintain in the specified
     * fleet location. This value must fall between the minimum and maximum size
     * limits. Changes in desired instance value can take up to 1 minute to be
     * reflected when viewing the fleet's capacity settings.</p>
     */
    inline int GetDesiredInstances() const { return m_desiredInstances; }
    inline bool DesiredInstancesHasBeenSet() const { return m_desiredInstancesHasBeenSet; }
    inline void SetDesiredInstances(int value) { m_desiredInstancesHasBeenSet = true; m_desiredInstances = value; }
    inline UpdateFleetCapacityRequest& WithDesiredInstances(int value) { SetDesiredInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of instances that are allowed in the specified fleet
     * location. If this parameter is not set, the default is 0.</p>
     */
    inline int GetMinSize() const { return m_minSize; }
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }
    inline UpdateFleetCapacityRequest& WithMinSize(int value) { SetMinSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that are allowed in the specified fleet
     * location. If this parameter is not set, the default is 1.</p>
     */
    inline int GetMaxSize() const { return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }
    inline UpdateFleetCapacityRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a remote location to update fleet capacity settings for, in the
     * form of an Amazon Web Services Region code such as <code>us-west-2</code>.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    UpdateFleetCapacityRequest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    int m_desiredInstances{0};
    bool m_desiredInstancesHasBeenSet = false;

    int m_minSize{0};
    bool m_minSizeHasBeenSet = false;

    int m_maxSize{0};
    bool m_maxSizeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
