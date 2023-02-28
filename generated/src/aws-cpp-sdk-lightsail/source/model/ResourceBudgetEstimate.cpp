/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ResourceBudgetEstimate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

ResourceBudgetEstimate::ResourceBudgetEstimate() : 
    m_resourceNameHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_costEstimatesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

ResourceBudgetEstimate::ResourceBudgetEstimate(JsonView jsonValue) : 
    m_resourceNameHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_costEstimatesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceBudgetEstimate& ResourceBudgetEstimate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceName"))
  {
    m_resourceName = jsonValue.GetString("resourceName");

    m_resourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("costEstimates"))
  {
    Aws::Utils::Array<JsonView> costEstimatesJsonList = jsonValue.GetArray("costEstimates");
    for(unsigned costEstimatesIndex = 0; costEstimatesIndex < costEstimatesJsonList.GetLength(); ++costEstimatesIndex)
    {
      m_costEstimates.push_back(costEstimatesJsonList[costEstimatesIndex].AsObject());
    }
    m_costEstimatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceBudgetEstimate::Jsonize() const
{
  JsonValue payload;

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_costEstimatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> costEstimatesJsonList(m_costEstimates.size());
   for(unsigned costEstimatesIndex = 0; costEstimatesIndex < costEstimatesJsonList.GetLength(); ++costEstimatesIndex)
   {
     costEstimatesJsonList[costEstimatesIndex].AsObject(m_costEstimates[costEstimatesIndex].Jsonize());
   }
   payload.WithArray("costEstimates", std::move(costEstimatesJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
