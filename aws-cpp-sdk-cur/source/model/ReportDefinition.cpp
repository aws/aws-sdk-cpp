/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_additionalArtifactsHasBeenSet(false),
    m_refreshClosedReports(false),
    m_refreshClosedReportsHasBeenSet(false),
    m_reportVersioning(ReportVersioning::NOT_SET),
    m_reportVersioningHasBeenSet(false),
    m_billingViewArnHasBeenSet(false)
{
}

ReportDefinition::ReportDefinition(JsonView jsonValue) : 
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
    m_additionalArtifactsHasBeenSet(false),
    m_refreshClosedReports(false),
    m_refreshClosedReportsHasBeenSet(false),
    m_reportVersioning(ReportVersioning::NOT_SET),
    m_reportVersioningHasBeenSet(false),
    m_billingViewArnHasBeenSet(false)
{
  *this = jsonValue;
}

ReportDefinition& ReportDefinition::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> additionalSchemaElementsJsonList = jsonValue.GetArray("AdditionalSchemaElements");
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
    Aws::Utils::Array<JsonView> additionalArtifactsJsonList = jsonValue.GetArray("AdditionalArtifacts");
    for(unsigned additionalArtifactsIndex = 0; additionalArtifactsIndex < additionalArtifactsJsonList.GetLength(); ++additionalArtifactsIndex)
    {
      m_additionalArtifacts.push_back(AdditionalArtifactMapper::GetAdditionalArtifactForName(additionalArtifactsJsonList[additionalArtifactsIndex].AsString()));
    }
    m_additionalArtifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshClosedReports"))
  {
    m_refreshClosedReports = jsonValue.GetBool("RefreshClosedReports");

    m_refreshClosedReportsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportVersioning"))
  {
    m_reportVersioning = ReportVersioningMapper::GetReportVersioningForName(jsonValue.GetString("ReportVersioning"));

    m_reportVersioningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BillingViewArn"))
  {
    m_billingViewArn = jsonValue.GetString("BillingViewArn");

    m_billingViewArnHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> additionalSchemaElementsJsonList(m_additionalSchemaElements.size());
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
   Aws::Utils::Array<JsonValue> additionalArtifactsJsonList(m_additionalArtifacts.size());
   for(unsigned additionalArtifactsIndex = 0; additionalArtifactsIndex < additionalArtifactsJsonList.GetLength(); ++additionalArtifactsIndex)
   {
     additionalArtifactsJsonList[additionalArtifactsIndex].AsString(AdditionalArtifactMapper::GetNameForAdditionalArtifact(m_additionalArtifacts[additionalArtifactsIndex]));
   }
   payload.WithArray("AdditionalArtifacts", std::move(additionalArtifactsJsonList));

  }

  if(m_refreshClosedReportsHasBeenSet)
  {
   payload.WithBool("RefreshClosedReports", m_refreshClosedReports);

  }

  if(m_reportVersioningHasBeenSet)
  {
   payload.WithString("ReportVersioning", ReportVersioningMapper::GetNameForReportVersioning(m_reportVersioning));
  }

  if(m_billingViewArnHasBeenSet)
  {
   payload.WithString("BillingViewArn", m_billingViewArn);

  }

  return payload;
}

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
