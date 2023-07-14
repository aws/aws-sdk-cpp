/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansCoverage.h>
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

SavingsPlansCoverage::SavingsPlansCoverage() : 
    m_attributesHasBeenSet(false),
    m_coverageHasBeenSet(false),
    m_timePeriodHasBeenSet(false)
{
}

SavingsPlansCoverage::SavingsPlansCoverage(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_coverageHasBeenSet(false),
    m_timePeriodHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansCoverage& SavingsPlansCoverage::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("TimePeriod"))
  {
    m_timePeriod = jsonValue.GetObject("TimePeriod");

    m_timePeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansCoverage::Jsonize() const
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

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
