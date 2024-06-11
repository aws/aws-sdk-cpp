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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportInstanceVolumeDetailItem">AWS
   * API Reference</a></p>
   */
  class ImportInstanceVolumeDetailItem
  {
  public:
    AWS_EC2_API ImportInstanceVolumeDetailItem();
    AWS_EC2_API ImportInstanceVolumeDetailItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImportInstanceVolumeDetailItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Availability Zone where the resulting instance will reside.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ImportInstanceVolumeDetailItem& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ImportInstanceVolumeDetailItem& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ImportInstanceVolumeDetailItem& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes converted so far.</p>
     */
    inline long long GetBytesConverted() const{ return m_bytesConverted; }
    inline bool BytesConvertedHasBeenSet() const { return m_bytesConvertedHasBeenSet; }
    inline void SetBytesConverted(long long value) { m_bytesConvertedHasBeenSet = true; m_bytesConverted = value; }
    inline ImportInstanceVolumeDetailItem& WithBytesConverted(long long value) { SetBytesConverted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImportInstanceVolumeDetailItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImportInstanceVolumeDetailItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImportInstanceVolumeDetailItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image.</p>
     */
    inline const DiskImageDescription& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const DiskImageDescription& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(DiskImageDescription&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline ImportInstanceVolumeDetailItem& WithImage(const DiskImageDescription& value) { SetImage(value); return *this;}
    inline ImportInstanceVolumeDetailItem& WithImage(DiskImageDescription&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import of this particular disk image.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ImportInstanceVolumeDetailItem& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ImportInstanceVolumeDetailItem& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ImportInstanceVolumeDetailItem& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status information or errors related to the disk image.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ImportInstanceVolumeDetailItem& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ImportInstanceVolumeDetailItem& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ImportInstanceVolumeDetailItem& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume.</p>
     */
    inline const DiskImageVolumeDescription& GetVolume() const{ return m_volume; }
    inline bool VolumeHasBeenSet() const { return m_volumeHasBeenSet; }
    inline void SetVolume(const DiskImageVolumeDescription& value) { m_volumeHasBeenSet = true; m_volume = value; }
    inline void SetVolume(DiskImageVolumeDescription&& value) { m_volumeHasBeenSet = true; m_volume = std::move(value); }
    inline ImportInstanceVolumeDetailItem& WithVolume(const DiskImageVolumeDescription& value) { SetVolume(value); return *this;}
    inline ImportInstanceVolumeDetailItem& WithVolume(DiskImageVolumeDescription&& value) { SetVolume(std::move(value)); return *this;}
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

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    DiskImageVolumeDescription m_volume;
    bool m_volumeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
