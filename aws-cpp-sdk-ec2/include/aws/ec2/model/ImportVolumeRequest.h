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
#include <aws/ec2/model/DiskImageDetail.h>
#include <aws/ec2/model/VolumeDetail.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ImportVolume.</p>
   */
  class AWS_EC2_API ImportVolumeRequest : public EC2Request
  {
  public:
    ImportVolumeRequest();
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
    inline ImportVolumeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The Availability Zone for the resulting EBS volume.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone for the resulting EBS volume.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone for the resulting EBS volume.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone for the resulting EBS volume.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone for the resulting EBS volume.</p>
     */
    inline ImportVolumeRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone for the resulting EBS volume.</p>
     */
    inline ImportVolumeRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone for the resulting EBS volume.</p>
     */
    inline ImportVolumeRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The disk image.</p>
     */
    inline const DiskImageDetail& GetImage() const{ return m_image; }

    /**
     * <p>The disk image.</p>
     */
    inline void SetImage(const DiskImageDetail& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The disk image.</p>
     */
    inline void SetImage(DiskImageDetail&& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The disk image.</p>
     */
    inline ImportVolumeRequest& WithImage(const DiskImageDetail& value) { SetImage(value); return *this;}

    /**
     * <p>The disk image.</p>
     */
    inline ImportVolumeRequest& WithImage(DiskImageDetail&& value) { SetImage(value); return *this;}

    /**
     * <p>A description of the volume.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the volume.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the volume.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the volume.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the volume.</p>
     */
    inline ImportVolumeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the volume.</p>
     */
    inline ImportVolumeRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the volume.</p>
     */
    inline ImportVolumeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The volume size.</p>
     */
    inline const VolumeDetail& GetVolume() const{ return m_volume; }

    /**
     * <p>The volume size.</p>
     */
    inline void SetVolume(const VolumeDetail& value) { m_volumeHasBeenSet = true; m_volume = value; }

    /**
     * <p>The volume size.</p>
     */
    inline void SetVolume(VolumeDetail&& value) { m_volumeHasBeenSet = true; m_volume = value; }

    /**
     * <p>The volume size.</p>
     */
    inline ImportVolumeRequest& WithVolume(const VolumeDetail& value) { SetVolume(value); return *this;}

    /**
     * <p>The volume size.</p>
     */
    inline ImportVolumeRequest& WithVolume(VolumeDetail&& value) { SetVolume(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    DiskImageDetail m_image;
    bool m_imageHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    VolumeDetail m_volume;
    bool m_volumeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
