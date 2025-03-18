/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SchemaStatusDetail.h>
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

SchemaStatusDetail::SchemaStatusDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

SchemaStatusDetail& SchemaStatusDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = SchemaStatusMapper::GetSchemaStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reasons"))
  {
    Aws::Utils::Array<JsonView> reasonsJsonList = jsonValue.GetArray("reasons");
    for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
    {
      m_reasons.push_back(reasonsJsonList[reasonsIndex].AsObject());
    }
    m_reasonsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("analysisRuleType"))
  {
    m_analysisRuleType = AnalysisRuleTypeMapper::GetAnalysisRuleTypeForName(jsonValue.GetString("analysisRuleType"));
    m_analysisRuleTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurations"))
  {
    Aws::Utils::Array<JsonView> configurationsJsonList = jsonValue.GetArray("configurations");
    for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
    {
      m_configurations.push_back(SchemaConfigurationMapper::GetSchemaConfigurationForName(configurationsJsonList[configurationsIndex].AsString()));
    }
    m_configurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("analysisType"))
  {
    m_analysisType = AnalysisTypeMapper::GetAnalysisTypeForName(jsonValue.GetString("analysisType"));
    m_analysisTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SchemaStatusDetail::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SchemaStatusMapper::GetNameForSchemaStatus(m_status));
  }

  if(m_reasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reasonsJsonList(m_reasons.size());
   for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
   {
     reasonsJsonList[reasonsIndex].AsObject(m_reasons[reasonsIndex].Jsonize());
   }
   payload.WithArray("reasons", std::move(reasonsJsonList));

  }

  if(m_analysisRuleTypeHasBeenSet)
  {
   payload.WithString("analysisRuleType", AnalysisRuleTypeMapper::GetNameForAnalysisRuleType(m_analysisRuleType));
  }

  if(m_configurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationsJsonList(m_configurations.size());
   for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
   {
     configurationsJsonList[configurationsIndex].AsString(SchemaConfigurationMapper::GetNameForSchemaConfiguration(m_configurations[configurationsIndex]));
   }
   payload.WithArray("configurations", std::move(configurationsJsonList));

  }

  if(m_analysisTypeHasBeenSet)
  {
   payload.WithString("analysisType", AnalysisTypeMapper::GetNameForAnalysisType(m_analysisType));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
