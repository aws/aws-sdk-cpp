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
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cur/model/TimeUnit.h>
#include <aws/cur/model/ReportFormat.h>
#include <aws/cur/model/CompressionFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cur/model/AWSRegion.h>
#include <aws/cur/model/SchemaElement.h>
#include <aws/cur/model/AdditionalArtifact.h>
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
namespace CostandUsageReportService
{
namespace Model
{

  /**
   * The definition of AWS Cost and Usage Report. Customer can specify the report
   * name, time unit, report format, compression format, S3 bucket and additional
   * artifacts and schema elements in the definition.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/ReportDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_COSTANDUSAGEREPORTSERVICE_API ReportDefinition
  {
  public:
    ReportDefinition();
    ReportDefinition(const Aws::Utils::Json::JsonValue& jsonValue);
    ReportDefinition& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetReportName() const{ return m_reportName; }

    
    inline void SetReportName(const Aws::String& value) { m_reportNameHasBeenSet = true; m_reportName = value; }

    
    inline void SetReportName(Aws::String&& value) { m_reportNameHasBeenSet = true; m_reportName = std::move(value); }

    
    inline void SetReportName(const char* value) { m_reportNameHasBeenSet = true; m_reportName.assign(value); }

    
    inline ReportDefinition& WithReportName(const Aws::String& value) { SetReportName(value); return *this;}

    
    inline ReportDefinition& WithReportName(Aws::String&& value) { SetReportName(std::move(value)); return *this;}

    
    inline ReportDefinition& WithReportName(const char* value) { SetReportName(value); return *this;}

    
    inline const TimeUnit& GetTimeUnit() const{ return m_timeUnit; }

    
    inline void SetTimeUnit(const TimeUnit& value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }

    
    inline void SetTimeUnit(TimeUnit&& value) { m_timeUnitHasBeenSet = true; m_timeUnit = std::move(value); }

    
    inline ReportDefinition& WithTimeUnit(const TimeUnit& value) { SetTimeUnit(value); return *this;}

    
    inline ReportDefinition& WithTimeUnit(TimeUnit&& value) { SetTimeUnit(std::move(value)); return *this;}

    
    inline const ReportFormat& GetFormat() const{ return m_format; }

    
    inline void SetFormat(const ReportFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    
    inline void SetFormat(ReportFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    
    inline ReportDefinition& WithFormat(const ReportFormat& value) { SetFormat(value); return *this;}

    
    inline ReportDefinition& WithFormat(ReportFormat&& value) { SetFormat(std::move(value)); return *this;}

    
    inline const CompressionFormat& GetCompression() const{ return m_compression; }

    
    inline void SetCompression(const CompressionFormat& value) { m_compressionHasBeenSet = true; m_compression = value; }

    
    inline void SetCompression(CompressionFormat&& value) { m_compressionHasBeenSet = true; m_compression = std::move(value); }

    
    inline ReportDefinition& WithCompression(const CompressionFormat& value) { SetCompression(value); return *this;}

    
    inline ReportDefinition& WithCompression(CompressionFormat&& value) { SetCompression(std::move(value)); return *this;}

    
    inline const Aws::Vector<SchemaElement>& GetAdditionalSchemaElements() const{ return m_additionalSchemaElements; }

    
    inline void SetAdditionalSchemaElements(const Aws::Vector<SchemaElement>& value) { m_additionalSchemaElementsHasBeenSet = true; m_additionalSchemaElements = value; }

    
    inline void SetAdditionalSchemaElements(Aws::Vector<SchemaElement>&& value) { m_additionalSchemaElementsHasBeenSet = true; m_additionalSchemaElements = std::move(value); }

    
    inline ReportDefinition& WithAdditionalSchemaElements(const Aws::Vector<SchemaElement>& value) { SetAdditionalSchemaElements(value); return *this;}

    
    inline ReportDefinition& WithAdditionalSchemaElements(Aws::Vector<SchemaElement>&& value) { SetAdditionalSchemaElements(std::move(value)); return *this;}

    
    inline ReportDefinition& AddAdditionalSchemaElements(const SchemaElement& value) { m_additionalSchemaElementsHasBeenSet = true; m_additionalSchemaElements.push_back(value); return *this; }

    
    inline ReportDefinition& AddAdditionalSchemaElements(SchemaElement&& value) { m_additionalSchemaElementsHasBeenSet = true; m_additionalSchemaElements.push_back(std::move(value)); return *this; }

    
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    
    inline ReportDefinition& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    
    inline ReportDefinition& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    
    inline ReportDefinition& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}

    
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    
    inline ReportDefinition& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    
    inline ReportDefinition& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    
    inline ReportDefinition& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}

    
    inline const AWSRegion& GetS3Region() const{ return m_s3Region; }

    
    inline void SetS3Region(const AWSRegion& value) { m_s3RegionHasBeenSet = true; m_s3Region = value; }

    
    inline void SetS3Region(AWSRegion&& value) { m_s3RegionHasBeenSet = true; m_s3Region = std::move(value); }

    
    inline ReportDefinition& WithS3Region(const AWSRegion& value) { SetS3Region(value); return *this;}

    
    inline ReportDefinition& WithS3Region(AWSRegion&& value) { SetS3Region(std::move(value)); return *this;}

    
    inline const Aws::Vector<AdditionalArtifact>& GetAdditionalArtifacts() const{ return m_additionalArtifacts; }

    
    inline void SetAdditionalArtifacts(const Aws::Vector<AdditionalArtifact>& value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts = value; }

    
    inline void SetAdditionalArtifacts(Aws::Vector<AdditionalArtifact>&& value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts = std::move(value); }

    
    inline ReportDefinition& WithAdditionalArtifacts(const Aws::Vector<AdditionalArtifact>& value) { SetAdditionalArtifacts(value); return *this;}

    
    inline ReportDefinition& WithAdditionalArtifacts(Aws::Vector<AdditionalArtifact>&& value) { SetAdditionalArtifacts(std::move(value)); return *this;}

    
    inline ReportDefinition& AddAdditionalArtifacts(const AdditionalArtifact& value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts.push_back(value); return *this; }

    
    inline ReportDefinition& AddAdditionalArtifacts(AdditionalArtifact&& value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts.push_back(std::move(value)); return *this; }

  private:
    Aws::String m_reportName;
    bool m_reportNameHasBeenSet;
    TimeUnit m_timeUnit;
    bool m_timeUnitHasBeenSet;
    ReportFormat m_format;
    bool m_formatHasBeenSet;
    CompressionFormat m_compression;
    bool m_compressionHasBeenSet;
    Aws::Vector<SchemaElement> m_additionalSchemaElements;
    bool m_additionalSchemaElementsHasBeenSet;
    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;
    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet;
    AWSRegion m_s3Region;
    bool m_s3RegionHasBeenSet;
    Aws::Vector<AdditionalArtifact> m_additionalArtifacts;
    bool m_additionalArtifactsHasBeenSet;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
