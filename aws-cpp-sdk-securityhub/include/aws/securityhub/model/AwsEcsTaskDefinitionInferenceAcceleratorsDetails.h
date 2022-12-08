/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An Elastic Inference accelerator to use for the containers in the
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionInferenceAcceleratorsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionInferenceAcceleratorsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionInferenceAcceleratorsDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionInferenceAcceleratorsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionInferenceAcceleratorsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Elastic Inference accelerator device name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The Elastic Inference accelerator device name.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The Elastic Inference accelerator device name.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The Elastic Inference accelerator device name.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The Elastic Inference accelerator device name.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The Elastic Inference accelerator device name.</p>
     */
    inline AwsEcsTaskDefinitionInferenceAcceleratorsDetails& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The Elastic Inference accelerator device name.</p>
     */
    inline AwsEcsTaskDefinitionInferenceAcceleratorsDetails& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The Elastic Inference accelerator device name.</p>
     */
    inline AwsEcsTaskDefinitionInferenceAcceleratorsDetails& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


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
    inline AwsEcsTaskDefinitionInferenceAcceleratorsDetails& WithDeviceType(const Aws::String& value) { SetDeviceType(value); return *this;}

    /**
     * <p>The Elastic Inference accelerator type to use.</p>
     */
    inline AwsEcsTaskDefinitionInferenceAcceleratorsDetails& WithDeviceType(Aws::String&& value) { SetDeviceType(std::move(value)); return *this;}

    /**
     * <p>The Elastic Inference accelerator type to use.</p>
     */
    inline AwsEcsTaskDefinitionInferenceAcceleratorsDetails& WithDeviceType(const char* value) { SetDeviceType(value); return *this;}

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
