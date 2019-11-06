/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
