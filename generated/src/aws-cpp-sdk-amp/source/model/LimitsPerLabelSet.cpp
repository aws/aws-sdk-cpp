/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/LimitsPerLabelSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

LimitsPerLabelSet::LimitsPerLabelSet(JsonView jsonValue)
{
  *this = jsonValue;
}

LimitsPerLabelSet& LimitsPerLabelSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("limits"))
  {
    m_limits = jsonValue.GetObject("limits");
    m_limitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("labelSet"))
  {
    Aws::Map<Aws::String, JsonView> labelSetJsonMap = jsonValue.GetObject("labelSet").GetAllObjects();
    for(auto& labelSetItem : labelSetJsonMap)
    {
      m_labelSet[labelSetItem.first] = labelSetItem.second.AsString();
    }
    m_labelSetHasBeenSet = true;
  }
  return *this;
}

JsonValue LimitsPerLabelSet::Jsonize() const
{
  JsonValue payload;

  if(m_limitsHasBeenSet)
  {
   payload.WithObject("limits", m_limits.Jsonize());

  }

  if(m_labelSetHasBeenSet)
  {
   JsonValue labelSetJsonMap;
   for(auto& labelSetItem : m_labelSet)
   {
     labelSetJsonMap.WithString(labelSetItem.first, labelSetItem.second);
   }
   payload.WithObject("labelSet", std::move(labelSetJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
