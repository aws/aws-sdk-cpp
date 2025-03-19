/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SchemaSummary.h>
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

SchemaSummary::SchemaSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SchemaSummary& SchemaSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = SchemaTypeMapper::GetSchemaTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creatorAccountId"))
  {
    m_creatorAccountId = jsonValue.GetString("creatorAccountId");
    m_creatorAccountIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("collaborationId"))
  {
    m_collaborationId = jsonValue.GetString("collaborationId");
    m_collaborationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationArn"))
  {
    m_collaborationArn = jsonValue.GetString("collaborationArn");
    m_collaborationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("analysisRuleTypes"))
  {
    Aws::Utils::Array<JsonView> analysisRuleTypesJsonList = jsonValue.GetArray("analysisRuleTypes");
    for(unsigned analysisRuleTypesIndex = 0; analysisRuleTypesIndex < analysisRuleTypesJsonList.GetLength(); ++analysisRuleTypesIndex)
    {
      m_analysisRuleTypes.push_back(AnalysisRuleTypeMapper::GetAnalysisRuleTypeForName(analysisRuleTypesJsonList[analysisRuleTypesIndex].AsString()));
    }
    m_analysisRuleTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("analysisMethod"))
  {
    m_analysisMethod = AnalysisMethodMapper::GetAnalysisMethodForName(jsonValue.GetString("analysisMethod"));
    m_analysisMethodHasBeenSet = true;
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

JsonValue SchemaSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SchemaTypeMapper::GetNameForSchemaType(m_type));
  }

  if(m_creatorAccountIdHasBeenSet)
  {
   payload.WithString("creatorAccountId", m_creatorAccountId);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_collaborationIdHasBeenSet)
  {
   payload.WithString("collaborationId", m_collaborationId);

  }

  if(m_collaborationArnHasBeenSet)
  {
   payload.WithString("collaborationArn", m_collaborationArn);

  }

  if(m_analysisRuleTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysisRuleTypesJsonList(m_analysisRuleTypes.size());
   for(unsigned analysisRuleTypesIndex = 0; analysisRuleTypesIndex < analysisRuleTypesJsonList.GetLength(); ++analysisRuleTypesIndex)
   {
     analysisRuleTypesJsonList[analysisRuleTypesIndex].AsString(AnalysisRuleTypeMapper::GetNameForAnalysisRuleType(m_analysisRuleTypes[analysisRuleTypesIndex]));
   }
   payload.WithArray("analysisRuleTypes", std::move(analysisRuleTypesJsonList));

  }

  if(m_analysisMethodHasBeenSet)
  {
   payload.WithString("analysisMethod", AnalysisMethodMapper::GetNameForAnalysisMethod(m_analysisMethod));
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
