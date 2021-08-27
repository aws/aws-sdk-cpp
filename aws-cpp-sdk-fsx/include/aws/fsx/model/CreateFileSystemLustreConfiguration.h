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
   * <p>The Lustre configuration for the file system being created. </p><p><h3>See
   * Also:</h3>   <a
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
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline int GetImportedFileChunkSize() const{ return m_importedFileChunkSize; }

    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline bool ImportedFileChunkSizeHasBeenSet() const { return m_importedFileChunkSizeHasBeenSet; }

    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline void SetImportedFileChunkSize(int value) { m_importedFileChunkSizeHasBeenSet = true; m_importedFileChunkSize = value; }

    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}


    /**
     * <p> Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * when you need temporary storage and shorter-term processing of data. The
     * <code>SCRATCH_2</code> deployment type provides in-transit encryption of data
     * and higher burst throughput capacity than <code>SCRATCH_1</code>.</p> <p>Choose
     * <code>PERSISTENT_1</code> deployment type for longer-term storage and workloads
     * and encryption of data in transit. To learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>.</p> <p>Encryption of data in-transit is
     * automatically enabled when you access a <code>SCRATCH_2</code> or
     * <code>PERSISTENT_1</code> file system from Amazon EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support this feature</a>. (Default = <code>SCRATCH_1</code>)
     * </p> <p>Encryption of data in-transit for <code>SCRATCH_2</code> and
     * <code>PERSISTENT_1</code> deployment types is supported when accessed from
     * supported instance types in supported AWS Regions. To learn more, <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * Data in Transit</a>.</p>
     */
    inline const LustreDeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p> Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * when you need temporary storage and shorter-term processing of data. The
     * <code>SCRATCH_2</code> deployment type provides in-transit encryption of data
     * and higher burst throughput capacity than <code>SCRATCH_1</code>.</p> <p>Choose
     * <code>PERSISTENT_1</code> deployment type for longer-term storage and workloads
     * and encryption of data in transit. To learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>.</p> <p>Encryption of data in-transit is
     * automatically enabled when you access a <code>SCRATCH_2</code> or
     * <code>PERSISTENT_1</code> file system from Amazon EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support this feature</a>. (Default = <code>SCRATCH_1</code>)
     * </p> <p>Encryption of data in-transit for <code>SCRATCH_2</code> and
     * <code>PERSISTENT_1</code> deployment types is supported when accessed from
     * supported instance types in supported AWS Regions. To learn more, <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * Data in Transit</a>.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p> Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * when you need temporary storage and shorter-term processing of data. The
     * <code>SCRATCH_2</code> deployment type provides in-transit encryption of data
     * and higher burst throughput capacity than <code>SCRATCH_1</code>.</p> <p>Choose
     * <code>PERSISTENT_1</code> deployment type for longer-term storage and workloads
     * and encryption of data in transit. To learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>.</p> <p>Encryption of data in-transit is
     * automatically enabled when you access a <code>SCRATCH_2</code> or
     * <code>PERSISTENT_1</code> file system from Amazon EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support this feature</a>. (Default = <code>SCRATCH_1</code>)
     * </p> <p>Encryption of data in-transit for <code>SCRATCH_2</code> and
     * <code>PERSISTENT_1</code> deployment types is supported when accessed from
     * supported instance types in supported AWS Regions. To learn more, <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * Data in Transit</a>.</p>
     */
    inline void SetDeploymentType(const LustreDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p> Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * when you need temporary storage and shorter-term processing of data. The
     * <code>SCRATCH_2</code> deployment type provides in-transit encryption of data
     * and higher burst throughput capacity than <code>SCRATCH_1</code>.</p> <p>Choose
     * <code>PERSISTENT_1</code> deployment type for longer-term storage and workloads
     * and encryption of data in transit. To learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>.</p> <p>Encryption of data in-transit is
     * automatically enabled when you access a <code>SCRATCH_2</code> or
     * <code>PERSISTENT_1</code> file system from Amazon EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support this feature</a>. (Default = <code>SCRATCH_1</code>)
     * </p> <p>Encryption of data in-transit for <code>SCRATCH_2</code> and
     * <code>PERSISTENT_1</code> deployment types is supported when accessed from
     * supported instance types in supported AWS Regions. To learn more, <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * Data in Transit</a>.</p>
     */
    inline void SetDeploymentType(LustreDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p> Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * when you need temporary storage and shorter-term processing of data. The
     * <code>SCRATCH_2</code> deployment type provides in-transit encryption of data
     * and higher burst throughput capacity than <code>SCRATCH_1</code>.</p> <p>Choose
     * <code>PERSISTENT_1</code> deployment type for longer-term storage and workloads
     * and encryption of data in transit. To learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>.</p> <p>Encryption of data in-transit is
     * automatically enabled when you access a <code>SCRATCH_2</code> or
     * <code>PERSISTENT_1</code> file system from Amazon EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support this feature</a>. (Default = <code>SCRATCH_1</code>)
     * </p> <p>Encryption of data in-transit for <code>SCRATCH_2</code> and
     * <code>PERSISTENT_1</code> deployment types is supported when accessed from
     * supported instance types in supported AWS Regions. To learn more, <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * Data in Transit</a>.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithDeploymentType(const LustreDeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p> Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * when you need temporary storage and shorter-term processing of data. The
     * <code>SCRATCH_2</code> deployment type provides in-transit encryption of data
     * and higher burst throughput capacity than <code>SCRATCH_1</code>.</p> <p>Choose
     * <code>PERSISTENT_1</code> deployment type for longer-term storage and workloads
     * and encryption of data in transit. To learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>.</p> <p>Encryption of data in-transit is
     * automatically enabled when you access a <code>SCRATCH_2</code> or
     * <code>PERSISTENT_1</code> file system from Amazon EC2 instances that <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/data-
     * protection.html">support this feature</a>. (Default = <code>SCRATCH_1</code>)
     * </p> <p>Encryption of data in-transit for <code>SCRATCH_2</code> and
     * <code>PERSISTENT_1</code> deployment types is supported when accessed from
     * supported instance types in supported AWS Regions. To learn more, <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * Data in Transit</a>.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithDeploymentType(LustreDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listings up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update file and directory listings
     * for any new or changed objects after choosing this option.</p> </li> <li> <p>
     * <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports directory
     * listings of any new objects added to the linked S3 bucket that do not currently
     * exist in the FSx file system. </p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. Amazon FSx automatically imports file and directory listings
     * of any new objects added to the S3 bucket and any existing objects that are
     * changed in the S3 bucket after you choose this option. </p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
     */
    inline const AutoImportPolicyType& GetAutoImportPolicy() const{ return m_autoImportPolicy; }

    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listings up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update file and directory listings
     * for any new or changed objects after choosing this option.</p> </li> <li> <p>
     * <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports directory
     * listings of any new objects added to the linked S3 bucket that do not currently
     * exist in the FSx file system. </p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. Amazon FSx automatically imports file and directory listings
     * of any new objects added to the S3 bucket and any existing objects that are
     * changed in the S3 bucket after you choose this option. </p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
     */
    inline bool AutoImportPolicyHasBeenSet() const { return m_autoImportPolicyHasBeenSet; }

    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listings up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update file and directory listings
     * for any new or changed objects after choosing this option.</p> </li> <li> <p>
     * <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports directory
     * listings of any new objects added to the linked S3 bucket that do not currently
     * exist in the FSx file system. </p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. Amazon FSx automatically imports file and directory listings
     * of any new objects added to the S3 bucket and any existing objects that are
     * changed in the S3 bucket after you choose this option. </p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
     */
    inline void SetAutoImportPolicy(const AutoImportPolicyType& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = value; }

    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listings up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update file and directory listings
     * for any new or changed objects after choosing this option.</p> </li> <li> <p>
     * <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports directory
     * listings of any new objects added to the linked S3 bucket that do not currently
     * exist in the FSx file system. </p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. Amazon FSx automatically imports file and directory listings
     * of any new objects added to the S3 bucket and any existing objects that are
     * changed in the S3 bucket after you choose this option. </p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
     */
    inline void SetAutoImportPolicy(AutoImportPolicyType&& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = std::move(value); }

    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listings up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update file and directory listings
     * for any new or changed objects after choosing this option.</p> </li> <li> <p>
     * <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports directory
     * listings of any new objects added to the linked S3 bucket that do not currently
     * exist in the FSx file system. </p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. Amazon FSx automatically imports file and directory listings
     * of any new objects added to the S3 bucket and any existing objects that are
     * changed in the S3 bucket after you choose this option. </p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithAutoImportPolicy(const AutoImportPolicyType& value) { SetAutoImportPolicy(value); return *this;}

    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listings up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update file and directory listings
     * for any new or changed objects after choosing this option.</p> </li> <li> <p>
     * <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports directory
     * listings of any new objects added to the linked S3 bucket that do not currently
     * exist in the FSx file system. </p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. Amazon FSx automatically imports file and directory listings
     * of any new objects added to the S3 bucket and any existing objects that are
     * changed in the S3 bucket after you choose this option. </p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithAutoImportPolicy(AutoImportPolicyType&& value) { SetAutoImportPolicy(std::move(value)); return *this;}


    /**
     * <p> Required for the <code>PERSISTENT_1</code> deployment type, describes the
     * amount of read and write throughput for each 1 tebibyte of storage, in MB/s/TiB.
     * File system throughput capacity is calculated by multiplying ﬁle system storage
     * capacity (TiB) by the PerUnitStorageThroughput (MB/s/TiB). For a 2.4 TiB ﬁle
     * system, provisioning 50 MB/s/TiB of PerUnitStorageThroughput yields 120 MB/s of
     * ﬁle system throughput. You pay for the amount of throughput that you provision.
     * </p> <p>Valid values for SSD storage: 50, 100, 200. Valid values for HDD
     * storage: 12, 40.</p>
     */
    inline int GetPerUnitStorageThroughput() const{ return m_perUnitStorageThroughput; }

    /**
     * <p> Required for the <code>PERSISTENT_1</code> deployment type, describes the
     * amount of read and write throughput for each 1 tebibyte of storage, in MB/s/TiB.
     * File system throughput capacity is calculated by multiplying ﬁle system storage
     * capacity (TiB) by the PerUnitStorageThroughput (MB/s/TiB). For a 2.4 TiB ﬁle
     * system, provisioning 50 MB/s/TiB of PerUnitStorageThroughput yields 120 MB/s of
     * ﬁle system throughput. You pay for the amount of throughput that you provision.
     * </p> <p>Valid values for SSD storage: 50, 100, 200. Valid values for HDD
     * storage: 12, 40.</p>
     */
    inline bool PerUnitStorageThroughputHasBeenSet() const { return m_perUnitStorageThroughputHasBeenSet; }

    /**
     * <p> Required for the <code>PERSISTENT_1</code> deployment type, describes the
     * amount of read and write throughput for each 1 tebibyte of storage, in MB/s/TiB.
     * File system throughput capacity is calculated by multiplying ﬁle system storage
     * capacity (TiB) by the PerUnitStorageThroughput (MB/s/TiB). For a 2.4 TiB ﬁle
     * system, provisioning 50 MB/s/TiB of PerUnitStorageThroughput yields 120 MB/s of
     * ﬁle system throughput. You pay for the amount of throughput that you provision.
     * </p> <p>Valid values for SSD storage: 50, 100, 200. Valid values for HDD
     * storage: 12, 40.</p>
     */
    inline void SetPerUnitStorageThroughput(int value) { m_perUnitStorageThroughputHasBeenSet = true; m_perUnitStorageThroughput = value; }

    /**
     * <p> Required for the <code>PERSISTENT_1</code> deployment type, describes the
     * amount of read and write throughput for each 1 tebibyte of storage, in MB/s/TiB.
     * File system throughput capacity is calculated by multiplying ﬁle system storage
     * capacity (TiB) by the PerUnitStorageThroughput (MB/s/TiB). For a 2.4 TiB ﬁle
     * system, provisioning 50 MB/s/TiB of PerUnitStorageThroughput yields 120 MB/s of
     * ﬁle system throughput. You pay for the amount of throughput that you provision.
     * </p> <p>Valid values for SSD storage: 50, 100, 200. Valid values for HDD
     * storage: 12, 40.</p>
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
     * <p>(Optional) Not available to use with file systems that are linked to a data
     * repository. A boolean flag indicating whether tags for the file system should be
     * copied to backups. The default value is false. If it's set to true, all file
     * system tags are copied to all automatic and user-initiated backups when the user
     * doesn't specify any backup-specific tags. If this value is true, and you specify
     * one or more backup tags, only the specified tags are copied to backups. If you
     * specify one or more tags when creating a user-initiated backup, no tags are
     * copied from the file system, regardless of this value.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">Working
     * with backups</a>.</p>
     */
    inline bool GetCopyTagsToBackups() const{ return m_copyTagsToBackups; }

    /**
     * <p>(Optional) Not available to use with file systems that are linked to a data
     * repository. A boolean flag indicating whether tags for the file system should be
     * copied to backups. The default value is false. If it's set to true, all file
     * system tags are copied to all automatic and user-initiated backups when the user
     * doesn't specify any backup-specific tags. If this value is true, and you specify
     * one or more backup tags, only the specified tags are copied to backups. If you
     * specify one or more tags when creating a user-initiated backup, no tags are
     * copied from the file system, regardless of this value.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">Working
     * with backups</a>.</p>
     */
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }

    /**
     * <p>(Optional) Not available to use with file systems that are linked to a data
     * repository. A boolean flag indicating whether tags for the file system should be
     * copied to backups. The default value is false. If it's set to true, all file
     * system tags are copied to all automatic and user-initiated backups when the user
     * doesn't specify any backup-specific tags. If this value is true, and you specify
     * one or more backup tags, only the specified tags are copied to backups. If you
     * specify one or more tags when creating a user-initiated backup, no tags are
     * copied from the file system, regardless of this value.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">Working
     * with backups</a>.</p>
     */
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }

    /**
     * <p>(Optional) Not available to use with file systems that are linked to a data
     * repository. A boolean flag indicating whether tags for the file system should be
     * copied to backups. The default value is false. If it's set to true, all file
     * system tags are copied to all automatic and user-initiated backups when the user
     * doesn't specify any backup-specific tags. If this value is true, and you specify
     * one or more backup tags, only the specified tags are copied to backups. If you
     * specify one or more tags when creating a user-initiated backup, no tags are
     * copied from the file system, regardless of this value.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">Working
     * with backups</a>.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}


    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline const DriveCacheType& GetDriveCacheType() const{ return m_driveCacheType; }

    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline bool DriveCacheTypeHasBeenSet() const { return m_driveCacheTypeHasBeenSet; }

    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline void SetDriveCacheType(const DriveCacheType& value) { m_driveCacheTypeHasBeenSet = true; m_driveCacheType = value; }

    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline void SetDriveCacheType(DriveCacheType&& value) { m_driveCacheTypeHasBeenSet = true; m_driveCacheType = std::move(value); }

    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithDriveCacheType(const DriveCacheType& value) { SetDriveCacheType(value); return *this;}

    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline CreateFileSystemLustreConfiguration& WithDriveCacheType(DriveCacheType&& value) { SetDriveCacheType(std::move(value)); return *this;}

  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet;

    Aws::String m_importPath;
    bool m_importPathHasBeenSet;

    Aws::String m_exportPath;
    bool m_exportPathHasBeenSet;

    int m_importedFileChunkSize;
    bool m_importedFileChunkSizeHasBeenSet;

    LustreDeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet;

    AutoImportPolicyType m_autoImportPolicy;
    bool m_autoImportPolicyHasBeenSet;

    int m_perUnitStorageThroughput;
    bool m_perUnitStorageThroughputHasBeenSet;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet;

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet;

    bool m_copyTagsToBackups;
    bool m_copyTagsToBackupsHasBeenSet;

    DriveCacheType m_driveCacheType;
    bool m_driveCacheTypeHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
