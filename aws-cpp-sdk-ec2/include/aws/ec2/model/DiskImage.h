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
  class AWS_EC2_API DiskImage
  {
  public:
    DiskImage();
    DiskImage(const Aws::Utils::Xml::XmlNode& xmlNode);
    DiskImage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A description of the disk image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

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
    bool m_descriptionHasBeenSet;

    DiskImageDetail m_image;
    bool m_imageHasBeenSet;

    VolumeDetail m_volume;
    bool m_volumeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
