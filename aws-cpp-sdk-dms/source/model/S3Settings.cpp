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

#include <aws/dms/model/S3Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

S3Settings::S3Settings() : 
    m_serviceAccessRoleArnHasBeenSet(false),
    m_externalTableDefinitionHasBeenSet(false),
    m_csvRowDelimiterHasBeenSet(false),
    m_csvDelimiterHasBeenSet(false),
    m_bucketFolderHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_compressionType(CompressionTypeValue::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_encryptionMode(EncryptionModeValue::NOT_SET),
    m_encryptionModeHasBeenSet(false),
    m_serverSideEncryptionKmsKeyIdHasBeenSet(false),
    m_dataFormat(DataFormatValue::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_encodingType(EncodingTypeValue::NOT_SET),
    m_encodingTypeHasBeenSet(false),
    m_dictPageSizeLimit(0),
    m_dictPageSizeLimitHasBeenSet(false),
    m_rowGroupLength(0),
    m_rowGroupLengthHasBeenSet(false),
    m_dataPageSize(0),
    m_dataPageSizeHasBeenSet(false),
    m_parquetVersion(ParquetVersionValue::NOT_SET),
    m_parquetVersionHasBeenSet(false),
    m_enableStatistics(false),
    m_enableStatisticsHasBeenSet(false),
    m_includeOpForFullLoad(false),
    m_includeOpForFullLoadHasBeenSet(false),
    m_cdcInsertsOnly(false),
    m_cdcInsertsOnlyHasBeenSet(false),
    m_timestampColumnNameHasBeenSet(false),
    m_parquetTimestampInMillisecond(false),
    m_parquetTimestampInMillisecondHasBeenSet(false),
    m_cdcInsertsAndUpdates(false),
    m_cdcInsertsAndUpdatesHasBeenSet(false)
{
}

S3Settings::S3Settings(JsonView jsonValue) : 
    m_serviceAccessRoleArnHasBeenSet(false),
    m_externalTableDefinitionHasBeenSet(false),
    m_csvRowDelimiterHasBeenSet(false),
    m_csvDelimiterHasBeenSet(false),
    m_bucketFolderHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_compressionType(CompressionTypeValue::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_encryptionMode(EncryptionModeValue::NOT_SET),
    m_encryptionModeHasBeenSet(false),
    m_serverSideEncryptionKmsKeyIdHasBeenSet(false),
    m_dataFormat(DataFormatValue::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_encodingType(EncodingTypeValue::NOT_SET),
    m_encodingTypeHasBeenSet(false),
    m_dictPageSizeLimit(0),
    m_dictPageSizeLimitHasBeenSet(false),
    m_rowGroupLength(0),
    m_rowGroupLengthHasBeenSet(false),
    m_dataPageSize(0),
    m_dataPageSizeHasBeenSet(false),
    m_parquetVersion(ParquetVersionValue::NOT_SET),
    m_parquetVersionHasBeenSet(false),
    m_enableStatistics(false),
    m_enableStatisticsHasBeenSet(false),
    m_includeOpForFullLoad(false),
    m_includeOpForFullLoadHasBeenSet(false),
    m_cdcInsertsOnly(false),
    m_cdcInsertsOnlyHasBeenSet(false),
    m_timestampColumnNameHasBeenSet(false),
    m_parquetTimestampInMillisecond(false),
    m_parquetTimestampInMillisecondHasBeenSet(false),
    m_cdcInsertsAndUpdates(false),
    m_cdcInsertsAndUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

S3Settings& S3Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceAccessRoleArn"))
  {
    m_serviceAccessRoleArn = jsonValue.GetString("ServiceAccessRoleArn");

    m_serviceAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalTableDefinition"))
  {
    m_externalTableDefinition = jsonValue.GetString("ExternalTableDefinition");

    m_externalTableDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CsvRowDelimiter"))
  {
    m_csvRowDelimiter = jsonValue.GetString("CsvRowDelimiter");

    m_csvRowDelimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CsvDelimiter"))
  {
    m_csvDelimiter = jsonValue.GetString("CsvDelimiter");

    m_csvDelimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketFolder"))
  {
    m_bucketFolder = jsonValue.GetString("BucketFolder");

    m_bucketFolderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompressionType"))
  {
    m_compressionType = CompressionTypeValueMapper::GetCompressionTypeValueForName(jsonValue.GetString("CompressionType"));

    m_compressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionMode"))
  {
    m_encryptionMode = EncryptionModeValueMapper::GetEncryptionModeValueForName(jsonValue.GetString("EncryptionMode"));

    m_encryptionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerSideEncryptionKmsKeyId"))
  {
    m_serverSideEncryptionKmsKeyId = jsonValue.GetString("ServerSideEncryptionKmsKeyId");

    m_serverSideEncryptionKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataFormat"))
  {
    m_dataFormat = DataFormatValueMapper::GetDataFormatValueForName(jsonValue.GetString("DataFormat"));

    m_dataFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncodingType"))
  {
    m_encodingType = EncodingTypeValueMapper::GetEncodingTypeValueForName(jsonValue.GetString("EncodingType"));

    m_encodingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DictPageSizeLimit"))
  {
    m_dictPageSizeLimit = jsonValue.GetInteger("DictPageSizeLimit");

    m_dictPageSizeLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowGroupLength"))
  {
    m_rowGroupLength = jsonValue.GetInteger("RowGroupLength");

    m_rowGroupLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPageSize"))
  {
    m_dataPageSize = jsonValue.GetInteger("DataPageSize");

    m_dataPageSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParquetVersion"))
  {
    m_parquetVersion = ParquetVersionValueMapper::GetParquetVersionValueForName(jsonValue.GetString("ParquetVersion"));

    m_parquetVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableStatistics"))
  {
    m_enableStatistics = jsonValue.GetBool("EnableStatistics");

    m_enableStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeOpForFullLoad"))
  {
    m_includeOpForFullLoad = jsonValue.GetBool("IncludeOpForFullLoad");

    m_includeOpForFullLoadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdcInsertsOnly"))
  {
    m_cdcInsertsOnly = jsonValue.GetBool("CdcInsertsOnly");

    m_cdcInsertsOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimestampColumnName"))
  {
    m_timestampColumnName = jsonValue.GetString("TimestampColumnName");

    m_timestampColumnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParquetTimestampInMillisecond"))
  {
    m_parquetTimestampInMillisecond = jsonValue.GetBool("ParquetTimestampInMillisecond");

    m_parquetTimestampInMillisecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdcInsertsAndUpdates"))
  {
    m_cdcInsertsAndUpdates = jsonValue.GetBool("CdcInsertsAndUpdates");

    m_cdcInsertsAndUpdatesHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Settings::Jsonize() const
{
  JsonValue payload;

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_externalTableDefinitionHasBeenSet)
  {
   payload.WithString("ExternalTableDefinition", m_externalTableDefinition);

  }

  if(m_csvRowDelimiterHasBeenSet)
  {
   payload.WithString("CsvRowDelimiter", m_csvRowDelimiter);

  }

  if(m_csvDelimiterHasBeenSet)
  {
   payload.WithString("CsvDelimiter", m_csvDelimiter);

  }

  if(m_bucketFolderHasBeenSet)
  {
   payload.WithString("BucketFolder", m_bucketFolder);

  }

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("CompressionType", CompressionTypeValueMapper::GetNameForCompressionTypeValue(m_compressionType));
  }

  if(m_encryptionModeHasBeenSet)
  {
   payload.WithString("EncryptionMode", EncryptionModeValueMapper::GetNameForEncryptionModeValue(m_encryptionMode));
  }

  if(m_serverSideEncryptionKmsKeyIdHasBeenSet)
  {
   payload.WithString("ServerSideEncryptionKmsKeyId", m_serverSideEncryptionKmsKeyId);

  }

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("DataFormat", DataFormatValueMapper::GetNameForDataFormatValue(m_dataFormat));
  }

  if(m_encodingTypeHasBeenSet)
  {
   payload.WithString("EncodingType", EncodingTypeValueMapper::GetNameForEncodingTypeValue(m_encodingType));
  }

  if(m_dictPageSizeLimitHasBeenSet)
  {
   payload.WithInteger("DictPageSizeLimit", m_dictPageSizeLimit);

  }

  if(m_rowGroupLengthHasBeenSet)
  {
   payload.WithInteger("RowGroupLength", m_rowGroupLength);

  }

  if(m_dataPageSizeHasBeenSet)
  {
   payload.WithInteger("DataPageSize", m_dataPageSize);

  }

  if(m_parquetVersionHasBeenSet)
  {
   payload.WithString("ParquetVersion", ParquetVersionValueMapper::GetNameForParquetVersionValue(m_parquetVersion));
  }

  if(m_enableStatisticsHasBeenSet)
  {
   payload.WithBool("EnableStatistics", m_enableStatistics);

  }

  if(m_includeOpForFullLoadHasBeenSet)
  {
   payload.WithBool("IncludeOpForFullLoad", m_includeOpForFullLoad);

  }

  if(m_cdcInsertsOnlyHasBeenSet)
  {
   payload.WithBool("CdcInsertsOnly", m_cdcInsertsOnly);

  }

  if(m_timestampColumnNameHasBeenSet)
  {
   payload.WithString("TimestampColumnName", m_timestampColumnName);

  }

  if(m_parquetTimestampInMillisecondHasBeenSet)
  {
   payload.WithBool("ParquetTimestampInMillisecond", m_parquetTimestampInMillisecond);

  }

  if(m_cdcInsertsAndUpdatesHasBeenSet)
  {
   payload.WithBool("CdcInsertsAndUpdates", m_cdcInsertsAndUpdates);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
