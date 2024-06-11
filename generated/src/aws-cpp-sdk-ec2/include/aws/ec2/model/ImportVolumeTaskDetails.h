/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DiskImageDescription.h>
#include <aws/ec2/model/DiskImageVolumeDescription.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an import volume task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportVolumeTaskDetails">AWS
   * API Reference</a></p>
   */
  class ImportVolumeTaskDetails
  {
  public:
    AWS_EC2_API ImportVolumeTaskDetails();
    AWS_EC2_API ImportVolumeTaskDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImportVolumeTaskDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Availability Zone where the resulting volume will reside.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ImportVolumeTaskDetails& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ImportVolumeTaskDetails& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ImportVolumeTaskDetails& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes converted so far.</p>
     */
    inline long long GetBytesConverted() const{ return m_bytesConverted; }
    inline bool BytesConvertedHasBeenSet() const { return m_bytesConvertedHasBeenSet; }
    inline void SetBytesConverted(long long value) { m_bytesConvertedHasBeenSet = true; m_bytesConverted = value; }
    inline ImportVolumeTaskDetails& WithBytesConverted(long long value) { SetBytesConverted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description you provided when starting the import volume task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImportVolumeTaskDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImportVolumeTaskDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImportVolumeTaskDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image.</p>
     */
    inline const DiskImageDescription& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const DiskImageDescription& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(DiskImageDescription&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline ImportVolumeTaskDetails& WithImage(const DiskImageDescription& value) { SetImage(value); return *this;}
    inline ImportVolumeTaskDetails& WithImage(DiskImageDescription&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume.</p>
     */
    inline const DiskImageVolumeDescription& GetVolume() const{ return m_volume; }
    inline bool VolumeHasBeenSet() const { return m_volumeHasBeenSet; }
    inline void SetVolume(const DiskImageVolumeDescription& value) { m_volumeHasBeenSet = true; m_volume = value; }
    inline void SetVolume(DiskImageVolumeDescription&& value) { m_volumeHasBeenSet = true; m_volume = std::move(value); }
    inline ImportVolumeTaskDetails& WithVolume(const DiskImageVolumeDescription& value) { SetVolume(value); return *this;}
    inline ImportVolumeTaskDetails& WithVolume(DiskImageVolumeDescription&& value) { SetVolume(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    long long m_bytesConverted;
    bool m_bytesConvertedHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DiskImageDescription m_image;
    bool m_imageHasBeenSet = false;

    DiskImageVolumeDescription m_volume;
    bool m_volumeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
