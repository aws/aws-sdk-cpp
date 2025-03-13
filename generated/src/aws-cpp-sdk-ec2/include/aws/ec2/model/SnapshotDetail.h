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
    AWS_EC2_API SnapshotDetail() = default;
    AWS_EC2_API SnapshotDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SnapshotDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SnapshotDetail& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block device mapping for the snapshot.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    SnapshotDetail& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the disk in the snapshot, in GiB.</p>
     */
    inline double GetDiskImageSize() const { return m_diskImageSize; }
    inline bool DiskImageSizeHasBeenSet() const { return m_diskImageSizeHasBeenSet; }
    inline void SetDiskImageSize(double value) { m_diskImageSizeHasBeenSet = true; m_diskImageSize = value; }
    inline SnapshotDetail& WithDiskImageSize(double value) { SetDiskImageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    SnapshotDetail& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of progress for the task.</p>
     */
    inline const Aws::String& GetProgress() const { return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    template<typename ProgressT = Aws::String>
    void SetProgress(ProgressT&& value) { m_progressHasBeenSet = true; m_progress = std::forward<ProgressT>(value); }
    template<typename ProgressT = Aws::String>
    SnapshotDetail& WithProgress(ProgressT&& value) { SetProgress(std::forward<ProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    SnapshotDetail& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief status of the snapshot creation.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    SnapshotDetail& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed status message for the snapshot creation.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    SnapshotDetail& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL used to access the disk image.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    SnapshotDetail& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket for the disk image.</p>
     */
    inline const UserBucketDetails& GetUserBucket() const { return m_userBucket; }
    inline bool UserBucketHasBeenSet() const { return m_userBucketHasBeenSet; }
    template<typename UserBucketT = UserBucketDetails>
    void SetUserBucket(UserBucketT&& value) { m_userBucketHasBeenSet = true; m_userBucket = std::forward<UserBucketT>(value); }
    template<typename UserBucketT = UserBucketDetails>
    SnapshotDetail& WithUserBucket(UserBucketT&& value) { SetUserBucket(std::forward<UserBucketT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    double m_diskImageSize{0.0};
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
