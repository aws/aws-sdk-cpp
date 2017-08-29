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
   * <p>Describes the format and location for an instance export task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportToS3Task">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ExportToS3Task
  {
  public:
    ExportToS3Task();
    ExportToS3Task(const Aws::Utils::Xml::XmlNode& xmlNode);
    ExportToS3Task& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The container format used to combine disk images with metadata (such as OVF).
     * If absent, only the disk image is exported.</p>
     */
    inline const ContainerFormat& GetContainerFormat() const{ return m_containerFormat; }

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
    inline ExportToS3Task& WithContainerFormat(const ContainerFormat& value) { SetContainerFormat(value); return *this;}

    /**
     * <p>The container format used to combine disk images with metadata (such as OVF).
     * If absent, only the disk image is exported.</p>
     */
    inline ExportToS3Task& WithContainerFormat(ContainerFormat&& value) { SetContainerFormat(std::move(value)); return *this;}


    /**
     * <p>The format for the exported image.</p>
     */
    inline const DiskImageFormat& GetDiskImageFormat() const{ return m_diskImageFormat; }

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
    inline ExportToS3Task& WithDiskImageFormat(const DiskImageFormat& value) { SetDiskImageFormat(value); return *this;}

    /**
     * <p>The format for the exported image.</p>
     */
    inline ExportToS3Task& WithDiskImageFormat(DiskImageFormat&& value) { SetDiskImageFormat(std::move(value)); return *this;}


    /**
     * <p>The S3 bucket for the destination image. The destination bucket must exist
     * and grant WRITE and READ_ACP permissions to the AWS account
     * <code>vm-import-export@amazon.com</code>.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The S3 bucket for the destination image. The destination bucket must exist
     * and grant WRITE and READ_ACP permissions to the AWS account
     * <code>vm-import-export@amazon.com</code>.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The S3 bucket for the destination image. The destination bucket must exist
     * and grant WRITE and READ_ACP permissions to the AWS account
     * <code>vm-import-export@amazon.com</code>.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The S3 bucket for the destination image. The destination bucket must exist
     * and grant WRITE and READ_ACP permissions to the AWS account
     * <code>vm-import-export@amazon.com</code>.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The S3 bucket for the destination image. The destination bucket must exist
     * and grant WRITE and READ_ACP permissions to the AWS account
     * <code>vm-import-export@amazon.com</code>.</p>
     */
    inline ExportToS3Task& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The S3 bucket for the destination image. The destination bucket must exist
     * and grant WRITE and READ_ACP permissions to the AWS account
     * <code>vm-import-export@amazon.com</code>.</p>
     */
    inline ExportToS3Task& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket for the destination image. The destination bucket must exist
     * and grant WRITE and READ_ACP permissions to the AWS account
     * <code>vm-import-export@amazon.com</code>.</p>
     */
    inline ExportToS3Task& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The encryption key for your S3 bucket.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The encryption key for your S3 bucket.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The encryption key for your S3 bucket.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>The encryption key for your S3 bucket.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The encryption key for your S3 bucket.</p>
     */
    inline ExportToS3Task& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The encryption key for your S3 bucket.</p>
     */
    inline ExportToS3Task& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The encryption key for your S3 bucket.</p>
     */
    inline ExportToS3Task& WithS3Key(const char* value) { SetS3Key(value); return *this;}

  private:

    ContainerFormat m_containerFormat;
    bool m_containerFormatHasBeenSet;

    DiskImageFormat m_diskImageFormat;
    bool m_diskImageFormatHasBeenSet;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
