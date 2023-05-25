/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_cdcInsertsAndUpdatesHasBeenSet(false),
    m_datePartitionEnabled(false),
    m_datePartitionEnabledHasBeenSet(false),
    m_datePartitionSequence(DatePartitionSequenceValue::NOT_SET),
    m_datePartitionSequenceHasBeenSet(false),
    m_datePartitionDelimiter(DatePartitionDelimiterValue::NOT_SET),
    m_datePartitionDelimiterHasBeenSet(false),
    m_useCsvNoSupValue(false),
    m_useCsvNoSupValueHasBeenSet(false),
    m_csvNoSupValueHasBeenSet(false),
    m_preserveTransactions(false),
    m_preserveTransactionsHasBeenSet(false),
    m_cdcPathHasBeenSet(false),
    m_useTaskStartTimeForFullLoadTimestamp(false),
    m_useTaskStartTimeForFullLoadTimestampHasBeenSet(false),
    m_cannedAclForObjects(CannedAclForObjectsValue::NOT_SET),
    m_cannedAclForObjectsHasBeenSet(false),
    m_addColumnName(false),
    m_addColumnNameHasBeenSet(false),
    m_cdcMaxBatchInterval(0),
    m_cdcMaxBatchIntervalHasBeenSet(false),
    m_cdcMinFileSize(0),
    m_cdcMinFileSizeHasBeenSet(false),
    m_csvNullValueHasBeenSet(false),
    m_ignoreHeaderRows(0),
    m_ignoreHeaderRowsHasBeenSet(false),
    m_maxFileSize(0),
    m_maxFileSizeHasBeenSet(false),
    m_rfc4180(false),
    m_rfc4180HasBeenSet(false),
    m_datePartitionTimezoneHasBeenSet(false),
    m_addTrailingPaddingCharacter(false),
    m_addTrailingPaddingCharacterHasBeenSet(false),
    m_expectedBucketOwnerHasBeenSet(false),
    m_glueCatalogGeneration(false),
    m_glueCatalogGenerationHasBeenSet(false)
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
    m_cdcInsertsAndUpdatesHasBeenSet(false),
    m_datePartitionEnabled(false),
    m_datePartitionEnabledHasBeenSet(false),
    m_datePartitionSequence(DatePartitionSequenceValue::NOT_SET),
    m_datePartitionSequenceHasBeenSet(false),
    m_datePartitionDelimiter(DatePartitionDelimiterValue::NOT_SET),
    m_datePartitionDelimiterHasBeenSet(false),
    m_useCsvNoSupValue(false),
    m_useCsvNoSupValueHasBeenSet(false),
    m_csvNoSupValueHasBeenSet(false),
    m_preserveTransactions(false),
    m_preserveTransactionsHasBeenSet(false),
    m_cdcPathHasBeenSet(false),
    m_useTaskStartTimeForFullLoadTimestamp(false),
    m_useTaskStartTimeForFullLoadTimestampHasBeenSet(false),
    m_cannedAclForObjects(CannedAclForObjectsValue::NOT_SET),
    m_cannedAclForObjectsHasBeenSet(false),
    m_addColumnName(false),
    m_addColumnNameHasBeenSet(false),
    m_cdcMaxBatchInterval(0),
    m_cdcMaxBatchIntervalHasBeenSet(false),
    m_cdcMinFileSize(0),
    m_cdcMinFileSizeHasBeenSet(false),
    m_csvNullValueHasBeenSet(false),
    m_ignoreHeaderRows(0),
    m_ignoreHeaderRowsHasBeenSet(false),
    m_maxFileSize(0),
    m_maxFileSizeHasBeenSet(false),
    m_rfc4180(false),
    m_rfc4180HasBeenSet(false),
    m_datePartitionTimezoneHasBeenSet(false),
    m_addTrailingPaddingCharacter(false),
    m_addTrailingPaddingCharacterHasBeenSet(false),
    m_expectedBucketOwnerHasBeenSet(false),
    m_glueCatalogGeneration(false),
    m_glueCatalogGenerationHasBeenSet(false)
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

  if(jsonValue.ValueExists("DatePartitionEnabled"))
  {
    m_datePartitionEnabled = jsonValue.GetBool("DatePartitionEnabled");

    m_datePartitionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatePartitionSequence"))
  {
    m_datePartitionSequence = DatePartitionSequenceValueMapper::GetDatePartitionSequenceValueForName(jsonValue.GetString("DatePartitionSequence"));

    m_datePartitionSequenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatePartitionDelimiter"))
  {
    m_datePartitionDelimiter = DatePartitionDelimiterValueMapper::GetDatePartitionDelimiterValueForName(jsonValue.GetString("DatePartitionDelimiter"));

    m_datePartitionDelimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseCsvNoSupValue"))
  {
    m_useCsvNoSupValue = jsonValue.GetBool("UseCsvNoSupValue");

    m_useCsvNoSupValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CsvNoSupValue"))
  {
    m_csvNoSupValue = jsonValue.GetString("CsvNoSupValue");

    m_csvNoSupValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreserveTransactions"))
  {
    m_preserveTransactions = jsonValue.GetBool("PreserveTransactions");

    m_preserveTransactionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdcPath"))
  {
    m_cdcPath = jsonValue.GetString("CdcPath");

    m_cdcPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseTaskStartTimeForFullLoadTimestamp"))
  {
    m_useTaskStartTimeForFullLoadTimestamp = jsonValue.GetBool("UseTaskStartTimeForFullLoadTimestamp");

    m_useTaskStartTimeForFullLoadTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CannedAclForObjects"))
  {
    m_cannedAclForObjects = CannedAclForObjectsValueMapper::GetCannedAclForObjectsValueForName(jsonValue.GetString("CannedAclForObjects"));

    m_cannedAclForObjectsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddColumnName"))
  {
    m_addColumnName = jsonValue.GetBool("AddColumnName");

    m_addColumnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdcMaxBatchInterval"))
  {
    m_cdcMaxBatchInterval = jsonValue.GetInteger("CdcMaxBatchInterval");

    m_cdcMaxBatchIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdcMinFileSize"))
  {
    m_cdcMinFileSize = jsonValue.GetInteger("CdcMinFileSize");

    m_cdcMinFileSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CsvNullValue"))
  {
    m_csvNullValue = jsonValue.GetString("CsvNullValue");

    m_csvNullValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IgnoreHeaderRows"))
  {
    m_ignoreHeaderRows = jsonValue.GetInteger("IgnoreHeaderRows");

    m_ignoreHeaderRowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxFileSize"))
  {
    m_maxFileSize = jsonValue.GetInteger("MaxFileSize");

    m_maxFileSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rfc4180"))
  {
    m_rfc4180 = jsonValue.GetBool("Rfc4180");

    m_rfc4180HasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatePartitionTimezone"))
  {
    m_datePartitionTimezone = jsonValue.GetString("DatePartitionTimezone");

    m_datePartitionTimezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddTrailingPaddingCharacter"))
  {
    m_addTrailingPaddingCharacter = jsonValue.GetBool("AddTrailingPaddingCharacter");

    m_addTrailingPaddingCharacterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedBucketOwner"))
  {
    m_expectedBucketOwner = jsonValue.GetString("ExpectedBucketOwner");

    m_expectedBucketOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlueCatalogGeneration"))
  {
    m_glueCatalogGeneration = jsonValue.GetBool("GlueCatalogGeneration");

    m_glueCatalogGenerationHasBeenSet = true;
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

  if(m_datePartitionEnabledHasBeenSet)
  {
   payload.WithBool("DatePartitionEnabled", m_datePartitionEnabled);

  }

  if(m_datePartitionSequenceHasBeenSet)
  {
   payload.WithString("DatePartitionSequence", DatePartitionSequenceValueMapper::GetNameForDatePartitionSequenceValue(m_datePartitionSequence));
  }

  if(m_datePartitionDelimiterHasBeenSet)
  {
   payload.WithString("DatePartitionDelimiter", DatePartitionDelimiterValueMapper::GetNameForDatePartitionDelimiterValue(m_datePartitionDelimiter));
  }

  if(m_useCsvNoSupValueHasBeenSet)
  {
   payload.WithBool("UseCsvNoSupValue", m_useCsvNoSupValue);

  }

  if(m_csvNoSupValueHasBeenSet)
  {
   payload.WithString("CsvNoSupValue", m_csvNoSupValue);

  }

  if(m_preserveTransactionsHasBeenSet)
  {
   payload.WithBool("PreserveTransactions", m_preserveTransactions);

  }

  if(m_cdcPathHasBeenSet)
  {
   payload.WithString("CdcPath", m_cdcPath);

  }

  if(m_useTaskStartTimeForFullLoadTimestampHasBeenSet)
  {
   payload.WithBool("UseTaskStartTimeForFullLoadTimestamp", m_useTaskStartTimeForFullLoadTimestamp);

  }

  if(m_cannedAclForObjectsHasBeenSet)
  {
   payload.WithString("CannedAclForObjects", CannedAclForObjectsValueMapper::GetNameForCannedAclForObjectsValue(m_cannedAclForObjects));
  }

  if(m_addColumnNameHasBeenSet)
  {
   payload.WithBool("AddColumnName", m_addColumnName);

  }

  if(m_cdcMaxBatchIntervalHasBeenSet)
  {
   payload.WithInteger("CdcMaxBatchInterval", m_cdcMaxBatchInterval);

  }

  if(m_cdcMinFileSizeHasBeenSet)
  {
   payload.WithInteger("CdcMinFileSize", m_cdcMinFileSize);

  }

  if(m_csvNullValueHasBeenSet)
  {
   payload.WithString("CsvNullValue", m_csvNullValue);

  }

  if(m_ignoreHeaderRowsHasBeenSet)
  {
   payload.WithInteger("IgnoreHeaderRows", m_ignoreHeaderRows);

  }

  if(m_maxFileSizeHasBeenSet)
  {
   payload.WithInteger("MaxFileSize", m_maxFileSize);

  }

  if(m_rfc4180HasBeenSet)
  {
   payload.WithBool("Rfc4180", m_rfc4180);

  }

  if(m_datePartitionTimezoneHasBeenSet)
  {
   payload.WithString("DatePartitionTimezone", m_datePartitionTimezone);

  }

  if(m_addTrailingPaddingCharacterHasBeenSet)
  {
   payload.WithBool("AddTrailingPaddingCharacter", m_addTrailingPaddingCharacter);

  }

  if(m_expectedBucketOwnerHasBeenSet)
  {
   payload.WithString("ExpectedBucketOwner", m_expectedBucketOwner);

  }

  if(m_glueCatalogGenerationHasBeenSet)
  {
   payload.WithBool("GlueCatalogGeneration", m_glueCatalogGeneration);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
