/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/AuditFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

AuditFinding::AuditFinding(JsonView jsonValue)
{
  *this = jsonValue;
}

AuditFinding& AuditFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyAttributes"))
  {
    Aws::Map<Aws::String, JsonView> keyAttributesJsonMap = jsonValue.GetObject("KeyAttributes").GetAllObjects();
    for(auto& keyAttributesItem : keyAttributesJsonMap)
    {
      m_keyAttributes[keyAttributesItem.first] = keyAttributesItem.second.AsString();
    }
    m_keyAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuditorResults"))
  {
    Aws::Utils::Array<JsonView> auditorResultsJsonList = jsonValue.GetArray("AuditorResults");
    for(unsigned auditorResultsIndex = 0; auditorResultsIndex < auditorResultsJsonList.GetLength(); ++auditorResultsIndex)
    {
      m_auditorResults.push_back(auditorResultsJsonList[auditorResultsIndex].AsObject());
    }
    m_auditorResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = jsonValue.GetString("Operation");
    m_operationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricGraph"))
  {
    m_metricGraph = jsonValue.GetObject("MetricGraph");
    m_metricGraphHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DependencyGraph"))
  {
    m_dependencyGraph = jsonValue.GetObject("DependencyGraph");
    m_dependencyGraphHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue AuditFinding::Jsonize() const
{
  JsonValue payload;

  if(m_keyAttributesHasBeenSet)
  {
   JsonValue keyAttributesJsonMap;
   for(auto& keyAttributesItem : m_keyAttributes)
   {
     keyAttributesJsonMap.WithString(keyAttributesItem.first, keyAttributesItem.second);
   }
   payload.WithObject("KeyAttributes", std::move(keyAttributesJsonMap));

  }

  if(m_auditorResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> auditorResultsJsonList(m_auditorResults.size());
   for(unsigned auditorResultsIndex = 0; auditorResultsIndex < auditorResultsJsonList.GetLength(); ++auditorResultsIndex)
   {
     auditorResultsJsonList[auditorResultsIndex].AsObject(m_auditorResults[auditorResultsIndex].Jsonize());
   }
   payload.WithArray("AuditorResults", std::move(auditorResultsJsonList));

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", m_operation);

  }

  if(m_metricGraphHasBeenSet)
  {
   payload.WithObject("MetricGraph", m_metricGraph.Jsonize());

  }

  if(m_dependencyGraphHasBeenSet)
  {
   payload.WithObject("DependencyGraph", m_dependencyGraph.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
