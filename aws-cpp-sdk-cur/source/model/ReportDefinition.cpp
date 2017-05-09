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

#include <aws/cur/model/ReportDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{

ReportDefinition::ReportDefinition() : 
    m_reportNameHasBeenSet(false),
    m_timeUnit(TimeUnit::NOT_SET),
    m_timeUnitHasBeenSet(false),
    m_format(ReportFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_compression(CompressionFormat::NOT_SET),
    m_compressionHasBeenSet(false),
    m_additionalSchemaElementsHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false),
    m_s3Region(AWSRegion::NOT_SET),
    m_s3RegionHasBeenSet(false),
    m_additionalArtifactsHasBeenSet(false)
{
}

ReportDefinition::ReportDefinition(const JsonValue& jsonValue) : 
    m_reportNameHasBeenSet(false),
    m_timeUnit(TimeUnit::NOT_SET),
    m_timeUnitHasBeenSet(false),
    m_format(ReportFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_compression(CompressionFormat::NOT_SET),
    m_compressionHasBeenSet(false),
    m_additionalSchemaElementsHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false),
    m_s3Region(AWSRegion::NOT_SET),
    m_s3RegionHasBeenSet(false),
    m_additionalArtifactsHasBeenSet(false)
{
  *this = jsonValue;
}

ReportDefinition& ReportDefinition::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ReportName"))
  {
    m_reportName = jsonValue.GetString("ReportName");

    m_reportNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeUnit"))
  {
    m_timeUnit = TimeUnitMapper::GetTimeUnitForName(jsonValue.GetString("TimeUnit"));

    m_timeUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = ReportFormatMapper::GetReportFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Compression"))
  {
    m_compression = CompressionFormatMapper::GetCompressionFormatForName(jsonValue.GetString("Compression"));

    m_compressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalSchemaElements"))
  {
    Array<JsonValue> additionalSchemaElementsJsonList = jsonValue.GetArray("AdditionalSchemaElements");
    for(unsigned additionalSchemaElementsIndex = 0; additionalSchemaElementsIndex < additionalSchemaElementsJsonList.GetLength(); ++additionalSchemaElementsIndex)
    {
      m_additionalSchemaElements.push_back(SchemaElementMapper::GetSchemaElementForName(additionalSchemaElementsJsonList[additionalSchemaElementsIndex].AsString()));
    }
    m_additionalSchemaElementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Prefix"))
  {
    m_s3Prefix = jsonValue.GetString("S3Prefix");

    m_s3PrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Region"))
  {
    m_s3Region = AWSRegionMapper::GetAWSRegionForName(jsonValue.GetString("S3Region"));

    m_s3RegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalArtifacts"))
  {
    Array<JsonValue> additionalArtifactsJsonList = jsonValue.GetArray("AdditionalArtifacts");
    for(unsigned additionalArtifactsIndex = 0; additionalArtifactsIndex < additionalArtifactsJsonList.GetLength(); ++additionalArtifactsIndex)
    {
      m_additionalArtifacts.push_back(AdditionalArtifactMapper::GetAdditionalArtifactForName(additionalArtifactsJsonList[additionalArtifactsIndex].AsString()));
    }
    m_additionalArtifactsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_reportNameHasBeenSet)
  {
   payload.WithString("ReportName", m_reportName);

  }

  if(m_timeUnitHasBeenSet)
  {
   payload.WithString("TimeUnit", TimeUnitMapper::GetNameForTimeUnit(m_timeUnit));
  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", ReportFormatMapper::GetNameForReportFormat(m_format));
  }

  if(m_compressionHasBeenSet)
  {
   payload.WithString("Compression", CompressionFormatMapper::GetNameForCompressionFormat(m_compression));
  }

  if(m_additionalSchemaElementsHasBeenSet)
  {
   Array<JsonValue> additionalSchemaElementsJsonList(m_additionalSchemaElements.size());
   for(unsigned additionalSchemaElementsIndex = 0; additionalSchemaElementsIndex < additionalSchemaElementsJsonList.GetLength(); ++additionalSchemaElementsIndex)
   {
     additionalSchemaElementsJsonList[additionalSchemaElementsIndex].AsString(SchemaElementMapper::GetNameForSchemaElement(m_additionalSchemaElements[additionalSchemaElementsIndex]));
   }
   payload.WithArray("AdditionalSchemaElements", std::move(additionalSchemaElementsJsonList));

  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_s3PrefixHasBeenSet)
  {
   payload.WithString("S3Prefix", m_s3Prefix);

  }

  if(m_s3RegionHasBeenSet)
  {
   payload.WithString("S3Region", AWSRegionMapper::GetNameForAWSRegion(m_s3Region));
  }

  if(m_additionalArtifactsHasBeenSet)
  {
   Array<JsonValue> additionalArtifactsJsonList(m_additionalArtifacts.size());
   for(unsigned additionalArtifactsIndex = 0; additionalArtifactsIndex < additionalArtifactsJsonList.GetLength(); ++additionalArtifactsIndex)
   {
     additionalArtifactsJsonList[additionalArtifactsIndex].AsString(AdditionalArtifactMapper::GetNameForAdditionalArtifact(m_additionalArtifacts[additionalArtifactsIndex]));
   }
   payload.WithArray("AdditionalArtifacts", std::move(additionalArtifactsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws