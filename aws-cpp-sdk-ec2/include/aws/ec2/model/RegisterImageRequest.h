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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ArchitectureValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/BlockDeviceMapping.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for RegisterImage.</p>
   */
  class AWS_EC2_API RegisterImageRequest : public EC2Request
  {
  public:
    RegisterImageRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline RegisterImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage.</p>
     */
    inline const Aws::String& GetImageLocation() const{ return m_imageLocation; }

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage.</p>
     */
    inline void SetImageLocation(const Aws::String& value) { m_imageLocationHasBeenSet = true; m_imageLocation = value; }

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage.</p>
     */
    inline void SetImageLocation(Aws::String&& value) { m_imageLocationHasBeenSet = true; m_imageLocation = value; }

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage.</p>
     */
    inline void SetImageLocation(const char* value) { m_imageLocationHasBeenSet = true; m_imageLocation.assign(value); }

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage.</p>
     */
    inline RegisterImageRequest& WithImageLocation(const Aws::String& value) { SetImageLocation(value); return *this;}

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage.</p>
     */
    inline RegisterImageRequest& WithImageLocation(Aws::String&& value) { SetImageLocation(value); return *this;}

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage.</p>
     */
    inline RegisterImageRequest& WithImageLocation(const char* value) { SetImageLocation(value); return *this;}

    /**
     * <p>A name for your AMI.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for your AMI.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for your AMI.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for your AMI.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for your AMI.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline RegisterImageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for your AMI.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline RegisterImageRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>A name for your AMI.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline RegisterImageRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A description for your AMI.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for your AMI.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for your AMI.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for your AMI.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for your AMI.</p>
     */
    inline RegisterImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for your AMI.</p>
     */
    inline RegisterImageRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for your AMI.</p>
     */
    inline RegisterImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The architecture of the AMI.</p> <p>Default: For Amazon EBS-backed AMIs,
     * <code>i386</code>. For instance store-backed AMIs, the architecture specified in
     * the manifest file.</p>
     */
    inline const ArchitectureValues& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture of the AMI.</p> <p>Default: For Amazon EBS-backed AMIs,
     * <code>i386</code>. For instance store-backed AMIs, the architecture specified in
     * the manifest file.</p>
     */
    inline void SetArchitecture(const ArchitectureValues& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture of the AMI.</p> <p>Default: For Amazon EBS-backed AMIs,
     * <code>i386</code>. For instance store-backed AMIs, the architecture specified in
     * the manifest file.</p>
     */
    inline void SetArchitecture(ArchitectureValues&& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture of the AMI.</p> <p>Default: For Amazon EBS-backed AMIs,
     * <code>i386</code>. For instance store-backed AMIs, the architecture specified in
     * the manifest file.</p>
     */
    inline RegisterImageRequest& WithArchitecture(const ArchitectureValues& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture of the AMI.</p> <p>Default: For Amazon EBS-backed AMIs,
     * <code>i386</code>. For instance store-backed AMIs, the architecture specified in
     * the manifest file.</p>
     */
    inline RegisterImageRequest& WithArchitecture(ArchitectureValues&& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The ID of the kernel.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline RegisterImageRequest& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel.</p>
     */
    inline RegisterImageRequest& WithKernelId(Aws::String&& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel.</p>
     */
    inline RegisterImageRequest& WithKernelId(const char* value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline RegisterImageRequest& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline RegisterImageRequest& WithRamdiskId(Aws::String&& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline RegisterImageRequest& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code>, or
     * <code>/dev/xvda</code>).</p>
     */
    inline const Aws::String& GetRootDeviceName() const{ return m_rootDeviceName; }

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code>, or
     * <code>/dev/xvda</code>).</p>
     */
    inline void SetRootDeviceName(const Aws::String& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = value; }

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code>, or
     * <code>/dev/xvda</code>).</p>
     */
    inline void SetRootDeviceName(Aws::String&& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = value; }

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code>, or
     * <code>/dev/xvda</code>).</p>
     */
    inline void SetRootDeviceName(const char* value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName.assign(value); }

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code>, or
     * <code>/dev/xvda</code>).</p>
     */
    inline RegisterImageRequest& WithRootDeviceName(const Aws::String& value) { SetRootDeviceName(value); return *this;}

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code>, or
     * <code>/dev/xvda</code>).</p>
     */
    inline RegisterImageRequest& WithRootDeviceName(Aws::String&& value) { SetRootDeviceName(value); return *this;}

    /**
     * <p>The name of the root device (for example, <code>/dev/sda1</code>, or
     * <code>/dev/xvda</code>).</p>
     */
    inline RegisterImageRequest& WithRootDeviceName(const char* value) { SetRootDeviceName(value); return *this;}

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline RegisterImageRequest& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline RegisterImageRequest& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline RegisterImageRequest& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline RegisterImageRequest& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The type of virtualization.</p> <p>Default: <code>paravirtual</code></p>
     */
    inline const Aws::String& GetVirtualizationType() const{ return m_virtualizationType; }

    /**
     * <p>The type of virtualization.</p> <p>Default: <code>paravirtual</code></p>
     */
    inline void SetVirtualizationType(const Aws::String& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }

    /**
     * <p>The type of virtualization.</p> <p>Default: <code>paravirtual</code></p>
     */
    inline void SetVirtualizationType(Aws::String&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }

    /**
     * <p>The type of virtualization.</p> <p>Default: <code>paravirtual</code></p>
     */
    inline void SetVirtualizationType(const char* value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType.assign(value); }

    /**
     * <p>The type of virtualization.</p> <p>Default: <code>paravirtual</code></p>
     */
    inline RegisterImageRequest& WithVirtualizationType(const Aws::String& value) { SetVirtualizationType(value); return *this;}

    /**
     * <p>The type of virtualization.</p> <p>Default: <code>paravirtual</code></p>
     */
    inline RegisterImageRequest& WithVirtualizationType(Aws::String&& value) { SetVirtualizationType(value); return *this;}

    /**
     * <p>The type of virtualization.</p> <p>Default: <code>paravirtual</code></p>
     */
    inline RegisterImageRequest& WithVirtualizationType(const char* value) { SetVirtualizationType(value); return *this;}

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the AMI and any
     * instances that you launch from the AMI.</p> <p>There is no way to disable
     * enhanced networking at this time.</p> <p>This option is supported only for HVM
     * AMIs. Specifying this option with a PV AMI can make instances launched from the
     * AMI unreachable.</p>
     */
    inline const Aws::String& GetSriovNetSupport() const{ return m_sriovNetSupport; }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the AMI and any
     * instances that you launch from the AMI.</p> <p>There is no way to disable
     * enhanced networking at this time.</p> <p>This option is supported only for HVM
     * AMIs. Specifying this option with a PV AMI can make instances launched from the
     * AMI unreachable.</p>
     */
    inline void SetSriovNetSupport(const Aws::String& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = value; }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the AMI and any
     * instances that you launch from the AMI.</p> <p>There is no way to disable
     * enhanced networking at this time.</p> <p>This option is supported only for HVM
     * AMIs. Specifying this option with a PV AMI can make instances launched from the
     * AMI unreachable.</p>
     */
    inline void SetSriovNetSupport(Aws::String&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = value; }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the AMI and any
     * instances that you launch from the AMI.</p> <p>There is no way to disable
     * enhanced networking at this time.</p> <p>This option is supported only for HVM
     * AMIs. Specifying this option with a PV AMI can make instances launched from the
     * AMI unreachable.</p>
     */
    inline void SetSriovNetSupport(const char* value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport.assign(value); }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the AMI and any
     * instances that you launch from the AMI.</p> <p>There is no way to disable
     * enhanced networking at this time.</p> <p>This option is supported only for HVM
     * AMIs. Specifying this option with a PV AMI can make instances launched from the
     * AMI unreachable.</p>
     */
    inline RegisterImageRequest& WithSriovNetSupport(const Aws::String& value) { SetSriovNetSupport(value); return *this;}

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the AMI and any
     * instances that you launch from the AMI.</p> <p>There is no way to disable
     * enhanced networking at this time.</p> <p>This option is supported only for HVM
     * AMIs. Specifying this option with a PV AMI can make instances launched from the
     * AMI unreachable.</p>
     */
    inline RegisterImageRequest& WithSriovNetSupport(Aws::String&& value) { SetSriovNetSupport(value); return *this;}

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the AMI and any
     * instances that you launch from the AMI.</p> <p>There is no way to disable
     * enhanced networking at this time.</p> <p>This option is supported only for HVM
     * AMIs. Specifying this option with a PV AMI can make instances launched from the
     * AMI unreachable.</p>
     */
    inline RegisterImageRequest& WithSriovNetSupport(const char* value) { SetSriovNetSupport(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_imageLocation;
    bool m_imageLocationHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    ArchitectureValues m_architecture;
    bool m_architectureHasBeenSet;
    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet;
    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet;
    Aws::String m_rootDeviceName;
    bool m_rootDeviceNameHasBeenSet;
    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;
    Aws::String m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet;
    Aws::String m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
