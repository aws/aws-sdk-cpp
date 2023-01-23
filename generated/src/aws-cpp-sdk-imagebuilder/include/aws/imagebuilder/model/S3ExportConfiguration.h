/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/DiskImageFormat.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Properties that configure export from your build instance to a compatible
   * file format for your VM.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/S3ExportConfiguration">AWS
   * API Reference</a></p>
   */
  class S3ExportConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API S3ExportConfiguration();
    AWS_IMAGEBUILDER_API S3ExportConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API S3ExportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline S3ExportConfiguration& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline S3ExportConfiguration& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline S3ExportConfiguration& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>Export the updated image to one of the following supported disk image
     * formats:</p> <ul> <li> <p> <b>Virtual Hard Disk (VHD)</b> – Compatible with
     * Citrix Xen and Microsoft Hyper-V virtualization products.</p> </li> <li> <p>
     * <b>Stream-optimized ESX Virtual Machine Disk (VMDK)</b> – Compatible with VMware
     * ESX and VMware vSphere versions 4, 5, and 6.</p> </li> <li> <p> <b>Raw</b> – Raw
     * format.</p> </li> </ul>
     */
    inline const DiskImageFormat& GetDiskImageFormat() const{ return m_diskImageFormat; }

    /**
     * <p>Export the updated image to one of the following supported disk image
     * formats:</p> <ul> <li> <p> <b>Virtual Hard Disk (VHD)</b> – Compatible with
     * Citrix Xen and Microsoft Hyper-V virtualization products.</p> </li> <li> <p>
     * <b>Stream-optimized ESX Virtual Machine Disk (VMDK)</b> – Compatible with VMware
     * ESX and VMware vSphere versions 4, 5, and 6.</p> </li> <li> <p> <b>Raw</b> – Raw
     * format.</p> </li> </ul>
     */
    inline bool DiskImageFormatHasBeenSet() const { return m_diskImageFormatHasBeenSet; }

    /**
     * <p>Export the updated image to one of the following supported disk image
     * formats:</p> <ul> <li> <p> <b>Virtual Hard Disk (VHD)</b> – Compatible with
     * Citrix Xen and Microsoft Hyper-V virtualization products.</p> </li> <li> <p>
     * <b>Stream-optimized ESX Virtual Machine Disk (VMDK)</b> – Compatible with VMware
     * ESX and VMware vSphere versions 4, 5, and 6.</p> </li> <li> <p> <b>Raw</b> – Raw
     * format.</p> </li> </ul>
     */
    inline void SetDiskImageFormat(const DiskImageFormat& value) { m_diskImageFormatHasBeenSet = true; m_diskImageFormat = value; }

    /**
     * <p>Export the updated image to one of the following supported disk image
     * formats:</p> <ul> <li> <p> <b>Virtual Hard Disk (VHD)</b> – Compatible with
     * Citrix Xen and Microsoft Hyper-V virtualization products.</p> </li> <li> <p>
     * <b>Stream-optimized ESX Virtual Machine Disk (VMDK)</b> – Compatible with VMware
     * ESX and VMware vSphere versions 4, 5, and 6.</p> </li> <li> <p> <b>Raw</b> – Raw
     * format.</p> </li> </ul>
     */
    inline void SetDiskImageFormat(DiskImageFormat&& value) { m_diskImageFormatHasBeenSet = true; m_diskImageFormat = std::move(value); }

    /**
     * <p>Export the updated image to one of the following supported disk image
     * formats:</p> <ul> <li> <p> <b>Virtual Hard Disk (VHD)</b> – Compatible with
     * Citrix Xen and Microsoft Hyper-V virtualization products.</p> </li> <li> <p>
     * <b>Stream-optimized ESX Virtual Machine Disk (VMDK)</b> – Compatible with VMware
     * ESX and VMware vSphere versions 4, 5, and 6.</p> </li> <li> <p> <b>Raw</b> – Raw
     * format.</p> </li> </ul>
     */
    inline S3ExportConfiguration& WithDiskImageFormat(const DiskImageFormat& value) { SetDiskImageFormat(value); return *this;}

    /**
     * <p>Export the updated image to one of the following supported disk image
     * formats:</p> <ul> <li> <p> <b>Virtual Hard Disk (VHD)</b> – Compatible with
     * Citrix Xen and Microsoft Hyper-V virtualization products.</p> </li> <li> <p>
     * <b>Stream-optimized ESX Virtual Machine Disk (VMDK)</b> – Compatible with VMware
     * ESX and VMware vSphere versions 4, 5, and 6.</p> </li> <li> <p> <b>Raw</b> – Raw
     * format.</p> </li> </ul>
     */
    inline S3ExportConfiguration& WithDiskImageFormat(DiskImageFormat&& value) { SetDiskImageFormat(std::move(value)); return *this;}


    /**
     * <p>The S3 bucket in which to store the output disk images for your VM.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The S3 bucket in which to store the output disk images for your VM.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The S3 bucket in which to store the output disk images for your VM.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The S3 bucket in which to store the output disk images for your VM.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The S3 bucket in which to store the output disk images for your VM.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The S3 bucket in which to store the output disk images for your VM.</p>
     */
    inline S3ExportConfiguration& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The S3 bucket in which to store the output disk images for your VM.</p>
     */
    inline S3ExportConfiguration& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket in which to store the output disk images for your VM.</p>
     */
    inline S3ExportConfiguration& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The Amazon S3 path for the bucket where the output disk images for your VM
     * are stored.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The Amazon S3 path for the bucket where the output disk images for your VM
     * are stored.</p>
     */
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }

    /**
     * <p>The Amazon S3 path for the bucket where the output disk images for your VM
     * are stored.</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The Amazon S3 path for the bucket where the output disk images for your VM
     * are stored.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The Amazon S3 path for the bucket where the output disk images for your VM
     * are stored.</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The Amazon S3 path for the bucket where the output disk images for your VM
     * are stored.</p>
     */
    inline S3ExportConfiguration& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The Amazon S3 path for the bucket where the output disk images for your VM
     * are stored.</p>
     */
    inline S3ExportConfiguration& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path for the bucket where the output disk images for your VM
     * are stored.</p>
     */
    inline S3ExportConfiguration& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}

  private:

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    DiskImageFormat m_diskImageFormat;
    bool m_diskImageFormatHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
