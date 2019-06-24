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
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The Lustre configuration for the file system being created. This value is
   * required if <code>FileSystemType</code> is set to
   * <code>LUSTRE</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemLustreConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API CreateFileSystemLustreConfiguration
  {
  public:
    CreateFileSystemLustreConfiguration();
    CreateFileSystemLustreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CreateFileSystemLustreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline const Aws::String& GetImportPath() const{ return m_importPath; }

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline bool ImportPathHasBeenSet() const { return m_importPathHasBeenSet; }

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline void SetImportPath(const Aws::String& value) { m_importPathHasBeenSet = true; m_importPath = value; }

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline void SetImportPath(Aws::String&& value) { m_importPathHasBeenSet = true; m_importPath = std::move(value); }

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline void SetImportPath(const char* value) { m_importPathHasBeenSet = true; m_importPath.assign(value); }

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithImportPath(const Aws::String& value) { SetImportPath(value); return *this;}

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithImportPath(Aws::String&& value) { SetImportPath(std::move(value)); return *this;}

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithImportPath(const char* value) { SetImportPath(value); return *this;}


    /**
     * <p>(Optional) The path in Amazon S3 where the root of your Amazon FSx file
     * system is exported. The path must use the same Amazon S3 bucket as specified in
     * ImportPath. You can provide an optional prefix to which new and changed data is
     * to be exported from your Amazon FSx for Lustre file system. If an
     * <code>ExportPath</code> value is not provided, Amazon FSx sets a default export
     * path, <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The
     * timestamp is in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you only specify a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetExportPath() const{ return m_exportPath; }

    /**
     * <p>(Optional) The path in Amazon S3 where the root of your Amazon FSx file
     * system is exported. The path must use the same Amazon S3 bucket as specified in
     * ImportPath. You can provide an optional prefix to which new and changed data is
     * to be exported from your Amazon FSx for Lustre file system. If an
     * <code>ExportPath</code> value is not provided, Amazon FSx sets a default export
     * path, <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The
     * timestamp is in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you only specify a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     */
    inline bool ExportPathHasBeenSet() const { return m_exportPathHasBeenSet; }

    /**
     * <p>(Optional) The path in Amazon S3 where the root of your Amazon FSx file
     * system is exported. The path must use the same Amazon S3 bucket as specified in
     * ImportPath. You can provide an optional prefix to which new and changed data is
     * to be exported from your Amazon FSx for Lustre file system. If an
     * <code>ExportPath</code> value is not provided, Amazon FSx sets a default export
     * path, <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The
     * timestamp is in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you only specify a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     */
    inline void SetExportPath(const Aws::String& value) { m_exportPathHasBeenSet = true; m_exportPath = value; }

    /**
     * <p>(Optional) The path in Amazon S3 where the root of your Amazon FSx file
     * system is exported. The path must use the same Amazon S3 bucket as specified in
     * ImportPath. You can provide an optional prefix to which new and changed data is
     * to be exported from your Amazon FSx for Lustre file system. If an
     * <code>ExportPath</code> value is not provided, Amazon FSx sets a default export
     * path, <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The
     * timestamp is in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you only specify a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     */
    inline void SetExportPath(Aws::String&& value) { m_exportPathHasBeenSet = true; m_exportPath = std::move(value); }

    /**
     * <p>(Optional) The path in Amazon S3 where the root of your Amazon FSx file
     * system is exported. The path must use the same Amazon S3 bucket as specified in
     * ImportPath. You can provide an optional prefix to which new and changed data is
     * to be exported from your Amazon FSx for Lustre file system. If an
     * <code>ExportPath</code> value is not provided, Amazon FSx sets a default export
     * path, <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The
     * timestamp is in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you only specify a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     */
    inline void SetExportPath(const char* value) { m_exportPathHasBeenSet = true; m_exportPath.assign(value); }

    /**
     * <p>(Optional) The path in Amazon S3 where the root of your Amazon FSx file
     * system is exported. The path must use the same Amazon S3 bucket as specified in
     * ImportPath. You can provide an optional prefix to which new and changed data is
     * to be exported from your Amazon FSx for Lustre file system. If an
     * <code>ExportPath</code> value is not provided, Amazon FSx sets a default export
     * path, <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The
     * timestamp is in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you only specify a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithExportPath(const Aws::String& value) { SetExportPath(value); return *this;}

    /**
     * <p>(Optional) The path in Amazon S3 where the root of your Amazon FSx file
     * system is exported. The path must use the same Amazon S3 bucket as specified in
     * ImportPath. You can provide an optional prefix to which new and changed data is
     * to be exported from your Amazon FSx for Lustre file system. If an
     * <code>ExportPath</code> value is not provided, Amazon FSx sets a default export
     * path, <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The
     * timestamp is in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you only specify a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithExportPath(Aws::String&& value) { SetExportPath(std::move(value)); return *this;}

    /**
     * <p>(Optional) The path in Amazon S3 where the root of your Amazon FSx file
     * system is exported. The path must use the same Amazon S3 bucket as specified in
     * ImportPath. You can provide an optional prefix to which new and changed data is
     * to be exported from your Amazon FSx for Lustre file system. If an
     * <code>ExportPath</code> value is not provided, Amazon FSx sets a default export
     * path, <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The
     * timestamp is in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you only specify a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithExportPath(const char* value) { SetExportPath(value); return *this;}


    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The chunk size default is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline int GetImportedFileChunkSize() const{ return m_importedFileChunkSize; }

    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The chunk size default is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline bool ImportedFileChunkSizeHasBeenSet() const { return m_importedFileChunkSizeHasBeenSet; }

    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The chunk size default is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline void SetImportedFileChunkSize(int value) { m_importedFileChunkSizeHasBeenSet = true; m_importedFileChunkSize = value; }

    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The chunk size default is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}

  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet;

    Aws::String m_importPath;
    bool m_importPathHasBeenSet;

    Aws::String m_exportPath;
    bool m_exportPathHasBeenSet;

    int m_importedFileChunkSize;
    bool m_importedFileChunkSizeHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
