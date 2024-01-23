/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListCisScanConfigurationsFilterCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

ListCisScanConfigurationsFilterCriteria::ListCisScanConfigurationsFilterCriteria() : 
    m_scanConfigurationArnFiltersHasBeenSet(false),
    m_scanNameFiltersHasBeenSet(false),
    m_targetResourceTagFiltersHasBeenSet(false)
{
}

ListCisScanConfigurationsFilterCriteria::ListCisScanConfigurationsFilterCriteria(JsonView jsonValue) : 
    m_scanConfigurationArnFiltersHasBeenSet(false),
    m_scanNameFiltersHasBeenSet(false),
    m_targetResourceTagFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

ListCisScanConfigurationsFilterCriteria& ListCisScanConfigurationsFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanConfigurationArnFilters"))
  {
    Aws::Utils::Array<JsonView> scanConfigurationArnFiltersJsonList = jsonValue.GetArray("scanConfigurationArnFilters");
    for(unsigned scanConfigurationArnFiltersIndex = 0; scanConfigurationArnFiltersIndex < scanConfigurationArnFiltersJsonList.GetLength(); ++scanConfigurationArnFiltersIndex)
    {
      m_scanConfigurationArnFilters.push_back(scanConfigurationArnFiltersJsonList[scanConfigurationArnFiltersIndex].AsObject());
    }
    m_scanConfigurationArnFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanNameFilters"))
  {
    Aws::Utils::Array<JsonView> scanNameFiltersJsonList = jsonValue.GetArray("scanNameFilters");
    for(unsigned scanNameFiltersIndex = 0; scanNameFiltersIndex < scanNameFiltersJsonList.GetLength(); ++scanNameFiltersIndex)
    {
      m_scanNameFilters.push_back(scanNameFiltersJsonList[scanNameFiltersIndex].AsObject());
    }
    m_scanNameFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetResourceTagFilters"))
  {
    Aws::Utils::Array<JsonView> targetResourceTagFiltersJsonList = jsonValue.GetArray("targetResourceTagFilters");
    for(unsigned targetResourceTagFiltersIndex = 0; targetResourceTagFiltersIndex < targetResourceTagFiltersJsonList.GetLength(); ++targetResourceTagFiltersIndex)
    {
      m_targetResourceTagFilters.push_back(targetResourceTagFiltersJsonList[targetResourceTagFiltersIndex].AsObject());
    }
    m_targetResourceTagFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue ListCisScanConfigurationsFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_scanConfigurationArnFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scanConfigurationArnFiltersJsonList(m_scanConfigurationArnFilters.size());
   for(unsigned scanConfigurationArnFiltersIndex = 0; scanConfigurationArnFiltersIndex < scanConfigurationArnFiltersJsonList.GetLength(); ++scanConfigurationArnFiltersIndex)
   {
     scanConfigurationArnFiltersJsonList[scanConfigurationArnFiltersIndex].AsObject(m_scanConfigurationArnFilters[scanConfigurationArnFiltersIndex].Jsonize());
   }
   payload.WithArray("scanConfigurationArnFilters", std::move(scanConfigurationArnFiltersJsonList));

  }

  if(m_scanNameFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scanNameFiltersJsonList(m_scanNameFilters.size());
   for(unsigned scanNameFiltersIndex = 0; scanNameFiltersIndex < scanNameFiltersJsonList.GetLength(); ++scanNameFiltersIndex)
   {
     scanNameFiltersJsonList[scanNameFiltersIndex].AsObject(m_scanNameFilters[scanNameFiltersIndex].Jsonize());
   }
   payload.WithArray("scanNameFilters", std::move(scanNameFiltersJsonList));

  }

  if(m_targetResourceTagFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetResourceTagFiltersJsonList(m_targetResourceTagFilters.size());
   for(unsigned targetResourceTagFiltersIndex = 0; targetResourceTagFiltersIndex < targetResourceTagFiltersJsonList.GetLength(); ++targetResourceTagFiltersIndex)
   {
     targetResourceTagFiltersJsonList[targetResourceTagFiltersIndex].AsObject(m_targetResourceTagFilters[targetResourceTagFiltersIndex].Jsonize());
   }
   payload.WithArray("targetResourceTagFilters", std::move(targetResourceTagFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
