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
   * <p>Describes an instance export task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportToS3TaskSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ExportToS3TaskSpecification
  {
  public:
    ExportToS3TaskSpecification();
    ExportToS3TaskSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    ExportToS3TaskSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline ExportToS3TaskSpecification& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The S3 bucket for the destination image. The destination bucket must exist
     * and grant WRITE and READ_ACP permissions to the AWS account
     * <code>vm-import-export@amazon.com</code>.</p>
     */
    inline ExportToS3TaskSpecification& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket for the destination image. The destination bucket must exist
     * and grant WRITE and READ_ACP permissions to the AWS account
     * <code>vm-import-export@amazon.com</code>.</p>
     */
    inline ExportToS3TaskSpecification& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The image is written to a single object in the S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The image is written to a single object in the S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The image is written to a single object in the S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The image is written to a single object in the S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The image is written to a single object in the S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline ExportToS3TaskSpecification& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The image is written to a single object in the S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline ExportToS3TaskSpecification& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The image is written to a single object in the S3 bucket at the S3 key
     * s3prefix + exportTaskId + '.' + diskImageFormat.</p>
     */
    inline ExportToS3TaskSpecification& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}

  private:

    ContainerFormat m_containerFormat;
    bool m_containerFormatHasBeenSet;

    DiskImageFormat m_diskImageFormat;
    bool m_diskImageFormatHasBeenSet;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
