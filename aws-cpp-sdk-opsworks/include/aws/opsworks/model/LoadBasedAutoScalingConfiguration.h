/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/AutoScalingThresholds.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a layer's load-based auto scaling configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/LoadBasedAutoScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API LoadBasedAutoScalingConfiguration
  {
  public:
    LoadBasedAutoScalingConfiguration();
    LoadBasedAutoScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LoadBasedAutoScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The layer ID.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }

    /**
     * <p>The layer ID.</p>
     */
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = std::move(value); }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(const char* value) { m_layerIdHasBeenSet = true; m_layerId.assign(value); }

    /**
     * <p>The layer ID.</p>
     */
    inline LoadBasedAutoScalingConfiguration& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline LoadBasedAutoScalingConfiguration& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline LoadBasedAutoScalingConfiguration& WithLayerId(const char* value) { SetLayerId(value); return *this;}


    /**
     * <p>Whether load-based auto scaling is enabled for the layer.</p>
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * <p>Whether load-based auto scaling is enabled for the layer.</p>
     */
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }

    /**
     * <p>Whether load-based auto scaling is enabled for the layer.</p>
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * <p>Whether load-based auto scaling is enabled for the layer.</p>
     */
    inline LoadBasedAutoScalingConfiguration& WithEnable(bool value) { SetEnable(value); return *this;}


    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the upscaling
     * configuration, which defines how and when AWS OpsWorks Stacks increases the
     * number of instances.</p>
     */
    inline const AutoScalingThresholds& GetUpScaling() const{ return m_upScaling; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the upscaling
     * configuration, which defines how and when AWS OpsWorks Stacks increases the
     * number of instances.</p>
     */
    inline bool UpScalingHasBeenSet() const { return m_upScalingHasBeenSet; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the upscaling
     * configuration, which defines how and when AWS OpsWorks Stacks increases the
     * number of instances.</p>
     */
    inline void SetUpScaling(const AutoScalingThresholds& value) { m_upScalingHasBeenSet = true; m_upScaling = value; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the upscaling
     * configuration, which defines how and when AWS OpsWorks Stacks increases the
     * number of instances.</p>
     */
    inline void SetUpScaling(AutoScalingThresholds&& value) { m_upScalingHasBeenSet = true; m_upScaling = std::move(value); }

    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the upscaling
     * configuration, which defines how and when AWS OpsWorks Stacks increases the
     * number of instances.</p>
     */
    inline LoadBasedAutoScalingConfiguration& WithUpScaling(const AutoScalingThresholds& value) { SetUpScaling(value); return *this;}

    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the upscaling
     * configuration, which defines how and when AWS OpsWorks Stacks increases the
     * number of instances.</p>
     */
    inline LoadBasedAutoScalingConfiguration& WithUpScaling(AutoScalingThresholds&& value) { SetUpScaling(std::move(value)); return *this;}


    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the downscaling
     * configuration, which defines how and when AWS OpsWorks Stacks reduces the number
     * of instances.</p>
     */
    inline const AutoScalingThresholds& GetDownScaling() const{ return m_downScaling; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the downscaling
     * configuration, which defines how and when AWS OpsWorks Stacks reduces the number
     * of instances.</p>
     */
    inline bool DownScalingHasBeenSet() const { return m_downScalingHasBeenSet; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the downscaling
     * configuration, which defines how and when AWS OpsWorks Stacks reduces the number
     * of instances.</p>
     */
    inline void SetDownScaling(const AutoScalingThresholds& value) { m_downScalingHasBeenSet = true; m_downScaling = value; }

    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the downscaling
     * configuration, which defines how and when AWS OpsWorks Stacks reduces the number
     * of instances.</p>
     */
    inline void SetDownScaling(AutoScalingThresholds&& value) { m_downScalingHasBeenSet = true; m_downScaling = std::move(value); }

    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the downscaling
     * configuration, which defines how and when AWS OpsWorks Stacks reduces the number
     * of instances.</p>
     */
    inline LoadBasedAutoScalingConfiguration& WithDownScaling(const AutoScalingThresholds& value) { SetDownScaling(value); return *this;}

    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the downscaling
     * configuration, which defines how and when AWS OpsWorks Stacks reduces the number
     * of instances.</p>
     */
    inline LoadBasedAutoScalingConfiguration& WithDownScaling(AutoScalingThresholds&& value) { SetDownScaling(std::move(value)); return *this;}

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
