/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/CommonControlFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

CommonControlFilter::CommonControlFilter() : 
    m_objectivesHasBeenSet(false)
{
}

CommonControlFilter::CommonControlFilter(JsonView jsonValue) : 
    m_objectivesHasBeenSet(false)
{
  *this = jsonValue;
}

CommonControlFilter& CommonControlFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Objectives"))
  {
    Aws::Utils::Array<JsonView> objectivesJsonList = jsonValue.GetArray("Objectives");
    for(unsigned objectivesIndex = 0; objectivesIndex < objectivesJsonList.GetLength(); ++objectivesIndex)
    {
      m_objectives.push_back(objectivesJsonList[objectivesIndex].AsObject());
    }
    m_objectivesHasBeenSet = true;
  }

  return *this;
}

JsonValue CommonControlFilter::Jsonize() const
{
  JsonValue payload;

  if(m_objectivesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectivesJsonList(m_objectives.size());
   for(unsigned objectivesIndex = 0; objectivesIndex < objectivesJsonList.GetLength(); ++objectivesIndex)
   {
     objectivesJsonList[objectivesIndex].AsObject(m_objectives[objectivesIndex].Jsonize());
   }
   payload.WithArray("Objectives", std::move(objectivesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
