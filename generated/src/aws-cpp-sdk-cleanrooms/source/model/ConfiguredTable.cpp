/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConfiguredTable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ConfiguredTable::ConfiguredTable(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfiguredTable& ConfiguredTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tableReference"))
  {
    m_tableReference = jsonValue.GetObject("tableReference");
    m_tableReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetDouble("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("analysisRuleTypes"))
  {
    Aws::Utils::Array<JsonView> analysisRuleTypesJsonList = jsonValue.GetArray("analysisRuleTypes");
    for(unsigned analysisRuleTypesIndex = 0; analysisRuleTypesIndex < analysisRuleTypesJsonList.GetLength(); ++analysisRuleTypesIndex)
    {
      m_analysisRuleTypes.push_back(ConfiguredTableAnalysisRuleTypeMapper::GetConfiguredTableAnalysisRuleTypeForName(analysisRuleTypesJsonList[analysisRuleTypesIndex].AsString()));
    }
    m_analysisRuleTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("analysisMethod"))
  {
    m_analysisMethod = AnalysisMethodMapper::GetAnalysisMethodForName(jsonValue.GetString("analysisMethod"));
    m_analysisMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedColumns"))
  {
    Aws::Utils::Array<JsonView> allowedColumnsJsonList = jsonValue.GetArray("allowedColumns");
    for(unsigned allowedColumnsIndex = 0; allowedColumnsIndex < allowedColumnsJsonList.GetLength(); ++allowedColumnsIndex)
    {
      m_allowedColumns.push_back(allowedColumnsJsonList[allowedColumnsIndex].AsString());
    }
    m_allowedColumnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("selectedAnalysisMethods"))
  {
    Aws::Utils::Array<JsonView> selectedAnalysisMethodsJsonList = jsonValue.GetArray("selectedAnalysisMethods");
    for(unsigned selectedAnalysisMethodsIndex = 0; selectedAnalysisMethodsIndex < selectedAnalysisMethodsJsonList.GetLength(); ++selectedAnalysisMethodsIndex)
    {
      m_selectedAnalysisMethods.push_back(SelectedAnalysisMethodMapper::GetSelectedAnalysisMethodForName(selectedAnalysisMethodsJsonList[selectedAnalysisMethodsIndex].AsString()));
    }
    m_selectedAnalysisMethodsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfiguredTable::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_tableReferenceHasBeenSet)
  {
   payload.WithObject("tableReference", m_tableReference.Jsonize());

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_analysisRuleTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysisRuleTypesJsonList(m_analysisRuleTypes.size());
   for(unsigned analysisRuleTypesIndex = 0; analysisRuleTypesIndex < analysisRuleTypesJsonList.GetLength(); ++analysisRuleTypesIndex)
   {
     analysisRuleTypesJsonList[analysisRuleTypesIndex].AsString(ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(m_analysisRuleTypes[analysisRuleTypesIndex]));
   }
   payload.WithArray("analysisRuleTypes", std::move(analysisRuleTypesJsonList));

  }

  if(m_analysisMethodHasBeenSet)
  {
   payload.WithString("analysisMethod", AnalysisMethodMapper::GetNameForAnalysisMethod(m_analysisMethod));
  }

  if(m_allowedColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedColumnsJsonList(m_allowedColumns.size());
   for(unsigned allowedColumnsIndex = 0; allowedColumnsIndex < allowedColumnsJsonList.GetLength(); ++allowedColumnsIndex)
   {
     allowedColumnsJsonList[allowedColumnsIndex].AsString(m_allowedColumns[allowedColumnsIndex]);
   }
   payload.WithArray("allowedColumns", std::move(allowedColumnsJsonList));

  }

  if(m_selectedAnalysisMethodsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedAnalysisMethodsJsonList(m_selectedAnalysisMethods.size());
   for(unsigned selectedAnalysisMethodsIndex = 0; selectedAnalysisMethodsIndex < selectedAnalysisMethodsJsonList.GetLength(); ++selectedAnalysisMethodsIndex)
   {
     selectedAnalysisMethodsJsonList[selectedAnalysisMethodsIndex].AsString(SelectedAnalysisMethodMapper::GetNameForSelectedAnalysisMethod(m_selectedAnalysisMethods[selectedAnalysisMethodsIndex]));
   }
   payload.WithArray("selectedAnalysisMethods", std::move(selectedAnalysisMethodsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
