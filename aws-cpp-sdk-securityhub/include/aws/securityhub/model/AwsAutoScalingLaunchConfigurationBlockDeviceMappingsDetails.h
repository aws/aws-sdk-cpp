/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails.h>
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
   * <p>A block device for the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails();
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The device name that is exposed to the EC2 instance. For example,
     * <code>/dev/sdh</code> or <code>xvdh</code>.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The device name that is exposed to the EC2 instance. For example,
     * <code>/dev/sdh</code> or <code>xvdh</code>.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The device name that is exposed to the EC2 instance. For example,
     * <code>/dev/sdh</code> or <code>xvdh</code>.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The device name that is exposed to the EC2 instance. For example,
     * <code>/dev/sdh</code> or <code>xvdh</code>.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The device name that is exposed to the EC2 instance. For example,
     * <code>/dev/sdh</code> or <code>xvdh</code>.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The device name that is exposed to the EC2 instance. For example,
     * <code>/dev/sdh</code> or <code>xvdh</code>.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The device name that is exposed to the EC2 instance. For example,
     * <code>/dev/sdh</code> or <code>xvdh</code>.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device name that is exposed to the EC2 instance. For example,
     * <code>/dev/sdh</code> or <code>xvdh</code>.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>Parameters that are used to automatically set up Amazon EBS volumes when an
     * instance is launched.</p>
     */
    inline const AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& GetEbs() const{ return m_ebs; }

    /**
     * <p>Parameters that are used to automatically set up Amazon EBS volumes when an
     * instance is launched.</p>
     */
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }

    /**
     * <p>Parameters that are used to automatically set up Amazon EBS volumes when an
     * instance is launched.</p>
     */
    inline void SetEbs(const AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p>Parameters that are used to automatically set up Amazon EBS volumes when an
     * instance is launched.</p>
     */
    inline void SetEbs(AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }

    /**
     * <p>Parameters that are used to automatically set up Amazon EBS volumes when an
     * instance is launched.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithEbs(const AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& value) { SetEbs(value); return *this;}

    /**
     * <p>Parameters that are used to automatically set up Amazon EBS volumes when an
     * instance is launched.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithEbs(AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails&& value) { SetEbs(std::move(value)); return *this;}


    /**
     * <p>Whether to suppress the device that is included in the block device mapping
     * of the Amazon Machine Image (AMI).</p> <p>If <code>NoDevice</code> is
     * <code>true</code>, then you cannot specify <code>Ebs</code>.&gt;</p>
     */
    inline bool GetNoDevice() const{ return m_noDevice; }

    /**
     * <p>Whether to suppress the device that is included in the block device mapping
     * of the Amazon Machine Image (AMI).</p> <p>If <code>NoDevice</code> is
     * <code>true</code>, then you cannot specify <code>Ebs</code>.&gt;</p>
     */
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }

    /**
     * <p>Whether to suppress the device that is included in the block device mapping
     * of the Amazon Machine Image (AMI).</p> <p>If <code>NoDevice</code> is
     * <code>true</code>, then you cannot specify <code>Ebs</code>.&gt;</p>
     */
    inline void SetNoDevice(bool value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }

    /**
     * <p>Whether to suppress the device that is included in the block device mapping
     * of the Amazon Machine Image (AMI).</p> <p>If <code>NoDevice</code> is
     * <code>true</code>, then you cannot specify <code>Ebs</code>.&gt;</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithNoDevice(bool value) { SetNoDevice(value); return *this;}


    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can provide either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can provide either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can provide either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can provide either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can provide either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can provide either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can provide either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can provide either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails m_ebs;
    bool m_ebsHasBeenSet = false;

    bool m_noDevice;
    bool m_noDeviceHasBeenSet = false;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
