/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeType.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVolumeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVolume"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline ModifyVolumeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume.</p>
     */
    inline ModifyVolumeRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume.</p>
     */
    inline ModifyVolumeRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume.</p>
     */
    inline ModifyVolumeRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The target size of the volume, in GiB. The target volume size must be greater
     * than or equal to the existing size of the volume.</p> <p>The following are the
     * supported volumes sizes for each volume type:</p> <ul> <li> <p> <code>gp2</code>
     * and <code>gp3</code>: 1-16,384</p> </li> <li> <p> <code>io1</code> and
     * <code>io2</code>: 4-16,384</p> </li> <li> <p> <code>st1</code> and
     * <code>sc1</code>: 125-16,384</p> </li> <li> <p> <code>standard</code>:
     * 1-1,024</p> </li> </ul> <p>Default: The existing size is retained.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The target size of the volume, in GiB. The target volume size must be greater
     * than or equal to the existing size of the volume.</p> <p>The following are the
     * supported volumes sizes for each volume type:</p> <ul> <li> <p> <code>gp2</code>
     * and <code>gp3</code>: 1-16,384</p> </li> <li> <p> <code>io1</code> and
     * <code>io2</code>: 4-16,384</p> </li> <li> <p> <code>st1</code> and
     * <code>sc1</code>: 125-16,384</p> </li> <li> <p> <code>standard</code>:
     * 1-1,024</p> </li> </ul> <p>Default: The existing size is retained.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The target size of the volume, in GiB. The target volume size must be greater
     * than or equal to the existing size of the volume.</p> <p>The following are the
     * supported volumes sizes for each volume type:</p> <ul> <li> <p> <code>gp2</code>
     * and <code>gp3</code>: 1-16,384</p> </li> <li> <p> <code>io1</code> and
     * <code>io2</code>: 4-16,384</p> </li> <li> <p> <code>st1</code> and
     * <code>sc1</code>: 125-16,384</p> </li> <li> <p> <code>standard</code>:
     * 1-1,024</p> </li> </ul> <p>Default: The existing size is retained.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The target size of the volume, in GiB. The target volume size must be greater
     * than or equal to the existing size of the volume.</p> <p>The following are the
     * supported volumes sizes for each volume type:</p> <ul> <li> <p> <code>gp2</code>
     * and <code>gp3</code>: 1-16,384</p> </li> <li> <p> <code>io1</code> and
     * <code>io2</code>: 4-16,384</p> </li> <li> <p> <code>st1</code> and
     * <code>sc1</code>: 125-16,384</p> </li> <li> <p> <code>standard</code>:
     * 1-1,024</p> </li> </ul> <p>Default: The existing size is retained.</p>
     */
    inline ModifyVolumeRequest& WithSize(int value) { SetSize(value); return *this;}


    /**
     * <p>The target EBS volume type of the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: The existing type is retained.</p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The target EBS volume type of the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: The existing type is retained.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The target EBS volume type of the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: The existing type is retained.</p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The target EBS volume type of the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: The existing type is retained.</p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The target EBS volume type of the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: The existing type is retained.</p>
     */
    inline ModifyVolumeRequest& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The target EBS volume type of the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon
     * EBS volume types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: The existing type is retained.</p>
     */
    inline ModifyVolumeRequest& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p>The target IOPS rate of the volume. This parameter is valid only for
     * <code>gp3</code>, <code>io1</code>, and <code>io2</code> volumes.</p> <p>The
     * following are the supported values for each volume type:</p> <ul> <li> <p>
     * <code>gp3</code>: 3,000-16,000 IOPS</p> </li> <li> <p> <code>io1</code>:
     * 100-64,000 IOPS</p> </li> <li> <p> <code>io2</code>: 100-64,000 IOPS</p> </li>
     * </ul> <p>Default: The existing value is retained if you keep the same volume
     * type. If you change the volume type to <code>io1</code>, <code>io2</code>, or
     * <code>gp3</code>, the default is 3,000.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The target IOPS rate of the volume. This parameter is valid only for
     * <code>gp3</code>, <code>io1</code>, and <code>io2</code> volumes.</p> <p>The
     * following are the supported values for each volume type:</p> <ul> <li> <p>
     * <code>gp3</code>: 3,000-16,000 IOPS</p> </li> <li> <p> <code>io1</code>:
     * 100-64,000 IOPS</p> </li> <li> <p> <code>io2</code>: 100-64,000 IOPS</p> </li>
     * </ul> <p>Default: The existing value is retained if you keep the same volume
     * type. If you change the volume type to <code>io1</code>, <code>io2</code>, or
     * <code>gp3</code>, the default is 3,000.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The target IOPS rate of the volume. This parameter is valid only for
     * <code>gp3</code>, <code>io1</code>, and <code>io2</code> volumes.</p> <p>The
     * following are the supported values for each volume type:</p> <ul> <li> <p>
     * <code>gp3</code>: 3,000-16,000 IOPS</p> </li> <li> <p> <code>io1</code>:
     * 100-64,000 IOPS</p> </li> <li> <p> <code>io2</code>: 100-64,000 IOPS</p> </li>
     * </ul> <p>Default: The existing value is retained if you keep the same volume
     * type. If you change the volume type to <code>io1</code>, <code>io2</code>, or
     * <code>gp3</code>, the default is 3,000.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The target IOPS rate of the volume. This parameter is valid only for
     * <code>gp3</code>, <code>io1</code>, and <code>io2</code> volumes.</p> <p>The
     * following are the supported values for each volume type:</p> <ul> <li> <p>
     * <code>gp3</code>: 3,000-16,000 IOPS</p> </li> <li> <p> <code>io1</code>:
     * 100-64,000 IOPS</p> </li> <li> <p> <code>io2</code>: 100-64,000 IOPS</p> </li>
     * </ul> <p>Default: The existing value is retained if you keep the same volume
     * type. If you change the volume type to <code>io1</code>, <code>io2</code>, or
     * <code>gp3</code>, the default is 3,000.</p>
     */
    inline ModifyVolumeRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The target throughput of the volume, in MiB/s. This parameter is valid only
     * for <code>gp3</code> volumes. The maximum value is 1,000.</p> <p>Default: The
     * existing value is retained if the source and target volume type is
     * <code>gp3</code>. Otherwise, the default value is 125.</p> <p>Valid Range:
     * Minimum value of 125. Maximum value of 1000.</p>
     */
    inline int GetThroughput() const{ return m_throughput; }

    /**
     * <p>The target throughput of the volume, in MiB/s. This parameter is valid only
     * for <code>gp3</code> volumes. The maximum value is 1,000.</p> <p>Default: The
     * existing value is retained if the source and target volume type is
     * <code>gp3</code>. Otherwise, the default value is 125.</p> <p>Valid Range:
     * Minimum value of 125. Maximum value of 1000.</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>The target throughput of the volume, in MiB/s. This parameter is valid only
     * for <code>gp3</code> volumes. The maximum value is 1,000.</p> <p>Default: The
     * existing value is retained if the source and target volume type is
     * <code>gp3</code>. Otherwise, the default value is 125.</p> <p>Valid Range:
     * Minimum value of 125. Maximum value of 1000.</p>
     */
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>The target throughput of the volume, in MiB/s. This parameter is valid only
     * for <code>gp3</code> volumes. The maximum value is 1,000.</p> <p>Default: The
     * existing value is retained if the source and target volume type is
     * <code>gp3</code>. Otherwise, the default value is 125.</p> <p>Valid Range:
     * Minimum value of 125. Maximum value of 1000.</p>
     */
    inline ModifyVolumeRequest& WithThroughput(int value) { SetThroughput(value); return *this;}


    /**
     * <p>Specifies whether to enable Amazon EBS Multi-Attach. If you enable
     * Multi-Attach, you can attach the volume to up to 16 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">
     * Nitro-based instances</a> in the same Availability Zone. This parameter is
     * supported with <code>io1</code> and <code>io2</code> volumes only. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volumes-multi.html">
     * Amazon EBS Multi-Attach</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline bool GetMultiAttachEnabled() const{ return m_multiAttachEnabled; }

    /**
     * <p>Specifies whether to enable Amazon EBS Multi-Attach. If you enable
     * Multi-Attach, you can attach the volume to up to 16 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">
     * Nitro-based instances</a> in the same Availability Zone. This parameter is
     * supported with <code>io1</code> and <code>io2</code> volumes only. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volumes-multi.html">
     * Amazon EBS Multi-Attach</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline bool MultiAttachEnabledHasBeenSet() const { return m_multiAttachEnabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable Amazon EBS Multi-Attach. If you enable
     * Multi-Attach, you can attach the volume to up to 16 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">
     * Nitro-based instances</a> in the same Availability Zone. This parameter is
     * supported with <code>io1</code> and <code>io2</code> volumes only. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volumes-multi.html">
     * Amazon EBS Multi-Attach</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetMultiAttachEnabled(bool value) { m_multiAttachEnabledHasBeenSet = true; m_multiAttachEnabled = value; }

    /**
     * <p>Specifies whether to enable Amazon EBS Multi-Attach. If you enable
     * Multi-Attach, you can attach the volume to up to 16 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">
     * Nitro-based instances</a> in the same Availability Zone. This parameter is
     * supported with <code>io1</code> and <code>io2</code> volumes only. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volumes-multi.html">
     * Amazon EBS Multi-Attach</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline ModifyVolumeRequest& WithMultiAttachEnabled(bool value) { SetMultiAttachEnabled(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    int m_throughput;
    bool m_throughputHasBeenSet = false;

    bool m_multiAttachEnabled;
    bool m_multiAttachEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
