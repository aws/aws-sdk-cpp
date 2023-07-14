/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ReservationCoverageGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

ReservationCoverageGroup::ReservationCoverageGroup() : 
    m_attributesHasBeenSet(false),
    m_coverageHasBeenSet(false)
{
}

ReservationCoverageGroup::ReservationCoverageGroup(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_coverageHasBeenSet(false)
{
  *this = jsonValue;
}

ReservationCoverageGroup& ReservationCoverageGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Coverage"))
  {
    m_coverage = jsonValue.GetObject("Coverage");

    m_coverageHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservationCoverageGroup::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_coverageHasBeenSet)
  {
   payload.WithObject("Coverage", m_coverage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
