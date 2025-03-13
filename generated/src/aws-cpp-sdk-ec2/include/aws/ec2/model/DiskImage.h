/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DiskImageDetail.h>
#include <aws/ec2/model/VolumeDetail.h>
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
   * <p>Describes a disk image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DiskImage">AWS API
   * Reference</a></p>
   */
  class DiskImage
  {
  public:
    AWS_EC2_API DiskImage() = default;
    AWS_EC2_API DiskImage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DiskImage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A description of the disk image.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DiskImage& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the disk image.</p>
     */
    inline const DiskImageDetail& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = DiskImageDetail>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = DiskImageDetail>
    DiskImage& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the volume.</p>
     */
    inline const VolumeDetail& GetVolume() const { return m_volume; }
    inline bool VolumeHasBeenSet() const { return m_volumeHasBeenSet; }
    template<typename VolumeT = VolumeDetail>
    void SetVolume(VolumeT&& value) { m_volumeHasBeenSet = true; m_volume = std::forward<VolumeT>(value); }
    template<typename VolumeT = VolumeDetail>
    DiskImage& WithVolume(VolumeT&& value) { SetVolume(std::forward<VolumeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DiskImageDetail m_image;
    bool m_imageHasBeenSet = false;

    VolumeDetail m_volume;
    bool m_volumeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
