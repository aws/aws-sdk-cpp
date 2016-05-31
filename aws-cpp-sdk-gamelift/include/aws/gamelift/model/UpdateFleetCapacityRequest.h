/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API UpdateFleetCapacityRequest : public GameLiftRequest
  {
  public:
    UpdateFleetCapacityRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for the fleet you want to update capacity for. </p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for the fleet you want to update capacity for. </p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for the fleet you want to update capacity for. </p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for the fleet you want to update capacity for. </p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for the fleet you want to update capacity for. </p>
     */
    inline UpdateFleetCapacityRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for the fleet you want to update capacity for. </p>
     */
    inline UpdateFleetCapacityRequest& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for the fleet you want to update capacity for. </p>
     */
    inline UpdateFleetCapacityRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Number of EC2 instances you want this fleet to host.</p>
     */
    inline long GetDesiredInstances() const{ return m_desiredInstances; }

    /**
     * <p>Number of EC2 instances you want this fleet to host.</p>
     */
    inline void SetDesiredInstances(long value) { m_desiredInstancesHasBeenSet = true; m_desiredInstances = value; }

    /**
     * <p>Number of EC2 instances you want this fleet to host.</p>
     */
    inline UpdateFleetCapacityRequest& WithDesiredInstances(long value) { SetDesiredInstances(value); return *this;}

    /**
     * <p>Minimum value allowed for the fleet's instance count. Default if not set is
     * 0.</p>
     */
    inline long GetMinSize() const{ return m_minSize; }

    /**
     * <p>Minimum value allowed for the fleet's instance count. Default if not set is
     * 0.</p>
     */
    inline void SetMinSize(long value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>Minimum value allowed for the fleet's instance count. Default if not set is
     * 0.</p>
     */
    inline UpdateFleetCapacityRequest& WithMinSize(long value) { SetMinSize(value); return *this;}

    /**
     * <p>Maximum value allowed for the fleet's instance count. Default if not set is
     * 1.</p>
     */
    inline long GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>Maximum value allowed for the fleet's instance count. Default if not set is
     * 1.</p>
     */
    inline void SetMaxSize(long value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>Maximum value allowed for the fleet's instance count. Default if not set is
     * 1.</p>
     */
    inline UpdateFleetCapacityRequest& WithMaxSize(long value) { SetMaxSize(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    long m_desiredInstances;
    bool m_desiredInstancesHasBeenSet;
    long m_minSize;
    bool m_minSizeHasBeenSet;
    long m_maxSize;
    bool m_maxSizeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
