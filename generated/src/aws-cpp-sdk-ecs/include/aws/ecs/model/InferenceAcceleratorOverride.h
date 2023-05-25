/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>Details on an Elastic Inference accelerator task override. This parameter is
   * used to override the Elastic Inference accelerator specified in the task
   * definition. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-inference.html">Working
   * with Amazon Elastic Inference on Amazon ECS</a> in the <i>Amazon Elastic
   * Container Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/InferenceAcceleratorOverride">AWS
   * API Reference</a></p>
   */
  class InferenceAcceleratorOverride
  {
  public:
    AWS_ECS_API InferenceAcceleratorOverride();
    AWS_ECS_API InferenceAcceleratorOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API InferenceAcceleratorOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Elastic Inference accelerator device name to override for the task. This
     * parameter must match a <code>deviceName</code> specified in the task
     * definition.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The Elastic Inference accelerator device name to override for the task. This
     * parameter must match a <code>deviceName</code> specified in the task
     * definition.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The Elastic Inference accelerator device name to override for the task. This
     * parameter must match a <code>deviceName</code> specified in the task
     * definition.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The Elastic Inference accelerator device name to override for the task. This
     * parameter must match a <code>deviceName</code> specified in the task
     * definition.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The Elastic Inference accelerator device name to override for the task. This
     * parameter must match a <code>deviceName</code> specified in the task
     * definition.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The Elastic Inference accelerator device name to override for the task. This
     * parameter must match a <code>deviceName</code> specified in the task
     * definition.</p>
     */
    inline InferenceAcceleratorOverride& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The Elastic Inference accelerator device name to override for the task. This
     * parameter must match a <code>deviceName</code> specified in the task
     * definition.</p>
     */
    inline InferenceAcceleratorOverride& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The Elastic Inference accelerator device name to override for the task. This
     * parameter must match a <code>deviceName</code> specified in the task
     * definition.</p>
     */
    inline InferenceAcceleratorOverride& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The Elastic Inference accelerator type to use.</p>
     */
    inline const Aws::String& GetDeviceType() const{ return m_deviceType; }

    /**
     * <p>The Elastic Inference accelerator type to use.</p>
     */
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }

    /**
     * <p>The Elastic Inference accelerator type to use.</p>
     */
    inline void SetDeviceType(const Aws::String& value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }

    /**
     * <p>The Elastic Inference accelerator type to use.</p>
     */
    inline void SetDeviceType(Aws::String&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::move(value); }

    /**
     * <p>The Elastic Inference accelerator type to use.</p>
     */
    inline void SetDeviceType(const char* value) { m_deviceTypeHasBeenSet = true; m_deviceType.assign(value); }

    /**
     * <p>The Elastic Inference accelerator type to use.</p>
     */
    inline InferenceAcceleratorOverride& WithDeviceType(const Aws::String& value) { SetDeviceType(value); return *this;}

    /**
     * <p>The Elastic Inference accelerator type to use.</p>
     */
    inline InferenceAcceleratorOverride& WithDeviceType(Aws::String&& value) { SetDeviceType(std::move(value)); return *this;}

    /**
     * <p>The Elastic Inference accelerator type to use.</p>
     */
    inline InferenceAcceleratorOverride& WithDeviceType(const char* value) { SetDeviceType(value); return *this;}

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
