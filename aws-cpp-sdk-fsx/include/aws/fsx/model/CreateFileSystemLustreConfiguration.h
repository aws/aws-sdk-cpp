/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/LustreDeploymentType.h>
#include <aws/fsx/model/AutoImportPolicyType.h>
#include <aws/fsx/model/DriveCacheType.h>
#include <aws/fsx/model/DataCompressionType.h>
#include <aws/fsx/model/LustreLogCreateConfiguration.h>
#include <aws/fsx/model/LustreRootSquashConfiguration.h>
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
   * <p>The Lustre configuration for the file system being created.</p>  <p>The
   * following parameters are not supported for file systems with the
   * <code>Persistent_2</code> deployment type. Instead, use
   * <code>CreateDataRepositoryAssociation</code> to create a data repository
   * association to link your Lustre file system to a data repository.</p> <ul> <li>
   * <p> <code>AutoImportPolicy</code> </p> </li> <li> <p> <code>ExportPath</code>
   * </p> </li> <li> <p> <code>ImportedChunkSize</code> </p> </li> <li> <p>
   * <code>ImportPath</code> </p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemLustreConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateFileSystemLustreConfiguration
  {
  public:
    AWS_FSX_API CreateFileSystemLustreConfiguration();
    AWS_FSX_API CreateFileSystemLustreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateFileSystemLustreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone, where d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone, where d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone, where d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone, where d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone, where d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone, where d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone, where d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone, where d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>  <p>This parameter is not supported for file systems with
     * the <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline const Aws::String& GetImportPath() const{ return m_importPath; }

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>  <p>This parameter is not supported for file systems with
     * the <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline bool ImportPathHasBeenSet() const { return m_importPathHasBeenSet; }

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>  <p>This parameter is not supported for file systems with
     * the <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline void SetImportPath(const Aws::String& value) { m_importPathHasBeenSet = true; m_importPath = value; }

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>  <p>This parameter is not supported for file systems with
     * the <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline void SetImportPath(Aws::String&& value) { m_importPathHasBeenSet = true; m_importPath = std::move(value); }

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>  <p>This parameter is not supported for file systems with
     * the <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline void SetImportPath(const char* value) { m_importPathHasBeenSet = true; m_importPath.assign(value); }

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>  <p>This parameter is not supported for file systems with
     * the <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline CreateFileSystemLustreConfiguration& WithImportPath(const Aws::String& value) { SetImportPath(value); return *this;}

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>  <p>This parameter is not supported for file systems with
     * the <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline CreateFileSystemLustreConfiguration& WithImportPath(Aws::String&& value) { SetImportPath(std::move(value)); return *this;}

    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>  <p>This parameter is not supported for file systems with
     * the <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline CreateFileSystemLustreConfiguration& WithImportPath(const char* value) { SetImportPath(value); return *this;}


    /**
     * <p>(Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. Specifies the path in the Amazon S3 bucket where the root of
     * your Amazon FSx file system is exported. The path must use the same Amazon S3
     * bucket as specified in ImportPath. You can provide an optional prefix to which
     * new and changed data is to be exported from your Amazon FSx for Lustre file
     * system. If an <code>ExportPath</code> value is not provided, Amazon FSx sets a
     * default export path,
     * <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The timestamp is
     * in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you specify only a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     *  <p>This parameter is not supported for file systems with the
     * <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline const Aws::String& GetExportPath() const{ return m_exportPath; }

    /**
     * <p>(Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. Specifies the path in the Amazon S3 bucket where the root of
     * your Amazon FSx file system is exported. The path must use the same Amazon S3
     * bucket as specified in ImportPath. You can provide an optional prefix to which
     * new and changed data is to be exported from your Amazon FSx for Lustre file
     * system. If an <code>ExportPath</code> value is not provided, Amazon FSx sets a
     * default export path,
     * <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The timestamp is
     * in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you specify only a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     *  <p>This parameter is not supported for file systems with the
     * <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline bool ExportPathHasBeenSet() const { return m_exportPathHasBeenSet; }

    /**
     * <p>(Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. Specifies the path in the Amazon S3 bucket where the root of
     * your Amazon FSx file system is exported. The path must use the same Amazon S3
     * bucket as specified in ImportPath. You can provide an optional prefix to which
     * new and changed data is to be exported from your Amazon FSx for Lustre file
     * system. If an <code>ExportPath</code> value is not provided, Amazon FSx sets a
     * default export path,
     * <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The timestamp is
     * in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you specify only a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     *  <p>This parameter is not supported for file systems with the
     * <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline void SetExportPath(const Aws::String& value) { m_exportPathHasBeenSet = true; m_exportPath = value; }

    /**
     * <p>(Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. Specifies the path in the Amazon S3 bucket where the root of
     * your Amazon FSx file system is exported. The path must use the same Amazon S3
     * bucket as specified in ImportPath. You can provide an optional prefix to which
     * new and changed data is to be exported from your Amazon FSx for Lustre file
     * system. If an <code>ExportPath</code> value is not provided, Amazon FSx sets a
     * default export path,
     * <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The timestamp is
     * in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you specify only a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     *  <p>This parameter is not supported for file systems with the
     * <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline void SetExportPath(Aws::String&& value) { m_exportPathHasBeenSet = true; m_exportPath = std::move(value); }

    /**
     * <p>(Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. Specifies the path in the Amazon S3 bucket where the root of
     * your Amazon FSx file system is exported. The path must use the same Amazon S3
     * bucket as specified in ImportPath. You can provide an optional prefix to which
     * new and changed data is to be exported from your Amazon FSx for Lustre file
     * system. If an <code>ExportPath</code> value is not provided, Amazon FSx sets a
     * default export path,
     * <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The timestamp is
     * in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you specify only a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     *  <p>This parameter is not supported for file systems with the
     * <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline void SetExportPath(const char* value) { m_exportPathHasBeenSet = true; m_exportPath.assign(value); }

    /**
     * <p>(Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. Specifies the path in the Amazon S3 bucket where the root of
     * your Amazon FSx file system is exported. The path must use the same Amazon S3
     * bucket as specified in ImportPath. You can provide an optional prefix to which
     * new and changed data is to be exported from your Amazon FSx for Lustre file
     * system. If an <code>ExportPath</code> value is not provided, Amazon FSx sets a
     * default export path,
     * <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The timestamp is
     * in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you specify only a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     *  <p>This parameter is not supported for file systems with the
     * <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline CreateFileSystemLustreConfiguration& WithExportPath(const Aws::String& value) { SetExportPath(value); return *this;}

    /**
     * <p>(Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. Specifies the path in the Amazon S3 bucket where the root of
     * your Amazon FSx file system is exported. The path must use the same Amazon S3
     * bucket as specified in ImportPath. You can provide an optional prefix to which
     * new and changed data is to be exported from your Amazon FSx for Lustre file
     * system. If an <code>ExportPath</code> value is not provided, Amazon FSx sets a
     * default export path,
     * <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The timestamp is
     * in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you specify only a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     *  <p>This parameter is not supported for file systems with the
     * <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline CreateFileSystemLustreConfiguration& WithExportPath(Aws::String&& value) { SetExportPath(std::move(value)); return *this;}

    /**
     * <p>(Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. Specifies the path in the Amazon S3 bucket where the root of
     * your Amazon FSx file system is exported. The path must use the same Amazon S3
     * bucket as specified in ImportPath. You can provide an optional prefix to which
     * new and changed data is to be exported from your Amazon FSx for Lustre file
     * system. If an <code>ExportPath</code> value is not provided, Amazon FSx sets a
     * default export path,
     * <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The timestamp is
     * in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you specify only a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     *  <p>This parameter is not supported for file systems with the
     * <code>Persistent_2</code> deployment type. Instead, use
     * <code>CreateDataRepositoryAssociation</code> to create a data repository
     * association to link your Lustre file system to a data repository.</p> 
     */
    inline CreateFileSystemLustreConfiguration& WithExportPath(const char* value) { SetExportPath(value); return *this;}


    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p> <p>This parameter
     * is not supported for file systems with the <code>Persistent_2</code> deployment
     * type. Instead, use <code>CreateDataRepositoryAssociation</code> to create a data
     * repository association to link your Lustre file system to a data repository.</p>
     */
    inline int GetImportedFileChunkSize() const{ return m_importedFileChunkSize; }

    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p> <p>This parameter
     * is not supported for file systems with the <code>Persistent_2</code> deployment
     * type. Instead, use <code>CreateDataRepositoryAssociation</code> to create a data
     * repository association to link your Lustre file system to a data repository.</p>
     */
    inline bool ImportedFileChunkSizeHasBeenSet() const { return m_importedFileChunkSizeHasBeenSet; }

    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p> <p>This parameter
     * is not supported for file systems with the <code>Persistent_2</code> deployment
     * type. Instead, use <code>CreateDataRepositoryAssociation</code> to create a data
     * repository association to link your Lustre file system to a data repository.</p>
     */
    inline void SetImportedFileChunkSize(int value) { m_importedFileChunkSizeHasBeenSet = true; m_importedFileChunkSize = value; }

    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p> <p>This parameter
     * is not supported for file systems with the <code>Persistent_2</code> deployment
     * type. Instead, use <code>CreateDataRepositoryAssociation</code> to create a data
     * repository association to link your Lustre file system to a data repository.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}


    /**
     * <p>(Optional) Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code>
     * deployment types when you need temporary storage and shorter-term processing of
     * data. The <code>SCRATCH_2</code> deployment type provides in-transit encryption
     * of data and higher burst throughput capacity than <code>SCRATCH_1</code>.</p>
     * <p>Choose <code>PERSISTENT_1</code> for longer-term storage and for
     * throughput-focused workloads that aren’t latency-sensitive.
     * <code>PERSISTENT_1</code> supports encryption of data in transit, and is
     * available in all Amazon Web Services Regions in which FSx for Lustre is
     * available.</p> <p>Choose <code>PERSISTENT_2</code> for longer-term storage and
     * for latency-sensitive workloads that require the highest levels of
     * IOPS/throughput. <code>PERSISTENT_2</code> supports SSD storage, and offers
     * higher <code>PerUnitStorageThroughput</code> (up to 1000 MB/s/TiB).
     * <code>PERSISTENT_2</code> is available in a limited number of Amazon Web
     * Services Regions. For more information, and an up-to-date list of Amazon Web
     * Services Regions in which <code>PERSISTENT_2</code> is available, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-fsx-lustre.html#lustre-deployment-types">File
     * system deployment options for FSx for Lustre</a> in the <i>Amazon FSx for Lustre
     * User Guide</i>.</p>  <p>If you choose <code>PERSISTENT_2</code>, and you
     * set <code>FileSystemTypeVersion</code> to <code>2.10</code>, the
     * <code>CreateFileSystem</code> operation fails.</p>  <p>Encryption of data
     * in transit is automatically turned on when you access <code>SCRATCH_2</code>,
     * <code>PERSISTENT_1</code> and <code>PERSISTENT_2</code> file systems from Amazon
     * EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support automatic encryption</a> in the Amazon Web Services
     * Regions where they are available. For more information about encryption in
     * transit for FSx for Lustre file systems, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * data in transit</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     * <p>(Default = <code>SCRATCH_1</code>)</p>
     */
    inline const LustreDeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>(Optional) Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code>
     * deployment types when you need temporary storage and shorter-term processing of
     * data. The <code>SCRATCH_2</code> deployment type provides in-transit encryption
     * of data and higher burst throughput capacity than <code>SCRATCH_1</code>.</p>
     * <p>Choose <code>PERSISTENT_1</code> for longer-term storage and for
     * throughput-focused workloads that aren’t latency-sensitive.
     * <code>PERSISTENT_1</code> supports encryption of data in transit, and is
     * available in all Amazon Web Services Regions in which FSx for Lustre is
     * available.</p> <p>Choose <code>PERSISTENT_2</code> for longer-term storage and
     * for latency-sensitive workloads that require the highest levels of
     * IOPS/throughput. <code>PERSISTENT_2</code> supports SSD storage, and offers
     * higher <code>PerUnitStorageThroughput</code> (up to 1000 MB/s/TiB).
     * <code>PERSISTENT_2</code> is available in a limited number of Amazon Web
     * Services Regions. For more information, and an up-to-date list of Amazon Web
     * Services Regions in which <code>PERSISTENT_2</code> is available, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-fsx-lustre.html#lustre-deployment-types">File
     * system deployment options for FSx for Lustre</a> in the <i>Amazon FSx for Lustre
     * User Guide</i>.</p>  <p>If you choose <code>PERSISTENT_2</code>, and you
     * set <code>FileSystemTypeVersion</code> to <code>2.10</code>, the
     * <code>CreateFileSystem</code> operation fails.</p>  <p>Encryption of data
     * in transit is automatically turned on when you access <code>SCRATCH_2</code>,
     * <code>PERSISTENT_1</code> and <code>PERSISTENT_2</code> file systems from Amazon
     * EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support automatic encryption</a> in the Amazon Web Services
     * Regions where they are available. For more information about encryption in
     * transit for FSx for Lustre file systems, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * data in transit</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     * <p>(Default = <code>SCRATCH_1</code>)</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>(Optional) Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code>
     * deployment types when you need temporary storage and shorter-term processing of
     * data. The <code>SCRATCH_2</code> deployment type provides in-transit encryption
     * of data and higher burst throughput capacity than <code>SCRATCH_1</code>.</p>
     * <p>Choose <code>PERSISTENT_1</code> for longer-term storage and for
     * throughput-focused workloads that aren’t latency-sensitive.
     * <code>PERSISTENT_1</code> supports encryption of data in transit, and is
     * available in all Amazon Web Services Regions in which FSx for Lustre is
     * available.</p> <p>Choose <code>PERSISTENT_2</code> for longer-term storage and
     * for latency-sensitive workloads that require the highest levels of
     * IOPS/throughput. <code>PERSISTENT_2</code> supports SSD storage, and offers
     * higher <code>PerUnitStorageThroughput</code> (up to 1000 MB/s/TiB).
     * <code>PERSISTENT_2</code> is available in a limited number of Amazon Web
     * Services Regions. For more information, and an up-to-date list of Amazon Web
     * Services Regions in which <code>PERSISTENT_2</code> is available, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-fsx-lustre.html#lustre-deployment-types">File
     * system deployment options for FSx for Lustre</a> in the <i>Amazon FSx for Lustre
     * User Guide</i>.</p>  <p>If you choose <code>PERSISTENT_2</code>, and you
     * set <code>FileSystemTypeVersion</code> to <code>2.10</code>, the
     * <code>CreateFileSystem</code> operation fails.</p>  <p>Encryption of data
     * in transit is automatically turned on when you access <code>SCRATCH_2</code>,
     * <code>PERSISTENT_1</code> and <code>PERSISTENT_2</code> file systems from Amazon
     * EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support automatic encryption</a> in the Amazon Web Services
     * Regions where they are available. For more information about encryption in
     * transit for FSx for Lustre file systems, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * data in transit</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     * <p>(Default = <code>SCRATCH_1</code>)</p>
     */
    inline void SetDeploymentType(const LustreDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>(Optional) Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code>
     * deployment types when you need temporary storage and shorter-term processing of
     * data. The <code>SCRATCH_2</code> deployment type provides in-transit encryption
     * of data and higher burst throughput capacity than <code>SCRATCH_1</code>.</p>
     * <p>Choose <code>PERSISTENT_1</code> for longer-term storage and for
     * throughput-focused workloads that aren’t latency-sensitive.
     * <code>PERSISTENT_1</code> supports encryption of data in transit, and is
     * available in all Amazon Web Services Regions in which FSx for Lustre is
     * available.</p> <p>Choose <code>PERSISTENT_2</code> for longer-term storage and
     * for latency-sensitive workloads that require the highest levels of
     * IOPS/throughput. <code>PERSISTENT_2</code> supports SSD storage, and offers
     * higher <code>PerUnitStorageThroughput</code> (up to 1000 MB/s/TiB).
     * <code>PERSISTENT_2</code> is available in a limited number of Amazon Web
     * Services Regions. For more information, and an up-to-date list of Amazon Web
     * Services Regions in which <code>PERSISTENT_2</code> is available, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-fsx-lustre.html#lustre-deployment-types">File
     * system deployment options for FSx for Lustre</a> in the <i>Amazon FSx for Lustre
     * User Guide</i>.</p>  <p>If you choose <code>PERSISTENT_2</code>, and you
     * set <code>FileSystemTypeVersion</code> to <code>2.10</code>, the
     * <code>CreateFileSystem</code> operation fails.</p>  <p>Encryption of data
     * in transit is automatically turned on when you access <code>SCRATCH_2</code>,
     * <code>PERSISTENT_1</code> and <code>PERSISTENT_2</code> file systems from Amazon
     * EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support automatic encryption</a> in the Amazon Web Services
     * Regions where they are available. For more information about encryption in
     * transit for FSx for Lustre file systems, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * data in transit</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     * <p>(Default = <code>SCRATCH_1</code>)</p>
     */
    inline void SetDeploymentType(LustreDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>(Optional) Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code>
     * deployment types when you need temporary storage and shorter-term processing of
     * data. The <code>SCRATCH_2</code> deployment type provides in-transit encryption
     * of data and higher burst throughput capacity than <code>SCRATCH_1</code>.</p>
     * <p>Choose <code>PERSISTENT_1</code> for longer-term storage and for
     * throughput-focused workloads that aren’t latency-sensitive.
     * <code>PERSISTENT_1</code> supports encryption of data in transit, and is
     * available in all Amazon Web Services Regions in which FSx for Lustre is
     * available.</p> <p>Choose <code>PERSISTENT_2</code> for longer-term storage and
     * for latency-sensitive workloads that require the highest levels of
     * IOPS/throughput. <code>PERSISTENT_2</code> supports SSD storage, and offers
     * higher <code>PerUnitStorageThroughput</code> (up to 1000 MB/s/TiB).
     * <code>PERSISTENT_2</code> is available in a limited number of Amazon Web
     * Services Regions. For more information, and an up-to-date list of Amazon Web
     * Services Regions in which <code>PERSISTENT_2</code> is available, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-fsx-lustre.html#lustre-deployment-types">File
     * system deployment options for FSx for Lustre</a> in the <i>Amazon FSx for Lustre
     * User Guide</i>.</p>  <p>If you choose <code>PERSISTENT_2</code>, and you
     * set <code>FileSystemTypeVersion</code> to <code>2.10</code>, the
     * <code>CreateFileSystem</code> operation fails.</p>  <p>Encryption of data
     * in transit is automatically turned on when you access <code>SCRATCH_2</code>,
     * <code>PERSISTENT_1</code> and <code>PERSISTENT_2</code> file systems from Amazon
     * EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support automatic encryption</a> in the Amazon Web Services
     * Regions where they are available. For more information about encryption in
     * transit for FSx for Lustre file systems, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * data in transit</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     * <p>(Default = <code>SCRATCH_1</code>)</p>
     */
    inline CreateFileSystemLustreConfiguration& WithDeploymentType(const LustreDeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>(Optional) Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code>
     * deployment types when you need temporary storage and shorter-term processing of
     * data. The <code>SCRATCH_2</code> deployment type provides in-transit encryption
     * of data and higher burst throughput capacity than <code>SCRATCH_1</code>.</p>
     * <p>Choose <code>PERSISTENT_1</code> for longer-term storage and for
     * throughput-focused workloads that aren’t latency-sensitive.
     * <code>PERSISTENT_1</code> supports encryption of data in transit, and is
     * available in all Amazon Web Services Regions in which FSx for Lustre is
     * available.</p> <p>Choose <code>PERSISTENT_2</code> for longer-term storage and
     * for latency-sensitive workloads that require the highest levels of
     * IOPS/throughput. <code>PERSISTENT_2</code> supports SSD storage, and offers
     * higher <code>PerUnitStorageThroughput</code> (up to 1000 MB/s/TiB).
     * <code>PERSISTENT_2</code> is available in a limited number of Amazon Web
     * Services Regions. For more information, and an up-to-date list of Amazon Web
     * Services Regions in which <code>PERSISTENT_2</code> is available, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-fsx-lustre.html#lustre-deployment-types">File
     * system deployment options for FSx for Lustre</a> in the <i>Amazon FSx for Lustre
     * User Guide</i>.</p>  <p>If you choose <code>PERSISTENT_2</code>, and you
     * set <code>FileSystemTypeVersion</code> to <code>2.10</code>, the
     * <code>CreateFileSystem</code> operation fails.</p>  <p>Encryption of data
     * in transit is automatically turned on when you access <code>SCRATCH_2</code>,
     * <code>PERSISTENT_1</code> and <code>PERSISTENT_2</code> file systems from Amazon
     * EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support automatic encryption</a> in the Amazon Web Services
     * Regions where they are available. For more information about encryption in
     * transit for FSx for Lustre file systems, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * data in transit</a> in the <i>Amazon FSx for Lustre User Guide</i>. </p>
     * <p>(Default = <code>SCRATCH_1</code>)</p>
     */
    inline CreateFileSystemLustreConfiguration& WithDeploymentType(LustreDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p> (Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. When you create your file system, your existing S3 objects
     * appear as file and directory listings. Use this property to choose how Amazon
     * FSx keeps your file and directory listings up to date as you add or modify
     * objects in your linked S3 bucket. <code>AutoImportPolicy</code> can have the
     * following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is
     * off. Amazon FSx only updates file and directory listings from the linked S3
     * bucket when the file system is created. FSx does not update file and directory
     * listings for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/older-deployment-types.html#legacy-auto-import-from-s3">
     * Automatically import updates from your S3 bucket</a>.</p>  <p>This
     * parameter is not supported for file systems with the <code>Persistent_2</code>
     * deployment type. Instead, use <code>CreateDataRepositoryAssociation</code> to
     * create a data repository association to link your Lustre file system to a data
     * repository.</p> 
     */
    inline const AutoImportPolicyType& GetAutoImportPolicy() const{ return m_autoImportPolicy; }

    /**
     * <p> (Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. When you create your file system, your existing S3 objects
     * appear as file and directory listings. Use this property to choose how Amazon
     * FSx keeps your file and directory listings up to date as you add or modify
     * objects in your linked S3 bucket. <code>AutoImportPolicy</code> can have the
     * following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is
     * off. Amazon FSx only updates file and directory listings from the linked S3
     * bucket when the file system is created. FSx does not update file and directory
     * listings for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/older-deployment-types.html#legacy-auto-import-from-s3">
     * Automatically import updates from your S3 bucket</a>.</p>  <p>This
     * parameter is not supported for file systems with the <code>Persistent_2</code>
     * deployment type. Instead, use <code>CreateDataRepositoryAssociation</code> to
     * create a data repository association to link your Lustre file system to a data
     * repository.</p> 
     */
    inline bool AutoImportPolicyHasBeenSet() const { return m_autoImportPolicyHasBeenSet; }

    /**
     * <p> (Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. When you create your file system, your existing S3 objects
     * appear as file and directory listings. Use this property to choose how Amazon
     * FSx keeps your file and directory listings up to date as you add or modify
     * objects in your linked S3 bucket. <code>AutoImportPolicy</code> can have the
     * following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is
     * off. Amazon FSx only updates file and directory listings from the linked S3
     * bucket when the file system is created. FSx does not update file and directory
     * listings for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/older-deployment-types.html#legacy-auto-import-from-s3">
     * Automatically import updates from your S3 bucket</a>.</p>  <p>This
     * parameter is not supported for file systems with the <code>Persistent_2</code>
     * deployment type. Instead, use <code>CreateDataRepositoryAssociation</code> to
     * create a data repository association to link your Lustre file system to a data
     * repository.</p> 
     */
    inline void SetAutoImportPolicy(const AutoImportPolicyType& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = value; }

    /**
     * <p> (Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. When you create your file system, your existing S3 objects
     * appear as file and directory listings. Use this property to choose how Amazon
     * FSx keeps your file and directory listings up to date as you add or modify
     * objects in your linked S3 bucket. <code>AutoImportPolicy</code> can have the
     * following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is
     * off. Amazon FSx only updates file and directory listings from the linked S3
     * bucket when the file system is created. FSx does not update file and directory
     * listings for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/older-deployment-types.html#legacy-auto-import-from-s3">
     * Automatically import updates from your S3 bucket</a>.</p>  <p>This
     * parameter is not supported for file systems with the <code>Persistent_2</code>
     * deployment type. Instead, use <code>CreateDataRepositoryAssociation</code> to
     * create a data repository association to link your Lustre file system to a data
     * repository.</p> 
     */
    inline void SetAutoImportPolicy(AutoImportPolicyType&& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = std::move(value); }

    /**
     * <p> (Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. When you create your file system, your existing S3 objects
     * appear as file and directory listings. Use this property to choose how Amazon
     * FSx keeps your file and directory listings up to date as you add or modify
     * objects in your linked S3 bucket. <code>AutoImportPolicy</code> can have the
     * following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is
     * off. Amazon FSx only updates file and directory listings from the linked S3
     * bucket when the file system is created. FSx does not update file and directory
     * listings for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/older-deployment-types.html#legacy-auto-import-from-s3">
     * Automatically import updates from your S3 bucket</a>.</p>  <p>This
     * parameter is not supported for file systems with the <code>Persistent_2</code>
     * deployment type. Instead, use <code>CreateDataRepositoryAssociation</code> to
     * create a data repository association to link your Lustre file system to a data
     * repository.</p> 
     */
    inline CreateFileSystemLustreConfiguration& WithAutoImportPolicy(const AutoImportPolicyType& value) { SetAutoImportPolicy(value); return *this;}

    /**
     * <p> (Optional) Available with <code>Scratch</code> and <code>Persistent_1</code>
     * deployment types. When you create your file system, your existing S3 objects
     * appear as file and directory listings. Use this property to choose how Amazon
     * FSx keeps your file and directory listings up to date as you add or modify
     * objects in your linked S3 bucket. <code>AutoImportPolicy</code> can have the
     * following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is
     * off. Amazon FSx only updates file and directory listings from the linked S3
     * bucket when the file system is created. FSx does not update file and directory
     * listings for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/older-deployment-types.html#legacy-auto-import-from-s3">
     * Automatically import updates from your S3 bucket</a>.</p>  <p>This
     * parameter is not supported for file systems with the <code>Persistent_2</code>
     * deployment type. Instead, use <code>CreateDataRepositoryAssociation</code> to
     * create a data repository association to link your Lustre file system to a data
     * repository.</p> 
     */
    inline CreateFileSystemLustreConfiguration& WithAutoImportPolicy(AutoImportPolicyType&& value) { SetAutoImportPolicy(std::move(value)); return *this;}


    /**
     * <p>Required with <code>PERSISTENT_1</code> and <code>PERSISTENT_2</code>
     * deployment types, provisions the amount of read and write throughput for each 1
     * tebibyte (TiB) of file system storage capacity, in MB/s/TiB. File system
     * throughput capacity is calculated by multiplying ﬁle system storage capacity
     * (TiB) by the <code>PerUnitStorageThroughput</code> (MB/s/TiB). For a 2.4-TiB ﬁle
     * system, provisioning 50 MB/s/TiB of <code>PerUnitStorageThroughput</code> yields
     * 120 MB/s of ﬁle system throughput. You pay for the amount of throughput that you
     * provision. </p> <p>Valid values:</p> <ul> <li> <p>For <code>PERSISTENT_1</code>
     * SSD storage: 50, 100, 200 MB/s/TiB.</p> </li> <li> <p>For
     * <code>PERSISTENT_1</code> HDD storage: 12, 40 MB/s/TiB.</p> </li> <li> <p>For
     * <code>PERSISTENT_2</code> SSD storage: 125, 250, 500, 1000 MB/s/TiB.</p> </li>
     * </ul>
     */
    inline int GetPerUnitStorageThroughput() const{ return m_perUnitStorageThroughput; }

    /**
     * <p>Required with <code>PERSISTENT_1</code> and <code>PERSISTENT_2</code>
     * deployment types, provisions the amount of read and write throughput for each 1
     * tebibyte (TiB) of file system storage capacity, in MB/s/TiB. File system
     * throughput capacity is calculated by multiplying ﬁle system storage capacity
     * (TiB) by the <code>PerUnitStorageThroughput</code> (MB/s/TiB). For a 2.4-TiB ﬁle
     * system, provisioning 50 MB/s/TiB of <code>PerUnitStorageThroughput</code> yields
     * 120 MB/s of ﬁle system throughput. You pay for the amount of throughput that you
     * provision. </p> <p>Valid values:</p> <ul> <li> <p>For <code>PERSISTENT_1</code>
     * SSD storage: 50, 100, 200 MB/s/TiB.</p> </li> <li> <p>For
     * <code>PERSISTENT_1</code> HDD storage: 12, 40 MB/s/TiB.</p> </li> <li> <p>For
     * <code>PERSISTENT_2</code> SSD storage: 125, 250, 500, 1000 MB/s/TiB.</p> </li>
     * </ul>
     */
    inline bool PerUnitStorageThroughputHasBeenSet() const { return m_perUnitStorageThroughputHasBeenSet; }

    /**
     * <p>Required with <code>PERSISTENT_1</code> and <code>PERSISTENT_2</code>
     * deployment types, provisions the amount of read and write throughput for each 1
     * tebibyte (TiB) of file system storage capacity, in MB/s/TiB. File system
     * throughput capacity is calculated by multiplying ﬁle system storage capacity
     * (TiB) by the <code>PerUnitStorageThroughput</code> (MB/s/TiB). For a 2.4-TiB ﬁle
     * system, provisioning 50 MB/s/TiB of <code>PerUnitStorageThroughput</code> yields
     * 120 MB/s of ﬁle system throughput. You pay for the amount of throughput that you
     * provision. </p> <p>Valid values:</p> <ul> <li> <p>For <code>PERSISTENT_1</code>
     * SSD storage: 50, 100, 200 MB/s/TiB.</p> </li> <li> <p>For
     * <code>PERSISTENT_1</code> HDD storage: 12, 40 MB/s/TiB.</p> </li> <li> <p>For
     * <code>PERSISTENT_2</code> SSD storage: 125, 250, 500, 1000 MB/s/TiB.</p> </li>
     * </ul>
     */
    inline void SetPerUnitStorageThroughput(int value) { m_perUnitStorageThroughputHasBeenSet = true; m_perUnitStorageThroughput = value; }

    /**
     * <p>Required with <code>PERSISTENT_1</code> and <code>PERSISTENT_2</code>
     * deployment types, provisions the amount of read and write throughput for each 1
     * tebibyte (TiB) of file system storage capacity, in MB/s/TiB. File system
     * throughput capacity is calculated by multiplying ﬁle system storage capacity
     * (TiB) by the <code>PerUnitStorageThroughput</code> (MB/s/TiB). For a 2.4-TiB ﬁle
     * system, provisioning 50 MB/s/TiB of <code>PerUnitStorageThroughput</code> yields
     * 120 MB/s of ﬁle system throughput. You pay for the amount of throughput that you
     * provision. </p> <p>Valid values:</p> <ul> <li> <p>For <code>PERSISTENT_1</code>
     * SSD storage: 50, 100, 200 MB/s/TiB.</p> </li> <li> <p>For
     * <code>PERSISTENT_1</code> HDD storage: 12, 40 MB/s/TiB.</p> </li> <li> <p>For
     * <code>PERSISTENT_2</code> SSD storage: 125, 250, 500, 1000 MB/s/TiB.</p> </li>
     * </ul>
     */
    inline CreateFileSystemLustreConfiguration& WithPerUnitStorageThroughput(int value) { SetPerUnitStorageThroughput(value); return *this;}


    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    
    inline CreateFileSystemLustreConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    
    inline CreateFileSystemLustreConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    
    inline CreateFileSystemLustreConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    
    inline CreateFileSystemLustreConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}


    /**
     * <p>(Optional) Not available for use with file systems that are linked to a data
     * repository. A boolean flag indicating whether tags for the file system should be
     * copied to backups. The default value is false. If <code>CopyTagsToBackups</code>
     * is set to true, all file system tags are copied to all automatic and
     * user-initiated backups when the user doesn't specify any backup-specific tags.
     * If <code>CopyTagsToBackups</code> is set to true and you specify one or more
     * backup tags, only the specified tags are copied to backups. If you specify one
     * or more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value.</p> <p>(Default = <code>false</code>)</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">
     * Working with backups</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline bool GetCopyTagsToBackups() const{ return m_copyTagsToBackups; }

    /**
     * <p>(Optional) Not available for use with file systems that are linked to a data
     * repository. A boolean flag indicating whether tags for the file system should be
     * copied to backups. The default value is false. If <code>CopyTagsToBackups</code>
     * is set to true, all file system tags are copied to all automatic and
     * user-initiated backups when the user doesn't specify any backup-specific tags.
     * If <code>CopyTagsToBackups</code> is set to true and you specify one or more
     * backup tags, only the specified tags are copied to backups. If you specify one
     * or more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value.</p> <p>(Default = <code>false</code>)</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">
     * Working with backups</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }

    /**
     * <p>(Optional) Not available for use with file systems that are linked to a data
     * repository. A boolean flag indicating whether tags for the file system should be
     * copied to backups. The default value is false. If <code>CopyTagsToBackups</code>
     * is set to true, all file system tags are copied to all automatic and
     * user-initiated backups when the user doesn't specify any backup-specific tags.
     * If <code>CopyTagsToBackups</code> is set to true and you specify one or more
     * backup tags, only the specified tags are copied to backups. If you specify one
     * or more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value.</p> <p>(Default = <code>false</code>)</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">
     * Working with backups</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }

    /**
     * <p>(Optional) Not available for use with file systems that are linked to a data
     * repository. A boolean flag indicating whether tags for the file system should be
     * copied to backups. The default value is false. If <code>CopyTagsToBackups</code>
     * is set to true, all file system tags are copied to all automatic and
     * user-initiated backups when the user doesn't specify any backup-specific tags.
     * If <code>CopyTagsToBackups</code> is set to true and you specify one or more
     * backup tags, only the specified tags are copied to backups. If you specify one
     * or more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value.</p> <p>(Default = <code>false</code>)</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">
     * Working with backups</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}


    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * storage type is HDD. Set this property to <code>READ</code> to improve the
     * performance for frequently accessed files by caching up to 20% of the total
     * storage capacity of the file system.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to <code>HDD</code>.</p>
     */
    inline const DriveCacheType& GetDriveCacheType() const{ return m_driveCacheType; }

    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * storage type is HDD. Set this property to <code>READ</code> to improve the
     * performance for frequently accessed files by caching up to 20% of the total
     * storage capacity of the file system.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to <code>HDD</code>.</p>
     */
    inline bool DriveCacheTypeHasBeenSet() const { return m_driveCacheTypeHasBeenSet; }

    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * storage type is HDD. Set this property to <code>READ</code> to improve the
     * performance for frequently accessed files by caching up to 20% of the total
     * storage capacity of the file system.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to <code>HDD</code>.</p>
     */
    inline void SetDriveCacheType(const DriveCacheType& value) { m_driveCacheTypeHasBeenSet = true; m_driveCacheType = value; }

    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * storage type is HDD. Set this property to <code>READ</code> to improve the
     * performance for frequently accessed files by caching up to 20% of the total
     * storage capacity of the file system.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to <code>HDD</code>.</p>
     */
    inline void SetDriveCacheType(DriveCacheType&& value) { m_driveCacheTypeHasBeenSet = true; m_driveCacheType = std::move(value); }

    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * storage type is HDD. Set this property to <code>READ</code> to improve the
     * performance for frequently accessed files by caching up to 20% of the total
     * storage capacity of the file system.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to <code>HDD</code>.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithDriveCacheType(const DriveCacheType& value) { SetDriveCacheType(value); return *this;}

    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * storage type is HDD. Set this property to <code>READ</code> to improve the
     * performance for frequently accessed files by caching up to 20% of the total
     * storage capacity of the file system.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to <code>HDD</code>.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithDriveCacheType(DriveCacheType&& value) { SetDriveCacheType(std::move(value)); return *this;}


    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - (Default) Data compression is turned off when the file
     * system is created.</p> </li> <li> <p> <code>LZ4</code> - Data compression is
     * turned on with the LZ4 algorithm.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline const DataCompressionType& GetDataCompressionType() const{ return m_dataCompressionType; }

    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - (Default) Data compression is turned off when the file
     * system is created.</p> </li> <li> <p> <code>LZ4</code> - Data compression is
     * turned on with the LZ4 algorithm.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline bool DataCompressionTypeHasBeenSet() const { return m_dataCompressionTypeHasBeenSet; }

    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - (Default) Data compression is turned off when the file
     * system is created.</p> </li> <li> <p> <code>LZ4</code> - Data compression is
     * turned on with the LZ4 algorithm.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline void SetDataCompressionType(const DataCompressionType& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = value; }

    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - (Default) Data compression is turned off when the file
     * system is created.</p> </li> <li> <p> <code>LZ4</code> - Data compression is
     * turned on with the LZ4 algorithm.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline void SetDataCompressionType(DataCompressionType&& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = std::move(value); }

    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - (Default) Data compression is turned off when the file
     * system is created.</p> </li> <li> <p> <code>LZ4</code> - Data compression is
     * turned on with the LZ4 algorithm.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithDataCompressionType(const DataCompressionType& value) { SetDataCompressionType(value); return *this;}

    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - (Default) Data compression is turned off when the file
     * system is created.</p> </li> <li> <p> <code>LZ4</code> - Data compression is
     * turned on with the LZ4 algorithm.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithDataCompressionType(DataCompressionType&& value) { SetDataCompressionType(std::move(value)); return *this;}


    /**
     * <p>The Lustre logging configuration used when creating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline const LustreLogCreateConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }

    /**
     * <p>The Lustre logging configuration used when creating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }

    /**
     * <p>The Lustre logging configuration used when creating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline void SetLogConfiguration(const LustreLogCreateConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }

    /**
     * <p>The Lustre logging configuration used when creating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline void SetLogConfiguration(LustreLogCreateConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }

    /**
     * <p>The Lustre logging configuration used when creating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithLogConfiguration(const LustreLogCreateConfiguration& value) { SetLogConfiguration(value); return *this;}

    /**
     * <p>The Lustre logging configuration used when creating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithLogConfiguration(LustreLogCreateConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Lustre root squash configuration used when creating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline const LustreRootSquashConfiguration& GetRootSquashConfiguration() const{ return m_rootSquashConfiguration; }

    /**
     * <p>The Lustre root squash configuration used when creating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline bool RootSquashConfigurationHasBeenSet() const { return m_rootSquashConfigurationHasBeenSet; }

    /**
     * <p>The Lustre root squash configuration used when creating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline void SetRootSquashConfiguration(const LustreRootSquashConfiguration& value) { m_rootSquashConfigurationHasBeenSet = true; m_rootSquashConfiguration = value; }

    /**
     * <p>The Lustre root squash configuration used when creating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline void SetRootSquashConfiguration(LustreRootSquashConfiguration&& value) { m_rootSquashConfigurationHasBeenSet = true; m_rootSquashConfiguration = std::move(value); }

    /**
     * <p>The Lustre root squash configuration used when creating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithRootSquashConfiguration(const LustreRootSquashConfiguration& value) { SetRootSquashConfiguration(value); return *this;}

    /**
     * <p>The Lustre root squash configuration used when creating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithRootSquashConfiguration(LustreRootSquashConfiguration&& value) { SetRootSquashConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    Aws::String m_importPath;
    bool m_importPathHasBeenSet = false;

    Aws::String m_exportPath;
    bool m_exportPathHasBeenSet = false;

    int m_importedFileChunkSize;
    bool m_importedFileChunkSizeHasBeenSet = false;

    LustreDeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    AutoImportPolicyType m_autoImportPolicy;
    bool m_autoImportPolicyHasBeenSet = false;

    int m_perUnitStorageThroughput;
    bool m_perUnitStorageThroughputHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    bool m_copyTagsToBackups;
    bool m_copyTagsToBackupsHasBeenSet = false;

    DriveCacheType m_driveCacheType;
    bool m_driveCacheTypeHasBeenSet = false;

    DataCompressionType m_dataCompressionType;
    bool m_dataCompressionTypeHasBeenSet = false;

    LustreLogCreateConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    LustreRootSquashConfiguration m_rootSquashConfiguration;
    bool m_rootSquashConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
