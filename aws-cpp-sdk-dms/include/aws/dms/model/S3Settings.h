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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/S3Settings">AWS API
   * Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API S3Settings
  {
  public:
    S3Settings();
    S3Settings(const Aws::Utils::Json::JsonValue& jsonValue);
    S3Settings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) used by the service access IAM role. </p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

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
     * carriage return (\n). </p>
     */
    inline const Aws::String& GetCsvRowDelimiter() const{ return m_csvRowDelimiter; }

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (\n). </p>
     */
    inline void SetCsvRowDelimiter(const Aws::String& value) { m_csvRowDelimiterHasBeenSet = true; m_csvRowDelimiter = value; }

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (\n). </p>
     */
    inline void SetCsvRowDelimiter(Aws::String&& value) { m_csvRowDelimiterHasBeenSet = true; m_csvRowDelimiter = std::move(value); }

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (\n). </p>
     */
    inline void SetCsvRowDelimiter(const char* value) { m_csvRowDelimiterHasBeenSet = true; m_csvRowDelimiter.assign(value); }

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (\n). </p>
     */
    inline S3Settings& WithCsvRowDelimiter(const Aws::String& value) { SetCsvRowDelimiter(value); return *this;}

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (\n). </p>
     */
    inline S3Settings& WithCsvRowDelimiter(Aws::String&& value) { SetCsvRowDelimiter(std::move(value)); return *this;}

    /**
     * <p> The delimiter used to separate rows in the source files. The default is a
     * carriage return (\n). </p>
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
     * &lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/. If this parameter
     * is not specified, then the path used is &lt;schema_name&gt;/&lt;table_name&gt;/.
     * </p>
     */
    inline const Aws::String& GetBucketFolder() const{ return m_bucketFolder; }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * &lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/. If this parameter
     * is not specified, then the path used is &lt;schema_name&gt;/&lt;table_name&gt;/.
     * </p>
     */
    inline void SetBucketFolder(const Aws::String& value) { m_bucketFolderHasBeenSet = true; m_bucketFolder = value; }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * &lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/. If this parameter
     * is not specified, then the path used is &lt;schema_name&gt;/&lt;table_name&gt;/.
     * </p>
     */
    inline void SetBucketFolder(Aws::String&& value) { m_bucketFolderHasBeenSet = true; m_bucketFolder = std::move(value); }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * &lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/. If this parameter
     * is not specified, then the path used is &lt;schema_name&gt;/&lt;table_name&gt;/.
     * </p>
     */
    inline void SetBucketFolder(const char* value) { m_bucketFolderHasBeenSet = true; m_bucketFolder.assign(value); }

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * &lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/. If this parameter
     * is not specified, then the path used is &lt;schema_name&gt;/&lt;table_name&gt;/.
     * </p>
     */
    inline S3Settings& WithBucketFolder(const Aws::String& value) { SetBucketFolder(value); return *this;}

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * &lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/. If this parameter
     * is not specified, then the path used is &lt;schema_name&gt;/&lt;table_name&gt;/.
     * </p>
     */
    inline S3Settings& WithBucketFolder(Aws::String&& value) { SetBucketFolder(std::move(value)); return *this;}

    /**
     * <p> An optional parameter to set a folder name in the S3 bucket. If provided,
     * tables are created in the path
     * &lt;bucketFolder&gt;/&lt;schema_name&gt;/&lt;table_name&gt;/. If this parameter
     * is not specified, then the path used is &lt;schema_name&gt;/&lt;table_name&gt;/.
     * </p>
     */
    inline S3Settings& WithBucketFolder(const char* value) { SetBucketFolder(value); return *this;}


    /**
     * <p> The name of the S3 bucket. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

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
     * the files uncompressed. </p>
     */
    inline const CompressionTypeValue& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p> An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Set to NONE (the default) or do not use to leave
     * the files uncompressed. </p>
     */
    inline void SetCompressionType(const CompressionTypeValue& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p> An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Set to NONE (the default) or do not use to leave
     * the files uncompressed. </p>
     */
    inline void SetCompressionType(CompressionTypeValue&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p> An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Set to NONE (the default) or do not use to leave
     * the files uncompressed. </p>
     */
    inline S3Settings& WithCompressionType(const CompressionTypeValue& value) { SetCompressionType(value); return *this;}

    /**
     * <p> An optional parameter to use GZIP to compress the target files. Set to GZIP
     * to compress the target files. Set to NONE (the default) or do not use to leave
     * the files uncompressed. </p>
     */
    inline S3Settings& WithCompressionType(CompressionTypeValue&& value) { SetCompressionType(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
