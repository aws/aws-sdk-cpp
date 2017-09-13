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
#include <aws/ec2/model/UserBucketDetails.h>
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
   * <p>Describes the snapshot created from the imported disk.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SnapshotDetail">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SnapshotDetail
  {
  public:
    SnapshotDetail();
    SnapshotDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    SnapshotDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline SnapshotDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the snapshot.</p>
     */
    inline SnapshotDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the snapshot.</p>
     */
    inline SnapshotDetail& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The block device mapping for the snapshot.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The block device mapping for the snapshot.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The block device mapping for the snapshot.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The block device mapping for the snapshot.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The block device mapping for the snapshot.</p>
     */
    inline SnapshotDetail& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The block device mapping for the snapshot.</p>
     */
    inline SnapshotDetail& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The block device mapping for the snapshot.</p>
     */
    inline SnapshotDetail& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The size of the disk in the snapshot, in GiB.</p>
     */
    inline double GetDiskImageSize() const{ return m_diskImageSize; }

    /**
     * <p>The size of the disk in the snapshot, in GiB.</p>
     */
    inline void SetDiskImageSize(double value) { m_diskImageSizeHasBeenSet = true; m_diskImageSize = value; }

    /**
     * <p>The size of the disk in the snapshot, in GiB.</p>
     */
    inline SnapshotDetail& WithDiskImageSize(double value) { SetDiskImageSize(value); return *this;}


    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline SnapshotDetail& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline SnapshotDetail& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline SnapshotDetail& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>The percentage of progress for the task.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The percentage of progress for the task.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The percentage of progress for the task.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }

    /**
     * <p>The percentage of progress for the task.</p>
     */
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }

    /**
     * <p>The percentage of progress for the task.</p>
     */
    inline SnapshotDetail& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The percentage of progress for the task.</p>
     */
    inline SnapshotDetail& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}

    /**
     * <p>The percentage of progress for the task.</p>
     */
    inline SnapshotDetail& WithProgress(const char* value) { SetProgress(value); return *this;}


    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline SnapshotDetail& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline SnapshotDetail& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline SnapshotDetail& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>A brief status of the snapshot creation.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>A brief status of the snapshot creation.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A brief status of the snapshot creation.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A brief status of the snapshot creation.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>A brief status of the snapshot creation.</p>
     */
    inline SnapshotDetail& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>A brief status of the snapshot creation.</p>
     */
    inline SnapshotDetail& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>A brief status of the snapshot creation.</p>
     */
    inline SnapshotDetail& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>A detailed status message for the snapshot creation.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A detailed status message for the snapshot creation.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A detailed status message for the snapshot creation.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A detailed status message for the snapshot creation.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A detailed status message for the snapshot creation.</p>
     */
    inline SnapshotDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A detailed status message for the snapshot creation.</p>
     */
    inline SnapshotDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A detailed status message for the snapshot creation.</p>
     */
    inline SnapshotDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The URL used to access the disk image.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL used to access the disk image.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL used to access the disk image.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL used to access the disk image.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL used to access the disk image.</p>
     */
    inline SnapshotDetail& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL used to access the disk image.</p>
     */
    inline SnapshotDetail& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL used to access the disk image.</p>
     */
    inline SnapshotDetail& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline const UserBucketDetails& GetUserBucket() const{ return m_userBucket; }

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline void SetUserBucket(const UserBucketDetails& value) { m_userBucketHasBeenSet = true; m_userBucket = value; }

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline void SetUserBucket(UserBucketDetails&& value) { m_userBucketHasBeenSet = true; m_userBucket = std::move(value); }

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline SnapshotDetail& WithUserBucket(const UserBucketDetails& value) { SetUserBucket(value); return *this;}

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline SnapshotDetail& WithUserBucket(UserBucketDetails&& value) { SetUserBucket(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;

    double m_diskImageSize;
    bool m_diskImageSizeHasBeenSet;

    Aws::String m_format;
    bool m_formatHasBeenSet;

    Aws::String m_progress;
    bool m_progressHasBeenSet;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;

    UserBucketDetails m_userBucket;
    bool m_userBucketHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
