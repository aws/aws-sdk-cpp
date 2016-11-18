﻿/*
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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for ExitStandby.</p>
   */
  class AWS_AUTOSCALING_API ExitStandbyRequest : public AutoScalingRequest
  {
  public:
    ExitStandbyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>One or more instance IDs. You must specify at least one instance ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>One or more instance IDs. You must specify at least one instance ID.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>One or more instance IDs. You must specify at least one instance ID.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>One or more instance IDs. You must specify at least one instance ID.</p>
     */
    inline ExitStandbyRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>One or more instance IDs. You must specify at least one instance ID.</p>
     */
    inline ExitStandbyRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>One or more instance IDs. You must specify at least one instance ID.</p>
     */
    inline ExitStandbyRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>One or more instance IDs. You must specify at least one instance ID.</p>
     */
    inline ExitStandbyRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>One or more instance IDs. You must specify at least one instance ID.</p>
     */
    inline ExitStandbyRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline ExitStandbyRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline ExitStandbyRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline ExitStandbyRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
