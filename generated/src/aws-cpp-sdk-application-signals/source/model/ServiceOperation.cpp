/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceOperation.h>
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

ServiceOperation::ServiceOperation(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceOperation& ServiceOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricReferences"))
  {
    Aws::Utils::Array<JsonView> metricReferencesJsonList = jsonValue.GetArray("MetricReferences");
    for(unsigned metricReferencesIndex = 0; metricReferencesIndex < metricReferencesJsonList.GetLength(); ++metricReferencesIndex)
    {
      m_metricReferences.push_back(metricReferencesJsonList[metricReferencesIndex].AsObject());
    }
    m_metricReferencesHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceOperation::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_metricReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricReferencesJsonList(m_metricReferences.size());
   for(unsigned metricReferencesIndex = 0; metricReferencesIndex < metricReferencesJsonList.GetLength(); ++metricReferencesIndex)
   {
     metricReferencesJsonList[metricReferencesIndex].AsObject(m_metricReferences[metricReferencesIndex].Jsonize());
   }
   payload.WithArray("MetricReferences", std::move(metricReferencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
