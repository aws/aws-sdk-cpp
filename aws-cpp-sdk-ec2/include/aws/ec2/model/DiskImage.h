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
    AWS_EC2_API DiskImage();
    AWS_EC2_API DiskImage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DiskImage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A description of the disk image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the disk image.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the disk image.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the disk image.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the disk image.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the disk image.</p>
     */
    inline DiskImage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the disk image.</p>
     */
    inline DiskImage& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the disk image.</p>
     */
    inline DiskImage& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the disk image.</p>
     */
    inline const DiskImageDetail& GetImage() const{ return m_image; }

    /**
     * <p>Information about the disk image.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>Information about the disk image.</p>
     */
    inline void SetImage(const DiskImageDetail& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>Information about the disk image.</p>
     */
    inline void SetImage(DiskImageDetail&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>Information about the disk image.</p>
     */
    inline DiskImage& WithImage(const DiskImageDetail& value) { SetImage(value); return *this;}

    /**
     * <p>Information about the disk image.</p>
     */
    inline DiskImage& WithImage(DiskImageDetail&& value) { SetImage(std::move(value)); return *this;}


    /**
     * <p>Information about the volume.</p>
     */
    inline const VolumeDetail& GetVolume() const{ return m_volume; }

    /**
     * <p>Information about the volume.</p>
     */
    inline bool VolumeHasBeenSet() const { return m_volumeHasBeenSet; }

    /**
     * <p>Information about the volume.</p>
     */
    inline void SetVolume(const VolumeDetail& value) { m_volumeHasBeenSet = true; m_volume = value; }

    /**
     * <p>Information about the volume.</p>
     */
    inline void SetVolume(VolumeDetail&& value) { m_volumeHasBeenSet = true; m_volume = std::move(value); }

    /**
     * <p>Information about the volume.</p>
     */
    inline DiskImage& WithVolume(const VolumeDetail& value) { SetVolume(value); return *this;}

    /**
     * <p>Information about the volume.</p>
     */
    inline DiskImage& WithVolume(VolumeDetail&& value) { SetVolume(std::move(value)); return *this;}

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
