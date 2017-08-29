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
  class AWS_EC2_API ImportInstanceVolumeDetailItem
  {
  public:
    ImportInstanceVolumeDetailItem();
    ImportInstanceVolumeDetailItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    ImportInstanceVolumeDetailItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Availability Zone where the resulting instance will reside.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where the resulting instance will reside.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where the resulting instance will reside.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where the resulting instance will reside.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where the resulting instance will reside.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where the resulting instance will reside.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone where the resulting instance will reside.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The number of bytes converted so far.</p>
     */
    inline long long GetBytesConverted() const{ return m_bytesConverted; }

    /**
     * <p>The number of bytes converted so far.</p>
     */
    inline void SetBytesConverted(long long value) { m_bytesConvertedHasBeenSet = true; m_bytesConverted = value; }

    /**
     * <p>The number of bytes converted so far.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithBytesConverted(long long value) { SetBytesConverted(value); return *this;}


    /**
     * <p>A description of the task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the task.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the task.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the task.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the task.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The image.</p>
     */
    inline const DiskImageDescription& GetImage() const{ return m_image; }

    /**
     * <p>The image.</p>
     */
    inline void SetImage(const DiskImageDescription& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The image.</p>
     */
    inline void SetImage(DiskImageDescription&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The image.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithImage(const DiskImageDescription& value) { SetImage(value); return *this;}

    /**
     * <p>The image.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithImage(DiskImageDescription&& value) { SetImage(std::move(value)); return *this;}


    /**
     * <p>The status of the import of this particular disk image.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the import of this particular disk image.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the import of this particular disk image.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the import of this particular disk image.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the import of this particular disk image.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the import of this particular disk image.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the import of this particular disk image.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The status information or errors related to the disk image.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status information or errors related to the disk image.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status information or errors related to the disk image.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status information or errors related to the disk image.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status information or errors related to the disk image.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status information or errors related to the disk image.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status information or errors related to the disk image.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The volume.</p>
     */
    inline const DiskImageVolumeDescription& GetVolume() const{ return m_volume; }

    /**
     * <p>The volume.</p>
     */
    inline void SetVolume(const DiskImageVolumeDescription& value) { m_volumeHasBeenSet = true; m_volume = value; }

    /**
     * <p>The volume.</p>
     */
    inline void SetVolume(DiskImageVolumeDescription&& value) { m_volumeHasBeenSet = true; m_volume = std::move(value); }

    /**
     * <p>The volume.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithVolume(const DiskImageVolumeDescription& value) { SetVolume(value); return *this;}

    /**
     * <p>The volume.</p>
     */
    inline ImportInstanceVolumeDetailItem& WithVolume(DiskImageVolumeDescription&& value) { SetVolume(std::move(value)); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    long long m_bytesConverted;
    bool m_bytesConvertedHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    DiskImageDescription m_image;
    bool m_imageHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    DiskImageVolumeDescription m_volume;
    bool m_volumeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
