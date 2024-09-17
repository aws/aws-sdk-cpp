/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SnapshotDetail
  {
  public:
    AWS_EC2_API SnapshotDetail();
    AWS_EC2_API SnapshotDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SnapshotDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SnapshotDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SnapshotDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SnapshotDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block device mapping for the snapshot.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline SnapshotDetail& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline SnapshotDetail& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline SnapshotDetail& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the disk in the snapshot, in GiB.</p>
     */
    inline double GetDiskImageSize() const{ return m_diskImageSize; }
    inline bool DiskImageSizeHasBeenSet() const { return m_diskImageSizeHasBeenSet; }
    inline void SetDiskImageSize(double value) { m_diskImageSizeHasBeenSet = true; m_diskImageSize = value; }
    inline SnapshotDetail& WithDiskImageSize(double value) { SetDiskImageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }
    inline SnapshotDetail& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline SnapshotDetail& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline SnapshotDetail& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of progress for the task.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }
    inline SnapshotDetail& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}
    inline SnapshotDetail& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}
    inline SnapshotDetail& WithProgress(const char* value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline SnapshotDetail& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline SnapshotDetail& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline SnapshotDetail& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief status of the snapshot creation.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline SnapshotDetail& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline SnapshotDetail& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline SnapshotDetail& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed status message for the snapshot creation.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline SnapshotDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline SnapshotDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline SnapshotDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL used to access the disk image.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline SnapshotDetail& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline SnapshotDetail& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline SnapshotDetail& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket for the disk image.</p>
     */
    inline const UserBucketDetails& GetUserBucket() const{ return m_userBucket; }
    inline bool UserBucketHasBeenSet() const { return m_userBucketHasBeenSet; }
    inline void SetUserBucket(const UserBucketDetails& value) { m_userBucketHasBeenSet = true; m_userBucket = value; }
    inline void SetUserBucket(UserBucketDetails&& value) { m_userBucketHasBeenSet = true; m_userBucket = std::move(value); }
    inline SnapshotDetail& WithUserBucket(const UserBucketDetails& value) { SetUserBucket(value); return *this;}
    inline SnapshotDetail& WithUserBucket(UserBucketDetails&& value) { SetUserBucket(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    double m_diskImageSize;
    bool m_diskImageSizeHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_progress;
    bool m_progressHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    UserBucketDetails m_userBucket;
    bool m_userBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
