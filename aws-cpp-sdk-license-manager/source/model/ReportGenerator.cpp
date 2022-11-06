/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ReportGenerator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

ReportGenerator::ReportGenerator() : 
    m_reportGeneratorNameHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_reportContextHasBeenSet(false),
    m_reportFrequencyHasBeenSet(false),
    m_licenseManagerReportGeneratorArnHasBeenSet(false),
    m_lastRunStatusHasBeenSet(false),
    m_lastRunFailureReasonHasBeenSet(false),
    m_lastReportGenerationTimeHasBeenSet(false),
    m_reportCreatorAccountHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_s3LocationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ReportGenerator::ReportGenerator(JsonView jsonValue) : 
    m_reportGeneratorNameHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_reportContextHasBeenSet(false),
    m_reportFrequencyHasBeenSet(false),
    m_licenseManagerReportGeneratorArnHasBeenSet(false),
    m_lastRunStatusHasBeenSet(false),
    m_lastRunFailureReasonHasBeenSet(false),
    m_lastReportGenerationTimeHasBeenSet(false),
    m_reportCreatorAccountHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_s3LocationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ReportGenerator& ReportGenerator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReportGeneratorName"))
  {
    m_reportGeneratorName = jsonValue.GetString("ReportGeneratorName");

    m_reportGeneratorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportType"))
  {
    Aws::Utils::Array<JsonView> reportTypeJsonList = jsonValue.GetArray("ReportType");
    for(unsigned reportTypeIndex = 0; reportTypeIndex < reportTypeJsonList.GetLength(); ++reportTypeIndex)
    {
      m_reportType.push_back(ReportTypeMapper::GetReportTypeForName(reportTypeJsonList[reportTypeIndex].AsString()));
    }
    m_reportTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportContext"))
  {
    m_reportContext = jsonValue.GetObject("ReportContext");

    m_reportContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportFrequency"))
  {
    m_reportFrequency = jsonValue.GetObject("ReportFrequency");

    m_reportFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseManagerReportGeneratorArn"))
  {
    m_licenseManagerReportGeneratorArn = jsonValue.GetString("LicenseManagerReportGeneratorArn");

    m_licenseManagerReportGeneratorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRunStatus"))
  {
    m_lastRunStatus = jsonValue.GetString("LastRunStatus");

    m_lastRunStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRunFailureReason"))
  {
    m_lastRunFailureReason = jsonValue.GetString("LastRunFailureReason");

    m_lastRunFailureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastReportGenerationTime"))
  {
    m_lastReportGenerationTime = jsonValue.GetString("LastReportGenerationTime");

    m_lastReportGenerationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportCreatorAccount"))
  {
    m_reportCreatorAccount = jsonValue.GetString("ReportCreatorAccount");

    m_reportCreatorAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Location"))
  {
    m_s3Location = jsonValue.GetObject("S3Location");

    m_s3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetString("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportGenerator::Jsonize() const
{
  JsonValue payload;

  if(m_reportGeneratorNameHasBeenSet)
  {
   payload.WithString("ReportGeneratorName", m_reportGeneratorName);

  }

  if(m_reportTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reportTypeJsonList(m_reportType.size());
   for(unsigned reportTypeIndex = 0; reportTypeIndex < reportTypeJsonList.GetLength(); ++reportTypeIndex)
   {
     reportTypeJsonList[reportTypeIndex].AsString(ReportTypeMapper::GetNameForReportType(m_reportType[reportTypeIndex]));
   }
   payload.WithArray("ReportType", std::move(reportTypeJsonList));

  }

  if(m_reportContextHasBeenSet)
  {
   payload.WithObject("ReportContext", m_reportContext.Jsonize());

  }

  if(m_reportFrequencyHasBeenSet)
  {
   payload.WithObject("ReportFrequency", m_reportFrequency.Jsonize());

  }

  if(m_licenseManagerReportGeneratorArnHasBeenSet)
  {
   payload.WithString("LicenseManagerReportGeneratorArn", m_licenseManagerReportGeneratorArn);

  }

  if(m_lastRunStatusHasBeenSet)
  {
   payload.WithString("LastRunStatus", m_lastRunStatus);

  }

  if(m_lastRunFailureReasonHasBeenSet)
  {
   payload.WithString("LastRunFailureReason", m_lastRunFailureReason);

  }

  if(m_lastReportGenerationTimeHasBeenSet)
  {
   payload.WithString("LastReportGenerationTime", m_lastReportGenerationTime);

  }

  if(m_reportCreatorAccountHasBeenSet)
  {
   payload.WithString("ReportCreatorAccount", m_reportCreatorAccount);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("S3Location", m_s3Location.Jsonize());

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("CreateTime", m_createTime);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
