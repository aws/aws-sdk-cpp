/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/ResponseMetadata.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the details of a snapshot export to Amazon S3. </p> <p>This data
   * type is used as a response element in the <code>DescribeExportTasks</code>
   * action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ExportTask">AWS API
   * Reference</a></p>
   */
  class AWS_RDS_API ExportTask
  {
  public:
    ExportTask();
    ExportTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    ExportTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is exported to. </p>
     */
    inline const Aws::String& GetExportTaskIdentifier() const{ return m_exportTaskIdentifier; }

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is exported to. </p>
     */
    inline bool ExportTaskIdentifierHasBeenSet() const { return m_exportTaskIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is exported to. </p>
     */
    inline void SetExportTaskIdentifier(const Aws::String& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = value; }

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is exported to. </p>
     */
    inline void SetExportTaskIdentifier(Aws::String&& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is exported to. </p>
     */
    inline void SetExportTaskIdentifier(const char* value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is exported to. </p>
     */
    inline ExportTask& WithExportTaskIdentifier(const Aws::String& value) { SetExportTaskIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is exported to. </p>
     */
    inline ExportTask& WithExportTaskIdentifier(Aws::String&& value) { SetExportTaskIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is exported to. </p>
     */
    inline ExportTask& WithExportTaskIdentifier(const char* value) { SetExportTaskIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot exported to Amazon S3.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot exported to Amazon S3.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot exported to Amazon S3.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot exported to Amazon S3.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot exported to Amazon S3.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot exported to Amazon S3.</p>
     */
    inline ExportTask& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot exported to Amazon S3.</p>
     */
    inline ExportTask& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot exported to Amazon S3.</p>
     */
    inline ExportTask& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The data exported from the snapshot. Valid values are the following:</p> <ul>
     * <li> <p> <code>database</code> - Export all the data from a specified
     * database.</p> </li> <li> <p> <code>database.table</code> <i>table-name</i> -
     * Export a table of the snapshot. This format is valid only for RDS for MySQL, RDS
     * for MariaDB, and Aurora MySQL.</p> </li> <li> <p> <code>database.schema</code>
     * <i>schema-name</i> - Export a database schema of the snapshot. This format is
     * valid only for RDS for PostgreSQL and Aurora PostgreSQL.</p> </li> <li> <p>
     * <code>database.schema.table</code> <i>table-name</i> - Export a table of the
     * database schema. This format is valid only for RDS for PostgreSQL and Aurora
     * PostgreSQL.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetExportOnly() const{ return m_exportOnly; }

    /**
     * <p>The data exported from the snapshot. Valid values are the following:</p> <ul>
     * <li> <p> <code>database</code> - Export all the data from a specified
     * database.</p> </li> <li> <p> <code>database.table</code> <i>table-name</i> -
     * Export a table of the snapshot. This format is valid only for RDS for MySQL, RDS
     * for MariaDB, and Aurora MySQL.</p> </li> <li> <p> <code>database.schema</code>
     * <i>schema-name</i> - Export a database schema of the snapshot. This format is
     * valid only for RDS for PostgreSQL and Aurora PostgreSQL.</p> </li> <li> <p>
     * <code>database.schema.table</code> <i>table-name</i> - Export a table of the
     * database schema. This format is valid only for RDS for PostgreSQL and Aurora
     * PostgreSQL.</p> </li> </ul>
     */
    inline bool ExportOnlyHasBeenSet() const { return m_exportOnlyHasBeenSet; }

    /**
     * <p>The data exported from the snapshot. Valid values are the following:</p> <ul>
     * <li> <p> <code>database</code> - Export all the data from a specified
     * database.</p> </li> <li> <p> <code>database.table</code> <i>table-name</i> -
     * Export a table of the snapshot. This format is valid only for RDS for MySQL, RDS
     * for MariaDB, and Aurora MySQL.</p> </li> <li> <p> <code>database.schema</code>
     * <i>schema-name</i> - Export a database schema of the snapshot. This format is
     * valid only for RDS for PostgreSQL and Aurora PostgreSQL.</p> </li> <li> <p>
     * <code>database.schema.table</code> <i>table-name</i> - Export a table of the
     * database schema. This format is valid only for RDS for PostgreSQL and Aurora
     * PostgreSQL.</p> </li> </ul>
     */
    inline void SetExportOnly(const Aws::Vector<Aws::String>& value) { m_exportOnlyHasBeenSet = true; m_exportOnly = value; }

    /**
     * <p>The data exported from the snapshot. Valid values are the following:</p> <ul>
     * <li> <p> <code>database</code> - Export all the data from a specified
     * database.</p> </li> <li> <p> <code>database.table</code> <i>table-name</i> -
     * Export a table of the snapshot. This format is valid only for RDS for MySQL, RDS
     * for MariaDB, and Aurora MySQL.</p> </li> <li> <p> <code>database.schema</code>
     * <i>schema-name</i> - Export a database schema of the snapshot. This format is
     * valid only for RDS for PostgreSQL and Aurora PostgreSQL.</p> </li> <li> <p>
     * <code>database.schema.table</code> <i>table-name</i> - Export a table of the
     * database schema. This format is valid only for RDS for PostgreSQL and Aurora
     * PostgreSQL.</p> </li> </ul>
     */
    inline void SetExportOnly(Aws::Vector<Aws::String>&& value) { m_exportOnlyHasBeenSet = true; m_exportOnly = std::move(value); }

    /**
     * <p>The data exported from the snapshot. Valid values are the following:</p> <ul>
     * <li> <p> <code>database</code> - Export all the data from a specified
     * database.</p> </li> <li> <p> <code>database.table</code> <i>table-name</i> -
     * Export a table of the snapshot. This format is valid only for RDS for MySQL, RDS
     * for MariaDB, and Aurora MySQL.</p> </li> <li> <p> <code>database.schema</code>
     * <i>schema-name</i> - Export a database schema of the snapshot. This format is
     * valid only for RDS for PostgreSQL and Aurora PostgreSQL.</p> </li> <li> <p>
     * <code>database.schema.table</code> <i>table-name</i> - Export a table of the
     * database schema. This format is valid only for RDS for PostgreSQL and Aurora
     * PostgreSQL.</p> </li> </ul>
     */
    inline ExportTask& WithExportOnly(const Aws::Vector<Aws::String>& value) { SetExportOnly(value); return *this;}

    /**
     * <p>The data exported from the snapshot. Valid values are the following:</p> <ul>
     * <li> <p> <code>database</code> - Export all the data from a specified
     * database.</p> </li> <li> <p> <code>database.table</code> <i>table-name</i> -
     * Export a table of the snapshot. This format is valid only for RDS for MySQL, RDS
     * for MariaDB, and Aurora MySQL.</p> </li> <li> <p> <code>database.schema</code>
     * <i>schema-name</i> - Export a database schema of the snapshot. This format is
     * valid only for RDS for PostgreSQL and Aurora PostgreSQL.</p> </li> <li> <p>
     * <code>database.schema.table</code> <i>table-name</i> - Export a table of the
     * database schema. This format is valid only for RDS for PostgreSQL and Aurora
     * PostgreSQL.</p> </li> </ul>
     */
    inline ExportTask& WithExportOnly(Aws::Vector<Aws::String>&& value) { SetExportOnly(std::move(value)); return *this;}

    /**
     * <p>The data exported from the snapshot. Valid values are the following:</p> <ul>
     * <li> <p> <code>database</code> - Export all the data from a specified
     * database.</p> </li> <li> <p> <code>database.table</code> <i>table-name</i> -
     * Export a table of the snapshot. This format is valid only for RDS for MySQL, RDS
     * for MariaDB, and Aurora MySQL.</p> </li> <li> <p> <code>database.schema</code>
     * <i>schema-name</i> - Export a database schema of the snapshot. This format is
     * valid only for RDS for PostgreSQL and Aurora PostgreSQL.</p> </li> <li> <p>
     * <code>database.schema.table</code> <i>table-name</i> - Export a table of the
     * database schema. This format is valid only for RDS for PostgreSQL and Aurora
     * PostgreSQL.</p> </li> </ul>
     */
    inline ExportTask& AddExportOnly(const Aws::String& value) { m_exportOnlyHasBeenSet = true; m_exportOnly.push_back(value); return *this; }

    /**
     * <p>The data exported from the snapshot. Valid values are the following:</p> <ul>
     * <li> <p> <code>database</code> - Export all the data from a specified
     * database.</p> </li> <li> <p> <code>database.table</code> <i>table-name</i> -
     * Export a table of the snapshot. This format is valid only for RDS for MySQL, RDS
     * for MariaDB, and Aurora MySQL.</p> </li> <li> <p> <code>database.schema</code>
     * <i>schema-name</i> - Export a database schema of the snapshot. This format is
     * valid only for RDS for PostgreSQL and Aurora PostgreSQL.</p> </li> <li> <p>
     * <code>database.schema.table</code> <i>table-name</i> - Export a table of the
     * database schema. This format is valid only for RDS for PostgreSQL and Aurora
     * PostgreSQL.</p> </li> </ul>
     */
    inline ExportTask& AddExportOnly(Aws::String&& value) { m_exportOnlyHasBeenSet = true; m_exportOnly.push_back(std::move(value)); return *this; }

    /**
     * <p>The data exported from the snapshot. Valid values are the following:</p> <ul>
     * <li> <p> <code>database</code> - Export all the data from a specified
     * database.</p> </li> <li> <p> <code>database.table</code> <i>table-name</i> -
     * Export a table of the snapshot. This format is valid only for RDS for MySQL, RDS
     * for MariaDB, and Aurora MySQL.</p> </li> <li> <p> <code>database.schema</code>
     * <i>schema-name</i> - Export a database schema of the snapshot. This format is
     * valid only for RDS for PostgreSQL and Aurora PostgreSQL.</p> </li> <li> <p>
     * <code>database.schema.table</code> <i>table-name</i> - Export a table of the
     * database schema. This format is valid only for RDS for PostgreSQL and Aurora
     * PostgreSQL.</p> </li> </ul>
     */
    inline ExportTask& AddExportOnly(const char* value) { m_exportOnlyHasBeenSet = true; m_exportOnly.push_back(value); return *this; }


    /**
     * <p>The time that the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotTime() const{ return m_snapshotTime; }

    /**
     * <p>The time that the snapshot was created.</p>
     */
    inline bool SnapshotTimeHasBeenSet() const { return m_snapshotTimeHasBeenSet; }

    /**
     * <p>The time that the snapshot was created.</p>
     */
    inline void SetSnapshotTime(const Aws::Utils::DateTime& value) { m_snapshotTimeHasBeenSet = true; m_snapshotTime = value; }

    /**
     * <p>The time that the snapshot was created.</p>
     */
    inline void SetSnapshotTime(Aws::Utils::DateTime&& value) { m_snapshotTimeHasBeenSet = true; m_snapshotTime = std::move(value); }

    /**
     * <p>The time that the snapshot was created.</p>
     */
    inline ExportTask& WithSnapshotTime(const Aws::Utils::DateTime& value) { SetSnapshotTime(value); return *this;}

    /**
     * <p>The time that the snapshot was created.</p>
     */
    inline ExportTask& WithSnapshotTime(Aws::Utils::DateTime&& value) { SetSnapshotTime(std::move(value)); return *this;}


    /**
     * <p>The time that the snapshot export task started.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const{ return m_taskStartTime; }

    /**
     * <p>The time that the snapshot export task started.</p>
     */
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }

    /**
     * <p>The time that the snapshot export task started.</p>
     */
    inline void SetTaskStartTime(const Aws::Utils::DateTime& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = value; }

    /**
     * <p>The time that the snapshot export task started.</p>
     */
    inline void SetTaskStartTime(Aws::Utils::DateTime&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::move(value); }

    /**
     * <p>The time that the snapshot export task started.</p>
     */
    inline ExportTask& WithTaskStartTime(const Aws::Utils::DateTime& value) { SetTaskStartTime(value); return *this;}

    /**
     * <p>The time that the snapshot export task started.</p>
     */
    inline ExportTask& WithTaskStartTime(Aws::Utils::DateTime&& value) { SetTaskStartTime(std::move(value)); return *this;}


    /**
     * <p>The time that the snapshot export task completed.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskEndTime() const{ return m_taskEndTime; }

    /**
     * <p>The time that the snapshot export task completed.</p>
     */
    inline bool TaskEndTimeHasBeenSet() const { return m_taskEndTimeHasBeenSet; }

    /**
     * <p>The time that the snapshot export task completed.</p>
     */
    inline void SetTaskEndTime(const Aws::Utils::DateTime& value) { m_taskEndTimeHasBeenSet = true; m_taskEndTime = value; }

    /**
     * <p>The time that the snapshot export task completed.</p>
     */
    inline void SetTaskEndTime(Aws::Utils::DateTime&& value) { m_taskEndTimeHasBeenSet = true; m_taskEndTime = std::move(value); }

    /**
     * <p>The time that the snapshot export task completed.</p>
     */
    inline ExportTask& WithTaskEndTime(const Aws::Utils::DateTime& value) { SetTaskEndTime(value); return *this;}

    /**
     * <p>The time that the snapshot export task completed.</p>
     */
    inline ExportTask& WithTaskEndTime(Aws::Utils::DateTime&& value) { SetTaskEndTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 bucket that the snapshot is exported to.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The Amazon S3 bucket that the snapshot is exported to.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that the snapshot is exported to.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The Amazon S3 bucket that the snapshot is exported to.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that the snapshot is exported to.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that the snapshot is exported to.</p>
     */
    inline ExportTask& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that the snapshot is exported to.</p>
     */
    inline ExportTask& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that the snapshot is exported to.</p>
     */
    inline ExportTask& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The Amazon S3 bucket prefix that is the file name and path of the exported
     * snapshot.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The Amazon S3 bucket prefix that is the file name and path of the exported
     * snapshot.</p>
     */
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket prefix that is the file name and path of the exported
     * snapshot.</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The Amazon S3 bucket prefix that is the file name and path of the exported
     * snapshot.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The Amazon S3 bucket prefix that is the file name and path of the exported
     * snapshot.</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The Amazon S3 bucket prefix that is the file name and path of the exported
     * snapshot.</p>
     */
    inline ExportTask& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The Amazon S3 bucket prefix that is the file name and path of the exported
     * snapshot.</p>
     */
    inline ExportTask& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket prefix that is the file name and path of the exported
     * snapshot.</p>
     */
    inline ExportTask& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}


    /**
     * <p>The name of the IAM role that is used to write to Amazon S3 when exporting a
     * snapshot. </p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The name of the IAM role that is used to write to Amazon S3 when exporting a
     * snapshot. </p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The name of the IAM role that is used to write to Amazon S3 when exporting a
     * snapshot. </p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The name of the IAM role that is used to write to Amazon S3 when exporting a
     * snapshot. </p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The name of the IAM role that is used to write to Amazon S3 when exporting a
     * snapshot. </p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The name of the IAM role that is used to write to Amazon S3 when exporting a
     * snapshot. </p>
     */
    inline ExportTask& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The name of the IAM role that is used to write to Amazon S3 when exporting a
     * snapshot. </p>
     */
    inline ExportTask& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role that is used to write to Amazon S3 when exporting a
     * snapshot. </p>
     */
    inline ExportTask& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The ID of the AWS KMS key that is used to encrypt the snapshot when it's
     * exported to Amazon S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS
     * key identifier, or the KMS key alias for the KMS encryption key. The IAM role
     * used for the snapshot export must have encryption and decryption permissions to
     * use this KMS key. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the AWS KMS key that is used to encrypt the snapshot when it's
     * exported to Amazon S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS
     * key identifier, or the KMS key alias for the KMS encryption key. The IAM role
     * used for the snapshot export must have encryption and decryption permissions to
     * use this KMS key. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the AWS KMS key that is used to encrypt the snapshot when it's
     * exported to Amazon S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS
     * key identifier, or the KMS key alias for the KMS encryption key. The IAM role
     * used for the snapshot export must have encryption and decryption permissions to
     * use this KMS key. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the AWS KMS key that is used to encrypt the snapshot when it's
     * exported to Amazon S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS
     * key identifier, or the KMS key alias for the KMS encryption key. The IAM role
     * used for the snapshot export must have encryption and decryption permissions to
     * use this KMS key. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the AWS KMS key that is used to encrypt the snapshot when it's
     * exported to Amazon S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS
     * key identifier, or the KMS key alias for the KMS encryption key. The IAM role
     * used for the snapshot export must have encryption and decryption permissions to
     * use this KMS key. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the AWS KMS key that is used to encrypt the snapshot when it's
     * exported to Amazon S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS
     * key identifier, or the KMS key alias for the KMS encryption key. The IAM role
     * used for the snapshot export must have encryption and decryption permissions to
     * use this KMS key. </p>
     */
    inline ExportTask& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the AWS KMS key that is used to encrypt the snapshot when it's
     * exported to Amazon S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS
     * key identifier, or the KMS key alias for the KMS encryption key. The IAM role
     * used for the snapshot export must have encryption and decryption permissions to
     * use this KMS key. </p>
     */
    inline ExportTask& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS KMS key that is used to encrypt the snapshot when it's
     * exported to Amazon S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS
     * key identifier, or the KMS key alias for the KMS encryption key. The IAM role
     * used for the snapshot export must have encryption and decryption permissions to
     * use this KMS key. </p>
     */
    inline ExportTask& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The progress status of the export task.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The progress status of the export task.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The progress status of the export task.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The progress status of the export task.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The progress status of the export task.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The progress status of the export task.</p>
     */
    inline ExportTask& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The progress status of the export task.</p>
     */
    inline ExportTask& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The progress status of the export task.</p>
     */
    inline ExportTask& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The progress of the snapshot export task as a percentage.</p>
     */
    inline int GetPercentProgress() const{ return m_percentProgress; }

    /**
     * <p>The progress of the snapshot export task as a percentage.</p>
     */
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }

    /**
     * <p>The progress of the snapshot export task as a percentage.</p>
     */
    inline void SetPercentProgress(int value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }

    /**
     * <p>The progress of the snapshot export task as a percentage.</p>
     */
    inline ExportTask& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}


    /**
     * <p>The total amount of data exported, in gigabytes.</p>
     */
    inline int GetTotalExtractedDataInGB() const{ return m_totalExtractedDataInGB; }

    /**
     * <p>The total amount of data exported, in gigabytes.</p>
     */
    inline bool TotalExtractedDataInGBHasBeenSet() const { return m_totalExtractedDataInGBHasBeenSet; }

    /**
     * <p>The total amount of data exported, in gigabytes.</p>
     */
    inline void SetTotalExtractedDataInGB(int value) { m_totalExtractedDataInGBHasBeenSet = true; m_totalExtractedDataInGB = value; }

    /**
     * <p>The total amount of data exported, in gigabytes.</p>
     */
    inline ExportTask& WithTotalExtractedDataInGB(int value) { SetTotalExtractedDataInGB(value); return *this;}


    /**
     * <p>The reason the export failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureCause() const{ return m_failureCause; }

    /**
     * <p>The reason the export failed, if it failed.</p>
     */
    inline bool FailureCauseHasBeenSet() const { return m_failureCauseHasBeenSet; }

    /**
     * <p>The reason the export failed, if it failed.</p>
     */
    inline void SetFailureCause(const Aws::String& value) { m_failureCauseHasBeenSet = true; m_failureCause = value; }

    /**
     * <p>The reason the export failed, if it failed.</p>
     */
    inline void SetFailureCause(Aws::String&& value) { m_failureCauseHasBeenSet = true; m_failureCause = std::move(value); }

    /**
     * <p>The reason the export failed, if it failed.</p>
     */
    inline void SetFailureCause(const char* value) { m_failureCauseHasBeenSet = true; m_failureCause.assign(value); }

    /**
     * <p>The reason the export failed, if it failed.</p>
     */
    inline ExportTask& WithFailureCause(const Aws::String& value) { SetFailureCause(value); return *this;}

    /**
     * <p>The reason the export failed, if it failed.</p>
     */
    inline ExportTask& WithFailureCause(Aws::String&& value) { SetFailureCause(std::move(value)); return *this;}

    /**
     * <p>The reason the export failed, if it failed.</p>
     */
    inline ExportTask& WithFailureCause(const char* value) { SetFailureCause(value); return *this;}


    /**
     * <p>A warning about the snapshot export task.</p>
     */
    inline const Aws::String& GetWarningMessage() const{ return m_warningMessage; }

    /**
     * <p>A warning about the snapshot export task.</p>
     */
    inline bool WarningMessageHasBeenSet() const { return m_warningMessageHasBeenSet; }

    /**
     * <p>A warning about the snapshot export task.</p>
     */
    inline void SetWarningMessage(const Aws::String& value) { m_warningMessageHasBeenSet = true; m_warningMessage = value; }

    /**
     * <p>A warning about the snapshot export task.</p>
     */
    inline void SetWarningMessage(Aws::String&& value) { m_warningMessageHasBeenSet = true; m_warningMessage = std::move(value); }

    /**
     * <p>A warning about the snapshot export task.</p>
     */
    inline void SetWarningMessage(const char* value) { m_warningMessageHasBeenSet = true; m_warningMessage.assign(value); }

    /**
     * <p>A warning about the snapshot export task.</p>
     */
    inline ExportTask& WithWarningMessage(const Aws::String& value) { SetWarningMessage(value); return *this;}

    /**
     * <p>A warning about the snapshot export task.</p>
     */
    inline ExportTask& WithWarningMessage(Aws::String&& value) { SetWarningMessage(std::move(value)); return *this;}

    /**
     * <p>A warning about the snapshot export task.</p>
     */
    inline ExportTask& WithWarningMessage(const char* value) { SetWarningMessage(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline ExportTask& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ExportTask& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_exportTaskIdentifier;
    bool m_exportTaskIdentifierHasBeenSet;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet;

    Aws::Vector<Aws::String> m_exportOnly;
    bool m_exportOnlyHasBeenSet;

    Aws::Utils::DateTime m_snapshotTime;
    bool m_snapshotTimeHasBeenSet;

    Aws::Utils::DateTime m_taskStartTime;
    bool m_taskStartTimeHasBeenSet;

    Aws::Utils::DateTime m_taskEndTime;
    bool m_taskEndTimeHasBeenSet;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    int m_percentProgress;
    bool m_percentProgressHasBeenSet;

    int m_totalExtractedDataInGB;
    bool m_totalExtractedDataInGBHasBeenSet;

    Aws::String m_failureCause;
    bool m_failureCauseHasBeenSet;

    Aws::String m_warningMessage;
    bool m_warningMessageHasBeenSet;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
