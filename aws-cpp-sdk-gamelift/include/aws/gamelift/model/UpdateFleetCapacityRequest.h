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
   * <p>Represents the input for a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetCapacityInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateFleetCapacityRequest : public GameLiftRequest
  {
  public:
    UpdateFleetCapacityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleetCapacity"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for a fleet to update capacity for. You can use either
     * the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for a fleet to update capacity for. You can use either
     * the fleet ID or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for a fleet to update capacity for. You can use either
     * the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for a fleet to update capacity for. You can use either
     * the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for a fleet to update capacity for. You can use either
     * the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for a fleet to update capacity for. You can use either
     * the fleet ID or ARN value.</p>
     */
    inline UpdateFleetCapacityRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for a fleet to update capacity for. You can use either
     * the fleet ID or ARN value.</p>
     */
    inline UpdateFleetCapacityRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a fleet to update capacity for. You can use either
     * the fleet ID or ARN value.</p>
     */
    inline UpdateFleetCapacityRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Number of EC2 instances you want this fleet to host.</p>
     */
    inline int GetDesiredInstances() const{ return m_desiredInstances; }

    /**
     * <p>Number of EC2 instances you want this fleet to host.</p>
     */
    inline bool DesiredInstancesHasBeenSet() const { return m_desiredInstancesHasBeenSet; }

    /**
     * <p>Number of EC2 instances you want this fleet to host.</p>
     */
    inline void SetDesiredInstances(int value) { m_desiredInstancesHasBeenSet = true; m_desiredInstances = value; }

    /**
     * <p>Number of EC2 instances you want this fleet to host.</p>
     */
    inline UpdateFleetCapacityRequest& WithDesiredInstances(int value) { SetDesiredInstances(value); return *this;}


    /**
     * <p>The minimum value allowed for the fleet's instance count. Default if not set
     * is 0.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum value allowed for the fleet's instance count. Default if not set
     * is 0.</p>
     */
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

    /**
     * <p>The minimum value allowed for the fleet's instance count. Default if not set
     * is 0.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum value allowed for the fleet's instance count. Default if not set
     * is 0.</p>
     */
    inline UpdateFleetCapacityRequest& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The maximum value allowed for the fleet's instance count. Default if not set
     * is 1.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum value allowed for the fleet's instance count. Default if not set
     * is 1.</p>
     */
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }

    /**
     * <p>The maximum value allowed for the fleet's instance count. Default if not set
     * is 1.</p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum value allowed for the fleet's instance count. Default if not set
     * is 1.</p>
     */
    inline UpdateFleetCapacityRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    int m_desiredInstances;
    bool m_desiredInstancesHasBeenSet;

    int m_minSize;
    bool m_minSizeHasBeenSet;

    int m_maxSize;
    bool m_maxSizeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
