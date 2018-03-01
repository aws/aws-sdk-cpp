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
  class AWS_EC2_API ModifyVolumeRequest : public EC2Request
  {
  public:
    ModifyVolumeRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVolume"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
     * <p>Target size in GiB of the volume to be modified. Target volume size must be
     * greater than or equal to than the existing size of the volume. For information
     * about available EBS volume sizes, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html</a>.</p>
     * <p>Default: If no size is specified, the existing size is retained. </p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>Target size in GiB of the volume to be modified. Target volume size must be
     * greater than or equal to than the existing size of the volume. For information
     * about available EBS volume sizes, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html</a>.</p>
     * <p>Default: If no size is specified, the existing size is retained. </p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>Target size in GiB of the volume to be modified. Target volume size must be
     * greater than or equal to than the existing size of the volume. For information
     * about available EBS volume sizes, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html</a>.</p>
     * <p>Default: If no size is specified, the existing size is retained. </p>
     */
    inline ModifyVolumeRequest& WithSize(int value) { SetSize(value); return *this;}


    /**
     * <p>Target EBS volume type of the volume to be modified</p> <p> The API does not
     * support modifications for volume type <code>standard</code>. You also cannot
     * change the type of a volume to <code>standard</code>. </p> <p>Default: If no
     * type is specified, the existing type is retained. </p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>Target EBS volume type of the volume to be modified</p> <p> The API does not
     * support modifications for volume type <code>standard</code>. You also cannot
     * change the type of a volume to <code>standard</code>. </p> <p>Default: If no
     * type is specified, the existing type is retained. </p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>Target EBS volume type of the volume to be modified</p> <p> The API does not
     * support modifications for volume type <code>standard</code>. You also cannot
     * change the type of a volume to <code>standard</code>. </p> <p>Default: If no
     * type is specified, the existing type is retained. </p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>Target EBS volume type of the volume to be modified</p> <p> The API does not
     * support modifications for volume type <code>standard</code>. You also cannot
     * change the type of a volume to <code>standard</code>. </p> <p>Default: If no
     * type is specified, the existing type is retained. </p>
     */
    inline ModifyVolumeRequest& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>Target EBS volume type of the volume to be modified</p> <p> The API does not
     * support modifications for volume type <code>standard</code>. You also cannot
     * change the type of a volume to <code>standard</code>. </p> <p>Default: If no
     * type is specified, the existing type is retained. </p>
     */
    inline ModifyVolumeRequest& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p>Target IOPS rate of the volume to be modified.</p> <p>Only valid for
     * Provisioned IOPS SSD (<code>io1</code>) volumes. For more information about
     * <code>io1</code> IOPS configuration, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html#EBSVolumeTypes_piops">http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html#EBSVolumeTypes_piops</a>.</p>
     * <p>Default: If no IOPS value is specified, the existing value is retained. </p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>Target IOPS rate of the volume to be modified.</p> <p>Only valid for
     * Provisioned IOPS SSD (<code>io1</code>) volumes. For more information about
     * <code>io1</code> IOPS configuration, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html#EBSVolumeTypes_piops">http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html#EBSVolumeTypes_piops</a>.</p>
     * <p>Default: If no IOPS value is specified, the existing value is retained. </p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Target IOPS rate of the volume to be modified.</p> <p>Only valid for
     * Provisioned IOPS SSD (<code>io1</code>) volumes. For more information about
     * <code>io1</code> IOPS configuration, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html#EBSVolumeTypes_piops">http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html#EBSVolumeTypes_piops</a>.</p>
     * <p>Default: If no IOPS value is specified, the existing value is retained. </p>
     */
    inline ModifyVolumeRequest& WithIops(int value) { SetIops(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;

    int m_size;
    bool m_sizeHasBeenSet;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
