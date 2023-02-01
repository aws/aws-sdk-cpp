/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/CompressionTypeValue.h>
#include <aws/dms/model/EncryptionModeValue.h>
#include <aws/dms/model/DataFormatValue.h>
#include <aws/dms/model/EncodingTypeValue.h>
#include <aws/dms/model/ParquetVersionValue.h>
#include <aws/dms/model/DatePartitionSequenceValue.h>
#include <aws/dms/model/DatePartitionDelimiterValue.h>
#include <aws/dms/model/CannedAclForObjectsValue.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Settings for exporting data to Amazon S3. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/S3Settings">AWS API
   * Reference</a></p>
   */
  class S3Settings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API S3Settings();
    AWS_DATABASEMIGRATIONSERVICE_API S3Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API S3Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action. It is a required
     * parameter that enables DMS to write and read objects from an S3 bucket.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action. It is a required
     * parameter that enables DMS to write and read objects from an S3 bucket.</p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action. It is a required
     * parameter that enables DMS to write and read objects from an S3 bucket.</p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action. It is a required
     * parameter that enables DMS to write and read objects from an S3 bucket.</p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action. It is a required
     * parameter that enables DMS to write and read objects from an S3 bucket.</p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action. It is a required
     * parameter that enables DMS to write and read objects from an S3 bucket.</p>
     */
    inline S3Settings& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action. It is a required
     * parameter that enables DMS to write and read objects from an S3 bucket.</p>
     */
    inline S3Settings& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action. It is a required
     * parameter that enables DMS to write and read objects from an S3 bucket.</p>
     */
    inline S3Settings& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}


    /**
     * <p> Specifies how tables are defined in the S3 source files only. </p>
     */
    inline const Aws::String& GetExternalTableDefinition() const{ return m_externalTableDefinition; }

    /**
     * <p> Specifies how tables are defined in the S3 source files only. </p>
     */
    inline bool ExternalTableDefinitionHasBeenSet() const { return m_externalTableDefinitionHasBeenSet; }

    /**
     * <p> Specifies how tables are defined in the S3 source files only. </p>
     */
    inline void SetExternalTableDefinition(const Aws::String& value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition = value; }

    /**
     * <p> Specifies how tables are defined in the S3 source files only. </p>
     */
    inline void SetExternalTableDefinition(Aws::String&& value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition = std::move(value); }

    /**
     * <p> Specifies how tables are defined in the S3 source files only. </p>
     */
    inline void SetExternalTableDefinition(const char* value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition.assign(value); }

    /**
     * <p> Specifies how tables are defined in the S3 source files only. </p>
     */
    inline S3Settings& WithExternalTableDefinition(const Aws::String& value) { SetExternalTableDefinition(value); return *this;}

    /**
     * <p> Specifies how tables are defined in the S3 source files only. </p>
     */
    inline S3Settings& WithExternalTableDefinition(Aws::String&& value) { SetExternalTableDefinition(std::move(value)); return *this;}

    /**
     * <p> Specifies how tables are defined in the S3 source files only. </p>
     */
    inline S3Settings& WithExternalTableDefinition(const char* value) { SetExternalTableDefinition(value); return *this;}


    /**
     * <p> The delimiter used to separate rows in the .csv file for both source and
     * target. The default is a carriage return (<code>\n</code>). </p>
     */
    inline const Aws::String& GetCsvRowDelimiter() const{ return m_csvRowDelimiter; }

    /**
     * <p> The delimiter used to separate rows in the .csv file for both source and
     * target. The default is a carriage return (<code>\n</code>). </p>
     */
    inline bool CsvRowDelimiterHasBeenSet() const { return m_csvRowDelimiterHasBeenSet; }

    /**
     * <p> The delimiter used to separate rows in the .csv file for both source and
     * target. The default is a carriage return (<code>\n</code>). </p>
     */
    inline void SetCsvRowDelimiter(const Aws::String& value) { m_csvRowDelimiterHasBeenSet = true; m_csvRowDelimiter = value; }

    /**
     * <p> The delimiter used to separate rows in the .csv file for both source and
     * target. The default is a carriage return (<code>\n</code>). </p>
     */
    inline void SetCsvRowDelimiter(Aws::String&& value) { m_csvRowDelimiterHasBeenSet = true; m_csvRowDelimiter = std::move(value); }

    /**
     * <p> The delimiter used to separate rows in the .csv file for both source and
     * target. The default is a carriage return (<code>\n</code>). </p>
     */
    inline void SetCsvRowDelimiter(const char* value) { m_csvRowDelimiterHasBeenSet = true; m_csvRowDelimiter.assign(value); }

    /**
     * <p> The delimiter used to separate rows in the .csv file for both source and
     * target. The default is a carriage return (<code>\n</code>). </p>
     */
    inline S3Settings& WithCsvRowDelimiter(const Aws::String& value) { SetCsvRowDelimiter(value); return *this;}

    /**
     * <p> The delimiter used to separate rows in the .csv file for both source and
     * target. The default is a carriage return (<code>\n</code>). </p>
     */
    inline S3Settings& WithCsvRowDelimiter(Aws::String&& value) { SetCsvRowDelimiter(std::move(value)); return *this;}

    /**
     * <p> The delimiter used to separate rows in the .csv file for both source and
     * target. The default is a carriage return (<code>\n</code>). </p>
     */
    inline S3Settings& WithCsvRowDelimiter(const char* value) { SetCsvRowDelimiter(value); return *this;}


    /**
     * <p> The delimiter used to separate columns in the .csv file for both source and
     * target. The default is a comma. </p>
     */
    inline const Aws::String& GetCsvDelimiter() const{ return m_csvDelimiter; }

    /**
     * <p> The delimiter used to separate columns in the .csv file for both source and
     * target. The default is a comma. </p>
     */
    inline bool CsvDelimiterHasBeenSet() const { return m_csvDelimiterHasBeenSet; }

    /**
     * <p> The delimiter used to separate columns in the .csv file for both source and
     * target. The default is a comma. </p>
     */
    inline void SetCsvDelimiter(const Aws::String& value) { m_csvDelimiterHasBeenSet = true; m_csvDelimiter = value; }

    /**
     * <p> The delimiter used to separate columns in the .csv file for both source and
     * target. The default is a comma. </p>
     */
    inline void SetCsvDelimiter(Aws::String&& value) { m_csvDelimiterHasBeenSet = true; m_csvDelimiter = std::move(value); }

    /**
     * <p> The delimiter used to separate columns in the .csv file for both source and
     * target. The default is a comma. </p>
     */
    inline void SetCsvDelimiter(const char* value) { m_csvDelimiterHasBeenSet = true; m_csvDelimiter.assign(value); }

    /**
     * <p> The delimiter used to separate columns in the .csv file for both source and
     * target. The default is a comma. </p>
     */
    inline S3Settings& WithCsvDelimiter(const Aws::String& value) { SetCsvDelimiter(value); return *this;}

    /**
     * <p> The delimiter used to separate columns in the .csv file for both source and
     * target. The default is a comma. </p>
     */
    inline S3Settings& WithCsvDelimiter(Aws::String&& value) { SetCsvDelimiter(std::move(value)); return *this;}

    /**
     * <p> The delimiter used to separate columns in the .csv file for both source and
     * target. The default is a comma. </p>
     */
    inline S3Settings& WithCsvDelimiter(const char* value) { SetCsvDelimiter(value); return *this;}


    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path <code>
     * <i>bucketFolder</i>/<i>schema_name</i>/<i>table_name</i>/</code>. If this
     * parameter isn't specified, then the path used is <code>
     * <i>schema_name</i>/<i>table_name</i>/</code>. </p>
     */
    inline const Aws::String& GetBucketFolder() const{ return m_bucketFolder; }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path <code>
     * <i>bucketFolder</i>/<i>schema_name</i>/<i>table_name</i>/</code>. If this
     * parameter isn't specified, then the path used is <code>
     * <i>schema_name</i>/<i>table_name</i>/</code>. </p>
     */
    inline bool BucketFolderHasBeenSet() const { return m_bucketFolderHasBeenSet; }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path <code>
     * <i>bucketFolder</i>/<i>schema_name</i>/<i>table_name</i>/</code>. If this
     * parameter isn't specified, then the path used is <code>
     * <i>schema_name</i>/<i>table_name</i>/</code>. </p>
     */
    inline void SetBucketFolder(const Aws::String& value) { m_bucketFolderHasBeenSet = true; m_bucketFolder = value; }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path <code>
     * <i>bucketFolder</i>/<i>schema_name</i>/<i>table_name</i>/</code>. If this
     * parameter isn't specified, then the path used is <code>
     * <i>schema_name</i>/<i>table_name</i>/</code>. </p>
     */
    inline void SetBucketFolder(Aws::String&& value) { m_bucketFolderHasBeenSet = true; m_bucketFolder = std::move(value); }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path <code>
     * <i>bucketFolder</i>/<i>schema_name</i>/<i>table_name</i>/</code>. If this
     * parameter isn't specified, then the path used is <code>
     * <i>schema_name</i>/<i>table_name</i>/</code>. </p>
     */
    inline void SetBucketFolder(const char* value) { m_bucketFolderHasBeenSet = true; m_bucketFolder.assign(value); }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path <code>
     * <i>bucketFolder</i>/<i>schema_name</i>/<i>table_name</i>/</code>. If this
     * parameter isn't specified, then the path used is <code>
     * <i>schema_name</i>/<i>table_name</i>/</code>. </p>
     */
    inline S3Settings& WithBucketFolder(const Aws::String& value) { SetBucketFolder(value); return *this;}

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path <code>
     * <i>bucketFolder</i>/<i>schema_name</i>/<i>table_name</i>/</code>. If this
     * parameter isn't specified, then the path used is <code>
     * <i>schema_name</i>/<i>table_name</i>/</code>. </p>
     */
    inline S3Settings& WithBucketFolder(Aws::String&& value) { SetBucketFolder(std::move(value)); return *this;}

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path <code>
     * <i>bucketFolder</i>/<i>schema_name</i>/<i>table_name</i>/</code>. If this
     * parameter isn't specified, then the path used is <code>
     * <i>schema_name</i>/<i>table_name</i>/</code>. </p>
     */
    inline S3Settings& WithBucketFolder(const char* value) { SetBucketFolder(value); return *this;}


    /**
     * <p> The name of the S3 bucket. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p> The name of the S3 bucket. </p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p> The name of the S3 bucket. </p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p> The name of the S3 bucket. </p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p> The name of the S3 bucket. </p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p> The name of the S3 bucket. </p>
     */
    inline S3Settings& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p> The name of the S3 bucket. </p>
     */
    inline S3Settings& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p> The name of the S3 bucket. </p>
     */
    inline S3Settings& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Either set this parameter to NONE (the default) or
     * don't use it to leave the files uncompressed. This parameter applies to both
     * .csv and .parquet file formats. </p>
     */
    inline const CompressionTypeValue& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p>An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Either set this parameter to NONE (the default) or
     * don't use it to leave the files uncompressed. This parameter applies to both
     * .csv and .parquet file formats. </p>
     */
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }

    /**
     * <p>An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Either set this parameter to NONE (the default) or
     * don't use it to leave the files uncompressed. This parameter applies to both
     * .csv and .parquet file formats. </p>
     */
    inline void SetCompressionType(const CompressionTypeValue& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p>An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Either set this parameter to NONE (the default) or
     * don't use it to leave the files uncompressed. This parameter applies to both
     * .csv and .parquet file formats. </p>
     */
    inline void SetCompressionType(CompressionTypeValue&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p>An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Either set this parameter to NONE (the default) or
     * don't use it to leave the files uncompressed. This parameter applies to both
     * .csv and .parquet file formats. </p>
     */
    inline S3Settings& WithCompressionType(const CompressionTypeValue& value) { SetCompressionType(value); return *this;}

    /**
     * <p>An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Either set this parameter to NONE (the default) or
     * don't use it to leave the files uncompressed. This parameter applies to both
     * .csv and .parquet file formats. </p>
     */
    inline S3Settings& WithCompressionType(CompressionTypeValue&& value) { SetCompressionType(std::move(value)); return *this;}


    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. </p>  <p>For the
     * <code>ModifyEndpoint</code> operation, you can change the existing value of the
     * <code>EncryptionMode</code> parameter from <code>SSE_KMS</code> to
     * <code>SSE_S3</code>. But you can’t change the existing value from
     * <code>SSE_S3</code> to <code>SSE_KMS</code>.</p>  <p>To use
     * <code>SSE_S3</code>, you need an Identity and Access Management (IAM) role with
     * permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
     * actions:</p> <ul> <li> <p> <code>s3:CreateBucket</code> </p> </li> <li> <p>
     * <code>s3:ListBucket</code> </p> </li> <li> <p> <code>s3:DeleteBucket</code> </p>
     * </li> <li> <p> <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:GetObject</code> </p> </li> <li> <p> <code>s3:PutObject</code> </p>
     * </li> <li> <p> <code>s3:DeleteObject</code> </p> </li> <li> <p>
     * <code>s3:GetObjectVersion</code> </p> </li> <li> <p>
     * <code>s3:GetBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:PutBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:DeleteBucketPolicy</code> </p> </li> </ul>
     */
    inline const EncryptionModeValue& GetEncryptionMode() const{ return m_encryptionMode; }

    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. </p>  <p>For the
     * <code>ModifyEndpoint</code> operation, you can change the existing value of the
     * <code>EncryptionMode</code> parameter from <code>SSE_KMS</code> to
     * <code>SSE_S3</code>. But you can’t change the existing value from
     * <code>SSE_S3</code> to <code>SSE_KMS</code>.</p>  <p>To use
     * <code>SSE_S3</code>, you need an Identity and Access Management (IAM) role with
     * permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
     * actions:</p> <ul> <li> <p> <code>s3:CreateBucket</code> </p> </li> <li> <p>
     * <code>s3:ListBucket</code> </p> </li> <li> <p> <code>s3:DeleteBucket</code> </p>
     * </li> <li> <p> <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:GetObject</code> </p> </li> <li> <p> <code>s3:PutObject</code> </p>
     * </li> <li> <p> <code>s3:DeleteObject</code> </p> </li> <li> <p>
     * <code>s3:GetObjectVersion</code> </p> </li> <li> <p>
     * <code>s3:GetBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:PutBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:DeleteBucketPolicy</code> </p> </li> </ul>
     */
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }

    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. </p>  <p>For the
     * <code>ModifyEndpoint</code> operation, you can change the existing value of the
     * <code>EncryptionMode</code> parameter from <code>SSE_KMS</code> to
     * <code>SSE_S3</code>. But you can’t change the existing value from
     * <code>SSE_S3</code> to <code>SSE_KMS</code>.</p>  <p>To use
     * <code>SSE_S3</code>, you need an Identity and Access Management (IAM) role with
     * permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
     * actions:</p> <ul> <li> <p> <code>s3:CreateBucket</code> </p> </li> <li> <p>
     * <code>s3:ListBucket</code> </p> </li> <li> <p> <code>s3:DeleteBucket</code> </p>
     * </li> <li> <p> <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:GetObject</code> </p> </li> <li> <p> <code>s3:PutObject</code> </p>
     * </li> <li> <p> <code>s3:DeleteObject</code> </p> </li> <li> <p>
     * <code>s3:GetObjectVersion</code> </p> </li> <li> <p>
     * <code>s3:GetBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:PutBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:DeleteBucketPolicy</code> </p> </li> </ul>
     */
    inline void SetEncryptionMode(const EncryptionModeValue& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }

    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. </p>  <p>For the
     * <code>ModifyEndpoint</code> operation, you can change the existing value of the
     * <code>EncryptionMode</code> parameter from <code>SSE_KMS</code> to
     * <code>SSE_S3</code>. But you can’t change the existing value from
     * <code>SSE_S3</code> to <code>SSE_KMS</code>.</p>  <p>To use
     * <code>SSE_S3</code>, you need an Identity and Access Management (IAM) role with
     * permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
     * actions:</p> <ul> <li> <p> <code>s3:CreateBucket</code> </p> </li> <li> <p>
     * <code>s3:ListBucket</code> </p> </li> <li> <p> <code>s3:DeleteBucket</code> </p>
     * </li> <li> <p> <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:GetObject</code> </p> </li> <li> <p> <code>s3:PutObject</code> </p>
     * </li> <li> <p> <code>s3:DeleteObject</code> </p> </li> <li> <p>
     * <code>s3:GetObjectVersion</code> </p> </li> <li> <p>
     * <code>s3:GetBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:PutBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:DeleteBucketPolicy</code> </p> </li> </ul>
     */
    inline void SetEncryptionMode(EncryptionModeValue&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::move(value); }

    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. </p>  <p>For the
     * <code>ModifyEndpoint</code> operation, you can change the existing value of the
     * <code>EncryptionMode</code> parameter from <code>SSE_KMS</code> to
     * <code>SSE_S3</code>. But you can’t change the existing value from
     * <code>SSE_S3</code> to <code>SSE_KMS</code>.</p>  <p>To use
     * <code>SSE_S3</code>, you need an Identity and Access Management (IAM) role with
     * permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
     * actions:</p> <ul> <li> <p> <code>s3:CreateBucket</code> </p> </li> <li> <p>
     * <code>s3:ListBucket</code> </p> </li> <li> <p> <code>s3:DeleteBucket</code> </p>
     * </li> <li> <p> <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:GetObject</code> </p> </li> <li> <p> <code>s3:PutObject</code> </p>
     * </li> <li> <p> <code>s3:DeleteObject</code> </p> </li> <li> <p>
     * <code>s3:GetObjectVersion</code> </p> </li> <li> <p>
     * <code>s3:GetBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:PutBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:DeleteBucketPolicy</code> </p> </li> </ul>
     */
    inline S3Settings& WithEncryptionMode(const EncryptionModeValue& value) { SetEncryptionMode(value); return *this;}

    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. </p>  <p>For the
     * <code>ModifyEndpoint</code> operation, you can change the existing value of the
     * <code>EncryptionMode</code> parameter from <code>SSE_KMS</code> to
     * <code>SSE_S3</code>. But you can’t change the existing value from
     * <code>SSE_S3</code> to <code>SSE_KMS</code>.</p>  <p>To use
     * <code>SSE_S3</code>, you need an Identity and Access Management (IAM) role with
     * permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
     * actions:</p> <ul> <li> <p> <code>s3:CreateBucket</code> </p> </li> <li> <p>
     * <code>s3:ListBucket</code> </p> </li> <li> <p> <code>s3:DeleteBucket</code> </p>
     * </li> <li> <p> <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:GetObject</code> </p> </li> <li> <p> <code>s3:PutObject</code> </p>
     * </li> <li> <p> <code>s3:DeleteObject</code> </p> </li> <li> <p>
     * <code>s3:GetObjectVersion</code> </p> </li> <li> <p>
     * <code>s3:GetBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:PutBucketPolicy</code> </p> </li> <li> <p>
     * <code>s3:DeleteBucketPolicy</code> </p> </li> </ul>
     */
    inline S3Settings& WithEncryptionMode(EncryptionModeValue&& value) { SetEncryptionMode(std::move(value)); return *this;}


    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the KMS key ID. The key that you use needs an attached policy that
     * enables Identity and Access Management (IAM) user permissions and allows use of
     * the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline const Aws::String& GetServerSideEncryptionKmsKeyId() const{ return m_serverSideEncryptionKmsKeyId; }

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the KMS key ID. The key that you use needs an attached policy that
     * enables Identity and Access Management (IAM) user permissions and allows use of
     * the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline bool ServerSideEncryptionKmsKeyIdHasBeenSet() const { return m_serverSideEncryptionKmsKeyIdHasBeenSet; }

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the KMS key ID. The key that you use needs an attached policy that
     * enables Identity and Access Management (IAM) user permissions and allows use of
     * the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline void SetServerSideEncryptionKmsKeyId(const Aws::String& value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId = value; }

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the KMS key ID. The key that you use needs an attached policy that
     * enables Identity and Access Management (IAM) user permissions and allows use of
     * the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline void SetServerSideEncryptionKmsKeyId(Aws::String&& value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId = std::move(value); }

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the KMS key ID. The key that you use needs an attached policy that
     * enables Identity and Access Management (IAM) user permissions and allows use of
     * the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline void SetServerSideEncryptionKmsKeyId(const char* value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId.assign(value); }

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the KMS key ID. The key that you use needs an attached policy that
     * enables Identity and Access Management (IAM) user permissions and allows use of
     * the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline S3Settings& WithServerSideEncryptionKmsKeyId(const Aws::String& value) { SetServerSideEncryptionKmsKeyId(value); return *this;}

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the KMS key ID. The key that you use needs an attached policy that
     * enables Identity and Access Management (IAM) user permissions and allows use of
     * the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline S3Settings& WithServerSideEncryptionKmsKeyId(Aws::String&& value) { SetServerSideEncryptionKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the KMS key ID. The key that you use needs an attached policy that
     * enables Identity and Access Management (IAM) user permissions and allows use of
     * the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline S3Settings& WithServerSideEncryptionKmsKeyId(const char* value) { SetServerSideEncryptionKmsKeyId(value); return *this;}


    /**
     * <p>The format of the data that you want to use for output. You can choose one of
     * the following: </p> <ul> <li> <p> <code>csv</code> : This is a row-based file
     * format with comma-separated values (.csv). </p> </li> <li> <p>
     * <code>parquet</code> : Apache Parquet (.parquet) is a columnar storage file
     * format that features efficient compression and provides faster query response.
     * </p> </li> </ul>
     */
    inline const DataFormatValue& GetDataFormat() const{ return m_dataFormat; }

    /**
     * <p>The format of the data that you want to use for output. You can choose one of
     * the following: </p> <ul> <li> <p> <code>csv</code> : This is a row-based file
     * format with comma-separated values (.csv). </p> </li> <li> <p>
     * <code>parquet</code> : Apache Parquet (.parquet) is a columnar storage file
     * format that features efficient compression and provides faster query response.
     * </p> </li> </ul>
     */
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }

    /**
     * <p>The format of the data that you want to use for output. You can choose one of
     * the following: </p> <ul> <li> <p> <code>csv</code> : This is a row-based file
     * format with comma-separated values (.csv). </p> </li> <li> <p>
     * <code>parquet</code> : Apache Parquet (.parquet) is a columnar storage file
     * format that features efficient compression and provides faster query response.
     * </p> </li> </ul>
     */
    inline void SetDataFormat(const DataFormatValue& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }

    /**
     * <p>The format of the data that you want to use for output. You can choose one of
     * the following: </p> <ul> <li> <p> <code>csv</code> : This is a row-based file
     * format with comma-separated values (.csv). </p> </li> <li> <p>
     * <code>parquet</code> : Apache Parquet (.parquet) is a columnar storage file
     * format that features efficient compression and provides faster query response.
     * </p> </li> </ul>
     */
    inline void SetDataFormat(DataFormatValue&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }

    /**
     * <p>The format of the data that you want to use for output. You can choose one of
     * the following: </p> <ul> <li> <p> <code>csv</code> : This is a row-based file
     * format with comma-separated values (.csv). </p> </li> <li> <p>
     * <code>parquet</code> : Apache Parquet (.parquet) is a columnar storage file
     * format that features efficient compression and provides faster query response.
     * </p> </li> </ul>
     */
    inline S3Settings& WithDataFormat(const DataFormatValue& value) { SetDataFormat(value); return *this;}

    /**
     * <p>The format of the data that you want to use for output. You can choose one of
     * the following: </p> <ul> <li> <p> <code>csv</code> : This is a row-based file
     * format with comma-separated values (.csv). </p> </li> <li> <p>
     * <code>parquet</code> : Apache Parquet (.parquet) is a columnar storage file
     * format that features efficient compression and provides faster query response.
     * </p> </li> </ul>
     */
    inline S3Settings& WithDataFormat(DataFormatValue&& value) { SetDataFormat(std::move(value)); return *this;}


    /**
     * <p>The type of encoding you are using: </p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently. This is the default.</p>
     * </li> <li> <p> <code>PLAIN</code> doesn't use encoding at all. Values are stored
     * as they are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a
     * dictionary of the values encountered in a given column. The dictionary is stored
     * in a dictionary page for each column chunk.</p> </li> </ul>
     */
    inline const EncodingTypeValue& GetEncodingType() const{ return m_encodingType; }

    /**
     * <p>The type of encoding you are using: </p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently. This is the default.</p>
     * </li> <li> <p> <code>PLAIN</code> doesn't use encoding at all. Values are stored
     * as they are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a
     * dictionary of the values encountered in a given column. The dictionary is stored
     * in a dictionary page for each column chunk.</p> </li> </ul>
     */
    inline bool EncodingTypeHasBeenSet() const { return m_encodingTypeHasBeenSet; }

    /**
     * <p>The type of encoding you are using: </p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently. This is the default.</p>
     * </li> <li> <p> <code>PLAIN</code> doesn't use encoding at all. Values are stored
     * as they are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a
     * dictionary of the values encountered in a given column. The dictionary is stored
     * in a dictionary page for each column chunk.</p> </li> </ul>
     */
    inline void SetEncodingType(const EncodingTypeValue& value) { m_encodingTypeHasBeenSet = true; m_encodingType = value; }

    /**
     * <p>The type of encoding you are using: </p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently. This is the default.</p>
     * </li> <li> <p> <code>PLAIN</code> doesn't use encoding at all. Values are stored
     * as they are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a
     * dictionary of the values encountered in a given column. The dictionary is stored
     * in a dictionary page for each column chunk.</p> </li> </ul>
     */
    inline void SetEncodingType(EncodingTypeValue&& value) { m_encodingTypeHasBeenSet = true; m_encodingType = std::move(value); }

    /**
     * <p>The type of encoding you are using: </p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently. This is the default.</p>
     * </li> <li> <p> <code>PLAIN</code> doesn't use encoding at all. Values are stored
     * as they are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a
     * dictionary of the values encountered in a given column. The dictionary is stored
     * in a dictionary page for each column chunk.</p> </li> </ul>
     */
    inline S3Settings& WithEncodingType(const EncodingTypeValue& value) { SetEncodingType(value); return *this;}

    /**
     * <p>The type of encoding you are using: </p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently. This is the default.</p>
     * </li> <li> <p> <code>PLAIN</code> doesn't use encoding at all. Values are stored
     * as they are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a
     * dictionary of the values encountered in a given column. The dictionary is stored
     * in a dictionary page for each column chunk.</p> </li> </ul>
     */
    inline S3Settings& WithEncodingType(EncodingTypeValue&& value) { SetEncodingType(std::move(value)); return *this;}


    /**
     * <p>The maximum size of an encoded dictionary page of a column. If the dictionary
     * page exceeds this, this column is stored using an encoding type of
     * <code>PLAIN</code>. This parameter defaults to 1024 * 1024 bytes (1 MiB), the
     * maximum size of a dictionary page before it reverts to <code>PLAIN</code>
     * encoding. This size is used for .parquet file format only. </p>
     */
    inline int GetDictPageSizeLimit() const{ return m_dictPageSizeLimit; }

    /**
     * <p>The maximum size of an encoded dictionary page of a column. If the dictionary
     * page exceeds this, this column is stored using an encoding type of
     * <code>PLAIN</code>. This parameter defaults to 1024 * 1024 bytes (1 MiB), the
     * maximum size of a dictionary page before it reverts to <code>PLAIN</code>
     * encoding. This size is used for .parquet file format only. </p>
     */
    inline bool DictPageSizeLimitHasBeenSet() const { return m_dictPageSizeLimitHasBeenSet; }

    /**
     * <p>The maximum size of an encoded dictionary page of a column. If the dictionary
     * page exceeds this, this column is stored using an encoding type of
     * <code>PLAIN</code>. This parameter defaults to 1024 * 1024 bytes (1 MiB), the
     * maximum size of a dictionary page before it reverts to <code>PLAIN</code>
     * encoding. This size is used for .parquet file format only. </p>
     */
    inline void SetDictPageSizeLimit(int value) { m_dictPageSizeLimitHasBeenSet = true; m_dictPageSizeLimit = value; }

    /**
     * <p>The maximum size of an encoded dictionary page of a column. If the dictionary
     * page exceeds this, this column is stored using an encoding type of
     * <code>PLAIN</code>. This parameter defaults to 1024 * 1024 bytes (1 MiB), the
     * maximum size of a dictionary page before it reverts to <code>PLAIN</code>
     * encoding. This size is used for .parquet file format only. </p>
     */
    inline S3Settings& WithDictPageSizeLimit(int value) { SetDictPageSizeLimit(value); return *this;}


    /**
     * <p>The number of rows in a row group. A smaller row group size provides faster
     * reads. But as the number of row groups grows, the slower writes become. This
     * parameter defaults to 10,000 rows. This number is used for .parquet file format
     * only. </p> <p>If you choose a value larger than the maximum,
     * <code>RowGroupLength</code> is set to the max row group length in bytes (64 *
     * 1024 * 1024). </p>
     */
    inline int GetRowGroupLength() const{ return m_rowGroupLength; }

    /**
     * <p>The number of rows in a row group. A smaller row group size provides faster
     * reads. But as the number of row groups grows, the slower writes become. This
     * parameter defaults to 10,000 rows. This number is used for .parquet file format
     * only. </p> <p>If you choose a value larger than the maximum,
     * <code>RowGroupLength</code> is set to the max row group length in bytes (64 *
     * 1024 * 1024). </p>
     */
    inline bool RowGroupLengthHasBeenSet() const { return m_rowGroupLengthHasBeenSet; }

    /**
     * <p>The number of rows in a row group. A smaller row group size provides faster
     * reads. But as the number of row groups grows, the slower writes become. This
     * parameter defaults to 10,000 rows. This number is used for .parquet file format
     * only. </p> <p>If you choose a value larger than the maximum,
     * <code>RowGroupLength</code> is set to the max row group length in bytes (64 *
     * 1024 * 1024). </p>
     */
    inline void SetRowGroupLength(int value) { m_rowGroupLengthHasBeenSet = true; m_rowGroupLength = value; }

    /**
     * <p>The number of rows in a row group. A smaller row group size provides faster
     * reads. But as the number of row groups grows, the slower writes become. This
     * parameter defaults to 10,000 rows. This number is used for .parquet file format
     * only. </p> <p>If you choose a value larger than the maximum,
     * <code>RowGroupLength</code> is set to the max row group length in bytes (64 *
     * 1024 * 1024). </p>
     */
    inline S3Settings& WithRowGroupLength(int value) { SetRowGroupLength(value); return *this;}


    /**
     * <p>The size of one data page in bytes. This parameter defaults to 1024 * 1024
     * bytes (1 MiB). This number is used for .parquet file format only. </p>
     */
    inline int GetDataPageSize() const{ return m_dataPageSize; }

    /**
     * <p>The size of one data page in bytes. This parameter defaults to 1024 * 1024
     * bytes (1 MiB). This number is used for .parquet file format only. </p>
     */
    inline bool DataPageSizeHasBeenSet() const { return m_dataPageSizeHasBeenSet; }

    /**
     * <p>The size of one data page in bytes. This parameter defaults to 1024 * 1024
     * bytes (1 MiB). This number is used for .parquet file format only. </p>
     */
    inline void SetDataPageSize(int value) { m_dataPageSizeHasBeenSet = true; m_dataPageSize = value; }

    /**
     * <p>The size of one data page in bytes. This parameter defaults to 1024 * 1024
     * bytes (1 MiB). This number is used for .parquet file format only. </p>
     */
    inline S3Settings& WithDataPageSize(int value) { SetDataPageSize(value); return *this;}


    /**
     * <p>The version of the Apache Parquet format that you want to use:
     * <code>parquet_1_0</code> (the default) or <code>parquet_2_0</code>.</p>
     */
    inline const ParquetVersionValue& GetParquetVersion() const{ return m_parquetVersion; }

    /**
     * <p>The version of the Apache Parquet format that you want to use:
     * <code>parquet_1_0</code> (the default) or <code>parquet_2_0</code>.</p>
     */
    inline bool ParquetVersionHasBeenSet() const { return m_parquetVersionHasBeenSet; }

    /**
     * <p>The version of the Apache Parquet format that you want to use:
     * <code>parquet_1_0</code> (the default) or <code>parquet_2_0</code>.</p>
     */
    inline void SetParquetVersion(const ParquetVersionValue& value) { m_parquetVersionHasBeenSet = true; m_parquetVersion = value; }

    /**
     * <p>The version of the Apache Parquet format that you want to use:
     * <code>parquet_1_0</code> (the default) or <code>parquet_2_0</code>.</p>
     */
    inline void SetParquetVersion(ParquetVersionValue&& value) { m_parquetVersionHasBeenSet = true; m_parquetVersion = std::move(value); }

    /**
     * <p>The version of the Apache Parquet format that you want to use:
     * <code>parquet_1_0</code> (the default) or <code>parquet_2_0</code>.</p>
     */
    inline S3Settings& WithParquetVersion(const ParquetVersionValue& value) { SetParquetVersion(value); return *this;}

    /**
     * <p>The version of the Apache Parquet format that you want to use:
     * <code>parquet_1_0</code> (the default) or <code>parquet_2_0</code>.</p>
     */
    inline S3Settings& WithParquetVersion(ParquetVersionValue&& value) { SetParquetVersion(std::move(value)); return *this;}


    /**
     * <p>A value that enables statistics for Parquet pages and row groups. Choose
     * <code>true</code> to enable statistics, <code>false</code> to disable.
     * Statistics include <code>NULL</code>, <code>DISTINCT</code>, <code>MAX</code>,
     * and <code>MIN</code> values. This parameter defaults to <code>true</code>. This
     * value is used for .parquet file format only.</p>
     */
    inline bool GetEnableStatistics() const{ return m_enableStatistics; }

    /**
     * <p>A value that enables statistics for Parquet pages and row groups. Choose
     * <code>true</code> to enable statistics, <code>false</code> to disable.
     * Statistics include <code>NULL</code>, <code>DISTINCT</code>, <code>MAX</code>,
     * and <code>MIN</code> values. This parameter defaults to <code>true</code>. This
     * value is used for .parquet file format only.</p>
     */
    inline bool EnableStatisticsHasBeenSet() const { return m_enableStatisticsHasBeenSet; }

    /**
     * <p>A value that enables statistics for Parquet pages and row groups. Choose
     * <code>true</code> to enable statistics, <code>false</code> to disable.
     * Statistics include <code>NULL</code>, <code>DISTINCT</code>, <code>MAX</code>,
     * and <code>MIN</code> values. This parameter defaults to <code>true</code>. This
     * value is used for .parquet file format only.</p>
     */
    inline void SetEnableStatistics(bool value) { m_enableStatisticsHasBeenSet = true; m_enableStatistics = value; }

    /**
     * <p>A value that enables statistics for Parquet pages and row groups. Choose
     * <code>true</code> to enable statistics, <code>false</code> to disable.
     * Statistics include <code>NULL</code>, <code>DISTINCT</code>, <code>MAX</code>,
     * and <code>MIN</code> values. This parameter defaults to <code>true</code>. This
     * value is used for .parquet file format only.</p>
     */
    inline S3Settings& WithEnableStatistics(bool value) { SetEnableStatistics(value); return *this;}


    /**
     * <p>A value that enables a full load to write INSERT operations to the
     * comma-separated value (.csv) output files only to indicate how the rows were
     * added to the source database.</p>  <p>DMS supports the
     * <code>IncludeOpForFullLoad</code> parameter in versions 3.1.4 and later.</p>
     *  <p>For full load, records can only be inserted. By default (the
     * <code>false</code> setting), no information is recorded in these output files
     * for a full load to indicate that the rows were inserted at the source database.
     * If <code>IncludeOpForFullLoad</code> is set to <code>true</code> or
     * <code>y</code>, the INSERT is recorded as an I annotation in the first field of
     * the .csv file. This allows the format of your target records from a full load to
     * be consistent with the target records from a CDC load.</p>  <p>This
     * setting works together with the <code>CdcInsertsOnly</code> and the
     * <code>CdcInsertsAndUpdates</code> parameters for output to .csv files only. For
     * more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p> 
     */
    inline bool GetIncludeOpForFullLoad() const{ return m_includeOpForFullLoad; }

    /**
     * <p>A value that enables a full load to write INSERT operations to the
     * comma-separated value (.csv) output files only to indicate how the rows were
     * added to the source database.</p>  <p>DMS supports the
     * <code>IncludeOpForFullLoad</code> parameter in versions 3.1.4 and later.</p>
     *  <p>For full load, records can only be inserted. By default (the
     * <code>false</code> setting), no information is recorded in these output files
     * for a full load to indicate that the rows were inserted at the source database.
     * If <code>IncludeOpForFullLoad</code> is set to <code>true</code> or
     * <code>y</code>, the INSERT is recorded as an I annotation in the first field of
     * the .csv file. This allows the format of your target records from a full load to
     * be consistent with the target records from a CDC load.</p>  <p>This
     * setting works together with the <code>CdcInsertsOnly</code> and the
     * <code>CdcInsertsAndUpdates</code> parameters for output to .csv files only. For
     * more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p> 
     */
    inline bool IncludeOpForFullLoadHasBeenSet() const { return m_includeOpForFullLoadHasBeenSet; }

    /**
     * <p>A value that enables a full load to write INSERT operations to the
     * comma-separated value (.csv) output files only to indicate how the rows were
     * added to the source database.</p>  <p>DMS supports the
     * <code>IncludeOpForFullLoad</code> parameter in versions 3.1.4 and later.</p>
     *  <p>For full load, records can only be inserted. By default (the
     * <code>false</code> setting), no information is recorded in these output files
     * for a full load to indicate that the rows were inserted at the source database.
     * If <code>IncludeOpForFullLoad</code> is set to <code>true</code> or
     * <code>y</code>, the INSERT is recorded as an I annotation in the first field of
     * the .csv file. This allows the format of your target records from a full load to
     * be consistent with the target records from a CDC load.</p>  <p>This
     * setting works together with the <code>CdcInsertsOnly</code> and the
     * <code>CdcInsertsAndUpdates</code> parameters for output to .csv files only. For
     * more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p> 
     */
    inline void SetIncludeOpForFullLoad(bool value) { m_includeOpForFullLoadHasBeenSet = true; m_includeOpForFullLoad = value; }

    /**
     * <p>A value that enables a full load to write INSERT operations to the
     * comma-separated value (.csv) output files only to indicate how the rows were
     * added to the source database.</p>  <p>DMS supports the
     * <code>IncludeOpForFullLoad</code> parameter in versions 3.1.4 and later.</p>
     *  <p>For full load, records can only be inserted. By default (the
     * <code>false</code> setting), no information is recorded in these output files
     * for a full load to indicate that the rows were inserted at the source database.
     * If <code>IncludeOpForFullLoad</code> is set to <code>true</code> or
     * <code>y</code>, the INSERT is recorded as an I annotation in the first field of
     * the .csv file. This allows the format of your target records from a full load to
     * be consistent with the target records from a CDC load.</p>  <p>This
     * setting works together with the <code>CdcInsertsOnly</code> and the
     * <code>CdcInsertsAndUpdates</code> parameters for output to .csv files only. For
     * more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p> 
     */
    inline S3Settings& WithIncludeOpForFullLoad(bool value) { SetIncludeOpForFullLoad(value); return *this;}


    /**
     * <p>A value that enables a change data capture (CDC) load to write only INSERT
     * operations to .csv or columnar storage (.parquet) output files. By default (the
     * <code>false</code> setting), the first field in a .csv or .parquet record
     * contains the letter I (INSERT), U (UPDATE), or D (DELETE). These values indicate
     * whether the row was inserted, updated, or deleted at the source database for a
     * CDC load to the target.</p> <p>If <code>CdcInsertsOnly</code> is set to
     * <code>true</code> or <code>y</code>, only INSERTs from the source database are
     * migrated to the .csv or .parquet file. For .csv format only, how these INSERTs
     * are recorded depends on the value of <code>IncludeOpForFullLoad</code>. If
     * <code>IncludeOpForFullLoad</code> is set to <code>true</code>, the first field
     * of every CDC record is set to I to indicate the INSERT operation at the source.
     * If <code>IncludeOpForFullLoad</code> is set to <code>false</code>, every CDC
     * record is written without a first field to indicate the INSERT operation at the
     * source. For more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p>  <p>DMS supports the interaction described
     * preceding between the <code>CdcInsertsOnly</code> and
     * <code>IncludeOpForFullLoad</code> parameters in versions 3.1.4 and later. </p>
     * <p> <code>CdcInsertsOnly</code> and <code>CdcInsertsAndUpdates</code> can't both
     * be set to <code>true</code> for the same endpoint. Set either
     * <code>CdcInsertsOnly</code> or <code>CdcInsertsAndUpdates</code> to
     * <code>true</code> for the same endpoint, but not both.</p> 
     */
    inline bool GetCdcInsertsOnly() const{ return m_cdcInsertsOnly; }

    /**
     * <p>A value that enables a change data capture (CDC) load to write only INSERT
     * operations to .csv or columnar storage (.parquet) output files. By default (the
     * <code>false</code> setting), the first field in a .csv or .parquet record
     * contains the letter I (INSERT), U (UPDATE), or D (DELETE). These values indicate
     * whether the row was inserted, updated, or deleted at the source database for a
     * CDC load to the target.</p> <p>If <code>CdcInsertsOnly</code> is set to
     * <code>true</code> or <code>y</code>, only INSERTs from the source database are
     * migrated to the .csv or .parquet file. For .csv format only, how these INSERTs
     * are recorded depends on the value of <code>IncludeOpForFullLoad</code>. If
     * <code>IncludeOpForFullLoad</code> is set to <code>true</code>, the first field
     * of every CDC record is set to I to indicate the INSERT operation at the source.
     * If <code>IncludeOpForFullLoad</code> is set to <code>false</code>, every CDC
     * record is written without a first field to indicate the INSERT operation at the
     * source. For more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p>  <p>DMS supports the interaction described
     * preceding between the <code>CdcInsertsOnly</code> and
     * <code>IncludeOpForFullLoad</code> parameters in versions 3.1.4 and later. </p>
     * <p> <code>CdcInsertsOnly</code> and <code>CdcInsertsAndUpdates</code> can't both
     * be set to <code>true</code> for the same endpoint. Set either
     * <code>CdcInsertsOnly</code> or <code>CdcInsertsAndUpdates</code> to
     * <code>true</code> for the same endpoint, but not both.</p> 
     */
    inline bool CdcInsertsOnlyHasBeenSet() const { return m_cdcInsertsOnlyHasBeenSet; }

    /**
     * <p>A value that enables a change data capture (CDC) load to write only INSERT
     * operations to .csv or columnar storage (.parquet) output files. By default (the
     * <code>false</code> setting), the first field in a .csv or .parquet record
     * contains the letter I (INSERT), U (UPDATE), or D (DELETE). These values indicate
     * whether the row was inserted, updated, or deleted at the source database for a
     * CDC load to the target.</p> <p>If <code>CdcInsertsOnly</code> is set to
     * <code>true</code> or <code>y</code>, only INSERTs from the source database are
     * migrated to the .csv or .parquet file. For .csv format only, how these INSERTs
     * are recorded depends on the value of <code>IncludeOpForFullLoad</code>. If
     * <code>IncludeOpForFullLoad</code> is set to <code>true</code>, the first field
     * of every CDC record is set to I to indicate the INSERT operation at the source.
     * If <code>IncludeOpForFullLoad</code> is set to <code>false</code>, every CDC
     * record is written without a first field to indicate the INSERT operation at the
     * source. For more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p>  <p>DMS supports the interaction described
     * preceding between the <code>CdcInsertsOnly</code> and
     * <code>IncludeOpForFullLoad</code> parameters in versions 3.1.4 and later. </p>
     * <p> <code>CdcInsertsOnly</code> and <code>CdcInsertsAndUpdates</code> can't both
     * be set to <code>true</code> for the same endpoint. Set either
     * <code>CdcInsertsOnly</code> or <code>CdcInsertsAndUpdates</code> to
     * <code>true</code> for the same endpoint, but not both.</p> 
     */
    inline void SetCdcInsertsOnly(bool value) { m_cdcInsertsOnlyHasBeenSet = true; m_cdcInsertsOnly = value; }

    /**
     * <p>A value that enables a change data capture (CDC) load to write only INSERT
     * operations to .csv or columnar storage (.parquet) output files. By default (the
     * <code>false</code> setting), the first field in a .csv or .parquet record
     * contains the letter I (INSERT), U (UPDATE), or D (DELETE). These values indicate
     * whether the row was inserted, updated, or deleted at the source database for a
     * CDC load to the target.</p> <p>If <code>CdcInsertsOnly</code> is set to
     * <code>true</code> or <code>y</code>, only INSERTs from the source database are
     * migrated to the .csv or .parquet file. For .csv format only, how these INSERTs
     * are recorded depends on the value of <code>IncludeOpForFullLoad</code>. If
     * <code>IncludeOpForFullLoad</code> is set to <code>true</code>, the first field
     * of every CDC record is set to I to indicate the INSERT operation at the source.
     * If <code>IncludeOpForFullLoad</code> is set to <code>false</code>, every CDC
     * record is written without a first field to indicate the INSERT operation at the
     * source. For more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p>  <p>DMS supports the interaction described
     * preceding between the <code>CdcInsertsOnly</code> and
     * <code>IncludeOpForFullLoad</code> parameters in versions 3.1.4 and later. </p>
     * <p> <code>CdcInsertsOnly</code> and <code>CdcInsertsAndUpdates</code> can't both
     * be set to <code>true</code> for the same endpoint. Set either
     * <code>CdcInsertsOnly</code> or <code>CdcInsertsAndUpdates</code> to
     * <code>true</code> for the same endpoint, but not both.</p> 
     */
    inline S3Settings& WithCdcInsertsOnly(bool value) { SetCdcInsertsOnly(value); return *this;}


    /**
     * <p>A value that when nonblank causes DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>DMS
     * supports the <code>TimestampColumnName</code> parameter in versions 3.1.4 and
     * later.</p>  <p>DMS includes an additional <code>STRING</code> column in
     * the .csv or .parquet object files of your migrated data when you set
     * <code>TimestampColumnName</code> to a nonblank value.</p> <p>For a full load,
     * each row of this timestamp column contains a timestamp for when the data was
     * transferred from the source to the target by DMS. </p> <p>For a change data
     * capture (CDC) load, each row of the timestamp column contains the timestamp for
     * the commit of that row in the source database.</p> <p>The string format for this
     * timestamp column value is <code>yyyy-MM-dd HH:mm:ss.SSSSSS</code>. By default,
     * the precision of this value is in microseconds. For a CDC load, the rounding of
     * the precision depends on the commit timestamp supported by DMS for the source
     * database.</p> <p>When the <code>AddColumnName</code> parameter is set to
     * <code>true</code>, DMS also includes a name for the timestamp column that you
     * set with <code>TimestampColumnName</code>.</p>
     */
    inline const Aws::String& GetTimestampColumnName() const{ return m_timestampColumnName; }

    /**
     * <p>A value that when nonblank causes DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>DMS
     * supports the <code>TimestampColumnName</code> parameter in versions 3.1.4 and
     * later.</p>  <p>DMS includes an additional <code>STRING</code> column in
     * the .csv or .parquet object files of your migrated data when you set
     * <code>TimestampColumnName</code> to a nonblank value.</p> <p>For a full load,
     * each row of this timestamp column contains a timestamp for when the data was
     * transferred from the source to the target by DMS. </p> <p>For a change data
     * capture (CDC) load, each row of the timestamp column contains the timestamp for
     * the commit of that row in the source database.</p> <p>The string format for this
     * timestamp column value is <code>yyyy-MM-dd HH:mm:ss.SSSSSS</code>. By default,
     * the precision of this value is in microseconds. For a CDC load, the rounding of
     * the precision depends on the commit timestamp supported by DMS for the source
     * database.</p> <p>When the <code>AddColumnName</code> parameter is set to
     * <code>true</code>, DMS also includes a name for the timestamp column that you
     * set with <code>TimestampColumnName</code>.</p>
     */
    inline bool TimestampColumnNameHasBeenSet() const { return m_timestampColumnNameHasBeenSet; }

    /**
     * <p>A value that when nonblank causes DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>DMS
     * supports the <code>TimestampColumnName</code> parameter in versions 3.1.4 and
     * later.</p>  <p>DMS includes an additional <code>STRING</code> column in
     * the .csv or .parquet object files of your migrated data when you set
     * <code>TimestampColumnName</code> to a nonblank value.</p> <p>For a full load,
     * each row of this timestamp column contains a timestamp for when the data was
     * transferred from the source to the target by DMS. </p> <p>For a change data
     * capture (CDC) load, each row of the timestamp column contains the timestamp for
     * the commit of that row in the source database.</p> <p>The string format for this
     * timestamp column value is <code>yyyy-MM-dd HH:mm:ss.SSSSSS</code>. By default,
     * the precision of this value is in microseconds. For a CDC load, the rounding of
     * the precision depends on the commit timestamp supported by DMS for the source
     * database.</p> <p>When the <code>AddColumnName</code> parameter is set to
     * <code>true</code>, DMS also includes a name for the timestamp column that you
     * set with <code>TimestampColumnName</code>.</p>
     */
    inline void SetTimestampColumnName(const Aws::String& value) { m_timestampColumnNameHasBeenSet = true; m_timestampColumnName = value; }

    /**
     * <p>A value that when nonblank causes DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>DMS
     * supports the <code>TimestampColumnName</code> parameter in versions 3.1.4 and
     * later.</p>  <p>DMS includes an additional <code>STRING</code> column in
     * the .csv or .parquet object files of your migrated data when you set
     * <code>TimestampColumnName</code> to a nonblank value.</p> <p>For a full load,
     * each row of this timestamp column contains a timestamp for when the data was
     * transferred from the source to the target by DMS. </p> <p>For a change data
     * capture (CDC) load, each row of the timestamp column contains the timestamp for
     * the commit of that row in the source database.</p> <p>The string format for this
     * timestamp column value is <code>yyyy-MM-dd HH:mm:ss.SSSSSS</code>. By default,
     * the precision of this value is in microseconds. For a CDC load, the rounding of
     * the precision depends on the commit timestamp supported by DMS for the source
     * database.</p> <p>When the <code>AddColumnName</code> parameter is set to
     * <code>true</code>, DMS also includes a name for the timestamp column that you
     * set with <code>TimestampColumnName</code>.</p>
     */
    inline void SetTimestampColumnName(Aws::String&& value) { m_timestampColumnNameHasBeenSet = true; m_timestampColumnName = std::move(value); }

    /**
     * <p>A value that when nonblank causes DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>DMS
     * supports the <code>TimestampColumnName</code> parameter in versions 3.1.4 and
     * later.</p>  <p>DMS includes an additional <code>STRING</code> column in
     * the .csv or .parquet object files of your migrated data when you set
     * <code>TimestampColumnName</code> to a nonblank value.</p> <p>For a full load,
     * each row of this timestamp column contains a timestamp for when the data was
     * transferred from the source to the target by DMS. </p> <p>For a change data
     * capture (CDC) load, each row of the timestamp column contains the timestamp for
     * the commit of that row in the source database.</p> <p>The string format for this
     * timestamp column value is <code>yyyy-MM-dd HH:mm:ss.SSSSSS</code>. By default,
     * the precision of this value is in microseconds. For a CDC load, the rounding of
     * the precision depends on the commit timestamp supported by DMS for the source
     * database.</p> <p>When the <code>AddColumnName</code> parameter is set to
     * <code>true</code>, DMS also includes a name for the timestamp column that you
     * set with <code>TimestampColumnName</code>.</p>
     */
    inline void SetTimestampColumnName(const char* value) { m_timestampColumnNameHasBeenSet = true; m_timestampColumnName.assign(value); }

    /**
     * <p>A value that when nonblank causes DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>DMS
     * supports the <code>TimestampColumnName</code> parameter in versions 3.1.4 and
     * later.</p>  <p>DMS includes an additional <code>STRING</code> column in
     * the .csv or .parquet object files of your migrated data when you set
     * <code>TimestampColumnName</code> to a nonblank value.</p> <p>For a full load,
     * each row of this timestamp column contains a timestamp for when the data was
     * transferred from the source to the target by DMS. </p> <p>For a change data
     * capture (CDC) load, each row of the timestamp column contains the timestamp for
     * the commit of that row in the source database.</p> <p>The string format for this
     * timestamp column value is <code>yyyy-MM-dd HH:mm:ss.SSSSSS</code>. By default,
     * the precision of this value is in microseconds. For a CDC load, the rounding of
     * the precision depends on the commit timestamp supported by DMS for the source
     * database.</p> <p>When the <code>AddColumnName</code> parameter is set to
     * <code>true</code>, DMS also includes a name for the timestamp column that you
     * set with <code>TimestampColumnName</code>.</p>
     */
    inline S3Settings& WithTimestampColumnName(const Aws::String& value) { SetTimestampColumnName(value); return *this;}

    /**
     * <p>A value that when nonblank causes DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>DMS
     * supports the <code>TimestampColumnName</code> parameter in versions 3.1.4 and
     * later.</p>  <p>DMS includes an additional <code>STRING</code> column in
     * the .csv or .parquet object files of your migrated data when you set
     * <code>TimestampColumnName</code> to a nonblank value.</p> <p>For a full load,
     * each row of this timestamp column contains a timestamp for when the data was
     * transferred from the source to the target by DMS. </p> <p>For a change data
     * capture (CDC) load, each row of the timestamp column contains the timestamp for
     * the commit of that row in the source database.</p> <p>The string format for this
     * timestamp column value is <code>yyyy-MM-dd HH:mm:ss.SSSSSS</code>. By default,
     * the precision of this value is in microseconds. For a CDC load, the rounding of
     * the precision depends on the commit timestamp supported by DMS for the source
     * database.</p> <p>When the <code>AddColumnName</code> parameter is set to
     * <code>true</code>, DMS also includes a name for the timestamp column that you
     * set with <code>TimestampColumnName</code>.</p>
     */
    inline S3Settings& WithTimestampColumnName(Aws::String&& value) { SetTimestampColumnName(std::move(value)); return *this;}

    /**
     * <p>A value that when nonblank causes DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>DMS
     * supports the <code>TimestampColumnName</code> parameter in versions 3.1.4 and
     * later.</p>  <p>DMS includes an additional <code>STRING</code> column in
     * the .csv or .parquet object files of your migrated data when you set
     * <code>TimestampColumnName</code> to a nonblank value.</p> <p>For a full load,
     * each row of this timestamp column contains a timestamp for when the data was
     * transferred from the source to the target by DMS. </p> <p>For a change data
     * capture (CDC) load, each row of the timestamp column contains the timestamp for
     * the commit of that row in the source database.</p> <p>The string format for this
     * timestamp column value is <code>yyyy-MM-dd HH:mm:ss.SSSSSS</code>. By default,
     * the precision of this value is in microseconds. For a CDC load, the rounding of
     * the precision depends on the commit timestamp supported by DMS for the source
     * database.</p> <p>When the <code>AddColumnName</code> parameter is set to
     * <code>true</code>, DMS also includes a name for the timestamp column that you
     * set with <code>TimestampColumnName</code>.</p>
     */
    inline S3Settings& WithTimestampColumnName(const char* value) { SetTimestampColumnName(value); return *this;}


    /**
     * <p>A value that specifies the precision of any <code>TIMESTAMP</code> column
     * values that are written to an Amazon S3 object file in .parquet format.</p>
     *  <p>DMS supports the <code>ParquetTimestampInMillisecond</code> parameter
     * in versions 3.1.4 and later.</p>  <p>When
     * <code>ParquetTimestampInMillisecond</code> is set to <code>true</code> or
     * <code>y</code>, DMS writes all <code>TIMESTAMP</code> columns in a .parquet
     * formatted file with millisecond precision. Otherwise, DMS writes them with
     * microsecond precision.</p> <p>Currently, Amazon Athena and Glue can handle only
     * millisecond precision for <code>TIMESTAMP</code> values. Set this parameter to
     * <code>true</code> for S3 endpoint object files that are .parquet formatted only
     * if you plan to query or process the data with Athena or Glue.</p>  <p>DMS
     * writes any <code>TIMESTAMP</code> column values written to an S3 file in .csv
     * format with microsecond precision.</p> <p>Setting
     * <code>ParquetTimestampInMillisecond</code> has no effect on the string format of
     * the timestamp column value that is inserted by setting the
     * <code>TimestampColumnName</code> parameter.</p> 
     */
    inline bool GetParquetTimestampInMillisecond() const{ return m_parquetTimestampInMillisecond; }

    /**
     * <p>A value that specifies the precision of any <code>TIMESTAMP</code> column
     * values that are written to an Amazon S3 object file in .parquet format.</p>
     *  <p>DMS supports the <code>ParquetTimestampInMillisecond</code> parameter
     * in versions 3.1.4 and later.</p>  <p>When
     * <code>ParquetTimestampInMillisecond</code> is set to <code>true</code> or
     * <code>y</code>, DMS writes all <code>TIMESTAMP</code> columns in a .parquet
     * formatted file with millisecond precision. Otherwise, DMS writes them with
     * microsecond precision.</p> <p>Currently, Amazon Athena and Glue can handle only
     * millisecond precision for <code>TIMESTAMP</code> values. Set this parameter to
     * <code>true</code> for S3 endpoint object files that are .parquet formatted only
     * if you plan to query or process the data with Athena or Glue.</p>  <p>DMS
     * writes any <code>TIMESTAMP</code> column values written to an S3 file in .csv
     * format with microsecond precision.</p> <p>Setting
     * <code>ParquetTimestampInMillisecond</code> has no effect on the string format of
     * the timestamp column value that is inserted by setting the
     * <code>TimestampColumnName</code> parameter.</p> 
     */
    inline bool ParquetTimestampInMillisecondHasBeenSet() const { return m_parquetTimestampInMillisecondHasBeenSet; }

    /**
     * <p>A value that specifies the precision of any <code>TIMESTAMP</code> column
     * values that are written to an Amazon S3 object file in .parquet format.</p>
     *  <p>DMS supports the <code>ParquetTimestampInMillisecond</code> parameter
     * in versions 3.1.4 and later.</p>  <p>When
     * <code>ParquetTimestampInMillisecond</code> is set to <code>true</code> or
     * <code>y</code>, DMS writes all <code>TIMESTAMP</code> columns in a .parquet
     * formatted file with millisecond precision. Otherwise, DMS writes them with
     * microsecond precision.</p> <p>Currently, Amazon Athena and Glue can handle only
     * millisecond precision for <code>TIMESTAMP</code> values. Set this parameter to
     * <code>true</code> for S3 endpoint object files that are .parquet formatted only
     * if you plan to query or process the data with Athena or Glue.</p>  <p>DMS
     * writes any <code>TIMESTAMP</code> column values written to an S3 file in .csv
     * format with microsecond precision.</p> <p>Setting
     * <code>ParquetTimestampInMillisecond</code> has no effect on the string format of
     * the timestamp column value that is inserted by setting the
     * <code>TimestampColumnName</code> parameter.</p> 
     */
    inline void SetParquetTimestampInMillisecond(bool value) { m_parquetTimestampInMillisecondHasBeenSet = true; m_parquetTimestampInMillisecond = value; }

    /**
     * <p>A value that specifies the precision of any <code>TIMESTAMP</code> column
     * values that are written to an Amazon S3 object file in .parquet format.</p>
     *  <p>DMS supports the <code>ParquetTimestampInMillisecond</code> parameter
     * in versions 3.1.4 and later.</p>  <p>When
     * <code>ParquetTimestampInMillisecond</code> is set to <code>true</code> or
     * <code>y</code>, DMS writes all <code>TIMESTAMP</code> columns in a .parquet
     * formatted file with millisecond precision. Otherwise, DMS writes them with
     * microsecond precision.</p> <p>Currently, Amazon Athena and Glue can handle only
     * millisecond precision for <code>TIMESTAMP</code> values. Set this parameter to
     * <code>true</code> for S3 endpoint object files that are .parquet formatted only
     * if you plan to query or process the data with Athena or Glue.</p>  <p>DMS
     * writes any <code>TIMESTAMP</code> column values written to an S3 file in .csv
     * format with microsecond precision.</p> <p>Setting
     * <code>ParquetTimestampInMillisecond</code> has no effect on the string format of
     * the timestamp column value that is inserted by setting the
     * <code>TimestampColumnName</code> parameter.</p> 
     */
    inline S3Settings& WithParquetTimestampInMillisecond(bool value) { SetParquetTimestampInMillisecond(value); return *this;}


    /**
     * <p>A value that enables a change data capture (CDC) load to write INSERT and
     * UPDATE operations to .csv or .parquet (columnar storage) output files. The
     * default setting is <code>false</code>, but when
     * <code>CdcInsertsAndUpdates</code> is set to <code>true</code> or <code>y</code>,
     * only INSERTs and UPDATEs from the source database are migrated to the .csv or
     * .parquet file. </p> <p>For .csv file format only, how these INSERTs and UPDATEs
     * are recorded depends on the value of the <code>IncludeOpForFullLoad</code>
     * parameter. If <code>IncludeOpForFullLoad</code> is set to <code>true</code>, the
     * first field of every CDC record is set to either <code>I</code> or
     * <code>U</code> to indicate INSERT and UPDATE operations at the source. But if
     * <code>IncludeOpForFullLoad</code> is set to <code>false</code>, CDC records are
     * written without an indication of INSERT or UPDATE operations at the source. For
     * more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p>  <p>DMS supports the use of the
     * <code>CdcInsertsAndUpdates</code> parameter in versions 3.3.1 and later.</p> <p>
     * <code>CdcInsertsOnly</code> and <code>CdcInsertsAndUpdates</code> can't both be
     * set to <code>true</code> for the same endpoint. Set either
     * <code>CdcInsertsOnly</code> or <code>CdcInsertsAndUpdates</code> to
     * <code>true</code> for the same endpoint, but not both.</p> 
     */
    inline bool GetCdcInsertsAndUpdates() const{ return m_cdcInsertsAndUpdates; }

    /**
     * <p>A value that enables a change data capture (CDC) load to write INSERT and
     * UPDATE operations to .csv or .parquet (columnar storage) output files. The
     * default setting is <code>false</code>, but when
     * <code>CdcInsertsAndUpdates</code> is set to <code>true</code> or <code>y</code>,
     * only INSERTs and UPDATEs from the source database are migrated to the .csv or
     * .parquet file. </p> <p>For .csv file format only, how these INSERTs and UPDATEs
     * are recorded depends on the value of the <code>IncludeOpForFullLoad</code>
     * parameter. If <code>IncludeOpForFullLoad</code> is set to <code>true</code>, the
     * first field of every CDC record is set to either <code>I</code> or
     * <code>U</code> to indicate INSERT and UPDATE operations at the source. But if
     * <code>IncludeOpForFullLoad</code> is set to <code>false</code>, CDC records are
     * written without an indication of INSERT or UPDATE operations at the source. For
     * more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p>  <p>DMS supports the use of the
     * <code>CdcInsertsAndUpdates</code> parameter in versions 3.3.1 and later.</p> <p>
     * <code>CdcInsertsOnly</code> and <code>CdcInsertsAndUpdates</code> can't both be
     * set to <code>true</code> for the same endpoint. Set either
     * <code>CdcInsertsOnly</code> or <code>CdcInsertsAndUpdates</code> to
     * <code>true</code> for the same endpoint, but not both.</p> 
     */
    inline bool CdcInsertsAndUpdatesHasBeenSet() const { return m_cdcInsertsAndUpdatesHasBeenSet; }

    /**
     * <p>A value that enables a change data capture (CDC) load to write INSERT and
     * UPDATE operations to .csv or .parquet (columnar storage) output files. The
     * default setting is <code>false</code>, but when
     * <code>CdcInsertsAndUpdates</code> is set to <code>true</code> or <code>y</code>,
     * only INSERTs and UPDATEs from the source database are migrated to the .csv or
     * .parquet file. </p> <p>For .csv file format only, how these INSERTs and UPDATEs
     * are recorded depends on the value of the <code>IncludeOpForFullLoad</code>
     * parameter. If <code>IncludeOpForFullLoad</code> is set to <code>true</code>, the
     * first field of every CDC record is set to either <code>I</code> or
     * <code>U</code> to indicate INSERT and UPDATE operations at the source. But if
     * <code>IncludeOpForFullLoad</code> is set to <code>false</code>, CDC records are
     * written without an indication of INSERT or UPDATE operations at the source. For
     * more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p>  <p>DMS supports the use of the
     * <code>CdcInsertsAndUpdates</code> parameter in versions 3.3.1 and later.</p> <p>
     * <code>CdcInsertsOnly</code> and <code>CdcInsertsAndUpdates</code> can't both be
     * set to <code>true</code> for the same endpoint. Set either
     * <code>CdcInsertsOnly</code> or <code>CdcInsertsAndUpdates</code> to
     * <code>true</code> for the same endpoint, but not both.</p> 
     */
    inline void SetCdcInsertsAndUpdates(bool value) { m_cdcInsertsAndUpdatesHasBeenSet = true; m_cdcInsertsAndUpdates = value; }

    /**
     * <p>A value that enables a change data capture (CDC) load to write INSERT and
     * UPDATE operations to .csv or .parquet (columnar storage) output files. The
     * default setting is <code>false</code>, but when
     * <code>CdcInsertsAndUpdates</code> is set to <code>true</code> or <code>y</code>,
     * only INSERTs and UPDATEs from the source database are migrated to the .csv or
     * .parquet file. </p> <p>For .csv file format only, how these INSERTs and UPDATEs
     * are recorded depends on the value of the <code>IncludeOpForFullLoad</code>
     * parameter. If <code>IncludeOpForFullLoad</code> is set to <code>true</code>, the
     * first field of every CDC record is set to either <code>I</code> or
     * <code>U</code> to indicate INSERT and UPDATE operations at the source. But if
     * <code>IncludeOpForFullLoad</code> is set to <code>false</code>, CDC records are
     * written without an indication of INSERT or UPDATE operations at the source. For
     * more information about how these settings work together, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.Configuring.InsertOps">Indicating
     * Source DB Operations in Migrated S3 Data</a> in the <i>Database Migration
     * Service User Guide.</i>.</p>  <p>DMS supports the use of the
     * <code>CdcInsertsAndUpdates</code> parameter in versions 3.3.1 and later.</p> <p>
     * <code>CdcInsertsOnly</code> and <code>CdcInsertsAndUpdates</code> can't both be
     * set to <code>true</code> for the same endpoint. Set either
     * <code>CdcInsertsOnly</code> or <code>CdcInsertsAndUpdates</code> to
     * <code>true</code> for the same endpoint, but not both.</p> 
     */
    inline S3Settings& WithCdcInsertsAndUpdates(bool value) { SetCdcInsertsAndUpdates(value); return *this;}


    /**
     * <p>When set to <code>true</code>, this parameter partitions S3 bucket folders
     * based on transaction commit dates. The default value is <code>false</code>. For
     * more information about date-based folder partitioning, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.DatePartitioning">Using
     * date-based folder partitioning</a>.</p>
     */
    inline bool GetDatePartitionEnabled() const{ return m_datePartitionEnabled; }

    /**
     * <p>When set to <code>true</code>, this parameter partitions S3 bucket folders
     * based on transaction commit dates. The default value is <code>false</code>. For
     * more information about date-based folder partitioning, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.DatePartitioning">Using
     * date-based folder partitioning</a>.</p>
     */
    inline bool DatePartitionEnabledHasBeenSet() const { return m_datePartitionEnabledHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, this parameter partitions S3 bucket folders
     * based on transaction commit dates. The default value is <code>false</code>. For
     * more information about date-based folder partitioning, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.DatePartitioning">Using
     * date-based folder partitioning</a>.</p>
     */
    inline void SetDatePartitionEnabled(bool value) { m_datePartitionEnabledHasBeenSet = true; m_datePartitionEnabled = value; }

    /**
     * <p>When set to <code>true</code>, this parameter partitions S3 bucket folders
     * based on transaction commit dates. The default value is <code>false</code>. For
     * more information about date-based folder partitioning, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.DatePartitioning">Using
     * date-based folder partitioning</a>.</p>
     */
    inline S3Settings& WithDatePartitionEnabled(bool value) { SetDatePartitionEnabled(value); return *this;}


    /**
     * <p>Identifies the sequence of the date format to use during folder partitioning.
     * The default value is <code>YYYYMMDD</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline const DatePartitionSequenceValue& GetDatePartitionSequence() const{ return m_datePartitionSequence; }

    /**
     * <p>Identifies the sequence of the date format to use during folder partitioning.
     * The default value is <code>YYYYMMDD</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline bool DatePartitionSequenceHasBeenSet() const { return m_datePartitionSequenceHasBeenSet; }

    /**
     * <p>Identifies the sequence of the date format to use during folder partitioning.
     * The default value is <code>YYYYMMDD</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline void SetDatePartitionSequence(const DatePartitionSequenceValue& value) { m_datePartitionSequenceHasBeenSet = true; m_datePartitionSequence = value; }

    /**
     * <p>Identifies the sequence of the date format to use during folder partitioning.
     * The default value is <code>YYYYMMDD</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline void SetDatePartitionSequence(DatePartitionSequenceValue&& value) { m_datePartitionSequenceHasBeenSet = true; m_datePartitionSequence = std::move(value); }

    /**
     * <p>Identifies the sequence of the date format to use during folder partitioning.
     * The default value is <code>YYYYMMDD</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline S3Settings& WithDatePartitionSequence(const DatePartitionSequenceValue& value) { SetDatePartitionSequence(value); return *this;}

    /**
     * <p>Identifies the sequence of the date format to use during folder partitioning.
     * The default value is <code>YYYYMMDD</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline S3Settings& WithDatePartitionSequence(DatePartitionSequenceValue&& value) { SetDatePartitionSequence(std::move(value)); return *this;}


    /**
     * <p>Specifies a date separating delimiter to use during folder partitioning. The
     * default value is <code>SLASH</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline const DatePartitionDelimiterValue& GetDatePartitionDelimiter() const{ return m_datePartitionDelimiter; }

    /**
     * <p>Specifies a date separating delimiter to use during folder partitioning. The
     * default value is <code>SLASH</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline bool DatePartitionDelimiterHasBeenSet() const { return m_datePartitionDelimiterHasBeenSet; }

    /**
     * <p>Specifies a date separating delimiter to use during folder partitioning. The
     * default value is <code>SLASH</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline void SetDatePartitionDelimiter(const DatePartitionDelimiterValue& value) { m_datePartitionDelimiterHasBeenSet = true; m_datePartitionDelimiter = value; }

    /**
     * <p>Specifies a date separating delimiter to use during folder partitioning. The
     * default value is <code>SLASH</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline void SetDatePartitionDelimiter(DatePartitionDelimiterValue&& value) { m_datePartitionDelimiterHasBeenSet = true; m_datePartitionDelimiter = std::move(value); }

    /**
     * <p>Specifies a date separating delimiter to use during folder partitioning. The
     * default value is <code>SLASH</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline S3Settings& WithDatePartitionDelimiter(const DatePartitionDelimiterValue& value) { SetDatePartitionDelimiter(value); return *this;}

    /**
     * <p>Specifies a date separating delimiter to use during folder partitioning. The
     * default value is <code>SLASH</code>. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>.</p>
     */
    inline S3Settings& WithDatePartitionDelimiter(DatePartitionDelimiterValue&& value) { SetDatePartitionDelimiter(std::move(value)); return *this;}


    /**
     * <p>This setting applies if the S3 output files during a change data capture
     * (CDC) load are written in .csv format. If set to <code>true</code> for columns
     * not included in the supplemental log, DMS uses the value specified by <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-CsvNoSupValue">
     * <code>CsvNoSupValue</code> </a>. If not set or set to <code>false</code>, DMS
     * uses the null value for these columns.</p>  <p>This setting is supported
     * in DMS versions 3.4.1 and later.</p> 
     */
    inline bool GetUseCsvNoSupValue() const{ return m_useCsvNoSupValue; }

    /**
     * <p>This setting applies if the S3 output files during a change data capture
     * (CDC) load are written in .csv format. If set to <code>true</code> for columns
     * not included in the supplemental log, DMS uses the value specified by <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-CsvNoSupValue">
     * <code>CsvNoSupValue</code> </a>. If not set or set to <code>false</code>, DMS
     * uses the null value for these columns.</p>  <p>This setting is supported
     * in DMS versions 3.4.1 and later.</p> 
     */
    inline bool UseCsvNoSupValueHasBeenSet() const { return m_useCsvNoSupValueHasBeenSet; }

    /**
     * <p>This setting applies if the S3 output files during a change data capture
     * (CDC) load are written in .csv format. If set to <code>true</code> for columns
     * not included in the supplemental log, DMS uses the value specified by <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-CsvNoSupValue">
     * <code>CsvNoSupValue</code> </a>. If not set or set to <code>false</code>, DMS
     * uses the null value for these columns.</p>  <p>This setting is supported
     * in DMS versions 3.4.1 and later.</p> 
     */
    inline void SetUseCsvNoSupValue(bool value) { m_useCsvNoSupValueHasBeenSet = true; m_useCsvNoSupValue = value; }

    /**
     * <p>This setting applies if the S3 output files during a change data capture
     * (CDC) load are written in .csv format. If set to <code>true</code> for columns
     * not included in the supplemental log, DMS uses the value specified by <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-CsvNoSupValue">
     * <code>CsvNoSupValue</code> </a>. If not set or set to <code>false</code>, DMS
     * uses the null value for these columns.</p>  <p>This setting is supported
     * in DMS versions 3.4.1 and later.</p> 
     */
    inline S3Settings& WithUseCsvNoSupValue(bool value) { SetUseCsvNoSupValue(value); return *this;}


    /**
     * <p>This setting only applies if your Amazon S3 output files during a change data
     * capture (CDC) load are written in .csv format. If <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-UseCsvNoSupValue">
     * <code>UseCsvNoSupValue</code> </a> is set to true, specify a string value that
     * you want DMS to use for all columns not included in the supplemental log. If you
     * do not specify a string value, DMS uses the null value for these columns
     * regardless of the <code>UseCsvNoSupValue</code> setting.</p>  <p>This
     * setting is supported in DMS versions 3.4.1 and later.</p> 
     */
    inline const Aws::String& GetCsvNoSupValue() const{ return m_csvNoSupValue; }

    /**
     * <p>This setting only applies if your Amazon S3 output files during a change data
     * capture (CDC) load are written in .csv format. If <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-UseCsvNoSupValue">
     * <code>UseCsvNoSupValue</code> </a> is set to true, specify a string value that
     * you want DMS to use for all columns not included in the supplemental log. If you
     * do not specify a string value, DMS uses the null value for these columns
     * regardless of the <code>UseCsvNoSupValue</code> setting.</p>  <p>This
     * setting is supported in DMS versions 3.4.1 and later.</p> 
     */
    inline bool CsvNoSupValueHasBeenSet() const { return m_csvNoSupValueHasBeenSet; }

    /**
     * <p>This setting only applies if your Amazon S3 output files during a change data
     * capture (CDC) load are written in .csv format. If <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-UseCsvNoSupValue">
     * <code>UseCsvNoSupValue</code> </a> is set to true, specify a string value that
     * you want DMS to use for all columns not included in the supplemental log. If you
     * do not specify a string value, DMS uses the null value for these columns
     * regardless of the <code>UseCsvNoSupValue</code> setting.</p>  <p>This
     * setting is supported in DMS versions 3.4.1 and later.</p> 
     */
    inline void SetCsvNoSupValue(const Aws::String& value) { m_csvNoSupValueHasBeenSet = true; m_csvNoSupValue = value; }

    /**
     * <p>This setting only applies if your Amazon S3 output files during a change data
     * capture (CDC) load are written in .csv format. If <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-UseCsvNoSupValue">
     * <code>UseCsvNoSupValue</code> </a> is set to true, specify a string value that
     * you want DMS to use for all columns not included in the supplemental log. If you
     * do not specify a string value, DMS uses the null value for these columns
     * regardless of the <code>UseCsvNoSupValue</code> setting.</p>  <p>This
     * setting is supported in DMS versions 3.4.1 and later.</p> 
     */
    inline void SetCsvNoSupValue(Aws::String&& value) { m_csvNoSupValueHasBeenSet = true; m_csvNoSupValue = std::move(value); }

    /**
     * <p>This setting only applies if your Amazon S3 output files during a change data
     * capture (CDC) load are written in .csv format. If <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-UseCsvNoSupValue">
     * <code>UseCsvNoSupValue</code> </a> is set to true, specify a string value that
     * you want DMS to use for all columns not included in the supplemental log. If you
     * do not specify a string value, DMS uses the null value for these columns
     * regardless of the <code>UseCsvNoSupValue</code> setting.</p>  <p>This
     * setting is supported in DMS versions 3.4.1 and later.</p> 
     */
    inline void SetCsvNoSupValue(const char* value) { m_csvNoSupValueHasBeenSet = true; m_csvNoSupValue.assign(value); }

    /**
     * <p>This setting only applies if your Amazon S3 output files during a change data
     * capture (CDC) load are written in .csv format. If <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-UseCsvNoSupValue">
     * <code>UseCsvNoSupValue</code> </a> is set to true, specify a string value that
     * you want DMS to use for all columns not included in the supplemental log. If you
     * do not specify a string value, DMS uses the null value for these columns
     * regardless of the <code>UseCsvNoSupValue</code> setting.</p>  <p>This
     * setting is supported in DMS versions 3.4.1 and later.</p> 
     */
    inline S3Settings& WithCsvNoSupValue(const Aws::String& value) { SetCsvNoSupValue(value); return *this;}

    /**
     * <p>This setting only applies if your Amazon S3 output files during a change data
     * capture (CDC) load are written in .csv format. If <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-UseCsvNoSupValue">
     * <code>UseCsvNoSupValue</code> </a> is set to true, specify a string value that
     * you want DMS to use for all columns not included in the supplemental log. If you
     * do not specify a string value, DMS uses the null value for these columns
     * regardless of the <code>UseCsvNoSupValue</code> setting.</p>  <p>This
     * setting is supported in DMS versions 3.4.1 and later.</p> 
     */
    inline S3Settings& WithCsvNoSupValue(Aws::String&& value) { SetCsvNoSupValue(std::move(value)); return *this;}

    /**
     * <p>This setting only applies if your Amazon S3 output files during a change data
     * capture (CDC) load are written in .csv format. If <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-UseCsvNoSupValue">
     * <code>UseCsvNoSupValue</code> </a> is set to true, specify a string value that
     * you want DMS to use for all columns not included in the supplemental log. If you
     * do not specify a string value, DMS uses the null value for these columns
     * regardless of the <code>UseCsvNoSupValue</code> setting.</p>  <p>This
     * setting is supported in DMS versions 3.4.1 and later.</p> 
     */
    inline S3Settings& WithCsvNoSupValue(const char* value) { SetCsvNoSupValue(value); return *this;}


    /**
     * <p>If set to <code>true</code>, DMS saves the transaction order for a change
     * data capture (CDC) load on the Amazon S3 target specified by <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-CdcPath">
     * <code>CdcPath</code> </a>. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline bool GetPreserveTransactions() const{ return m_preserveTransactions; }

    /**
     * <p>If set to <code>true</code>, DMS saves the transaction order for a change
     * data capture (CDC) load on the Amazon S3 target specified by <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-CdcPath">
     * <code>CdcPath</code> </a>. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline bool PreserveTransactionsHasBeenSet() const { return m_preserveTransactionsHasBeenSet; }

    /**
     * <p>If set to <code>true</code>, DMS saves the transaction order for a change
     * data capture (CDC) load on the Amazon S3 target specified by <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-CdcPath">
     * <code>CdcPath</code> </a>. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline void SetPreserveTransactions(bool value) { m_preserveTransactionsHasBeenSet = true; m_preserveTransactions = value; }

    /**
     * <p>If set to <code>true</code>, DMS saves the transaction order for a change
     * data capture (CDC) load on the Amazon S3 target specified by <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-CdcPath">
     * <code>CdcPath</code> </a>. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline S3Settings& WithPreserveTransactions(bool value) { SetPreserveTransactions(value); return *this;}


    /**
     * <p>Specifies the folder path of CDC files. For an S3 source, this setting is
     * required if a task captures change data; otherwise, it's optional. If
     * <code>CdcPath</code> is set, DMS reads CDC files from this path and replicates
     * the data changes to the target endpoint. For an S3 target if you set <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-PreserveTransactions">
     * <code>PreserveTransactions</code> </a> to <code>true</code>, DMS verifies that
     * you have set this parameter to a folder path on your S3 target where DMS can
     * save the transaction order for the CDC load. DMS creates this CDC folder path in
     * either your S3 target working directory or the S3 target location specified by
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketFolder">
     * <code>BucketFolder</code> </a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketName">
     * <code>BucketName</code> </a>.</p> <p>For example, if you specify
     * <code>CdcPath</code> as <code>MyChangedData</code>, and you specify
     * <code>BucketName</code> as <code>MyTargetBucket</code> but do not specify
     * <code>BucketFolder</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyChangedData</code>.</p> <p>If you specify the same
     * <code>CdcPath</code>, and you specify <code>BucketName</code> as
     * <code>MyTargetBucket</code> and <code>BucketFolder</code> as
     * <code>MyTargetData</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyTargetData/MyChangedData</code>.</p> <p>For more
     * information on CDC including transaction order on an S3 target, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline const Aws::String& GetCdcPath() const{ return m_cdcPath; }

    /**
     * <p>Specifies the folder path of CDC files. For an S3 source, this setting is
     * required if a task captures change data; otherwise, it's optional. If
     * <code>CdcPath</code> is set, DMS reads CDC files from this path and replicates
     * the data changes to the target endpoint. For an S3 target if you set <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-PreserveTransactions">
     * <code>PreserveTransactions</code> </a> to <code>true</code>, DMS verifies that
     * you have set this parameter to a folder path on your S3 target where DMS can
     * save the transaction order for the CDC load. DMS creates this CDC folder path in
     * either your S3 target working directory or the S3 target location specified by
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketFolder">
     * <code>BucketFolder</code> </a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketName">
     * <code>BucketName</code> </a>.</p> <p>For example, if you specify
     * <code>CdcPath</code> as <code>MyChangedData</code>, and you specify
     * <code>BucketName</code> as <code>MyTargetBucket</code> but do not specify
     * <code>BucketFolder</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyChangedData</code>.</p> <p>If you specify the same
     * <code>CdcPath</code>, and you specify <code>BucketName</code> as
     * <code>MyTargetBucket</code> and <code>BucketFolder</code> as
     * <code>MyTargetData</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyTargetData/MyChangedData</code>.</p> <p>For more
     * information on CDC including transaction order on an S3 target, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline bool CdcPathHasBeenSet() const { return m_cdcPathHasBeenSet; }

    /**
     * <p>Specifies the folder path of CDC files. For an S3 source, this setting is
     * required if a task captures change data; otherwise, it's optional. If
     * <code>CdcPath</code> is set, DMS reads CDC files from this path and replicates
     * the data changes to the target endpoint. For an S3 target if you set <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-PreserveTransactions">
     * <code>PreserveTransactions</code> </a> to <code>true</code>, DMS verifies that
     * you have set this parameter to a folder path on your S3 target where DMS can
     * save the transaction order for the CDC load. DMS creates this CDC folder path in
     * either your S3 target working directory or the S3 target location specified by
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketFolder">
     * <code>BucketFolder</code> </a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketName">
     * <code>BucketName</code> </a>.</p> <p>For example, if you specify
     * <code>CdcPath</code> as <code>MyChangedData</code>, and you specify
     * <code>BucketName</code> as <code>MyTargetBucket</code> but do not specify
     * <code>BucketFolder</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyChangedData</code>.</p> <p>If you specify the same
     * <code>CdcPath</code>, and you specify <code>BucketName</code> as
     * <code>MyTargetBucket</code> and <code>BucketFolder</code> as
     * <code>MyTargetData</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyTargetData/MyChangedData</code>.</p> <p>For more
     * information on CDC including transaction order on an S3 target, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline void SetCdcPath(const Aws::String& value) { m_cdcPathHasBeenSet = true; m_cdcPath = value; }

    /**
     * <p>Specifies the folder path of CDC files. For an S3 source, this setting is
     * required if a task captures change data; otherwise, it's optional. If
     * <code>CdcPath</code> is set, DMS reads CDC files from this path and replicates
     * the data changes to the target endpoint. For an S3 target if you set <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-PreserveTransactions">
     * <code>PreserveTransactions</code> </a> to <code>true</code>, DMS verifies that
     * you have set this parameter to a folder path on your S3 target where DMS can
     * save the transaction order for the CDC load. DMS creates this CDC folder path in
     * either your S3 target working directory or the S3 target location specified by
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketFolder">
     * <code>BucketFolder</code> </a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketName">
     * <code>BucketName</code> </a>.</p> <p>For example, if you specify
     * <code>CdcPath</code> as <code>MyChangedData</code>, and you specify
     * <code>BucketName</code> as <code>MyTargetBucket</code> but do not specify
     * <code>BucketFolder</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyChangedData</code>.</p> <p>If you specify the same
     * <code>CdcPath</code>, and you specify <code>BucketName</code> as
     * <code>MyTargetBucket</code> and <code>BucketFolder</code> as
     * <code>MyTargetData</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyTargetData/MyChangedData</code>.</p> <p>For more
     * information on CDC including transaction order on an S3 target, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline void SetCdcPath(Aws::String&& value) { m_cdcPathHasBeenSet = true; m_cdcPath = std::move(value); }

    /**
     * <p>Specifies the folder path of CDC files. For an S3 source, this setting is
     * required if a task captures change data; otherwise, it's optional. If
     * <code>CdcPath</code> is set, DMS reads CDC files from this path and replicates
     * the data changes to the target endpoint. For an S3 target if you set <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-PreserveTransactions">
     * <code>PreserveTransactions</code> </a> to <code>true</code>, DMS verifies that
     * you have set this parameter to a folder path on your S3 target where DMS can
     * save the transaction order for the CDC load. DMS creates this CDC folder path in
     * either your S3 target working directory or the S3 target location specified by
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketFolder">
     * <code>BucketFolder</code> </a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketName">
     * <code>BucketName</code> </a>.</p> <p>For example, if you specify
     * <code>CdcPath</code> as <code>MyChangedData</code>, and you specify
     * <code>BucketName</code> as <code>MyTargetBucket</code> but do not specify
     * <code>BucketFolder</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyChangedData</code>.</p> <p>If you specify the same
     * <code>CdcPath</code>, and you specify <code>BucketName</code> as
     * <code>MyTargetBucket</code> and <code>BucketFolder</code> as
     * <code>MyTargetData</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyTargetData/MyChangedData</code>.</p> <p>For more
     * information on CDC including transaction order on an S3 target, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline void SetCdcPath(const char* value) { m_cdcPathHasBeenSet = true; m_cdcPath.assign(value); }

    /**
     * <p>Specifies the folder path of CDC files. For an S3 source, this setting is
     * required if a task captures change data; otherwise, it's optional. If
     * <code>CdcPath</code> is set, DMS reads CDC files from this path and replicates
     * the data changes to the target endpoint. For an S3 target if you set <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-PreserveTransactions">
     * <code>PreserveTransactions</code> </a> to <code>true</code>, DMS verifies that
     * you have set this parameter to a folder path on your S3 target where DMS can
     * save the transaction order for the CDC load. DMS creates this CDC folder path in
     * either your S3 target working directory or the S3 target location specified by
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketFolder">
     * <code>BucketFolder</code> </a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketName">
     * <code>BucketName</code> </a>.</p> <p>For example, if you specify
     * <code>CdcPath</code> as <code>MyChangedData</code>, and you specify
     * <code>BucketName</code> as <code>MyTargetBucket</code> but do not specify
     * <code>BucketFolder</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyChangedData</code>.</p> <p>If you specify the same
     * <code>CdcPath</code>, and you specify <code>BucketName</code> as
     * <code>MyTargetBucket</code> and <code>BucketFolder</code> as
     * <code>MyTargetData</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyTargetData/MyChangedData</code>.</p> <p>For more
     * information on CDC including transaction order on an S3 target, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline S3Settings& WithCdcPath(const Aws::String& value) { SetCdcPath(value); return *this;}

    /**
     * <p>Specifies the folder path of CDC files. For an S3 source, this setting is
     * required if a task captures change data; otherwise, it's optional. If
     * <code>CdcPath</code> is set, DMS reads CDC files from this path and replicates
     * the data changes to the target endpoint. For an S3 target if you set <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-PreserveTransactions">
     * <code>PreserveTransactions</code> </a> to <code>true</code>, DMS verifies that
     * you have set this parameter to a folder path on your S3 target where DMS can
     * save the transaction order for the CDC load. DMS creates this CDC folder path in
     * either your S3 target working directory or the S3 target location specified by
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketFolder">
     * <code>BucketFolder</code> </a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketName">
     * <code>BucketName</code> </a>.</p> <p>For example, if you specify
     * <code>CdcPath</code> as <code>MyChangedData</code>, and you specify
     * <code>BucketName</code> as <code>MyTargetBucket</code> but do not specify
     * <code>BucketFolder</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyChangedData</code>.</p> <p>If you specify the same
     * <code>CdcPath</code>, and you specify <code>BucketName</code> as
     * <code>MyTargetBucket</code> and <code>BucketFolder</code> as
     * <code>MyTargetData</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyTargetData/MyChangedData</code>.</p> <p>For more
     * information on CDC including transaction order on an S3 target, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline S3Settings& WithCdcPath(Aws::String&& value) { SetCdcPath(std::move(value)); return *this;}

    /**
     * <p>Specifies the folder path of CDC files. For an S3 source, this setting is
     * required if a task captures change data; otherwise, it's optional. If
     * <code>CdcPath</code> is set, DMS reads CDC files from this path and replicates
     * the data changes to the target endpoint. For an S3 target if you set <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-PreserveTransactions">
     * <code>PreserveTransactions</code> </a> to <code>true</code>, DMS verifies that
     * you have set this parameter to a folder path on your S3 target where DMS can
     * save the transaction order for the CDC load. DMS creates this CDC folder path in
     * either your S3 target working directory or the S3 target location specified by
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketFolder">
     * <code>BucketFolder</code> </a> and <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_S3Settings.html#DMS-Type-S3Settings-BucketName">
     * <code>BucketName</code> </a>.</p> <p>For example, if you specify
     * <code>CdcPath</code> as <code>MyChangedData</code>, and you specify
     * <code>BucketName</code> as <code>MyTargetBucket</code> but do not specify
     * <code>BucketFolder</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyChangedData</code>.</p> <p>If you specify the same
     * <code>CdcPath</code>, and you specify <code>BucketName</code> as
     * <code>MyTargetBucket</code> and <code>BucketFolder</code> as
     * <code>MyTargetData</code>, DMS creates the CDC folder path following:
     * <code>MyTargetBucket/MyTargetData/MyChangedData</code>.</p> <p>For more
     * information on CDC including transaction order on an S3 target, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.EndpointSettings.CdcPath">Capturing
     * data changes (CDC) including transaction order on the S3 target</a>.</p> 
     * <p>This setting is supported in DMS versions 3.4.2 and later.</p> 
     */
    inline S3Settings& WithCdcPath(const char* value) { SetCdcPath(value); return *this;}


    /**
     * <p>When set to true, this parameter uses the task start time as the timestamp
     * column value instead of the time data is written to target. For full load, when
     * <code>useTaskStartTimeForFullLoadTimestamp</code> is set to <code>true</code>,
     * each row of the timestamp column contains the task start time. For CDC loads,
     * each row of the timestamp column contains the transaction commit time.</p>
     * <p>When <code>useTaskStartTimeForFullLoadTimestamp</code> is set to
     * <code>false</code>, the full load timestamp in the timestamp column increments
     * with the time data arrives at the target. </p>
     */
    inline bool GetUseTaskStartTimeForFullLoadTimestamp() const{ return m_useTaskStartTimeForFullLoadTimestamp; }

    /**
     * <p>When set to true, this parameter uses the task start time as the timestamp
     * column value instead of the time data is written to target. For full load, when
     * <code>useTaskStartTimeForFullLoadTimestamp</code> is set to <code>true</code>,
     * each row of the timestamp column contains the task start time. For CDC loads,
     * each row of the timestamp column contains the transaction commit time.</p>
     * <p>When <code>useTaskStartTimeForFullLoadTimestamp</code> is set to
     * <code>false</code>, the full load timestamp in the timestamp column increments
     * with the time data arrives at the target. </p>
     */
    inline bool UseTaskStartTimeForFullLoadTimestampHasBeenSet() const { return m_useTaskStartTimeForFullLoadTimestampHasBeenSet; }

    /**
     * <p>When set to true, this parameter uses the task start time as the timestamp
     * column value instead of the time data is written to target. For full load, when
     * <code>useTaskStartTimeForFullLoadTimestamp</code> is set to <code>true</code>,
     * each row of the timestamp column contains the task start time. For CDC loads,
     * each row of the timestamp column contains the transaction commit time.</p>
     * <p>When <code>useTaskStartTimeForFullLoadTimestamp</code> is set to
     * <code>false</code>, the full load timestamp in the timestamp column increments
     * with the time data arrives at the target. </p>
     */
    inline void SetUseTaskStartTimeForFullLoadTimestamp(bool value) { m_useTaskStartTimeForFullLoadTimestampHasBeenSet = true; m_useTaskStartTimeForFullLoadTimestamp = value; }

    /**
     * <p>When set to true, this parameter uses the task start time as the timestamp
     * column value instead of the time data is written to target. For full load, when
     * <code>useTaskStartTimeForFullLoadTimestamp</code> is set to <code>true</code>,
     * each row of the timestamp column contains the task start time. For CDC loads,
     * each row of the timestamp column contains the transaction commit time.</p>
     * <p>When <code>useTaskStartTimeForFullLoadTimestamp</code> is set to
     * <code>false</code>, the full load timestamp in the timestamp column increments
     * with the time data arrives at the target. </p>
     */
    inline S3Settings& WithUseTaskStartTimeForFullLoadTimestamp(bool value) { SetUseTaskStartTimeForFullLoadTimestamp(value); return *this;}


    /**
     * <p>A value that enables DMS to specify a predefined (canned) access control list
     * for objects created in an Amazon S3 bucket as .csv or .parquet files. For more
     * information about Amazon S3 canned ACLs, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 Developer Guide.</i> </p> <p>The default value is
     * NONE. Valid values include NONE, PRIVATE, PUBLIC_READ, PUBLIC_READ_WRITE,
     * AUTHENTICATED_READ, AWS_EXEC_READ, BUCKET_OWNER_READ, and
     * BUCKET_OWNER_FULL_CONTROL.</p>
     */
    inline const CannedAclForObjectsValue& GetCannedAclForObjects() const{ return m_cannedAclForObjects; }

    /**
     * <p>A value that enables DMS to specify a predefined (canned) access control list
     * for objects created in an Amazon S3 bucket as .csv or .parquet files. For more
     * information about Amazon S3 canned ACLs, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 Developer Guide.</i> </p> <p>The default value is
     * NONE. Valid values include NONE, PRIVATE, PUBLIC_READ, PUBLIC_READ_WRITE,
     * AUTHENTICATED_READ, AWS_EXEC_READ, BUCKET_OWNER_READ, and
     * BUCKET_OWNER_FULL_CONTROL.</p>
     */
    inline bool CannedAclForObjectsHasBeenSet() const { return m_cannedAclForObjectsHasBeenSet; }

    /**
     * <p>A value that enables DMS to specify a predefined (canned) access control list
     * for objects created in an Amazon S3 bucket as .csv or .parquet files. For more
     * information about Amazon S3 canned ACLs, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 Developer Guide.</i> </p> <p>The default value is
     * NONE. Valid values include NONE, PRIVATE, PUBLIC_READ, PUBLIC_READ_WRITE,
     * AUTHENTICATED_READ, AWS_EXEC_READ, BUCKET_OWNER_READ, and
     * BUCKET_OWNER_FULL_CONTROL.</p>
     */
    inline void SetCannedAclForObjects(const CannedAclForObjectsValue& value) { m_cannedAclForObjectsHasBeenSet = true; m_cannedAclForObjects = value; }

    /**
     * <p>A value that enables DMS to specify a predefined (canned) access control list
     * for objects created in an Amazon S3 bucket as .csv or .parquet files. For more
     * information about Amazon S3 canned ACLs, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 Developer Guide.</i> </p> <p>The default value is
     * NONE. Valid values include NONE, PRIVATE, PUBLIC_READ, PUBLIC_READ_WRITE,
     * AUTHENTICATED_READ, AWS_EXEC_READ, BUCKET_OWNER_READ, and
     * BUCKET_OWNER_FULL_CONTROL.</p>
     */
    inline void SetCannedAclForObjects(CannedAclForObjectsValue&& value) { m_cannedAclForObjectsHasBeenSet = true; m_cannedAclForObjects = std::move(value); }

    /**
     * <p>A value that enables DMS to specify a predefined (canned) access control list
     * for objects created in an Amazon S3 bucket as .csv or .parquet files. For more
     * information about Amazon S3 canned ACLs, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 Developer Guide.</i> </p> <p>The default value is
     * NONE. Valid values include NONE, PRIVATE, PUBLIC_READ, PUBLIC_READ_WRITE,
     * AUTHENTICATED_READ, AWS_EXEC_READ, BUCKET_OWNER_READ, and
     * BUCKET_OWNER_FULL_CONTROL.</p>
     */
    inline S3Settings& WithCannedAclForObjects(const CannedAclForObjectsValue& value) { SetCannedAclForObjects(value); return *this;}

    /**
     * <p>A value that enables DMS to specify a predefined (canned) access control list
     * for objects created in an Amazon S3 bucket as .csv or .parquet files. For more
     * information about Amazon S3 canned ACLs, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 Developer Guide.</i> </p> <p>The default value is
     * NONE. Valid values include NONE, PRIVATE, PUBLIC_READ, PUBLIC_READ_WRITE,
     * AUTHENTICATED_READ, AWS_EXEC_READ, BUCKET_OWNER_READ, and
     * BUCKET_OWNER_FULL_CONTROL.</p>
     */
    inline S3Settings& WithCannedAclForObjects(CannedAclForObjectsValue&& value) { SetCannedAclForObjects(std::move(value)); return *this;}


    /**
     * <p>An optional parameter that, when set to <code>true</code> or <code>y</code>,
     * you can use to add column name information to the .csv output file.</p> <p>The
     * default value is <code>false</code>. Valid values are <code>true</code>,
     * <code>false</code>, <code>y</code>, and <code>n</code>.</p>
     */
    inline bool GetAddColumnName() const{ return m_addColumnName; }

    /**
     * <p>An optional parameter that, when set to <code>true</code> or <code>y</code>,
     * you can use to add column name information to the .csv output file.</p> <p>The
     * default value is <code>false</code>. Valid values are <code>true</code>,
     * <code>false</code>, <code>y</code>, and <code>n</code>.</p>
     */
    inline bool AddColumnNameHasBeenSet() const { return m_addColumnNameHasBeenSet; }

    /**
     * <p>An optional parameter that, when set to <code>true</code> or <code>y</code>,
     * you can use to add column name information to the .csv output file.</p> <p>The
     * default value is <code>false</code>. Valid values are <code>true</code>,
     * <code>false</code>, <code>y</code>, and <code>n</code>.</p>
     */
    inline void SetAddColumnName(bool value) { m_addColumnNameHasBeenSet = true; m_addColumnName = value; }

    /**
     * <p>An optional parameter that, when set to <code>true</code> or <code>y</code>,
     * you can use to add column name information to the .csv output file.</p> <p>The
     * default value is <code>false</code>. Valid values are <code>true</code>,
     * <code>false</code>, <code>y</code>, and <code>n</code>.</p>
     */
    inline S3Settings& WithAddColumnName(bool value) { SetAddColumnName(value); return *this;}


    /**
     * <p>Maximum length of the interval, defined in seconds, after which to output a
     * file to Amazon S3.</p> <p>When <code>CdcMaxBatchInterval</code> and
     * <code>CdcMinFileSize</code> are both specified, the file write is triggered by
     * whichever parameter condition is met first within an DMS CloudFormation
     * template.</p> <p>The default value is 60 seconds.</p>
     */
    inline int GetCdcMaxBatchInterval() const{ return m_cdcMaxBatchInterval; }

    /**
     * <p>Maximum length of the interval, defined in seconds, after which to output a
     * file to Amazon S3.</p> <p>When <code>CdcMaxBatchInterval</code> and
     * <code>CdcMinFileSize</code> are both specified, the file write is triggered by
     * whichever parameter condition is met first within an DMS CloudFormation
     * template.</p> <p>The default value is 60 seconds.</p>
     */
    inline bool CdcMaxBatchIntervalHasBeenSet() const { return m_cdcMaxBatchIntervalHasBeenSet; }

    /**
     * <p>Maximum length of the interval, defined in seconds, after which to output a
     * file to Amazon S3.</p> <p>When <code>CdcMaxBatchInterval</code> and
     * <code>CdcMinFileSize</code> are both specified, the file write is triggered by
     * whichever parameter condition is met first within an DMS CloudFormation
     * template.</p> <p>The default value is 60 seconds.</p>
     */
    inline void SetCdcMaxBatchInterval(int value) { m_cdcMaxBatchIntervalHasBeenSet = true; m_cdcMaxBatchInterval = value; }

    /**
     * <p>Maximum length of the interval, defined in seconds, after which to output a
     * file to Amazon S3.</p> <p>When <code>CdcMaxBatchInterval</code> and
     * <code>CdcMinFileSize</code> are both specified, the file write is triggered by
     * whichever parameter condition is met first within an DMS CloudFormation
     * template.</p> <p>The default value is 60 seconds.</p>
     */
    inline S3Settings& WithCdcMaxBatchInterval(int value) { SetCdcMaxBatchInterval(value); return *this;}


    /**
     * <p>Minimum file size, defined in kilobytes, to reach for a file output to Amazon
     * S3.</p> <p>When <code>CdcMinFileSize</code> and <code>CdcMaxBatchInterval</code>
     * are both specified, the file write is triggered by whichever parameter condition
     * is met first within an DMS CloudFormation template.</p> <p>The default value is
     * 32 MB.</p>
     */
    inline int GetCdcMinFileSize() const{ return m_cdcMinFileSize; }

    /**
     * <p>Minimum file size, defined in kilobytes, to reach for a file output to Amazon
     * S3.</p> <p>When <code>CdcMinFileSize</code> and <code>CdcMaxBatchInterval</code>
     * are both specified, the file write is triggered by whichever parameter condition
     * is met first within an DMS CloudFormation template.</p> <p>The default value is
     * 32 MB.</p>
     */
    inline bool CdcMinFileSizeHasBeenSet() const { return m_cdcMinFileSizeHasBeenSet; }

    /**
     * <p>Minimum file size, defined in kilobytes, to reach for a file output to Amazon
     * S3.</p> <p>When <code>CdcMinFileSize</code> and <code>CdcMaxBatchInterval</code>
     * are both specified, the file write is triggered by whichever parameter condition
     * is met first within an DMS CloudFormation template.</p> <p>The default value is
     * 32 MB.</p>
     */
    inline void SetCdcMinFileSize(int value) { m_cdcMinFileSizeHasBeenSet = true; m_cdcMinFileSize = value; }

    /**
     * <p>Minimum file size, defined in kilobytes, to reach for a file output to Amazon
     * S3.</p> <p>When <code>CdcMinFileSize</code> and <code>CdcMaxBatchInterval</code>
     * are both specified, the file write is triggered by whichever parameter condition
     * is met first within an DMS CloudFormation template.</p> <p>The default value is
     * 32 MB.</p>
     */
    inline S3Settings& WithCdcMinFileSize(int value) { SetCdcMinFileSize(value); return *this;}


    /**
     * <p>An optional parameter that specifies how DMS treats null values. While
     * handling the null value, you can use this parameter to pass a user-defined
     * string as null when writing to the target. For example, when target columns are
     * not nullable, you can use this option to differentiate between the empty string
     * value and the null value. So, if you set this parameter value to the empty
     * string ("" or ''), DMS treats the empty string as the null value instead of
     * <code>NULL</code>.</p> <p>The default value is <code>NULL</code>. Valid values
     * include any valid string.</p>
     */
    inline const Aws::String& GetCsvNullValue() const{ return m_csvNullValue; }

    /**
     * <p>An optional parameter that specifies how DMS treats null values. While
     * handling the null value, you can use this parameter to pass a user-defined
     * string as null when writing to the target. For example, when target columns are
     * not nullable, you can use this option to differentiate between the empty string
     * value and the null value. So, if you set this parameter value to the empty
     * string ("" or ''), DMS treats the empty string as the null value instead of
     * <code>NULL</code>.</p> <p>The default value is <code>NULL</code>. Valid values
     * include any valid string.</p>
     */
    inline bool CsvNullValueHasBeenSet() const { return m_csvNullValueHasBeenSet; }

    /**
     * <p>An optional parameter that specifies how DMS treats null values. While
     * handling the null value, you can use this parameter to pass a user-defined
     * string as null when writing to the target. For example, when target columns are
     * not nullable, you can use this option to differentiate between the empty string
     * value and the null value. So, if you set this parameter value to the empty
     * string ("" or ''), DMS treats the empty string as the null value instead of
     * <code>NULL</code>.</p> <p>The default value is <code>NULL</code>. Valid values
     * include any valid string.</p>
     */
    inline void SetCsvNullValue(const Aws::String& value) { m_csvNullValueHasBeenSet = true; m_csvNullValue = value; }

    /**
     * <p>An optional parameter that specifies how DMS treats null values. While
     * handling the null value, you can use this parameter to pass a user-defined
     * string as null when writing to the target. For example, when target columns are
     * not nullable, you can use this option to differentiate between the empty string
     * value and the null value. So, if you set this parameter value to the empty
     * string ("" or ''), DMS treats the empty string as the null value instead of
     * <code>NULL</code>.</p> <p>The default value is <code>NULL</code>. Valid values
     * include any valid string.</p>
     */
    inline void SetCsvNullValue(Aws::String&& value) { m_csvNullValueHasBeenSet = true; m_csvNullValue = std::move(value); }

    /**
     * <p>An optional parameter that specifies how DMS treats null values. While
     * handling the null value, you can use this parameter to pass a user-defined
     * string as null when writing to the target. For example, when target columns are
     * not nullable, you can use this option to differentiate between the empty string
     * value and the null value. So, if you set this parameter value to the empty
     * string ("" or ''), DMS treats the empty string as the null value instead of
     * <code>NULL</code>.</p> <p>The default value is <code>NULL</code>. Valid values
     * include any valid string.</p>
     */
    inline void SetCsvNullValue(const char* value) { m_csvNullValueHasBeenSet = true; m_csvNullValue.assign(value); }

    /**
     * <p>An optional parameter that specifies how DMS treats null values. While
     * handling the null value, you can use this parameter to pass a user-defined
     * string as null when writing to the target. For example, when target columns are
     * not nullable, you can use this option to differentiate between the empty string
     * value and the null value. So, if you set this parameter value to the empty
     * string ("" or ''), DMS treats the empty string as the null value instead of
     * <code>NULL</code>.</p> <p>The default value is <code>NULL</code>. Valid values
     * include any valid string.</p>
     */
    inline S3Settings& WithCsvNullValue(const Aws::String& value) { SetCsvNullValue(value); return *this;}

    /**
     * <p>An optional parameter that specifies how DMS treats null values. While
     * handling the null value, you can use this parameter to pass a user-defined
     * string as null when writing to the target. For example, when target columns are
     * not nullable, you can use this option to differentiate between the empty string
     * value and the null value. So, if you set this parameter value to the empty
     * string ("" or ''), DMS treats the empty string as the null value instead of
     * <code>NULL</code>.</p> <p>The default value is <code>NULL</code>. Valid values
     * include any valid string.</p>
     */
    inline S3Settings& WithCsvNullValue(Aws::String&& value) { SetCsvNullValue(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies how DMS treats null values. While
     * handling the null value, you can use this parameter to pass a user-defined
     * string as null when writing to the target. For example, when target columns are
     * not nullable, you can use this option to differentiate between the empty string
     * value and the null value. So, if you set this parameter value to the empty
     * string ("" or ''), DMS treats the empty string as the null value instead of
     * <code>NULL</code>.</p> <p>The default value is <code>NULL</code>. Valid values
     * include any valid string.</p>
     */
    inline S3Settings& WithCsvNullValue(const char* value) { SetCsvNullValue(value); return *this;}


    /**
     * <p>When this value is set to 1, DMS ignores the first row header in a .csv file.
     * A value of 1 turns on the feature; a value of 0 turns off the feature.</p>
     * <p>The default is 0.</p>
     */
    inline int GetIgnoreHeaderRows() const{ return m_ignoreHeaderRows; }

    /**
     * <p>When this value is set to 1, DMS ignores the first row header in a .csv file.
     * A value of 1 turns on the feature; a value of 0 turns off the feature.</p>
     * <p>The default is 0.</p>
     */
    inline bool IgnoreHeaderRowsHasBeenSet() const { return m_ignoreHeaderRowsHasBeenSet; }

    /**
     * <p>When this value is set to 1, DMS ignores the first row header in a .csv file.
     * A value of 1 turns on the feature; a value of 0 turns off the feature.</p>
     * <p>The default is 0.</p>
     */
    inline void SetIgnoreHeaderRows(int value) { m_ignoreHeaderRowsHasBeenSet = true; m_ignoreHeaderRows = value; }

    /**
     * <p>When this value is set to 1, DMS ignores the first row header in a .csv file.
     * A value of 1 turns on the feature; a value of 0 turns off the feature.</p>
     * <p>The default is 0.</p>
     */
    inline S3Settings& WithIgnoreHeaderRows(int value) { SetIgnoreHeaderRows(value); return *this;}


    /**
     * <p>A value that specifies the maximum size (in KB) of any .csv file to be
     * created while migrating to an S3 target during full load.</p> <p>The default
     * value is 1,048,576 KB (1 GB). Valid values include 1 to 1,048,576.</p>
     */
    inline int GetMaxFileSize() const{ return m_maxFileSize; }

    /**
     * <p>A value that specifies the maximum size (in KB) of any .csv file to be
     * created while migrating to an S3 target during full load.</p> <p>The default
     * value is 1,048,576 KB (1 GB). Valid values include 1 to 1,048,576.</p>
     */
    inline bool MaxFileSizeHasBeenSet() const { return m_maxFileSizeHasBeenSet; }

    /**
     * <p>A value that specifies the maximum size (in KB) of any .csv file to be
     * created while migrating to an S3 target during full load.</p> <p>The default
     * value is 1,048,576 KB (1 GB). Valid values include 1 to 1,048,576.</p>
     */
    inline void SetMaxFileSize(int value) { m_maxFileSizeHasBeenSet = true; m_maxFileSize = value; }

    /**
     * <p>A value that specifies the maximum size (in KB) of any .csv file to be
     * created while migrating to an S3 target during full load.</p> <p>The default
     * value is 1,048,576 KB (1 GB). Valid values include 1 to 1,048,576.</p>
     */
    inline S3Settings& WithMaxFileSize(int value) { SetMaxFileSize(value); return *this;}


    /**
     * <p>For an S3 source, when this value is set to <code>true</code> or
     * <code>y</code>, each leading double quotation mark has to be followed by an
     * ending double quotation mark. This formatting complies with RFC 4180. When this
     * value is set to <code>false</code> or <code>n</code>, string literals are copied
     * to the target as is. In this case, a delimiter (row or column) signals the end
     * of the field. Thus, you can't use a delimiter as part of the string, because it
     * signals the end of the value.</p> <p>For an S3 target, an optional parameter
     * used to set behavior to comply with RFC 4180 for data migrated to Amazon S3
     * using .csv file format only. When this value is set to <code>true</code> or
     * <code>y</code> using Amazon S3 as a target, if the data has quotation marks or
     * newline characters in it, DMS encloses the entire column with an additional pair
     * of double quotation marks ("). Every quotation mark within the data is repeated
     * twice.</p> <p>The default value is <code>true</code>. Valid values include
     * <code>true</code>, <code>false</code>, <code>y</code>, and <code>n</code>.</p>
     */
    inline bool GetRfc4180() const{ return m_rfc4180; }

    /**
     * <p>For an S3 source, when this value is set to <code>true</code> or
     * <code>y</code>, each leading double quotation mark has to be followed by an
     * ending double quotation mark. This formatting complies with RFC 4180. When this
     * value is set to <code>false</code> or <code>n</code>, string literals are copied
     * to the target as is. In this case, a delimiter (row or column) signals the end
     * of the field. Thus, you can't use a delimiter as part of the string, because it
     * signals the end of the value.</p> <p>For an S3 target, an optional parameter
     * used to set behavior to comply with RFC 4180 for data migrated to Amazon S3
     * using .csv file format only. When this value is set to <code>true</code> or
     * <code>y</code> using Amazon S3 as a target, if the data has quotation marks or
     * newline characters in it, DMS encloses the entire column with an additional pair
     * of double quotation marks ("). Every quotation mark within the data is repeated
     * twice.</p> <p>The default value is <code>true</code>. Valid values include
     * <code>true</code>, <code>false</code>, <code>y</code>, and <code>n</code>.</p>
     */
    inline bool Rfc4180HasBeenSet() const { return m_rfc4180HasBeenSet; }

    /**
     * <p>For an S3 source, when this value is set to <code>true</code> or
     * <code>y</code>, each leading double quotation mark has to be followed by an
     * ending double quotation mark. This formatting complies with RFC 4180. When this
     * value is set to <code>false</code> or <code>n</code>, string literals are copied
     * to the target as is. In this case, a delimiter (row or column) signals the end
     * of the field. Thus, you can't use a delimiter as part of the string, because it
     * signals the end of the value.</p> <p>For an S3 target, an optional parameter
     * used to set behavior to comply with RFC 4180 for data migrated to Amazon S3
     * using .csv file format only. When this value is set to <code>true</code> or
     * <code>y</code> using Amazon S3 as a target, if the data has quotation marks or
     * newline characters in it, DMS encloses the entire column with an additional pair
     * of double quotation marks ("). Every quotation mark within the data is repeated
     * twice.</p> <p>The default value is <code>true</code>. Valid values include
     * <code>true</code>, <code>false</code>, <code>y</code>, and <code>n</code>.</p>
     */
    inline void SetRfc4180(bool value) { m_rfc4180HasBeenSet = true; m_rfc4180 = value; }

    /**
     * <p>For an S3 source, when this value is set to <code>true</code> or
     * <code>y</code>, each leading double quotation mark has to be followed by an
     * ending double quotation mark. This formatting complies with RFC 4180. When this
     * value is set to <code>false</code> or <code>n</code>, string literals are copied
     * to the target as is. In this case, a delimiter (row or column) signals the end
     * of the field. Thus, you can't use a delimiter as part of the string, because it
     * signals the end of the value.</p> <p>For an S3 target, an optional parameter
     * used to set behavior to comply with RFC 4180 for data migrated to Amazon S3
     * using .csv file format only. When this value is set to <code>true</code> or
     * <code>y</code> using Amazon S3 as a target, if the data has quotation marks or
     * newline characters in it, DMS encloses the entire column with an additional pair
     * of double quotation marks ("). Every quotation mark within the data is repeated
     * twice.</p> <p>The default value is <code>true</code>. Valid values include
     * <code>true</code>, <code>false</code>, <code>y</code>, and <code>n</code>.</p>
     */
    inline S3Settings& WithRfc4180(bool value) { SetRfc4180(value); return *this;}


    /**
     * <p>When creating an S3 target endpoint, set <code>DatePartitionTimezone</code>
     * to convert the current UTC time into a specified time zone. The conversion
     * occurs when a date partition folder is created and a CDC filename is generated.
     * The time zone format is Area/Location. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>, as shown in the
     * following example.</p> <p> <code>s3-settings='{"DatePartitionEnabled": true,
     * "DatePartitionSequence": "YYYYMMDDHH", "DatePartitionDelimiter": "SLASH",
     * "DatePartitionTimezone":"<i>Asia/Seoul</i>", "BucketName":
     * "dms-nattarat-test"}'</code> </p>
     */
    inline const Aws::String& GetDatePartitionTimezone() const{ return m_datePartitionTimezone; }

    /**
     * <p>When creating an S3 target endpoint, set <code>DatePartitionTimezone</code>
     * to convert the current UTC time into a specified time zone. The conversion
     * occurs when a date partition folder is created and a CDC filename is generated.
     * The time zone format is Area/Location. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>, as shown in the
     * following example.</p> <p> <code>s3-settings='{"DatePartitionEnabled": true,
     * "DatePartitionSequence": "YYYYMMDDHH", "DatePartitionDelimiter": "SLASH",
     * "DatePartitionTimezone":"<i>Asia/Seoul</i>", "BucketName":
     * "dms-nattarat-test"}'</code> </p>
     */
    inline bool DatePartitionTimezoneHasBeenSet() const { return m_datePartitionTimezoneHasBeenSet; }

    /**
     * <p>When creating an S3 target endpoint, set <code>DatePartitionTimezone</code>
     * to convert the current UTC time into a specified time zone. The conversion
     * occurs when a date partition folder is created and a CDC filename is generated.
     * The time zone format is Area/Location. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>, as shown in the
     * following example.</p> <p> <code>s3-settings='{"DatePartitionEnabled": true,
     * "DatePartitionSequence": "YYYYMMDDHH", "DatePartitionDelimiter": "SLASH",
     * "DatePartitionTimezone":"<i>Asia/Seoul</i>", "BucketName":
     * "dms-nattarat-test"}'</code> </p>
     */
    inline void SetDatePartitionTimezone(const Aws::String& value) { m_datePartitionTimezoneHasBeenSet = true; m_datePartitionTimezone = value; }

    /**
     * <p>When creating an S3 target endpoint, set <code>DatePartitionTimezone</code>
     * to convert the current UTC time into a specified time zone. The conversion
     * occurs when a date partition folder is created and a CDC filename is generated.
     * The time zone format is Area/Location. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>, as shown in the
     * following example.</p> <p> <code>s3-settings='{"DatePartitionEnabled": true,
     * "DatePartitionSequence": "YYYYMMDDHH", "DatePartitionDelimiter": "SLASH",
     * "DatePartitionTimezone":"<i>Asia/Seoul</i>", "BucketName":
     * "dms-nattarat-test"}'</code> </p>
     */
    inline void SetDatePartitionTimezone(Aws::String&& value) { m_datePartitionTimezoneHasBeenSet = true; m_datePartitionTimezone = std::move(value); }

    /**
     * <p>When creating an S3 target endpoint, set <code>DatePartitionTimezone</code>
     * to convert the current UTC time into a specified time zone. The conversion
     * occurs when a date partition folder is created and a CDC filename is generated.
     * The time zone format is Area/Location. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>, as shown in the
     * following example.</p> <p> <code>s3-settings='{"DatePartitionEnabled": true,
     * "DatePartitionSequence": "YYYYMMDDHH", "DatePartitionDelimiter": "SLASH",
     * "DatePartitionTimezone":"<i>Asia/Seoul</i>", "BucketName":
     * "dms-nattarat-test"}'</code> </p>
     */
    inline void SetDatePartitionTimezone(const char* value) { m_datePartitionTimezoneHasBeenSet = true; m_datePartitionTimezone.assign(value); }

    /**
     * <p>When creating an S3 target endpoint, set <code>DatePartitionTimezone</code>
     * to convert the current UTC time into a specified time zone. The conversion
     * occurs when a date partition folder is created and a CDC filename is generated.
     * The time zone format is Area/Location. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>, as shown in the
     * following example.</p> <p> <code>s3-settings='{"DatePartitionEnabled": true,
     * "DatePartitionSequence": "YYYYMMDDHH", "DatePartitionDelimiter": "SLASH",
     * "DatePartitionTimezone":"<i>Asia/Seoul</i>", "BucketName":
     * "dms-nattarat-test"}'</code> </p>
     */
    inline S3Settings& WithDatePartitionTimezone(const Aws::String& value) { SetDatePartitionTimezone(value); return *this;}

    /**
     * <p>When creating an S3 target endpoint, set <code>DatePartitionTimezone</code>
     * to convert the current UTC time into a specified time zone. The conversion
     * occurs when a date partition folder is created and a CDC filename is generated.
     * The time zone format is Area/Location. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>, as shown in the
     * following example.</p> <p> <code>s3-settings='{"DatePartitionEnabled": true,
     * "DatePartitionSequence": "YYYYMMDDHH", "DatePartitionDelimiter": "SLASH",
     * "DatePartitionTimezone":"<i>Asia/Seoul</i>", "BucketName":
     * "dms-nattarat-test"}'</code> </p>
     */
    inline S3Settings& WithDatePartitionTimezone(Aws::String&& value) { SetDatePartitionTimezone(std::move(value)); return *this;}

    /**
     * <p>When creating an S3 target endpoint, set <code>DatePartitionTimezone</code>
     * to convert the current UTC time into a specified time zone. The conversion
     * occurs when a date partition folder is created and a CDC filename is generated.
     * The time zone format is Area/Location. Use this parameter when
     * <code>DatePartitionedEnabled</code> is set to <code>true</code>, as shown in the
     * following example.</p> <p> <code>s3-settings='{"DatePartitionEnabled": true,
     * "DatePartitionSequence": "YYYYMMDDHH", "DatePartitionDelimiter": "SLASH",
     * "DatePartitionTimezone":"<i>Asia/Seoul</i>", "BucketName":
     * "dms-nattarat-test"}'</code> </p>
     */
    inline S3Settings& WithDatePartitionTimezone(const char* value) { SetDatePartitionTimezone(value); return *this;}


    /**
     * <p>Use the S3 target endpoint setting <code>AddTrailingPaddingCharacter</code>
     * to add padding on string data. The default value is <code>false</code>.</p>
     */
    inline bool GetAddTrailingPaddingCharacter() const{ return m_addTrailingPaddingCharacter; }

    /**
     * <p>Use the S3 target endpoint setting <code>AddTrailingPaddingCharacter</code>
     * to add padding on string data. The default value is <code>false</code>.</p>
     */
    inline bool AddTrailingPaddingCharacterHasBeenSet() const { return m_addTrailingPaddingCharacterHasBeenSet; }

    /**
     * <p>Use the S3 target endpoint setting <code>AddTrailingPaddingCharacter</code>
     * to add padding on string data. The default value is <code>false</code>.</p>
     */
    inline void SetAddTrailingPaddingCharacter(bool value) { m_addTrailingPaddingCharacterHasBeenSet = true; m_addTrailingPaddingCharacter = value; }

    /**
     * <p>Use the S3 target endpoint setting <code>AddTrailingPaddingCharacter</code>
     * to add padding on string data. The default value is <code>false</code>.</p>
     */
    inline S3Settings& WithAddTrailingPaddingCharacter(bool value) { SetAddTrailingPaddingCharacter(value); return *this;}


    /**
     * <p>To specify a bucket owner and prevent sniping, you can use the
     * <code>ExpectedBucketOwner</code> endpoint setting. </p> <p>Example:
     * <code>--s3-settings='{"ExpectedBucketOwner": "<i>AWS_Account_ID</i>"}'</code>
     * </p> <p>When you make a request to test a connection or perform a migration, S3
     * checks the account ID of the bucket owner against the specified parameter.</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const{ return m_expectedBucketOwner; }

    /**
     * <p>To specify a bucket owner and prevent sniping, you can use the
     * <code>ExpectedBucketOwner</code> endpoint setting. </p> <p>Example:
     * <code>--s3-settings='{"ExpectedBucketOwner": "<i>AWS_Account_ID</i>"}'</code>
     * </p> <p>When you make a request to test a connection or perform a migration, S3
     * checks the account ID of the bucket owner against the specified parameter.</p>
     */
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }

    /**
     * <p>To specify a bucket owner and prevent sniping, you can use the
     * <code>ExpectedBucketOwner</code> endpoint setting. </p> <p>Example:
     * <code>--s3-settings='{"ExpectedBucketOwner": "<i>AWS_Account_ID</i>"}'</code>
     * </p> <p>When you make a request to test a connection or perform a migration, S3
     * checks the account ID of the bucket owner against the specified parameter.</p>
     */
    inline void SetExpectedBucketOwner(const Aws::String& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = value; }

    /**
     * <p>To specify a bucket owner and prevent sniping, you can use the
     * <code>ExpectedBucketOwner</code> endpoint setting. </p> <p>Example:
     * <code>--s3-settings='{"ExpectedBucketOwner": "<i>AWS_Account_ID</i>"}'</code>
     * </p> <p>When you make a request to test a connection or perform a migration, S3
     * checks the account ID of the bucket owner against the specified parameter.</p>
     */
    inline void SetExpectedBucketOwner(Aws::String&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::move(value); }

    /**
     * <p>To specify a bucket owner and prevent sniping, you can use the
     * <code>ExpectedBucketOwner</code> endpoint setting. </p> <p>Example:
     * <code>--s3-settings='{"ExpectedBucketOwner": "<i>AWS_Account_ID</i>"}'</code>
     * </p> <p>When you make a request to test a connection or perform a migration, S3
     * checks the account ID of the bucket owner against the specified parameter.</p>
     */
    inline void SetExpectedBucketOwner(const char* value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner.assign(value); }

    /**
     * <p>To specify a bucket owner and prevent sniping, you can use the
     * <code>ExpectedBucketOwner</code> endpoint setting. </p> <p>Example:
     * <code>--s3-settings='{"ExpectedBucketOwner": "<i>AWS_Account_ID</i>"}'</code>
     * </p> <p>When you make a request to test a connection or perform a migration, S3
     * checks the account ID of the bucket owner against the specified parameter.</p>
     */
    inline S3Settings& WithExpectedBucketOwner(const Aws::String& value) { SetExpectedBucketOwner(value); return *this;}

    /**
     * <p>To specify a bucket owner and prevent sniping, you can use the
     * <code>ExpectedBucketOwner</code> endpoint setting. </p> <p>Example:
     * <code>--s3-settings='{"ExpectedBucketOwner": "<i>AWS_Account_ID</i>"}'</code>
     * </p> <p>When you make a request to test a connection or perform a migration, S3
     * checks the account ID of the bucket owner against the specified parameter.</p>
     */
    inline S3Settings& WithExpectedBucketOwner(Aws::String&& value) { SetExpectedBucketOwner(std::move(value)); return *this;}

    /**
     * <p>To specify a bucket owner and prevent sniping, you can use the
     * <code>ExpectedBucketOwner</code> endpoint setting. </p> <p>Example:
     * <code>--s3-settings='{"ExpectedBucketOwner": "<i>AWS_Account_ID</i>"}'</code>
     * </p> <p>When you make a request to test a connection or perform a migration, S3
     * checks the account ID of the bucket owner against the specified parameter.</p>
     */
    inline S3Settings& WithExpectedBucketOwner(const char* value) { SetExpectedBucketOwner(value); return *this;}

  private:

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_externalTableDefinition;
    bool m_externalTableDefinitionHasBeenSet = false;

    Aws::String m_csvRowDelimiter;
    bool m_csvRowDelimiterHasBeenSet = false;

    Aws::String m_csvDelimiter;
    bool m_csvDelimiterHasBeenSet = false;

    Aws::String m_bucketFolder;
    bool m_bucketFolderHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    CompressionTypeValue m_compressionType;
    bool m_compressionTypeHasBeenSet = false;

    EncryptionModeValue m_encryptionMode;
    bool m_encryptionModeHasBeenSet = false;

    Aws::String m_serverSideEncryptionKmsKeyId;
    bool m_serverSideEncryptionKmsKeyIdHasBeenSet = false;

    DataFormatValue m_dataFormat;
    bool m_dataFormatHasBeenSet = false;

    EncodingTypeValue m_encodingType;
    bool m_encodingTypeHasBeenSet = false;

    int m_dictPageSizeLimit;
    bool m_dictPageSizeLimitHasBeenSet = false;

    int m_rowGroupLength;
    bool m_rowGroupLengthHasBeenSet = false;

    int m_dataPageSize;
    bool m_dataPageSizeHasBeenSet = false;

    ParquetVersionValue m_parquetVersion;
    bool m_parquetVersionHasBeenSet = false;

    bool m_enableStatistics;
    bool m_enableStatisticsHasBeenSet = false;

    bool m_includeOpForFullLoad;
    bool m_includeOpForFullLoadHasBeenSet = false;

    bool m_cdcInsertsOnly;
    bool m_cdcInsertsOnlyHasBeenSet = false;

    Aws::String m_timestampColumnName;
    bool m_timestampColumnNameHasBeenSet = false;

    bool m_parquetTimestampInMillisecond;
    bool m_parquetTimestampInMillisecondHasBeenSet = false;

    bool m_cdcInsertsAndUpdates;
    bool m_cdcInsertsAndUpdatesHasBeenSet = false;

    bool m_datePartitionEnabled;
    bool m_datePartitionEnabledHasBeenSet = false;

    DatePartitionSequenceValue m_datePartitionSequence;
    bool m_datePartitionSequenceHasBeenSet = false;

    DatePartitionDelimiterValue m_datePartitionDelimiter;
    bool m_datePartitionDelimiterHasBeenSet = false;

    bool m_useCsvNoSupValue;
    bool m_useCsvNoSupValueHasBeenSet = false;

    Aws::String m_csvNoSupValue;
    bool m_csvNoSupValueHasBeenSet = false;

    bool m_preserveTransactions;
    bool m_preserveTransactionsHasBeenSet = false;

    Aws::String m_cdcPath;
    bool m_cdcPathHasBeenSet = false;

    bool m_useTaskStartTimeForFullLoadTimestamp;
    bool m_useTaskStartTimeForFullLoadTimestampHasBeenSet = false;

    CannedAclForObjectsValue m_cannedAclForObjects;
    bool m_cannedAclForObjectsHasBeenSet = false;

    bool m_addColumnName;
    bool m_addColumnNameHasBeenSet = false;

    int m_cdcMaxBatchInterval;
    bool m_cdcMaxBatchIntervalHasBeenSet = false;

    int m_cdcMinFileSize;
    bool m_cdcMinFileSizeHasBeenSet = false;

    Aws::String m_csvNullValue;
    bool m_csvNullValueHasBeenSet = false;

    int m_ignoreHeaderRows;
    bool m_ignoreHeaderRowsHasBeenSet = false;

    int m_maxFileSize;
    bool m_maxFileSizeHasBeenSet = false;

    bool m_rfc4180;
    bool m_rfc4180HasBeenSet = false;

    Aws::String m_datePartitionTimezone;
    bool m_datePartitionTimezoneHasBeenSet = false;

    bool m_addTrailingPaddingCharacter;
    bool m_addTrailingPaddingCharacterHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
