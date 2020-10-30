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
  class AWS_DATABASEMIGRATIONSERVICE_API S3Settings
  {
  public:
    S3Settings();
    S3Settings(Aws::Utils::Json::JsonView jsonValue);
    S3Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. It is a
     * required parameter that enables DMS to write and read objects from an 3S
     * bucket.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. It is a
     * required parameter that enables DMS to write and read objects from an 3S
     * bucket.</p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. It is a
     * required parameter that enables DMS to write and read objects from an 3S
     * bucket.</p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. It is a
     * required parameter that enables DMS to write and read objects from an 3S
     * bucket.</p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. It is a
     * required parameter that enables DMS to write and read objects from an 3S
     * bucket.</p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. It is a
     * required parameter that enables DMS to write and read objects from an 3S
     * bucket.</p>
     */
    inline S3Settings& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. It is a
     * required parameter that enables DMS to write and read objects from an 3S
     * bucket.</p>
     */
    inline S3Settings& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. It is a
     * required parameter that enables DMS to write and read objects from an 3S
     * bucket.</p>
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
     * <code>SSE_S3</code>, you need an AWS Identity and Access Management (IAM) role
     * with permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
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
     * <code>SSE_S3</code>, you need an AWS Identity and Access Management (IAM) role
     * with permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
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
     * <code>SSE_S3</code>, you need an AWS Identity and Access Management (IAM) role
     * with permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
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
     * <code>SSE_S3</code>, you need an AWS Identity and Access Management (IAM) role
     * with permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
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
     * <code>SSE_S3</code>, you need an AWS Identity and Access Management (IAM) role
     * with permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
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
     * <code>SSE_S3</code>, you need an AWS Identity and Access Management (IAM) role
     * with permission to allow <code>"arn:aws:s3:::dms-*"</code> to use the following
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
     * provide the AWS KMS key ID. The key that you use needs an attached policy that
     * enables AWS Identity and Access Management (IAM) user permissions and allows use
     * of the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline const Aws::String& GetServerSideEncryptionKmsKeyId() const{ return m_serverSideEncryptionKmsKeyId; }

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the AWS KMS key ID. The key that you use needs an attached policy that
     * enables AWS Identity and Access Management (IAM) user permissions and allows use
     * of the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline bool ServerSideEncryptionKmsKeyIdHasBeenSet() const { return m_serverSideEncryptionKmsKeyIdHasBeenSet; }

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the AWS KMS key ID. The key that you use needs an attached policy that
     * enables AWS Identity and Access Management (IAM) user permissions and allows use
     * of the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline void SetServerSideEncryptionKmsKeyId(const Aws::String& value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId = value; }

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the AWS KMS key ID. The key that you use needs an attached policy that
     * enables AWS Identity and Access Management (IAM) user permissions and allows use
     * of the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline void SetServerSideEncryptionKmsKeyId(Aws::String&& value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId = std::move(value); }

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the AWS KMS key ID. The key that you use needs an attached policy that
     * enables AWS Identity and Access Management (IAM) user permissions and allows use
     * of the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline void SetServerSideEncryptionKmsKeyId(const char* value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId.assign(value); }

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the AWS KMS key ID. The key that you use needs an attached policy that
     * enables AWS Identity and Access Management (IAM) user permissions and allows use
     * of the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline S3Settings& WithServerSideEncryptionKmsKeyId(const Aws::String& value) { SetServerSideEncryptionKmsKeyId(value); return *this;}

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the AWS KMS key ID. The key that you use needs an attached policy that
     * enables AWS Identity and Access Management (IAM) user permissions and allows use
     * of the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
     * --endpoint-identifier <i>value</i> --endpoint-type target --engine-name s3
     * --s3-settings
     * ServiceAccessRoleArn=<i>value</i>,BucketFolder=<i>value</i>,BucketName=<i>value</i>,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=<i>value</i>
     * </code> </p>
     */
    inline S3Settings& WithServerSideEncryptionKmsKeyId(Aws::String&& value) { SetServerSideEncryptionKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>If you are using <code>SSE_KMS</code> for the <code>EncryptionMode</code>,
     * provide the AWS KMS key ID. The key that you use needs an attached policy that
     * enables AWS Identity and Access Management (IAM) user permissions and allows use
     * of the key.</p> <p>Here is a CLI example: <code>aws dms create-endpoint
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
     * added to the source database.</p>  <p>AWS DMS supports the
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
     * Service User Guide.</i>.</p> 
     */
    inline bool GetIncludeOpForFullLoad() const{ return m_includeOpForFullLoad; }

    /**
     * <p>A value that enables a full load to write INSERT operations to the
     * comma-separated value (.csv) output files only to indicate how the rows were
     * added to the source database.</p>  <p>AWS DMS supports the
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
     * Service User Guide.</i>.</p> 
     */
    inline bool IncludeOpForFullLoadHasBeenSet() const { return m_includeOpForFullLoadHasBeenSet; }

    /**
     * <p>A value that enables a full load to write INSERT operations to the
     * comma-separated value (.csv) output files only to indicate how the rows were
     * added to the source database.</p>  <p>AWS DMS supports the
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
     * Service User Guide.</i>.</p> 
     */
    inline void SetIncludeOpForFullLoad(bool value) { m_includeOpForFullLoadHasBeenSet = true; m_includeOpForFullLoad = value; }

    /**
     * <p>A value that enables a full load to write INSERT operations to the
     * comma-separated value (.csv) output files only to indicate how the rows were
     * added to the source database.</p>  <p>AWS DMS supports the
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
     * Service User Guide.</i>.</p>  <p>AWS DMS supports the interaction
     * described preceding between the <code>CdcInsertsOnly</code> and
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
     * Service User Guide.</i>.</p>  <p>AWS DMS supports the interaction
     * described preceding between the <code>CdcInsertsOnly</code> and
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
     * Service User Guide.</i>.</p>  <p>AWS DMS supports the interaction
     * described preceding between the <code>CdcInsertsOnly</code> and
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
     * Service User Guide.</i>.</p>  <p>AWS DMS supports the interaction
     * described preceding between the <code>CdcInsertsOnly</code> and
     * <code>IncludeOpForFullLoad</code> parameters in versions 3.1.4 and later. </p>
     * <p> <code>CdcInsertsOnly</code> and <code>CdcInsertsAndUpdates</code> can't both
     * be set to <code>true</code> for the same endpoint. Set either
     * <code>CdcInsertsOnly</code> or <code>CdcInsertsAndUpdates</code> to
     * <code>true</code> for the same endpoint, but not both.</p> 
     */
    inline S3Settings& WithCdcInsertsOnly(bool value) { SetCdcInsertsOnly(value); return *this;}


    /**
     * <p>A value that when nonblank causes AWS DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>AWS DMS
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
     * <p>A value that when nonblank causes AWS DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>AWS DMS
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
     * <p>A value that when nonblank causes AWS DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>AWS DMS
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
     * <p>A value that when nonblank causes AWS DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>AWS DMS
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
     * <p>A value that when nonblank causes AWS DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>AWS DMS
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
     * <p>A value that when nonblank causes AWS DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>AWS DMS
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
     * <p>A value that when nonblank causes AWS DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>AWS DMS
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
     * <p>A value that when nonblank causes AWS DMS to add a column with timestamp
     * information to the endpoint data for an Amazon S3 target.</p>  <p>AWS DMS
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
     *  <p>AWS DMS supports the <code>ParquetTimestampInMillisecond</code>
     * parameter in versions 3.1.4 and later.</p>  <p>When
     * <code>ParquetTimestampInMillisecond</code> is set to <code>true</code> or
     * <code>y</code>, AWS DMS writes all <code>TIMESTAMP</code> columns in a .parquet
     * formatted file with millisecond precision. Otherwise, DMS writes them with
     * microsecond precision.</p> <p>Currently, Amazon Athena and AWS Glue can handle
     * only millisecond precision for <code>TIMESTAMP</code> values. Set this parameter
     * to <code>true</code> for S3 endpoint object files that are .parquet formatted
     * only if you plan to query or process the data with Athena or AWS Glue.</p>
     *  <p>AWS DMS writes any <code>TIMESTAMP</code> column values written to an
     * S3 file in .csv format with microsecond precision.</p> <p>Setting
     * <code>ParquetTimestampInMillisecond</code> has no effect on the string format of
     * the timestamp column value that is inserted by setting the
     * <code>TimestampColumnName</code> parameter.</p> 
     */
    inline bool GetParquetTimestampInMillisecond() const{ return m_parquetTimestampInMillisecond; }

    /**
     * <p>A value that specifies the precision of any <code>TIMESTAMP</code> column
     * values that are written to an Amazon S3 object file in .parquet format.</p>
     *  <p>AWS DMS supports the <code>ParquetTimestampInMillisecond</code>
     * parameter in versions 3.1.4 and later.</p>  <p>When
     * <code>ParquetTimestampInMillisecond</code> is set to <code>true</code> or
     * <code>y</code>, AWS DMS writes all <code>TIMESTAMP</code> columns in a .parquet
     * formatted file with millisecond precision. Otherwise, DMS writes them with
     * microsecond precision.</p> <p>Currently, Amazon Athena and AWS Glue can handle
     * only millisecond precision for <code>TIMESTAMP</code> values. Set this parameter
     * to <code>true</code> for S3 endpoint object files that are .parquet formatted
     * only if you plan to query or process the data with Athena or AWS Glue.</p>
     *  <p>AWS DMS writes any <code>TIMESTAMP</code> column values written to an
     * S3 file in .csv format with microsecond precision.</p> <p>Setting
     * <code>ParquetTimestampInMillisecond</code> has no effect on the string format of
     * the timestamp column value that is inserted by setting the
     * <code>TimestampColumnName</code> parameter.</p> 
     */
    inline bool ParquetTimestampInMillisecondHasBeenSet() const { return m_parquetTimestampInMillisecondHasBeenSet; }

    /**
     * <p>A value that specifies the precision of any <code>TIMESTAMP</code> column
     * values that are written to an Amazon S3 object file in .parquet format.</p>
     *  <p>AWS DMS supports the <code>ParquetTimestampInMillisecond</code>
     * parameter in versions 3.1.4 and later.</p>  <p>When
     * <code>ParquetTimestampInMillisecond</code> is set to <code>true</code> or
     * <code>y</code>, AWS DMS writes all <code>TIMESTAMP</code> columns in a .parquet
     * formatted file with millisecond precision. Otherwise, DMS writes them with
     * microsecond precision.</p> <p>Currently, Amazon Athena and AWS Glue can handle
     * only millisecond precision for <code>TIMESTAMP</code> values. Set this parameter
     * to <code>true</code> for S3 endpoint object files that are .parquet formatted
     * only if you plan to query or process the data with Athena or AWS Glue.</p>
     *  <p>AWS DMS writes any <code>TIMESTAMP</code> column values written to an
     * S3 file in .csv format with microsecond precision.</p> <p>Setting
     * <code>ParquetTimestampInMillisecond</code> has no effect on the string format of
     * the timestamp column value that is inserted by setting the
     * <code>TimestampColumnName</code> parameter.</p> 
     */
    inline void SetParquetTimestampInMillisecond(bool value) { m_parquetTimestampInMillisecondHasBeenSet = true; m_parquetTimestampInMillisecond = value; }

    /**
     * <p>A value that specifies the precision of any <code>TIMESTAMP</code> column
     * values that are written to an Amazon S3 object file in .parquet format.</p>
     *  <p>AWS DMS supports the <code>ParquetTimestampInMillisecond</code>
     * parameter in versions 3.1.4 and later.</p>  <p>When
     * <code>ParquetTimestampInMillisecond</code> is set to <code>true</code> or
     * <code>y</code>, AWS DMS writes all <code>TIMESTAMP</code> columns in a .parquet
     * formatted file with millisecond precision. Otherwise, DMS writes them with
     * microsecond precision.</p> <p>Currently, Amazon Athena and AWS Glue can handle
     * only millisecond precision for <code>TIMESTAMP</code> values. Set this parameter
     * to <code>true</code> for S3 endpoint object files that are .parquet formatted
     * only if you plan to query or process the data with Athena or AWS Glue.</p>
     *  <p>AWS DMS writes any <code>TIMESTAMP</code> column values written to an
     * S3 file in .csv format with microsecond precision.</p> <p>Setting
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
     * Service User Guide.</i>.</p>  <p>AWS DMS supports the use of the
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
     * Service User Guide.</i>.</p>  <p>AWS DMS supports the use of the
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
     * Service User Guide.</i>.</p>  <p>AWS DMS supports the use of the
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
     * Source DB Operations in Migrated S3 Data</a> in the <i>AWS Database Migration
     * Service User Guide.</i>.</p>  <p>AWS DMS supports the use of the
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
     * more information about date-based folder partitoning, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.DatePartitioning">Using
     * date-based folder partitioning</a>.</p>
     */
    inline bool GetDatePartitionEnabled() const{ return m_datePartitionEnabled; }

    /**
     * <p>When set to <code>true</code>, this parameter partitions S3 bucket folders
     * based on transaction commit dates. The default value is <code>false</code>. For
     * more information about date-based folder partitoning, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.DatePartitioning">Using
     * date-based folder partitioning</a>.</p>
     */
    inline bool DatePartitionEnabledHasBeenSet() const { return m_datePartitionEnabledHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, this parameter partitions S3 bucket folders
     * based on transaction commit dates. The default value is <code>false</code>. For
     * more information about date-based folder partitoning, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.DatePartitioning">Using
     * date-based folder partitioning</a>.</p>
     */
    inline void SetDatePartitionEnabled(bool value) { m_datePartitionEnabledHasBeenSet = true; m_datePartitionEnabled = value; }

    /**
     * <p>When set to <code>true</code>, this parameter partitions S3 bucket folders
     * based on transaction commit dates. The default value is <code>false</code>. For
     * more information about date-based folder partitoning, see <a
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

  private:

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet;

    Aws::String m_externalTableDefinition;
    bool m_externalTableDefinitionHasBeenSet;

    Aws::String m_csvRowDelimiter;
    bool m_csvRowDelimiterHasBeenSet;

    Aws::String m_csvDelimiter;
    bool m_csvDelimiterHasBeenSet;

    Aws::String m_bucketFolder;
    bool m_bucketFolderHasBeenSet;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    CompressionTypeValue m_compressionType;
    bool m_compressionTypeHasBeenSet;

    EncryptionModeValue m_encryptionMode;
    bool m_encryptionModeHasBeenSet;

    Aws::String m_serverSideEncryptionKmsKeyId;
    bool m_serverSideEncryptionKmsKeyIdHasBeenSet;

    DataFormatValue m_dataFormat;
    bool m_dataFormatHasBeenSet;

    EncodingTypeValue m_encodingType;
    bool m_encodingTypeHasBeenSet;

    int m_dictPageSizeLimit;
    bool m_dictPageSizeLimitHasBeenSet;

    int m_rowGroupLength;
    bool m_rowGroupLengthHasBeenSet;

    int m_dataPageSize;
    bool m_dataPageSizeHasBeenSet;

    ParquetVersionValue m_parquetVersion;
    bool m_parquetVersionHasBeenSet;

    bool m_enableStatistics;
    bool m_enableStatisticsHasBeenSet;

    bool m_includeOpForFullLoad;
    bool m_includeOpForFullLoadHasBeenSet;

    bool m_cdcInsertsOnly;
    bool m_cdcInsertsOnlyHasBeenSet;

    Aws::String m_timestampColumnName;
    bool m_timestampColumnNameHasBeenSet;

    bool m_parquetTimestampInMillisecond;
    bool m_parquetTimestampInMillisecondHasBeenSet;

    bool m_cdcInsertsAndUpdates;
    bool m_cdcInsertsAndUpdatesHasBeenSet;

    bool m_datePartitionEnabled;
    bool m_datePartitionEnabledHasBeenSet;

    DatePartitionSequenceValue m_datePartitionSequence;
    bool m_datePartitionSequenceHasBeenSet;

    DatePartitionDelimiterValue m_datePartitionDelimiter;
    bool m_datePartitionDelimiterHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
