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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/CompressionTypeValue.h>
#include <aws/dms/model/EncryptionModeValue.h>
#include <aws/dms/model/DataFormatValue.h>
#include <aws/dms/model/EncodingTypeValue.h>
#include <aws/dms/model/ParquetVersionValue.h>
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
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. </p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. </p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. </p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. </p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. </p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. </p>
     */
    inline S3Settings& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. </p>
     */
    inline S3Settings& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. </p>
     */
    inline S3Settings& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}


    /**
     * <p> The external table definition. </p>
     */
    inline const Aws::String& GetExternalTableDefinition() const{ return m_externalTableDefinition; }

    /**
     * <p> The external table definition. </p>
     */
    inline bool ExternalTableDefinitionHasBeenSet() const { return m_externalTableDefinitionHasBeenSet; }

    /**
     * <p> The external table definition. </p>
     */
    inline void SetExternalTableDefinition(const Aws::String& value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition = value; }

    /**
     * <p> The external table definition. </p>
     */
    inline void SetExternalTableDefinition(Aws::String&& value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition = std::move(value); }

    /**
     * <p> The external table definition. </p>
     */
    inline void SetExternalTableDefinition(const char* value) { m_externalTableDefinitionHasBeenSet = true; m_externalTableDefinition.assign(value); }

    /**
     * <p> The external table definition. </p>
     */
    inline S3Settings& WithExternalTableDefinition(const Aws::String& value) { SetExternalTableDefinition(value); return *this;}

    /**
     * <p> The external table definition. </p>
     */
    inline S3Settings& WithExternalTableDefinition(Aws::String&& value) { SetExternalTableDefinition(std::move(value)); return *this;}

    /**
     * <p> The external table definition. </p>
     */
    inline S3Settings& WithExternalTableDefinition(const char* value) { SetExternalTableDefinition(value); return *this;}


    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (<code>\n</code>). </p>
     */
    inline const Aws::String& GetCsvRowDelimiter() const{ return m_csvRowDelimiter; }

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (<code>\n</code>). </p>
     */
    inline bool CsvRowDelimiterHasBeenSet() const { return m_csvRowDelimiterHasBeenSet; }

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (<code>\n</code>). </p>
     */
    inline void SetCsvRowDelimiter(const Aws::String& value) { m_csvRowDelimiterHasBeenSet = true; m_csvRowDelimiter = value; }

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (<code>\n</code>). </p>
     */
    inline void SetCsvRowDelimiter(Aws::String&& value) { m_csvRowDelimiterHasBeenSet = true; m_csvRowDelimiter = std::move(value); }

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (<code>\n</code>). </p>
     */
    inline void SetCsvRowDelimiter(const char* value) { m_csvRowDelimiterHasBeenSet = true; m_csvRowDelimiter.assign(value); }

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (<code>\n</code>). </p>
     */
    inline S3Settings& WithCsvRowDelimiter(const Aws::String& value) { SetCsvRowDelimiter(value); return *this;}

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (<code>\n</code>). </p>
     */
    inline S3Settings& WithCsvRowDelimiter(Aws::String&& value) { SetCsvRowDelimiter(std::move(value)); return *this;}

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (<code>\n</code>). </p>
     */
    inline S3Settings& WithCsvRowDelimiter(const char* value) { SetCsvRowDelimiter(value); return *this;}


    /**
     * <p> The delimiter used to separate columns in the source files. The default is a
     * comma. </p>
     */
    inline const Aws::String& GetCsvDelimiter() const{ return m_csvDelimiter; }

    /**
     * <p> The delimiter used to separate columns in the source files. The default is a
     * comma. </p>
     */
    inline bool CsvDelimiterHasBeenSet() const { return m_csvDelimiterHasBeenSet; }

    /**
     * <p> The delimiter used to separate columns in the source files. The default is a
     * comma. </p>
     */
    inline void SetCsvDelimiter(const Aws::String& value) { m_csvDelimiterHasBeenSet = true; m_csvDelimiter = value; }

    /**
     * <p> The delimiter used to separate columns in the source files. The default is a
     * comma. </p>
     */
    inline void SetCsvDelimiter(Aws::String&& value) { m_csvDelimiterHasBeenSet = true; m_csvDelimiter = std::move(value); }

    /**
     * <p> The delimiter used to separate columns in the source files. The default is a
     * comma. </p>
     */
    inline void SetCsvDelimiter(const char* value) { m_csvDelimiterHasBeenSet = true; m_csvDelimiter.assign(value); }

    /**
     * <p> The delimiter used to separate columns in the source files. The default is a
     * comma. </p>
     */
    inline S3Settings& WithCsvDelimiter(const Aws::String& value) { SetCsvDelimiter(value); return *this;}

    /**
     * <p> The delimiter used to separate columns in the source files. The default is a
     * comma. </p>
     */
    inline S3Settings& WithCsvDelimiter(Aws::String&& value) { SetCsvDelimiter(std::move(value)); return *this;}

    /**
     * <p> The delimiter used to separate columns in the source files. The default is a
     * comma. </p>
     */
    inline S3Settings& WithCsvDelimiter(const char* value) { SetCsvDelimiter(value); return *this;}


    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * <code>&lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/</code>. If
     * this parameter is not specified, then the path used is
     * <code>&lt;schema_name&gt;/&lt;table_name&gt;/</code>. </p>
     */
    inline const Aws::String& GetBucketFolder() const{ return m_bucketFolder; }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * <code>&lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/</code>. If
     * this parameter is not specified, then the path used is
     * <code>&lt;schema_name&gt;/&lt;table_name&gt;/</code>. </p>
     */
    inline bool BucketFolderHasBeenSet() const { return m_bucketFolderHasBeenSet; }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * <code>&lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/</code>. If
     * this parameter is not specified, then the path used is
     * <code>&lt;schema_name&gt;/&lt;table_name&gt;/</code>. </p>
     */
    inline void SetBucketFolder(const Aws::String& value) { m_bucketFolderHasBeenSet = true; m_bucketFolder = value; }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * <code>&lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/</code>. If
     * this parameter is not specified, then the path used is
     * <code>&lt;schema_name&gt;/&lt;table_name&gt;/</code>. </p>
     */
    inline void SetBucketFolder(Aws::String&& value) { m_bucketFolderHasBeenSet = true; m_bucketFolder = std::move(value); }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * <code>&lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/</code>. If
     * this parameter is not specified, then the path used is
     * <code>&lt;schema_name&gt;/&lt;table_name&gt;/</code>. </p>
     */
    inline void SetBucketFolder(const char* value) { m_bucketFolderHasBeenSet = true; m_bucketFolder.assign(value); }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * <code>&lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/</code>. If
     * this parameter is not specified, then the path used is
     * <code>&lt;schema_name&gt;/&lt;table_name&gt;/</code>. </p>
     */
    inline S3Settings& WithBucketFolder(const Aws::String& value) { SetBucketFolder(value); return *this;}

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * <code>&lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/</code>. If
     * this parameter is not specified, then the path used is
     * <code>&lt;schema_name&gt;/&lt;table_name&gt;/</code>. </p>
     */
    inline S3Settings& WithBucketFolder(Aws::String&& value) { SetBucketFolder(std::move(value)); return *this;}

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * <code>&lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/</code>. If
     * this parameter is not specified, then the path used is
     * <code>&lt;schema_name&gt;/&lt;table_name&gt;/</code>. </p>
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
     * <p> An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Set to NONE (the default) or do not use to leave
     * the files uncompressed. Applies to both CSV and PARQUET data formats. </p>
     */
    inline const CompressionTypeValue& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p> An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Set to NONE (the default) or do not use to leave
     * the files uncompressed. Applies to both CSV and PARQUET data formats. </p>
     */
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }

    /**
     * <p> An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Set to NONE (the default) or do not use to leave
     * the files uncompressed. Applies to both CSV and PARQUET data formats. </p>
     */
    inline void SetCompressionType(const CompressionTypeValue& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p> An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Set to NONE (the default) or do not use to leave
     * the files uncompressed. Applies to both CSV and PARQUET data formats. </p>
     */
    inline void SetCompressionType(CompressionTypeValue&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p> An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Set to NONE (the default) or do not use to leave
     * the files uncompressed. Applies to both CSV and PARQUET data formats. </p>
     */
    inline S3Settings& WithCompressionType(const CompressionTypeValue& value) { SetCompressionType(value); return *this;}

    /**
     * <p> An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Set to NONE (the default) or do not use to leave
     * the files uncompressed. Applies to both CSV and PARQUET data formats. </p>
     */
    inline S3Settings& WithCompressionType(CompressionTypeValue&& value) { SetCompressionType(std::move(value)); return *this;}


    /**
     * <p>The type of server side encryption you want to use for your data. This is
     * part of the endpoint settings or the extra connections attributes for Amazon S3.
     * You can choose either <code>SSE_S3</code> (default) or <code>SSE_KMS</code>. To
     * use <code>SSE_S3</code>, you need an IAM role with permission to allow
     * <code>"arn:aws:s3:::dms-*"</code> to use the following actions:</p> <ul> <li>
     * <p>s3:CreateBucket</p> </li> <li> <p>s3:ListBucket</p> </li> <li>
     * <p>s3:DeleteBucket</p> </li> <li> <p>s3:GetBucketLocation</p> </li> <li>
     * <p>s3:GetObject</p> </li> <li> <p>s3:PutObject</p> </li> <li>
     * <p>s3:DeleteObject</p> </li> <li> <p>s3:GetObjectVersion</p> </li> <li>
     * <p>s3:GetBucketPolicy</p> </li> <li> <p>s3:PutBucketPolicy</p> </li> <li>
     * <p>s3:DeleteBucketPolicy</p> </li> </ul>
     */
    inline const EncryptionModeValue& GetEncryptionMode() const{ return m_encryptionMode; }

    /**
     * <p>The type of server side encryption you want to use for your data. This is
     * part of the endpoint settings or the extra connections attributes for Amazon S3.
     * You can choose either <code>SSE_S3</code> (default) or <code>SSE_KMS</code>. To
     * use <code>SSE_S3</code>, you need an IAM role with permission to allow
     * <code>"arn:aws:s3:::dms-*"</code> to use the following actions:</p> <ul> <li>
     * <p>s3:CreateBucket</p> </li> <li> <p>s3:ListBucket</p> </li> <li>
     * <p>s3:DeleteBucket</p> </li> <li> <p>s3:GetBucketLocation</p> </li> <li>
     * <p>s3:GetObject</p> </li> <li> <p>s3:PutObject</p> </li> <li>
     * <p>s3:DeleteObject</p> </li> <li> <p>s3:GetObjectVersion</p> </li> <li>
     * <p>s3:GetBucketPolicy</p> </li> <li> <p>s3:PutBucketPolicy</p> </li> <li>
     * <p>s3:DeleteBucketPolicy</p> </li> </ul>
     */
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }

    /**
     * <p>The type of server side encryption you want to use for your data. This is
     * part of the endpoint settings or the extra connections attributes for Amazon S3.
     * You can choose either <code>SSE_S3</code> (default) or <code>SSE_KMS</code>. To
     * use <code>SSE_S3</code>, you need an IAM role with permission to allow
     * <code>"arn:aws:s3:::dms-*"</code> to use the following actions:</p> <ul> <li>
     * <p>s3:CreateBucket</p> </li> <li> <p>s3:ListBucket</p> </li> <li>
     * <p>s3:DeleteBucket</p> </li> <li> <p>s3:GetBucketLocation</p> </li> <li>
     * <p>s3:GetObject</p> </li> <li> <p>s3:PutObject</p> </li> <li>
     * <p>s3:DeleteObject</p> </li> <li> <p>s3:GetObjectVersion</p> </li> <li>
     * <p>s3:GetBucketPolicy</p> </li> <li> <p>s3:PutBucketPolicy</p> </li> <li>
     * <p>s3:DeleteBucketPolicy</p> </li> </ul>
     */
    inline void SetEncryptionMode(const EncryptionModeValue& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }

    /**
     * <p>The type of server side encryption you want to use for your data. This is
     * part of the endpoint settings or the extra connections attributes for Amazon S3.
     * You can choose either <code>SSE_S3</code> (default) or <code>SSE_KMS</code>. To
     * use <code>SSE_S3</code>, you need an IAM role with permission to allow
     * <code>"arn:aws:s3:::dms-*"</code> to use the following actions:</p> <ul> <li>
     * <p>s3:CreateBucket</p> </li> <li> <p>s3:ListBucket</p> </li> <li>
     * <p>s3:DeleteBucket</p> </li> <li> <p>s3:GetBucketLocation</p> </li> <li>
     * <p>s3:GetObject</p> </li> <li> <p>s3:PutObject</p> </li> <li>
     * <p>s3:DeleteObject</p> </li> <li> <p>s3:GetObjectVersion</p> </li> <li>
     * <p>s3:GetBucketPolicy</p> </li> <li> <p>s3:PutBucketPolicy</p> </li> <li>
     * <p>s3:DeleteBucketPolicy</p> </li> </ul>
     */
    inline void SetEncryptionMode(EncryptionModeValue&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::move(value); }

    /**
     * <p>The type of server side encryption you want to use for your data. This is
     * part of the endpoint settings or the extra connections attributes for Amazon S3.
     * You can choose either <code>SSE_S3</code> (default) or <code>SSE_KMS</code>. To
     * use <code>SSE_S3</code>, you need an IAM role with permission to allow
     * <code>"arn:aws:s3:::dms-*"</code> to use the following actions:</p> <ul> <li>
     * <p>s3:CreateBucket</p> </li> <li> <p>s3:ListBucket</p> </li> <li>
     * <p>s3:DeleteBucket</p> </li> <li> <p>s3:GetBucketLocation</p> </li> <li>
     * <p>s3:GetObject</p> </li> <li> <p>s3:PutObject</p> </li> <li>
     * <p>s3:DeleteObject</p> </li> <li> <p>s3:GetObjectVersion</p> </li> <li>
     * <p>s3:GetBucketPolicy</p> </li> <li> <p>s3:PutBucketPolicy</p> </li> <li>
     * <p>s3:DeleteBucketPolicy</p> </li> </ul>
     */
    inline S3Settings& WithEncryptionMode(const EncryptionModeValue& value) { SetEncryptionMode(value); return *this;}

    /**
     * <p>The type of server side encryption you want to use for your data. This is
     * part of the endpoint settings or the extra connections attributes for Amazon S3.
     * You can choose either <code>SSE_S3</code> (default) or <code>SSE_KMS</code>. To
     * use <code>SSE_S3</code>, you need an IAM role with permission to allow
     * <code>"arn:aws:s3:::dms-*"</code> to use the following actions:</p> <ul> <li>
     * <p>s3:CreateBucket</p> </li> <li> <p>s3:ListBucket</p> </li> <li>
     * <p>s3:DeleteBucket</p> </li> <li> <p>s3:GetBucketLocation</p> </li> <li>
     * <p>s3:GetObject</p> </li> <li> <p>s3:PutObject</p> </li> <li>
     * <p>s3:DeleteObject</p> </li> <li> <p>s3:GetObjectVersion</p> </li> <li>
     * <p>s3:GetBucketPolicy</p> </li> <li> <p>s3:PutBucketPolicy</p> </li> <li>
     * <p>s3:DeleteBucketPolicy</p> </li> </ul>
     */
    inline S3Settings& WithEncryptionMode(EncryptionModeValue&& value) { SetEncryptionMode(std::move(value)); return *this;}


    /**
     * <p>If you are using SSE_KMS for the <code>EncryptionMode</code>, provide the KMS
     * Key ID. The key you use needs an attached policy that enables IAM user
     * permissions and allows use of the key.</p> <p>Here is a CLI example: <code>aws
     * dms create-endpoint --endpoint-identifier &lt;value&gt; --endpoint-type target
     * --engine-name s3 --s3-settings
     * ServiceAccessRoleArn=&lt;value&gt;,BucketFolder=&lt;value&gt;,BucketName=&lt;value&gt;,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=&lt;value&gt;
     * </code> </p>
     */
    inline const Aws::String& GetServerSideEncryptionKmsKeyId() const{ return m_serverSideEncryptionKmsKeyId; }

    /**
     * <p>If you are using SSE_KMS for the <code>EncryptionMode</code>, provide the KMS
     * Key ID. The key you use needs an attached policy that enables IAM user
     * permissions and allows use of the key.</p> <p>Here is a CLI example: <code>aws
     * dms create-endpoint --endpoint-identifier &lt;value&gt; --endpoint-type target
     * --engine-name s3 --s3-settings
     * ServiceAccessRoleArn=&lt;value&gt;,BucketFolder=&lt;value&gt;,BucketName=&lt;value&gt;,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=&lt;value&gt;
     * </code> </p>
     */
    inline bool ServerSideEncryptionKmsKeyIdHasBeenSet() const { return m_serverSideEncryptionKmsKeyIdHasBeenSet; }

    /**
     * <p>If you are using SSE_KMS for the <code>EncryptionMode</code>, provide the KMS
     * Key ID. The key you use needs an attached policy that enables IAM user
     * permissions and allows use of the key.</p> <p>Here is a CLI example: <code>aws
     * dms create-endpoint --endpoint-identifier &lt;value&gt; --endpoint-type target
     * --engine-name s3 --s3-settings
     * ServiceAccessRoleArn=&lt;value&gt;,BucketFolder=&lt;value&gt;,BucketName=&lt;value&gt;,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=&lt;value&gt;
     * </code> </p>
     */
    inline void SetServerSideEncryptionKmsKeyId(const Aws::String& value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId = value; }

    /**
     * <p>If you are using SSE_KMS for the <code>EncryptionMode</code>, provide the KMS
     * Key ID. The key you use needs an attached policy that enables IAM user
     * permissions and allows use of the key.</p> <p>Here is a CLI example: <code>aws
     * dms create-endpoint --endpoint-identifier &lt;value&gt; --endpoint-type target
     * --engine-name s3 --s3-settings
     * ServiceAccessRoleArn=&lt;value&gt;,BucketFolder=&lt;value&gt;,BucketName=&lt;value&gt;,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=&lt;value&gt;
     * </code> </p>
     */
    inline void SetServerSideEncryptionKmsKeyId(Aws::String&& value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId = std::move(value); }

    /**
     * <p>If you are using SSE_KMS for the <code>EncryptionMode</code>, provide the KMS
     * Key ID. The key you use needs an attached policy that enables IAM user
     * permissions and allows use of the key.</p> <p>Here is a CLI example: <code>aws
     * dms create-endpoint --endpoint-identifier &lt;value&gt; --endpoint-type target
     * --engine-name s3 --s3-settings
     * ServiceAccessRoleArn=&lt;value&gt;,BucketFolder=&lt;value&gt;,BucketName=&lt;value&gt;,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=&lt;value&gt;
     * </code> </p>
     */
    inline void SetServerSideEncryptionKmsKeyId(const char* value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId.assign(value); }

    /**
     * <p>If you are using SSE_KMS for the <code>EncryptionMode</code>, provide the KMS
     * Key ID. The key you use needs an attached policy that enables IAM user
     * permissions and allows use of the key.</p> <p>Here is a CLI example: <code>aws
     * dms create-endpoint --endpoint-identifier &lt;value&gt; --endpoint-type target
     * --engine-name s3 --s3-settings
     * ServiceAccessRoleArn=&lt;value&gt;,BucketFolder=&lt;value&gt;,BucketName=&lt;value&gt;,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=&lt;value&gt;
     * </code> </p>
     */
    inline S3Settings& WithServerSideEncryptionKmsKeyId(const Aws::String& value) { SetServerSideEncryptionKmsKeyId(value); return *this;}

    /**
     * <p>If you are using SSE_KMS for the <code>EncryptionMode</code>, provide the KMS
     * Key ID. The key you use needs an attached policy that enables IAM user
     * permissions and allows use of the key.</p> <p>Here is a CLI example: <code>aws
     * dms create-endpoint --endpoint-identifier &lt;value&gt; --endpoint-type target
     * --engine-name s3 --s3-settings
     * ServiceAccessRoleArn=&lt;value&gt;,BucketFolder=&lt;value&gt;,BucketName=&lt;value&gt;,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=&lt;value&gt;
     * </code> </p>
     */
    inline S3Settings& WithServerSideEncryptionKmsKeyId(Aws::String&& value) { SetServerSideEncryptionKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>If you are using SSE_KMS for the <code>EncryptionMode</code>, provide the KMS
     * Key ID. The key you use needs an attached policy that enables IAM user
     * permissions and allows use of the key.</p> <p>Here is a CLI example: <code>aws
     * dms create-endpoint --endpoint-identifier &lt;value&gt; --endpoint-type target
     * --engine-name s3 --s3-settings
     * ServiceAccessRoleArn=&lt;value&gt;,BucketFolder=&lt;value&gt;,BucketName=&lt;value&gt;,EncryptionMode=SSE_KMS,ServerSideEncryptionKmsKeyId=&lt;value&gt;
     * </code> </p>
     */
    inline S3Settings& WithServerSideEncryptionKmsKeyId(const char* value) { SetServerSideEncryptionKmsKeyId(value); return *this;}


    /**
     * <p>The format of the data which you want to use for output. You can choose one
     * of the following: </p> <ul> <li> <p> <code>CSV</code> : This is a row-based
     * format with comma-separated values. </p> </li> <li> <p> <code>PARQUET</code> :
     * Apache Parquet is a columnar storage format that features efficient compression
     * and provides faster query response. </p> </li> </ul>
     */
    inline const DataFormatValue& GetDataFormat() const{ return m_dataFormat; }

    /**
     * <p>The format of the data which you want to use for output. You can choose one
     * of the following: </p> <ul> <li> <p> <code>CSV</code> : This is a row-based
     * format with comma-separated values. </p> </li> <li> <p> <code>PARQUET</code> :
     * Apache Parquet is a columnar storage format that features efficient compression
     * and provides faster query response. </p> </li> </ul>
     */
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }

    /**
     * <p>The format of the data which you want to use for output. You can choose one
     * of the following: </p> <ul> <li> <p> <code>CSV</code> : This is a row-based
     * format with comma-separated values. </p> </li> <li> <p> <code>PARQUET</code> :
     * Apache Parquet is a columnar storage format that features efficient compression
     * and provides faster query response. </p> </li> </ul>
     */
    inline void SetDataFormat(const DataFormatValue& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }

    /**
     * <p>The format of the data which you want to use for output. You can choose one
     * of the following: </p> <ul> <li> <p> <code>CSV</code> : This is a row-based
     * format with comma-separated values. </p> </li> <li> <p> <code>PARQUET</code> :
     * Apache Parquet is a columnar storage format that features efficient compression
     * and provides faster query response. </p> </li> </ul>
     */
    inline void SetDataFormat(DataFormatValue&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }

    /**
     * <p>The format of the data which you want to use for output. You can choose one
     * of the following: </p> <ul> <li> <p> <code>CSV</code> : This is a row-based
     * format with comma-separated values. </p> </li> <li> <p> <code>PARQUET</code> :
     * Apache Parquet is a columnar storage format that features efficient compression
     * and provides faster query response. </p> </li> </ul>
     */
    inline S3Settings& WithDataFormat(const DataFormatValue& value) { SetDataFormat(value); return *this;}

    /**
     * <p>The format of the data which you want to use for output. You can choose one
     * of the following: </p> <ul> <li> <p> <code>CSV</code> : This is a row-based
     * format with comma-separated values. </p> </li> <li> <p> <code>PARQUET</code> :
     * Apache Parquet is a columnar storage format that features efficient compression
     * and provides faster query response. </p> </li> </ul>
     */
    inline S3Settings& WithDataFormat(DataFormatValue&& value) { SetDataFormat(std::move(value)); return *this;}


    /**
     * <p>The type of encoding you are using: <code>RLE_DICTIONARY</code> (default),
     * <code>PLAIN</code>, or <code>PLAIN_DICTIONARY</code>.</p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently.</p> </li> <li> <p>
     * <code>PLAIN</code> does not use encoding at all. Values are stored as they
     * are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a dictionary of the
     * values encountered in a given column. The dictionary is stored in a dictionary
     * page for each column chunk.</p> </li> </ul>
     */
    inline const EncodingTypeValue& GetEncodingType() const{ return m_encodingType; }

    /**
     * <p>The type of encoding you are using: <code>RLE_DICTIONARY</code> (default),
     * <code>PLAIN</code>, or <code>PLAIN_DICTIONARY</code>.</p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently.</p> </li> <li> <p>
     * <code>PLAIN</code> does not use encoding at all. Values are stored as they
     * are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a dictionary of the
     * values encountered in a given column. The dictionary is stored in a dictionary
     * page for each column chunk.</p> </li> </ul>
     */
    inline bool EncodingTypeHasBeenSet() const { return m_encodingTypeHasBeenSet; }

    /**
     * <p>The type of encoding you are using: <code>RLE_DICTIONARY</code> (default),
     * <code>PLAIN</code>, or <code>PLAIN_DICTIONARY</code>.</p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently.</p> </li> <li> <p>
     * <code>PLAIN</code> does not use encoding at all. Values are stored as they
     * are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a dictionary of the
     * values encountered in a given column. The dictionary is stored in a dictionary
     * page for each column chunk.</p> </li> </ul>
     */
    inline void SetEncodingType(const EncodingTypeValue& value) { m_encodingTypeHasBeenSet = true; m_encodingType = value; }

    /**
     * <p>The type of encoding you are using: <code>RLE_DICTIONARY</code> (default),
     * <code>PLAIN</code>, or <code>PLAIN_DICTIONARY</code>.</p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently.</p> </li> <li> <p>
     * <code>PLAIN</code> does not use encoding at all. Values are stored as they
     * are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a dictionary of the
     * values encountered in a given column. The dictionary is stored in a dictionary
     * page for each column chunk.</p> </li> </ul>
     */
    inline void SetEncodingType(EncodingTypeValue&& value) { m_encodingTypeHasBeenSet = true; m_encodingType = std::move(value); }

    /**
     * <p>The type of encoding you are using: <code>RLE_DICTIONARY</code> (default),
     * <code>PLAIN</code>, or <code>PLAIN_DICTIONARY</code>.</p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently.</p> </li> <li> <p>
     * <code>PLAIN</code> does not use encoding at all. Values are stored as they
     * are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a dictionary of the
     * values encountered in a given column. The dictionary is stored in a dictionary
     * page for each column chunk.</p> </li> </ul>
     */
    inline S3Settings& WithEncodingType(const EncodingTypeValue& value) { SetEncodingType(value); return *this;}

    /**
     * <p>The type of encoding you are using: <code>RLE_DICTIONARY</code> (default),
     * <code>PLAIN</code>, or <code>PLAIN_DICTIONARY</code>.</p> <ul> <li> <p>
     * <code>RLE_DICTIONARY</code> uses a combination of bit-packing and run-length
     * encoding to store repeated values more efficiently.</p> </li> <li> <p>
     * <code>PLAIN</code> does not use encoding at all. Values are stored as they
     * are.</p> </li> <li> <p> <code>PLAIN_DICTIONARY</code> builds a dictionary of the
     * values encountered in a given column. The dictionary is stored in a dictionary
     * page for each column chunk.</p> </li> </ul>
     */
    inline S3Settings& WithEncodingType(EncodingTypeValue&& value) { SetEncodingType(std::move(value)); return *this;}


    /**
     * <p>The maximum size of an encoded dictionary page of a column. If the dictionary
     * page exceeds this, this column is stored using an encoding type of
     * <code>PLAIN</code>. Defaults to 1024 * 1024 bytes (1MiB), the maximum size of a
     * dictionary page before it reverts to <code>PLAIN</code> encoding. For
     * <code>PARQUET</code> format only. </p>
     */
    inline int GetDictPageSizeLimit() const{ return m_dictPageSizeLimit; }

    /**
     * <p>The maximum size of an encoded dictionary page of a column. If the dictionary
     * page exceeds this, this column is stored using an encoding type of
     * <code>PLAIN</code>. Defaults to 1024 * 1024 bytes (1MiB), the maximum size of a
     * dictionary page before it reverts to <code>PLAIN</code> encoding. For
     * <code>PARQUET</code> format only. </p>
     */
    inline bool DictPageSizeLimitHasBeenSet() const { return m_dictPageSizeLimitHasBeenSet; }

    /**
     * <p>The maximum size of an encoded dictionary page of a column. If the dictionary
     * page exceeds this, this column is stored using an encoding type of
     * <code>PLAIN</code>. Defaults to 1024 * 1024 bytes (1MiB), the maximum size of a
     * dictionary page before it reverts to <code>PLAIN</code> encoding. For
     * <code>PARQUET</code> format only. </p>
     */
    inline void SetDictPageSizeLimit(int value) { m_dictPageSizeLimitHasBeenSet = true; m_dictPageSizeLimit = value; }

    /**
     * <p>The maximum size of an encoded dictionary page of a column. If the dictionary
     * page exceeds this, this column is stored using an encoding type of
     * <code>PLAIN</code>. Defaults to 1024 * 1024 bytes (1MiB), the maximum size of a
     * dictionary page before it reverts to <code>PLAIN</code> encoding. For
     * <code>PARQUET</code> format only. </p>
     */
    inline S3Settings& WithDictPageSizeLimit(int value) { SetDictPageSizeLimit(value); return *this;}


    /**
     * <p>The number of rows in a row group. A smaller row group size provides faster
     * reads. But as the number of row groups grows, the slower writes become. Defaults
     * to 10,000 (ten thousand) rows. For <code>PARQUET</code> format only. </p> <p>If
     * you choose a value larger than the maximum, <code>RowGroupLength</code> is set
     * to the max row group length in bytes (64 * 1024 * 1024). </p>
     */
    inline int GetRowGroupLength() const{ return m_rowGroupLength; }

    /**
     * <p>The number of rows in a row group. A smaller row group size provides faster
     * reads. But as the number of row groups grows, the slower writes become. Defaults
     * to 10,000 (ten thousand) rows. For <code>PARQUET</code> format only. </p> <p>If
     * you choose a value larger than the maximum, <code>RowGroupLength</code> is set
     * to the max row group length in bytes (64 * 1024 * 1024). </p>
     */
    inline bool RowGroupLengthHasBeenSet() const { return m_rowGroupLengthHasBeenSet; }

    /**
     * <p>The number of rows in a row group. A smaller row group size provides faster
     * reads. But as the number of row groups grows, the slower writes become. Defaults
     * to 10,000 (ten thousand) rows. For <code>PARQUET</code> format only. </p> <p>If
     * you choose a value larger than the maximum, <code>RowGroupLength</code> is set
     * to the max row group length in bytes (64 * 1024 * 1024). </p>
     */
    inline void SetRowGroupLength(int value) { m_rowGroupLengthHasBeenSet = true; m_rowGroupLength = value; }

    /**
     * <p>The number of rows in a row group. A smaller row group size provides faster
     * reads. But as the number of row groups grows, the slower writes become. Defaults
     * to 10,000 (ten thousand) rows. For <code>PARQUET</code> format only. </p> <p>If
     * you choose a value larger than the maximum, <code>RowGroupLength</code> is set
     * to the max row group length in bytes (64 * 1024 * 1024). </p>
     */
    inline S3Settings& WithRowGroupLength(int value) { SetRowGroupLength(value); return *this;}


    /**
     * <p>The size of one data page in bytes. Defaults to 1024 * 1024 bytes (1MiB). For
     * <code>PARQUET</code> format only. </p>
     */
    inline int GetDataPageSize() const{ return m_dataPageSize; }

    /**
     * <p>The size of one data page in bytes. Defaults to 1024 * 1024 bytes (1MiB). For
     * <code>PARQUET</code> format only. </p>
     */
    inline bool DataPageSizeHasBeenSet() const { return m_dataPageSizeHasBeenSet; }

    /**
     * <p>The size of one data page in bytes. Defaults to 1024 * 1024 bytes (1MiB). For
     * <code>PARQUET</code> format only. </p>
     */
    inline void SetDataPageSize(int value) { m_dataPageSizeHasBeenSet = true; m_dataPageSize = value; }

    /**
     * <p>The size of one data page in bytes. Defaults to 1024 * 1024 bytes (1MiB). For
     * <code>PARQUET</code> format only. </p>
     */
    inline S3Settings& WithDataPageSize(int value) { SetDataPageSize(value); return *this;}


    /**
     * <p>The version of Apache Parquet format you want to use:
     * <code>PARQUET_1_0</code> (default) or <code>PARQUET_2_0</code>.</p>
     */
    inline const ParquetVersionValue& GetParquetVersion() const{ return m_parquetVersion; }

    /**
     * <p>The version of Apache Parquet format you want to use:
     * <code>PARQUET_1_0</code> (default) or <code>PARQUET_2_0</code>.</p>
     */
    inline bool ParquetVersionHasBeenSet() const { return m_parquetVersionHasBeenSet; }

    /**
     * <p>The version of Apache Parquet format you want to use:
     * <code>PARQUET_1_0</code> (default) or <code>PARQUET_2_0</code>.</p>
     */
    inline void SetParquetVersion(const ParquetVersionValue& value) { m_parquetVersionHasBeenSet = true; m_parquetVersion = value; }

    /**
     * <p>The version of Apache Parquet format you want to use:
     * <code>PARQUET_1_0</code> (default) or <code>PARQUET_2_0</code>.</p>
     */
    inline void SetParquetVersion(ParquetVersionValue&& value) { m_parquetVersionHasBeenSet = true; m_parquetVersion = std::move(value); }

    /**
     * <p>The version of Apache Parquet format you want to use:
     * <code>PARQUET_1_0</code> (default) or <code>PARQUET_2_0</code>.</p>
     */
    inline S3Settings& WithParquetVersion(const ParquetVersionValue& value) { SetParquetVersion(value); return *this;}

    /**
     * <p>The version of Apache Parquet format you want to use:
     * <code>PARQUET_1_0</code> (default) or <code>PARQUET_2_0</code>.</p>
     */
    inline S3Settings& WithParquetVersion(ParquetVersionValue&& value) { SetParquetVersion(std::move(value)); return *this;}


    /**
     * <p>Enables statistics for Parquet pages and rowGroups. Choose <code>TRUE</code>
     * to enable statistics, choose <code>FALSE</code> to disable. Statistics include
     * <code>NULL</code>, <code>DISTINCT</code>, <code>MAX</code>, and <code>MIN</code>
     * values. Defaults to <code>TRUE</code>. For <code>PARQUET</code> format only.</p>
     */
    inline bool GetEnableStatistics() const{ return m_enableStatistics; }

    /**
     * <p>Enables statistics for Parquet pages and rowGroups. Choose <code>TRUE</code>
     * to enable statistics, choose <code>FALSE</code> to disable. Statistics include
     * <code>NULL</code>, <code>DISTINCT</code>, <code>MAX</code>, and <code>MIN</code>
     * values. Defaults to <code>TRUE</code>. For <code>PARQUET</code> format only.</p>
     */
    inline bool EnableStatisticsHasBeenSet() const { return m_enableStatisticsHasBeenSet; }

    /**
     * <p>Enables statistics for Parquet pages and rowGroups. Choose <code>TRUE</code>
     * to enable statistics, choose <code>FALSE</code> to disable. Statistics include
     * <code>NULL</code>, <code>DISTINCT</code>, <code>MAX</code>, and <code>MIN</code>
     * values. Defaults to <code>TRUE</code>. For <code>PARQUET</code> format only.</p>
     */
    inline void SetEnableStatistics(bool value) { m_enableStatisticsHasBeenSet = true; m_enableStatistics = value; }

    /**
     * <p>Enables statistics for Parquet pages and rowGroups. Choose <code>TRUE</code>
     * to enable statistics, choose <code>FALSE</code> to disable. Statistics include
     * <code>NULL</code>, <code>DISTINCT</code>, <code>MAX</code>, and <code>MIN</code>
     * values. Defaults to <code>TRUE</code>. For <code>PARQUET</code> format only.</p>
     */
    inline S3Settings& WithEnableStatistics(bool value) { SetEnableStatistics(value); return *this;}


    /**
     * <p>Option to write only <code>INSERT</code> operations to the comma-separated
     * value (CSV) output files. By default, the first field in a CSV record contains
     * the letter <code>I</code> (insert), <code>U</code> (update) or <code>D</code>
     * (delete) to indicate whether the row was inserted, updated, or deleted at the
     * source database. If <code>cdcInsertsOnly</code> is set to true, then only
     * <code>INSERT</code>s are recorded in the CSV file, without the <code>I</code>
     * annotation on each line. Valid values are <code>TRUE</code> and
     * <code>FALSE</code>.</p>
     */
    inline bool GetCdcInsertsOnly() const{ return m_cdcInsertsOnly; }

    /**
     * <p>Option to write only <code>INSERT</code> operations to the comma-separated
     * value (CSV) output files. By default, the first field in a CSV record contains
     * the letter <code>I</code> (insert), <code>U</code> (update) or <code>D</code>
     * (delete) to indicate whether the row was inserted, updated, or deleted at the
     * source database. If <code>cdcInsertsOnly</code> is set to true, then only
     * <code>INSERT</code>s are recorded in the CSV file, without the <code>I</code>
     * annotation on each line. Valid values are <code>TRUE</code> and
     * <code>FALSE</code>.</p>
     */
    inline bool CdcInsertsOnlyHasBeenSet() const { return m_cdcInsertsOnlyHasBeenSet; }

    /**
     * <p>Option to write only <code>INSERT</code> operations to the comma-separated
     * value (CSV) output files. By default, the first field in a CSV record contains
     * the letter <code>I</code> (insert), <code>U</code> (update) or <code>D</code>
     * (delete) to indicate whether the row was inserted, updated, or deleted at the
     * source database. If <code>cdcInsertsOnly</code> is set to true, then only
     * <code>INSERT</code>s are recorded in the CSV file, without the <code>I</code>
     * annotation on each line. Valid values are <code>TRUE</code> and
     * <code>FALSE</code>.</p>
     */
    inline void SetCdcInsertsOnly(bool value) { m_cdcInsertsOnlyHasBeenSet = true; m_cdcInsertsOnly = value; }

    /**
     * <p>Option to write only <code>INSERT</code> operations to the comma-separated
     * value (CSV) output files. By default, the first field in a CSV record contains
     * the letter <code>I</code> (insert), <code>U</code> (update) or <code>D</code>
     * (delete) to indicate whether the row was inserted, updated, or deleted at the
     * source database. If <code>cdcInsertsOnly</code> is set to true, then only
     * <code>INSERT</code>s are recorded in the CSV file, without the <code>I</code>
     * annotation on each line. Valid values are <code>TRUE</code> and
     * <code>FALSE</code>.</p>
     */
    inline S3Settings& WithCdcInsertsOnly(bool value) { SetCdcInsertsOnly(value); return *this;}

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

    bool m_cdcInsertsOnly;
    bool m_cdcInsertsOnlyHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
