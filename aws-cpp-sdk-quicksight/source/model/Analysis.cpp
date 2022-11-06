/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Analysis.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

Analysis::Analysis() : 
    m_analysisIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_dataSetArnsHasBeenSet(false),
    m_themeArnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_sheetsHasBeenSet(false)
{
}

Analysis::Analysis(JsonView jsonValue) : 
    m_analysisIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_dataSetArnsHasBeenSet(false),
    m_themeArnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_sheetsHasBeenSet(false)
{
  *this = jsonValue;
}

Analysis& Analysis::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnalysisId"))
  {
    m_analysisId = jsonValue.GetString("AnalysisId");

    m_analysisIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetArns"))
  {
    Aws::Utils::Array<JsonView> dataSetArnsJsonList = jsonValue.GetArray("DataSetArns");
    for(unsigned dataSetArnsIndex = 0; dataSetArnsIndex < dataSetArnsJsonList.GetLength(); ++dataSetArnsIndex)
    {
      m_dataSetArns.push_back(dataSetArnsJsonList[dataSetArnsIndex].AsString());
    }
    m_dataSetArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThemeArn"))
  {
    m_themeArn = jsonValue.GetString("ThemeArn");

    m_themeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sheets"))
  {
    Aws::Utils::Array<JsonView> sheetsJsonList = jsonValue.GetArray("Sheets");
    for(unsigned sheetsIndex = 0; sheetsIndex < sheetsJsonList.GetLength(); ++sheetsIndex)
    {
      m_sheets.push_back(sheetsJsonList[sheetsIndex].AsObject());
    }
    m_sheetsHasBeenSet = true;
  }

  return *this;
}

JsonValue Analysis::Jsonize() const
{
  JsonValue payload;

  if(m_analysisIdHasBeenSet)
  {
   payload.WithString("AnalysisId", m_analysisId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if(m_errorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsObject(m_errors[errorsIndex].Jsonize());
   }
   payload.WithArray("Errors", std::move(errorsJsonList));

  }

  if(m_dataSetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSetArnsJsonList(m_dataSetArns.size());
   for(unsigned dataSetArnsIndex = 0; dataSetArnsIndex < dataSetArnsJsonList.GetLength(); ++dataSetArnsIndex)
   {
     dataSetArnsJsonList[dataSetArnsIndex].AsString(m_dataSetArns[dataSetArnsIndex]);
   }
   payload.WithArray("DataSetArns", std::move(dataSetArnsJsonList));

  }

  if(m_themeArnHasBeenSet)
  {
   payload.WithString("ThemeArn", m_themeArn);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_sheetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sheetsJsonList(m_sheets.size());
   for(unsigned sheetsIndex = 0; sheetsIndex < sheetsJsonList.GetLength(); ++sheetsIndex)
   {
     sheetsJsonList[sheetsIndex].AsObject(m_sheets[sheetsIndex].Jsonize());
   }
   payload.WithArray("Sheets", std::move(sheetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
