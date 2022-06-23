/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AssessmentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

AssessmentSummary::AssessmentSummary() : 
    m_antipatternReportS3ObjectHasBeenSet(false),
    m_antipatternReportStatus(AntipatternReportStatus::NOT_SET),
    m_antipatternReportStatusHasBeenSet(false),
    m_antipatternReportStatusMessageHasBeenSet(false),
    m_lastAnalyzedTimestampHasBeenSet(false),
    m_listAntipatternSeveritySummaryHasBeenSet(false),
    m_listApplicationComponentStrategySummaryHasBeenSet(false),
    m_listApplicationComponentSummaryHasBeenSet(false),
    m_listServerStrategySummaryHasBeenSet(false),
    m_listServerSummaryHasBeenSet(false)
{
}

AssessmentSummary::AssessmentSummary(JsonView jsonValue) : 
    m_antipatternReportS3ObjectHasBeenSet(false),
    m_antipatternReportStatus(AntipatternReportStatus::NOT_SET),
    m_antipatternReportStatusHasBeenSet(false),
    m_antipatternReportStatusMessageHasBeenSet(false),
    m_lastAnalyzedTimestampHasBeenSet(false),
    m_listAntipatternSeveritySummaryHasBeenSet(false),
    m_listApplicationComponentStrategySummaryHasBeenSet(false),
    m_listApplicationComponentSummaryHasBeenSet(false),
    m_listServerStrategySummaryHasBeenSet(false),
    m_listServerSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentSummary& AssessmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("antipatternReportS3Object"))
  {
    m_antipatternReportS3Object = jsonValue.GetObject("antipatternReportS3Object");

    m_antipatternReportS3ObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antipatternReportStatus"))
  {
    m_antipatternReportStatus = AntipatternReportStatusMapper::GetAntipatternReportStatusForName(jsonValue.GetString("antipatternReportStatus"));

    m_antipatternReportStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antipatternReportStatusMessage"))
  {
    m_antipatternReportStatusMessage = jsonValue.GetString("antipatternReportStatusMessage");

    m_antipatternReportStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAnalyzedTimestamp"))
  {
    m_lastAnalyzedTimestamp = jsonValue.GetDouble("lastAnalyzedTimestamp");

    m_lastAnalyzedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listAntipatternSeveritySummary"))
  {
    Array<JsonView> listAntipatternSeveritySummaryJsonList = jsonValue.GetArray("listAntipatternSeveritySummary");
    for(unsigned listAntipatternSeveritySummaryIndex = 0; listAntipatternSeveritySummaryIndex < listAntipatternSeveritySummaryJsonList.GetLength(); ++listAntipatternSeveritySummaryIndex)
    {
      m_listAntipatternSeveritySummary.push_back(listAntipatternSeveritySummaryJsonList[listAntipatternSeveritySummaryIndex].AsObject());
    }
    m_listAntipatternSeveritySummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listApplicationComponentStrategySummary"))
  {
    Array<JsonView> listApplicationComponentStrategySummaryJsonList = jsonValue.GetArray("listApplicationComponentStrategySummary");
    for(unsigned listApplicationComponentStrategySummaryIndex = 0; listApplicationComponentStrategySummaryIndex < listApplicationComponentStrategySummaryJsonList.GetLength(); ++listApplicationComponentStrategySummaryIndex)
    {
      m_listApplicationComponentStrategySummary.push_back(listApplicationComponentStrategySummaryJsonList[listApplicationComponentStrategySummaryIndex].AsObject());
    }
    m_listApplicationComponentStrategySummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listApplicationComponentSummary"))
  {
    Array<JsonView> listApplicationComponentSummaryJsonList = jsonValue.GetArray("listApplicationComponentSummary");
    for(unsigned listApplicationComponentSummaryIndex = 0; listApplicationComponentSummaryIndex < listApplicationComponentSummaryJsonList.GetLength(); ++listApplicationComponentSummaryIndex)
    {
      m_listApplicationComponentSummary.push_back(listApplicationComponentSummaryJsonList[listApplicationComponentSummaryIndex].AsObject());
    }
    m_listApplicationComponentSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listServerStrategySummary"))
  {
    Array<JsonView> listServerStrategySummaryJsonList = jsonValue.GetArray("listServerStrategySummary");
    for(unsigned listServerStrategySummaryIndex = 0; listServerStrategySummaryIndex < listServerStrategySummaryJsonList.GetLength(); ++listServerStrategySummaryIndex)
    {
      m_listServerStrategySummary.push_back(listServerStrategySummaryJsonList[listServerStrategySummaryIndex].AsObject());
    }
    m_listServerStrategySummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listServerSummary"))
  {
    Array<JsonView> listServerSummaryJsonList = jsonValue.GetArray("listServerSummary");
    for(unsigned listServerSummaryIndex = 0; listServerSummaryIndex < listServerSummaryJsonList.GetLength(); ++listServerSummaryIndex)
    {
      m_listServerSummary.push_back(listServerSummaryJsonList[listServerSummaryIndex].AsObject());
    }
    m_listServerSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_antipatternReportS3ObjectHasBeenSet)
  {
   payload.WithObject("antipatternReportS3Object", m_antipatternReportS3Object.Jsonize());

  }

  if(m_antipatternReportStatusHasBeenSet)
  {
   payload.WithString("antipatternReportStatus", AntipatternReportStatusMapper::GetNameForAntipatternReportStatus(m_antipatternReportStatus));
  }

  if(m_antipatternReportStatusMessageHasBeenSet)
  {
   payload.WithString("antipatternReportStatusMessage", m_antipatternReportStatusMessage);

  }

  if(m_lastAnalyzedTimestampHasBeenSet)
  {
   payload.WithDouble("lastAnalyzedTimestamp", m_lastAnalyzedTimestamp.SecondsWithMSPrecision());
  }

  if(m_listAntipatternSeveritySummaryHasBeenSet)
  {
   Array<JsonValue> listAntipatternSeveritySummaryJsonList(m_listAntipatternSeveritySummary.size());
   for(unsigned listAntipatternSeveritySummaryIndex = 0; listAntipatternSeveritySummaryIndex < listAntipatternSeveritySummaryJsonList.GetLength(); ++listAntipatternSeveritySummaryIndex)
   {
     listAntipatternSeveritySummaryJsonList[listAntipatternSeveritySummaryIndex].AsObject(m_listAntipatternSeveritySummary[listAntipatternSeveritySummaryIndex].Jsonize());
   }
   payload.WithArray("listAntipatternSeveritySummary", std::move(listAntipatternSeveritySummaryJsonList));

  }

  if(m_listApplicationComponentStrategySummaryHasBeenSet)
  {
   Array<JsonValue> listApplicationComponentStrategySummaryJsonList(m_listApplicationComponentStrategySummary.size());
   for(unsigned listApplicationComponentStrategySummaryIndex = 0; listApplicationComponentStrategySummaryIndex < listApplicationComponentStrategySummaryJsonList.GetLength(); ++listApplicationComponentStrategySummaryIndex)
   {
     listApplicationComponentStrategySummaryJsonList[listApplicationComponentStrategySummaryIndex].AsObject(m_listApplicationComponentStrategySummary[listApplicationComponentStrategySummaryIndex].Jsonize());
   }
   payload.WithArray("listApplicationComponentStrategySummary", std::move(listApplicationComponentStrategySummaryJsonList));

  }

  if(m_listApplicationComponentSummaryHasBeenSet)
  {
   Array<JsonValue> listApplicationComponentSummaryJsonList(m_listApplicationComponentSummary.size());
   for(unsigned listApplicationComponentSummaryIndex = 0; listApplicationComponentSummaryIndex < listApplicationComponentSummaryJsonList.GetLength(); ++listApplicationComponentSummaryIndex)
   {
     listApplicationComponentSummaryJsonList[listApplicationComponentSummaryIndex].AsObject(m_listApplicationComponentSummary[listApplicationComponentSummaryIndex].Jsonize());
   }
   payload.WithArray("listApplicationComponentSummary", std::move(listApplicationComponentSummaryJsonList));

  }

  if(m_listServerStrategySummaryHasBeenSet)
  {
   Array<JsonValue> listServerStrategySummaryJsonList(m_listServerStrategySummary.size());
   for(unsigned listServerStrategySummaryIndex = 0; listServerStrategySummaryIndex < listServerStrategySummaryJsonList.GetLength(); ++listServerStrategySummaryIndex)
   {
     listServerStrategySummaryJsonList[listServerStrategySummaryIndex].AsObject(m_listServerStrategySummary[listServerStrategySummaryIndex].Jsonize());
   }
   payload.WithArray("listServerStrategySummary", std::move(listServerStrategySummaryJsonList));

  }

  if(m_listServerSummaryHasBeenSet)
  {
   Array<JsonValue> listServerSummaryJsonList(m_listServerSummary.size());
   for(unsigned listServerSummaryIndex = 0; listServerSummaryIndex < listServerSummaryJsonList.GetLength(); ++listServerSummaryIndex)
   {
     listServerSummaryJsonList[listServerSummaryIndex].AsObject(m_listServerSummary[listServerSummaryIndex].Jsonize());
   }
   payload.WithArray("listServerSummary", std::move(listServerSummaryJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
