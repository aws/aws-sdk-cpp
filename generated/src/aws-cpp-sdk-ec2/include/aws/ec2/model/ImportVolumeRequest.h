/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DiskImageDetail.h>
#include <aws/ec2/model/VolumeDetail.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ImportVolumeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ImportVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportVolume"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ImportVolumeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the resulting EBS volume.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ImportVolumeRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ImportVolumeRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ImportVolumeRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk image.</p>
     */
    inline const DiskImageDetail& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const DiskImageDetail& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(DiskImageDetail&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline ImportVolumeRequest& WithImage(const DiskImageDetail& value) { SetImage(value); return *this;}
    inline ImportVolumeRequest& WithImage(DiskImageDetail&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the volume.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImportVolumeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImportVolumeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImportVolumeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume size.</p>
     */
    inline const VolumeDetail& GetVolume() const{ return m_volume; }
    inline bool VolumeHasBeenSet() const { return m_volumeHasBeenSet; }
    inline void SetVolume(const VolumeDetail& value) { m_volumeHasBeenSet = true; m_volume = value; }
    inline void SetVolume(VolumeDetail&& value) { m_volumeHasBeenSet = true; m_volume = std::move(value); }
    inline ImportVolumeRequest& WithVolume(const VolumeDetail& value) { SetVolume(value); return *this;}
    inline ImportVolumeRequest& WithVolume(VolumeDetail&& value) { SetVolume(std::move(value)); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    DiskImageDetail m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    VolumeDetail m_volume;
    bool m_volumeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
