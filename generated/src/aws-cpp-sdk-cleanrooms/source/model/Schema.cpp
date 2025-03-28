﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/Schema.h>
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

Schema::Schema(JsonView jsonValue)
{
  *this = jsonValue;
}

Schema& Schema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columns"))
  {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      m_columns.push_back(columnsJsonList[columnsIndex].AsObject());
    }
    m_columnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("partitionKeys"))
  {
    Aws::Utils::Array<JsonView> partitionKeysJsonList = jsonValue.GetArray("partitionKeys");
    for(unsigned partitionKeysIndex = 0; partitionKeysIndex < partitionKeysJsonList.GetLength(); ++partitionKeysIndex)
    {
      m_partitionKeys.push_back(partitionKeysJsonList[partitionKeysIndex].AsObject());
    }
    m_partitionKeysHasBeenSet = true;
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
  if(jsonValue.ValueExists("creatorAccountId"))
  {
    m_creatorAccountId = jsonValue.GetString("creatorAccountId");
    m_creatorAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
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
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
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
  if(jsonValue.ValueExists("type"))
  {
    m_type = SchemaTypeMapper::GetSchemaTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaStatusDetails"))
  {
    Aws::Utils::Array<JsonView> schemaStatusDetailsJsonList = jsonValue.GetArray("schemaStatusDetails");
    for(unsigned schemaStatusDetailsIndex = 0; schemaStatusDetailsIndex < schemaStatusDetailsJsonList.GetLength(); ++schemaStatusDetailsIndex)
    {
      m_schemaStatusDetails.push_back(schemaStatusDetailsJsonList[schemaStatusDetailsIndex].AsObject());
    }
    m_schemaStatusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaTypeProperties"))
  {
    m_schemaTypeProperties = jsonValue.GetObject("schemaTypeProperties");
    m_schemaTypePropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue Schema::Jsonize() const
{
  JsonValue payload;

  if(m_columnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
   for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
   {
     columnsJsonList[columnsIndex].AsObject(m_columns[columnsIndex].Jsonize());
   }
   payload.WithArray("columns", std::move(columnsJsonList));

  }

  if(m_partitionKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionKeysJsonList(m_partitionKeys.size());
   for(unsigned partitionKeysIndex = 0; partitionKeysIndex < partitionKeysJsonList.GetLength(); ++partitionKeysIndex)
   {
     partitionKeysJsonList[partitionKeysIndex].AsObject(m_partitionKeys[partitionKeysIndex].Jsonize());
   }
   payload.WithArray("partitionKeys", std::move(partitionKeysJsonList));

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

  if(m_creatorAccountIdHasBeenSet)
  {
   payload.WithString("creatorAccountId", m_creatorAccountId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_collaborationIdHasBeenSet)
  {
   payload.WithString("collaborationId", m_collaborationId);

  }

  if(m_collaborationArnHasBeenSet)
  {
   payload.WithString("collaborationArn", m_collaborationArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SchemaTypeMapper::GetNameForSchemaType(m_type));
  }

  if(m_schemaStatusDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaStatusDetailsJsonList(m_schemaStatusDetails.size());
   for(unsigned schemaStatusDetailsIndex = 0; schemaStatusDetailsIndex < schemaStatusDetailsJsonList.GetLength(); ++schemaStatusDetailsIndex)
   {
     schemaStatusDetailsJsonList[schemaStatusDetailsIndex].AsObject(m_schemaStatusDetails[schemaStatusDetailsIndex].Jsonize());
   }
   payload.WithArray("schemaStatusDetails", std::move(schemaStatusDetailsJsonList));

  }

  if(m_schemaTypePropertiesHasBeenSet)
  {
   payload.WithObject("schemaTypeProperties", m_schemaTypeProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
