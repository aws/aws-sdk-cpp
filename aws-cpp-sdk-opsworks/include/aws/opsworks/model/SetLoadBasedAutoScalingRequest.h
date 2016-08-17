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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/AutoScalingThresholds.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API SetLoadBasedAutoScalingRequest : public OpsWorksRequest
  {
  public:
    SetLoadBasedAutoScalingRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The layer ID.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = value; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(const char* value) { m_layerIdHasBeenSet = true; m_layerId.assign(value); }

    /**
     * <p>The layer ID.</p>
     */
    inline SetLoadBasedAutoScalingRequest& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline SetLoadBasedAutoScalingRequest& WithLayerId(Aws::String&& value) { SetLayerId(value); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline SetLoadBasedAutoScalingRequest& WithLayerId(const char* value) { SetLayerId(value); return *this;}

    /**
     * <p>Enables load-based auto scaling for the layer.</p>
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * <p>Enables load-based auto scaling for the layer.</p>
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * <p>Enables load-based auto scaling for the layer.</p>
     */
    inline SetLoadBasedAutoScalingRequest& WithEnable(bool value) { SetEnable(value); return *this;}

    /**
     * <p>An <code>AutoScalingThresholds</code> object with the upscaling threshold
     * configuration. If the load exceeds these thresholds for a specified amount of
     * time, AWS OpsWorks starts a specified number of instances.</p>
     */
    inline const AutoScalingThresholds& GetUpScaling() const{ return m_upScaling; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object with the upscaling threshold
     * configuration. If the load exceeds these thresholds for a specified amount of
     * time, AWS OpsWorks starts a specified number of instances.</p>
     */
    inline void SetUpScaling(const AutoScalingThresholds& value) { m_upScalingHasBeenSet = true; m_upScaling = value; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object with the upscaling threshold
     * configuration. If the load exceeds these thresholds for a specified amount of
     * time, AWS OpsWorks starts a specified number of instances.</p>
     */
    inline void SetUpScaling(AutoScalingThresholds&& value) { m_upScalingHasBeenSet = true; m_upScaling = value; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object with the upscaling threshold
     * configuration. If the load exceeds these thresholds for a specified amount of
     * time, AWS OpsWorks starts a specified number of instances.</p>
     */
    inline SetLoadBasedAutoScalingRequest& WithUpScaling(const AutoScalingThresholds& value) { SetUpScaling(value); return *this;}

    /**
     * <p>An <code>AutoScalingThresholds</code> object with the upscaling threshold
     * configuration. If the load exceeds these thresholds for a specified amount of
     * time, AWS OpsWorks starts a specified number of instances.</p>
     */
    inline SetLoadBasedAutoScalingRequest& WithUpScaling(AutoScalingThresholds&& value) { SetUpScaling(value); return *this;}

    /**
     * <p>An <code>AutoScalingThresholds</code> object with the downscaling threshold
     * configuration. If the load falls below these thresholds for a specified amount
     * of time, AWS OpsWorks stops a specified number of instances.</p>
     */
    inline const AutoScalingThresholds& GetDownScaling() const{ return m_downScaling; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object with the downscaling threshold
     * configuration. If the load falls below these thresholds for a specified amount
     * of time, AWS OpsWorks stops a specified number of instances.</p>
     */
    inline void SetDownScaling(const AutoScalingThresholds& value) { m_downScalingHasBeenSet = true; m_downScaling = value; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object with the downscaling threshold
     * configuration. If the load falls below these thresholds for a specified amount
     * of time, AWS OpsWorks stops a specified number of instances.</p>
     */
    inline void SetDownScaling(AutoScalingThresholds&& value) { m_downScalingHasBeenSet = true; m_downScaling = value; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object with the downscaling threshold
     * configuration. If the load falls below these thresholds for a specified amount
     * of time, AWS OpsWorks stops a specified number of instances.</p>
     */
    inline SetLoadBasedAutoScalingRequest& WithDownScaling(const AutoScalingThresholds& value) { SetDownScaling(value); return *this;}

    /**
     * <p>An <code>AutoScalingThresholds</code> object with the downscaling threshold
     * configuration. If the load falls below these thresholds for a specified amount
     * of time, AWS OpsWorks stops a specified number of instances.</p>
     */
    inline SetLoadBasedAutoScalingRequest& WithDownScaling(AutoScalingThresholds&& value) { SetDownScaling(value); return *this;}

  private:
    Aws::String m_layerId;
    bool m_layerIdHasBeenSet;
    bool m_enable;
    bool m_enableHasBeenSet;
    AutoScalingThresholds m_upScaling;
    bool m_upScalingHasBeenSet;
    AutoScalingThresholds m_downScaling;
    bool m_downScalingHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
