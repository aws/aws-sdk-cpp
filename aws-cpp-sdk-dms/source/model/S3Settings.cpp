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
    m_compressionTypeHasBeenSet(false)
{
}

S3Settings::S3Settings(const JsonValue& jsonValue) : 
    m_serviceAccessRoleArnHasBeenSet(false),
    m_externalTableDefinitionHasBeenSet(false),
    m_csvRowDelimiterHasBeenSet(false),
    m_csvDelimiterHasBeenSet(false),
    m_bucketFolderHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_compressionType(CompressionTypeValue::NOT_SET),
    m_compressionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

S3Settings& S3Settings::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
