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
   * <p>Details about the import snapshot task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SnapshotTaskDetail">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SnapshotTaskDetail
  {
  public:
    SnapshotTaskDetail();
    SnapshotTaskDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    SnapshotTaskDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The description of the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline SnapshotTaskDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the snapshot.</p>
     */
    inline SnapshotTaskDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the snapshot.</p>
     */
    inline SnapshotTaskDetail& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The size of the disk in the snapshot, in GiB.</p>
     */
    inline double GetDiskImageSize() const{ return m_diskImageSize; }

    /**
     * <p>The size of the disk in the snapshot, in GiB.</p>
     */
    inline bool DiskImageSizeHasBeenSet() const { return m_diskImageSizeHasBeenSet; }

    /**
     * <p>The size of the disk in the snapshot, in GiB.</p>
     */
    inline void SetDiskImageSize(double value) { m_diskImageSizeHasBeenSet = true; m_diskImageSize = value; }

    /**
     * <p>The size of the disk in the snapshot, in GiB.</p>
     */
    inline SnapshotTaskDetail& WithDiskImageSize(double value) { SetDiskImageSize(value); return *this;}


    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline SnapshotTaskDetail& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

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
    inline SnapshotTaskDetail& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline SnapshotTaskDetail& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the disk image from which the snapshot is created.</p>
     */
    inline SnapshotTaskDetail& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted snapshot.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted snapshot.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted snapshot.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted snapshot.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted snapshot.</p>
     */
    inline SnapshotTaskDetail& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted snapshot.</p>
     */
    inline SnapshotTaskDetail& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted snapshot.</p>
     */
    inline SnapshotTaskDetail& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The percentage of completion for the import snapshot task.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The percentage of completion for the import snapshot task.</p>
     */
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }

    /**
     * <p>The percentage of completion for the import snapshot task.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The percentage of completion for the import snapshot task.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }

    /**
     * <p>The percentage of completion for the import snapshot task.</p>
     */
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }

    /**
     * <p>The percentage of completion for the import snapshot task.</p>
     */
    inline SnapshotTaskDetail& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The percentage of completion for the import snapshot task.</p>
     */
    inline SnapshotTaskDetail& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}

    /**
     * <p>The percentage of completion for the import snapshot task.</p>
     */
    inline SnapshotTaskDetail& WithProgress(const char* value) { SetProgress(value); return *this;}


    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

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
    inline SnapshotTaskDetail& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline SnapshotTaskDetail& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot ID of the disk being imported.</p>
     */
    inline SnapshotTaskDetail& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>A brief status for the import snapshot task.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>A brief status for the import snapshot task.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A brief status for the import snapshot task.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A brief status for the import snapshot task.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A brief status for the import snapshot task.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>A brief status for the import snapshot task.</p>
     */
    inline SnapshotTaskDetail& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>A brief status for the import snapshot task.</p>
     */
    inline SnapshotTaskDetail& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>A brief status for the import snapshot task.</p>
     */
    inline SnapshotTaskDetail& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>A detailed status message for the import snapshot task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A detailed status message for the import snapshot task.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A detailed status message for the import snapshot task.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A detailed status message for the import snapshot task.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A detailed status message for the import snapshot task.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A detailed status message for the import snapshot task.</p>
     */
    inline SnapshotTaskDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A detailed status message for the import snapshot task.</p>
     */
    inline SnapshotTaskDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A detailed status message for the import snapshot task.</p>
     */
    inline SnapshotTaskDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The URL of the disk image from which the snapshot is created.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL of the disk image from which the snapshot is created.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL of the disk image from which the snapshot is created.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL of the disk image from which the snapshot is created.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL of the disk image from which the snapshot is created.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL of the disk image from which the snapshot is created.</p>
     */
    inline SnapshotTaskDetail& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the disk image from which the snapshot is created.</p>
     */
    inline SnapshotTaskDetail& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the disk image from which the snapshot is created.</p>
     */
    inline SnapshotTaskDetail& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline const UserBucketDetails& GetUserBucket() const{ return m_userBucket; }

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline bool UserBucketHasBeenSet() const { return m_userBucketHasBeenSet; }

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
    inline SnapshotTaskDetail& WithUserBucket(const UserBucketDetails& value) { SetUserBucket(value); return *this;}

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline SnapshotTaskDetail& WithUserBucket(UserBucketDetails&& value) { SetUserBucket(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    double m_diskImageSize;
    bool m_diskImageSizeHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_format;
    bool m_formatHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

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
