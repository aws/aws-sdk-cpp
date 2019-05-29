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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ArchitectureValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for RegisterImage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisterImageRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API RegisterImageRequest : public EC2Request
  {
  public:
    RegisterImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterImage"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage. The specified bucket
     * must have the <code>aws-exec-read</code> canned access control list (ACL) to
     * ensure that it can be accessed by Amazon EC2. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACLs</a> in the <i>Amazon S3 Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetImageLocation() const{ return m_imageLocation; }

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage. The specified bucket
     * must have the <code>aws-exec-read</code> canned access control list (ACL) to
     * ensure that it can be accessed by Amazon EC2. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACLs</a> in the <i>Amazon S3 Service Developer Guide</i>.</p>
     */
    inline bool ImageLocationHasBeenSet() const { return m_imageLocationHasBeenSet; }

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage. The specified bucket
     * must have the <code>aws-exec-read</code> canned access control list (ACL) to
     * ensure that it can be accessed by Amazon EC2. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACLs</a> in the <i>Amazon S3 Service Developer Guide</i>.</p>
     */
    inline void SetImageLocation(const Aws::String& value) { m_imageLocationHasBeenSet = true; m_imageLocation = value; }

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage. The specified bucket
     * must have the <code>aws-exec-read</code> canned access control list (ACL) to
     * ensure that it can be accessed by Amazon EC2. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACLs</a> in the <i>Amazon S3 Service Developer Guide</i>.</p>
     */
    inline void SetImageLocation(Aws::String&& value) { m_imageLocationHasBeenSet = true; m_imageLocation = std::move(value); }

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage. The specified bucket
     * must have the <code>aws-exec-read</code> canned access control list (ACL) to
     * ensure that it can be accessed by Amazon EC2. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACLs</a> in the <i>Amazon S3 Service Developer Guide</i>.</p>
     */
    inline void SetImageLocation(const char* value) { m_imageLocationHasBeenSet = true; m_imageLocation.assign(value); }

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage. The specified bucket
     * must have the <code>aws-exec-read</code> canned access control list (ACL) to
     * ensure that it can be accessed by Amazon EC2. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACLs</a> in the <i>Amazon S3 Service Developer Guide</i>.</p>
     */
    inline RegisterImageRequest& WithImageLocation(const Aws::String& value) { SetImageLocation(value); return *this;}

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage. The specified bucket
     * must have the <code>aws-exec-read</code> canned access control list (ACL) to
     * ensure that it can be accessed by Amazon EC2. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACLs</a> in the <i>Amazon S3 Service Developer Guide</i>.</p>
     */
    inline RegisterImageRequest& WithImageLocation(Aws::String&& value) { SetImageLocation(std::move(value)); return *this;}

    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage. The specified bucket
     * must have the <code>aws-exec-read</code> canned access control list (ACL) to
     * ensure that it can be accessed by Amazon EC2. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACLs</a> in the <i>Amazon S3 Service Developer Guide</i>.</p>
     */
    inline RegisterImageRequest& WithImageLocation(const char* value) { SetImageLocation(value); return *this;}


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
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

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
    inline void SetArchitecture(ArchitectureValues&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

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
    inline RegisterImageRequest& WithArchitecture(ArchitectureValues&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>The block device mapping entries.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>The block device mapping entries.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>The block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>The block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>The block device mapping entries.</p>
     */
    inline RegisterImageRequest& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mapping entries.</p>
     */
    inline RegisterImageRequest& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>The block device mapping entries.</p>
     */
    inline RegisterImageRequest& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The block device mapping entries.</p>
     */
    inline RegisterImageRequest& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A description for your AMI.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for your AMI.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for your AMI.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for your AMI.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

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
    inline RegisterImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for your AMI.</p>
     */
    inline RegisterImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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
     * <p>Set to <code>true</code> to enable enhanced networking with ENA for the AMI
     * and any instances that you launch from the AMI.</p> <p>This option is supported
     * only for HVM AMIs. Specifying this option with a PV AMI can make instances
     * launched from the AMI unreachable.</p>
     */
    inline bool GetEnaSupport() const{ return m_enaSupport; }

    /**
     * <p>Set to <code>true</code> to enable enhanced networking with ENA for the AMI
     * and any instances that you launch from the AMI.</p> <p>This option is supported
     * only for HVM AMIs. Specifying this option with a PV AMI can make instances
     * launched from the AMI unreachable.</p>
     */
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to enable enhanced networking with ENA for the AMI
     * and any instances that you launch from the AMI.</p> <p>This option is supported
     * only for HVM AMIs. Specifying this option with a PV AMI can make instances
     * launched from the AMI unreachable.</p>
     */
    inline void SetEnaSupport(bool value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }

    /**
     * <p>Set to <code>true</code> to enable enhanced networking with ENA for the AMI
     * and any instances that you launch from the AMI.</p> <p>This option is supported
     * only for HVM AMIs. Specifying this option with a PV AMI can make instances
     * launched from the AMI unreachable.</p>
     */
    inline RegisterImageRequest& WithEnaSupport(bool value) { SetEnaSupport(value); return *this;}


    /**
     * <p>The ID of the kernel.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }

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
    inline RegisterImageRequest& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the kernel.</p>
     */
    inline RegisterImageRequest& WithKernelId(const char* value) { SetKernelId(value); return *this;}


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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

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
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline RegisterImageRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for your AMI.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline RegisterImageRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The billing product codes. Your account must be authorized to specify billing
     * product codes. Otherwise, you can use the AWS Marketplace to bill for the use of
     * an AMI.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBillingProducts() const{ return m_billingProducts; }

    /**
     * <p>The billing product codes. Your account must be authorized to specify billing
     * product codes. Otherwise, you can use the AWS Marketplace to bill for the use of
     * an AMI.</p>
     */
    inline bool BillingProductsHasBeenSet() const { return m_billingProductsHasBeenSet; }

    /**
     * <p>The billing product codes. Your account must be authorized to specify billing
     * product codes. Otherwise, you can use the AWS Marketplace to bill for the use of
     * an AMI.</p>
     */
    inline void SetBillingProducts(const Aws::Vector<Aws::String>& value) { m_billingProductsHasBeenSet = true; m_billingProducts = value; }

    /**
     * <p>The billing product codes. Your account must be authorized to specify billing
     * product codes. Otherwise, you can use the AWS Marketplace to bill for the use of
     * an AMI.</p>
     */
    inline void SetBillingProducts(Aws::Vector<Aws::String>&& value) { m_billingProductsHasBeenSet = true; m_billingProducts = std::move(value); }

    /**
     * <p>The billing product codes. Your account must be authorized to specify billing
     * product codes. Otherwise, you can use the AWS Marketplace to bill for the use of
     * an AMI.</p>
     */
    inline RegisterImageRequest& WithBillingProducts(const Aws::Vector<Aws::String>& value) { SetBillingProducts(value); return *this;}

    /**
     * <p>The billing product codes. Your account must be authorized to specify billing
     * product codes. Otherwise, you can use the AWS Marketplace to bill for the use of
     * an AMI.</p>
     */
    inline RegisterImageRequest& WithBillingProducts(Aws::Vector<Aws::String>&& value) { SetBillingProducts(std::move(value)); return *this;}

    /**
     * <p>The billing product codes. Your account must be authorized to specify billing
     * product codes. Otherwise, you can use the AWS Marketplace to bill for the use of
     * an AMI.</p>
     */
    inline RegisterImageRequest& AddBillingProducts(const Aws::String& value) { m_billingProductsHasBeenSet = true; m_billingProducts.push_back(value); return *this; }

    /**
     * <p>The billing product codes. Your account must be authorized to specify billing
     * product codes. Otherwise, you can use the AWS Marketplace to bill for the use of
     * an AMI.</p>
     */
    inline RegisterImageRequest& AddBillingProducts(Aws::String&& value) { m_billingProductsHasBeenSet = true; m_billingProducts.push_back(std::move(value)); return *this; }

    /**
     * <p>The billing product codes. Your account must be authorized to specify billing
     * product codes. Otherwise, you can use the AWS Marketplace to bill for the use of
     * an AMI.</p>
     */
    inline RegisterImageRequest& AddBillingProducts(const char* value) { m_billingProductsHasBeenSet = true; m_billingProducts.push_back(value); return *this; }


    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }

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
    inline RegisterImageRequest& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline RegisterImageRequest& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}


    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline const Aws::String& GetRootDeviceName() const{ return m_rootDeviceName; }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline bool RootDeviceNameHasBeenSet() const { return m_rootDeviceNameHasBeenSet; }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline void SetRootDeviceName(const Aws::String& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = value; }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline void SetRootDeviceName(Aws::String&& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = std::move(value); }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline void SetRootDeviceName(const char* value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName.assign(value); }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline RegisterImageRequest& WithRootDeviceName(const Aws::String& value) { SetRootDeviceName(value); return *this;}

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline RegisterImageRequest& WithRootDeviceName(Aws::String&& value) { SetRootDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline RegisterImageRequest& WithRootDeviceName(const char* value) { SetRootDeviceName(value); return *this;}


    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the AMI and any instances that you launch from
     * the AMI.</p> <p>There is no way to disable <code>sriovNetSupport</code> at this
     * time.</p> <p>This option is supported only for HVM AMIs. Specifying this option
     * with a PV AMI can make instances launched from the AMI unreachable.</p>
     */
    inline const Aws::String& GetSriovNetSupport() const{ return m_sriovNetSupport; }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the AMI and any instances that you launch from
     * the AMI.</p> <p>There is no way to disable <code>sriovNetSupport</code> at this
     * time.</p> <p>This option is supported only for HVM AMIs. Specifying this option
     * with a PV AMI can make instances launched from the AMI unreachable.</p>
     */
    inline bool SriovNetSupportHasBeenSet() const { return m_sriovNetSupportHasBeenSet; }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the AMI and any instances that you launch from
     * the AMI.</p> <p>There is no way to disable <code>sriovNetSupport</code> at this
     * time.</p> <p>This option is supported only for HVM AMIs. Specifying this option
     * with a PV AMI can make instances launched from the AMI unreachable.</p>
     */
    inline void SetSriovNetSupport(const Aws::String& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = value; }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the AMI and any instances that you launch from
     * the AMI.</p> <p>There is no way to disable <code>sriovNetSupport</code> at this
     * time.</p> <p>This option is supported only for HVM AMIs. Specifying this option
     * with a PV AMI can make instances launched from the AMI unreachable.</p>
     */
    inline void SetSriovNetSupport(Aws::String&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::move(value); }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the AMI and any instances that you launch from
     * the AMI.</p> <p>There is no way to disable <code>sriovNetSupport</code> at this
     * time.</p> <p>This option is supported only for HVM AMIs. Specifying this option
     * with a PV AMI can make instances launched from the AMI unreachable.</p>
     */
    inline void SetSriovNetSupport(const char* value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport.assign(value); }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the AMI and any instances that you launch from
     * the AMI.</p> <p>There is no way to disable <code>sriovNetSupport</code> at this
     * time.</p> <p>This option is supported only for HVM AMIs. Specifying this option
     * with a PV AMI can make instances launched from the AMI unreachable.</p>
     */
    inline RegisterImageRequest& WithSriovNetSupport(const Aws::String& value) { SetSriovNetSupport(value); return *this;}

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the AMI and any instances that you launch from
     * the AMI.</p> <p>There is no way to disable <code>sriovNetSupport</code> at this
     * time.</p> <p>This option is supported only for HVM AMIs. Specifying this option
     * with a PV AMI can make instances launched from the AMI unreachable.</p>
     */
    inline RegisterImageRequest& WithSriovNetSupport(Aws::String&& value) { SetSriovNetSupport(std::move(value)); return *this;}

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the AMI and any instances that you launch from
     * the AMI.</p> <p>There is no way to disable <code>sriovNetSupport</code> at this
     * time.</p> <p>This option is supported only for HVM AMIs. Specifying this option
     * with a PV AMI can make instances launched from the AMI unreachable.</p>
     */
    inline RegisterImageRequest& WithSriovNetSupport(const char* value) { SetSriovNetSupport(value); return *this;}


    /**
     * <p>The type of virtualization (<code>hvm</code> | <code>paravirtual</code>).</p>
     * <p>Default: <code>paravirtual</code> </p>
     */
    inline const Aws::String& GetVirtualizationType() const{ return m_virtualizationType; }

    /**
     * <p>The type of virtualization (<code>hvm</code> | <code>paravirtual</code>).</p>
     * <p>Default: <code>paravirtual</code> </p>
     */
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }

    /**
     * <p>The type of virtualization (<code>hvm</code> | <code>paravirtual</code>).</p>
     * <p>Default: <code>paravirtual</code> </p>
     */
    inline void SetVirtualizationType(const Aws::String& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }

    /**
     * <p>The type of virtualization (<code>hvm</code> | <code>paravirtual</code>).</p>
     * <p>Default: <code>paravirtual</code> </p>
     */
    inline void SetVirtualizationType(Aws::String&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::move(value); }

    /**
     * <p>The type of virtualization (<code>hvm</code> | <code>paravirtual</code>).</p>
     * <p>Default: <code>paravirtual</code> </p>
     */
    inline void SetVirtualizationType(const char* value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType.assign(value); }

    /**
     * <p>The type of virtualization (<code>hvm</code> | <code>paravirtual</code>).</p>
     * <p>Default: <code>paravirtual</code> </p>
     */
    inline RegisterImageRequest& WithVirtualizationType(const Aws::String& value) { SetVirtualizationType(value); return *this;}

    /**
     * <p>The type of virtualization (<code>hvm</code> | <code>paravirtual</code>).</p>
     * <p>Default: <code>paravirtual</code> </p>
     */
    inline RegisterImageRequest& WithVirtualizationType(Aws::String&& value) { SetVirtualizationType(std::move(value)); return *this;}

    /**
     * <p>The type of virtualization (<code>hvm</code> | <code>paravirtual</code>).</p>
     * <p>Default: <code>paravirtual</code> </p>
     */
    inline RegisterImageRequest& WithVirtualizationType(const char* value) { SetVirtualizationType(value); return *this;}

  private:

    Aws::String m_imageLocation;
    bool m_imageLocationHasBeenSet;

    ArchitectureValues m_architecture;
    bool m_architectureHasBeenSet;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    bool m_enaSupport;
    bool m_enaSupportHasBeenSet;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_billingProducts;
    bool m_billingProductsHasBeenSet;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet;

    Aws::String m_rootDeviceName;
    bool m_rootDeviceNameHasBeenSet;

    Aws::String m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet;

    Aws::String m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
