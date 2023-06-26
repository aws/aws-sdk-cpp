/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/UserBucket.h>
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
   * <p>Describes the disk container object for an import image task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageDiskContainer">AWS
   * API Reference</a></p>
   */
  class ImageDiskContainer
  {
  public:
    AWS_EC2_API ImageDiskContainer();
    AWS_EC2_API ImageDiskContainer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImageDiskContainer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The description of the disk image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the disk image.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the disk image.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the disk image.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the disk image.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the disk image.</p>
     */
    inline ImageDiskContainer& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the disk image.</p>
     */
    inline ImageDiskContainer& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the disk image.</p>
     */
    inline ImageDiskContainer& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The block device mapping for the disk.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The block device mapping for the disk.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The block device mapping for the disk.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The block device mapping for the disk.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The block device mapping for the disk.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The block device mapping for the disk.</p>
     */
    inline ImageDiskContainer& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The block device mapping for the disk.</p>
     */
    inline ImageDiskContainer& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The block device mapping for the disk.</p>
     */
    inline ImageDiskContainer& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>OVA</code> | <code>VHD</code> | <code>VHDX</code> | <code>VMDK</code> |
     * <code>RAW</code> </p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>OVA</code> | <code>VHD</code> | <code>VHDX</code> | <code>VMDK</code> |
     * <code>RAW</code> </p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>OVA</code> | <code>VHD</code> | <code>VHDX</code> | <code>VMDK</code> |
     * <code>RAW</code> </p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>OVA</code> | <code>VHD</code> | <code>VHDX</code> | <code>VMDK</code> |
     * <code>RAW</code> </p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>OVA</code> | <code>VHD</code> | <code>VHDX</code> | <code>VMDK</code> |
     * <code>RAW</code> </p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>OVA</code> | <code>VHD</code> | <code>VHDX</code> | <code>VMDK</code> |
     * <code>RAW</code> </p>
     */
    inline ImageDiskContainer& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>OVA</code> | <code>VHD</code> | <code>VHDX</code> | <code>VMDK</code> |
     * <code>RAW</code> </p>
     */
    inline ImageDiskContainer& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>OVA</code> | <code>VHD</code> | <code>VHDX</code> | <code>VMDK</code> |
     * <code>RAW</code> </p>
     */
    inline ImageDiskContainer& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>The ID of the EBS snapshot to be used for importing the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the EBS snapshot to be used for importing the snapshot.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the EBS snapshot to be used for importing the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the EBS snapshot to be used for importing the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the EBS snapshot to be used for importing the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the EBS snapshot to be used for importing the snapshot.</p>
     */
    inline ImageDiskContainer& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the EBS snapshot to be used for importing the snapshot.</p>
     */
    inline ImageDiskContainer& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EBS snapshot to be used for importing the snapshot.</p>
     */
    inline ImageDiskContainer& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The URL to the Amazon S3-based disk image being imported. The URL can either
     * be a https URL (https://..) or an Amazon S3 URL (s3://..)</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. The URL can either
     * be a https URL (https://..) or an Amazon S3 URL (s3://..)</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. The URL can either
     * be a https URL (https://..) or an Amazon S3 URL (s3://..)</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. The URL can either
     * be a https URL (https://..) or an Amazon S3 URL (s3://..)</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. The URL can either
     * be a https URL (https://..) or an Amazon S3 URL (s3://..)</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. The URL can either
     * be a https URL (https://..) or an Amazon S3 URL (s3://..)</p>
     */
    inline ImageDiskContainer& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. The URL can either
     * be a https URL (https://..) or an Amazon S3 URL (s3://..)</p>
     */
    inline ImageDiskContainer& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. The URL can either
     * be a https URL (https://..) or an Amazon S3 URL (s3://..)</p>
     */
    inline ImageDiskContainer& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline const UserBucket& GetUserBucket() const{ return m_userBucket; }

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline bool UserBucketHasBeenSet() const { return m_userBucketHasBeenSet; }

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline void SetUserBucket(const UserBucket& value) { m_userBucketHasBeenSet = true; m_userBucket = value; }

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline void SetUserBucket(UserBucket&& value) { m_userBucketHasBeenSet = true; m_userBucket = std::move(value); }

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline ImageDiskContainer& WithUserBucket(const UserBucket& value) { SetUserBucket(value); return *this;}

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline ImageDiskContainer& WithUserBucket(UserBucket&& value) { SetUserBucket(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    UserBucket m_userBucket;
    bool m_userBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
