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
    AWS_EC2_API ImportVolumeTaskDetails() = default;
    AWS_EC2_API ImportVolumeTaskDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImportVolumeTaskDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Availability Zone where the resulting volume will reside.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    ImportVolumeTaskDetails& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone where the resulting volume will reside.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    ImportVolumeTaskDetails& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes converted so far.</p>
     */
    inline long long GetBytesConverted() const { return m_bytesConverted; }
    inline bool BytesConvertedHasBeenSet() const { return m_bytesConvertedHasBeenSet; }
    inline void SetBytesConverted(long long value) { m_bytesConvertedHasBeenSet = true; m_bytesConverted = value; }
    inline ImportVolumeTaskDetails& WithBytesConverted(long long value) { SetBytesConverted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description you provided when starting the import volume task.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImportVolumeTaskDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    ImportVolumeTaskDetails& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
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
    ImportVolumeTaskDetails& WithVolume(VolumeT&& value) { SetVolume(std::forward<VolumeT>(value)); return *this;}
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

    DiskImageVolumeDescription m_volume;
    bool m_volumeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
