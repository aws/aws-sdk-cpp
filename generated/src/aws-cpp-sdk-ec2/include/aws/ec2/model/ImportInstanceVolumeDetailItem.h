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
    AWS_EC2_API ImportInstanceVolumeDetailItem() = default;
    AWS_EC2_API ImportInstanceVolumeDetailItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImportInstanceVolumeDetailItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Availability Zone where the resulting instance will reside.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    ImportInstanceVolumeDetailItem& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone where the resulting instance will reside.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    ImportInstanceVolumeDetailItem& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes converted so far.</p>
     */
    inline long long GetBytesConverted() const { return m_bytesConverted; }
    inline bool BytesConvertedHasBeenSet() const { return m_bytesConvertedHasBeenSet; }
    inline void SetBytesConverted(long long value) { m_bytesConvertedHasBeenSet = true; m_bytesConverted = value; }
    inline ImportInstanceVolumeDetailItem& WithBytesConverted(long long value) { SetBytesConverted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the task.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImportInstanceVolumeDetailItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image.</p>
     */
    inline const DiskImageDescription& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = DiskImageDescription>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = DiskImageDescription>
    ImportInstanceVolumeDetailItem& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import of this particular disk image.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ImportInstanceVolumeDetailItem& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status information or errors related to the disk image.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ImportInstanceVolumeDetailItem& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume.</p>
     */
    inline const DiskImageVolumeDescription& GetVolume() const { return m_volume; }
    inline bool VolumeHasBeenSet() const { return m_volumeHasBeenSet; }
    template<typename VolumeT = DiskImageVolumeDescription>
    void SetVolume(VolumeT&& value) { m_volumeHasBeenSet = true; m_volume = std::forward<VolumeT>(value); }
    template<typename VolumeT = DiskImageVolumeDescription>
    ImportInstanceVolumeDetailItem& WithVolume(VolumeT&& value) { SetVolume(std::forward<VolumeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    long long m_bytesConverted{0};
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
