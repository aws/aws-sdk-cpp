/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ContainerFormat.h>
#include <aws/ec2/model/DiskImageFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes an export instance task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportToS3TaskSpecification">AWS
   * API Reference</a></p>
   */
  class ExportToS3TaskSpecification
  {
  public:
    AWS_EC2_API ExportToS3TaskSpecification();
    AWS_EC2_API ExportToS3TaskSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ExportToS3TaskSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The container format used to combine disk images with metadata (such as OVF).
     * If absent, only the disk image is exported.</p>
     */
    inline const ContainerFormat& GetContainerFormat() const{ return m_containerFormat; }

    /**
     * <p>The container format used to combine disk images with metadata (such as OVF).
     * If absent, only the disk image is exported.</p>
     */
    inline bool ContainerFormatHasBeenSet() const { return m_containerFormatHasBeenSet; }

    /**
     * <p>The container format used to combine disk images with metadata (such as OVF).
     * If absent, only the disk image is exported.</p>
     */
    inline void SetContainerFormat(const ContainerFormat& value) { m_containerFormatHasBeenSet = true; m_containerFormat = value; }

    /**
     * <p>The container format used to combine disk images with metadata (such as OVF).
     * If absent, only the disk image is exported.</p>
     */
    inline void SetContainerFormat(ContainerFormat&& value) { m_containerFormatHasBeenSet = true; m_containerFormat = std::move(value); }

    /**
     * <p>The container format used to combine disk images with metadata (such as OVF).
     * If absent, only the disk image is exported.</p>
     */
    inline ExportToS3TaskSpecification& WithContainerFormat(const ContainerFormat& value) { SetContainerFormat(value); return *this;}

    /**
     * <p>The container format used to combine disk images with metadata (such as OVF).
     * If absent, only the disk image is exported.</p>
     */
    inline ExportToS3TaskSpecification& WithContainerFormat(ContainerFormat&& value) { SetContainerFormat(std::move(value)); return *this;}


    /**
     * <p>The format for the exported image.</p>
     */
    inline const DiskImageFormat& GetDiskImageFormat() const{ return m_diskImageFormat; }

    /**
     * <p>The format for the exported image.</p>
     */
    inline bool DiskImageFormatHasBeenSet() const { return m_diskImageFormatHasBeenSet; }

    /**
     * <p>The format for the exported image.</p>
     */
    inline void SetDiskImageFormat(const DiskImageFormat& value) { m_diskImageFormatHasBeenSet = true; m_diskImageFormat = value; }

    /**
     * <p>The format for the exported image.</p>
     */
    inline void SetDiskImageFormat(DiskImageFormat&& value) { m_diskImageFormatHasBeenSet = true; m_diskImageFormat = std::move(value); }

    /**
     * <p>The format for the exported image.</p>
     */
    inline ExportToS3TaskSpecification& WithDiskImageFormat(const DiskImageFormat& value) { SetDiskImageFormat(value); return *this;}

    /**
     * <p>The format for the exported image.</p>
     */
    inline ExportToS3TaskSpecification& WithDiskImageFormat(DiskImageFormat&& value) { SetDiskImageFormat(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 bucket for the destination image. The destination bucket must
     * exist and have an access control list (ACL) attached that specifies the
     * Region-specific canonical account ID for the <code>Grantee</code>. For more
     * information about the ACL to your S3 bucket, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html#vmexport-prerequisites">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The Amazon S3 bucket for the destination image. The destination bucket must
     * exist and have an access control list (ACL) attached that specifies the
     * Region-specific canonical account ID for the <code>Grantee</code>. For more
     * information about the ACL to your S3 bucket, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html#vmexport-prerequisites">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket for the destination image. The destination bucket must
     * exist and have an access control list (ACL) attached that specifies the
     * Region-specific canonical account ID for the <code>Grantee</code>. For more
     * information about the ACL to your S3 bucket, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html#vmexport-prerequisites">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The Amazon S3 bucket for the destination image. The destination bucket must
     * exist and have an access control list (ACL) attached that specifies the
     * Region-specific canonical account ID for the <code>Grantee</code>. For more
     * information about the ACL to your S3 bucket, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html#vmexport-prerequisites">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket for the destination image. The destination bucket must
     * exist and have an access control list (ACL) attached that specifies the
     * Region-specific canonical account ID for the <code>Grantee</code>. For more
     * information about the ACL to your S3 bucket, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html#vmexport-prerequisites">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket for the destination image. The destination bucket must
     * exist and have an access control list (ACL) attached that specifies the
     * Region-specific canonical account ID for the <code>Grantee</code>. For more
     * information about the ACL to your S3 bucket, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html#vmexport-prerequisites">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline ExportToS3TaskSpecification& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket for the destination image. The destination bucket must
     * exist and have an access control list (ACL) attached that specifies the
     * Region-specific canonical account ID for the <code>Grantee</code>. For more
     * information about the ACL to your S3 bucket, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html#vmexport-prerequisites">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline ExportToS3TaskSpecification& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket for the destination image. The destination bucket must
     * exist and have an access control list (ACL) attached that specifies the
     * Region-specific canonical account ID for the <code>Grantee</code>. For more
     * information about the ACL to your S3 bucket, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html#vmexport-prerequisites">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline ExportToS3TaskSpecification& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The image is written to a single object in the Amazon S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The image is written to a single object in the Amazon S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }

    /**
     * <p>The image is written to a single object in the Amazon S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The image is written to a single object in the Amazon S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The image is written to a single object in the Amazon S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The image is written to a single object in the Amazon S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline ExportToS3TaskSpecification& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The image is written to a single object in the Amazon S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline ExportToS3TaskSpecification& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The image is written to a single object in the Amazon S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline ExportToS3TaskSpecification& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}

  private:

    ContainerFormat m_containerFormat;
    bool m_containerFormatHasBeenSet = false;

    DiskImageFormat m_diskImageFormat;
    bool m_diskImageFormatHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
