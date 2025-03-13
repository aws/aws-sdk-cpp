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
   * <p>Describes the format and location for the export task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportToS3Task">AWS
   * API Reference</a></p>
   */
  class ExportToS3Task
  {
  public:
    AWS_EC2_API ExportToS3Task() = default;
    AWS_EC2_API ExportToS3Task(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ExportToS3Task& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The container format used to combine disk images with metadata (such as OVF).
     * If absent, only the disk image is exported.</p>
     */
    inline ContainerFormat GetContainerFormat() const { return m_containerFormat; }
    inline bool ContainerFormatHasBeenSet() const { return m_containerFormatHasBeenSet; }
    inline void SetContainerFormat(ContainerFormat value) { m_containerFormatHasBeenSet = true; m_containerFormat = value; }
    inline ExportToS3Task& WithContainerFormat(ContainerFormat value) { SetContainerFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format for the exported image.</p>
     */
    inline DiskImageFormat GetDiskImageFormat() const { return m_diskImageFormat; }
    inline bool DiskImageFormatHasBeenSet() const { return m_diskImageFormatHasBeenSet; }
    inline void SetDiskImageFormat(DiskImageFormat value) { m_diskImageFormatHasBeenSet = true; m_diskImageFormat = value; }
    inline ExportToS3Task& WithDiskImageFormat(DiskImageFormat value) { SetDiskImageFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket for the destination image. The destination bucket must
     * exist and have an access control list (ACL) attached that specifies the
     * Region-specific canonical account ID for the <code>Grantee</code>. For more
     * information about the ACL to your S3 bucket, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html#vmexport-prerequisites">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    ExportToS3Task& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key for your S3 bucket.</p>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    ExportToS3Task& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
    ///@}
  private:

    ContainerFormat m_containerFormat{ContainerFormat::NOT_SET};
    bool m_containerFormatHasBeenSet = false;

    DiskImageFormat m_diskImageFormat{DiskImageFormat::NOT_SET};
    bool m_diskImageFormatHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
