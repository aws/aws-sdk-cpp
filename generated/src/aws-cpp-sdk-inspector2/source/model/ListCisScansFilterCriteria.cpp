/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListCisScansFilterCriteria.h>
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

ListCisScansFilterCriteria::ListCisScansFilterCriteria() : 
    m_failedChecksFiltersHasBeenSet(false),
    m_scanArnFiltersHasBeenSet(false),
    m_scanAtFiltersHasBeenSet(false),
    m_scanConfigurationArnFiltersHasBeenSet(false),
    m_scanNameFiltersHasBeenSet(false),
    m_scanStatusFiltersHasBeenSet(false),
    m_scheduledByFiltersHasBeenSet(false),
    m_targetAccountIdFiltersHasBeenSet(false),
    m_targetResourceIdFiltersHasBeenSet(false),
    m_targetResourceTagFiltersHasBeenSet(false)
{
}

ListCisScansFilterCriteria::ListCisScansFilterCriteria(JsonView jsonValue) : 
    m_failedChecksFiltersHasBeenSet(false),
    m_scanArnFiltersHasBeenSet(false),
    m_scanAtFiltersHasBeenSet(false),
    m_scanConfigurationArnFiltersHasBeenSet(false),
    m_scanNameFiltersHasBeenSet(false),
    m_scanStatusFiltersHasBeenSet(false),
    m_scheduledByFiltersHasBeenSet(false),
    m_targetAccountIdFiltersHasBeenSet(false),
    m_targetResourceIdFiltersHasBeenSet(false),
    m_targetResourceTagFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

ListCisScansFilterCriteria& ListCisScansFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failedChecksFilters"))
  {
    Aws::Utils::Array<JsonView> failedChecksFiltersJsonList = jsonValue.GetArray("failedChecksFilters");
    for(unsigned failedChecksFiltersIndex = 0; failedChecksFiltersIndex < failedChecksFiltersJsonList.GetLength(); ++failedChecksFiltersIndex)
    {
      m_failedChecksFilters.push_back(failedChecksFiltersJsonList[failedChecksFiltersIndex].AsObject());
    }
    m_failedChecksFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanArnFilters"))
  {
    Aws::Utils::Array<JsonView> scanArnFiltersJsonList = jsonValue.GetArray("scanArnFilters");
    for(unsigned scanArnFiltersIndex = 0; scanArnFiltersIndex < scanArnFiltersJsonList.GetLength(); ++scanArnFiltersIndex)
    {
      m_scanArnFilters.push_back(scanArnFiltersJsonList[scanArnFiltersIndex].AsObject());
    }
    m_scanArnFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanAtFilters"))
  {
    Aws::Utils::Array<JsonView> scanAtFiltersJsonList = jsonValue.GetArray("scanAtFilters");
    for(unsigned scanAtFiltersIndex = 0; scanAtFiltersIndex < scanAtFiltersJsonList.GetLength(); ++scanAtFiltersIndex)
    {
      m_scanAtFilters.push_back(scanAtFiltersJsonList[scanAtFiltersIndex].AsObject());
    }
    m_scanAtFiltersHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("scanStatusFilters"))
  {
    Aws::Utils::Array<JsonView> scanStatusFiltersJsonList = jsonValue.GetArray("scanStatusFilters");
    for(unsigned scanStatusFiltersIndex = 0; scanStatusFiltersIndex < scanStatusFiltersJsonList.GetLength(); ++scanStatusFiltersIndex)
    {
      m_scanStatusFilters.push_back(scanStatusFiltersJsonList[scanStatusFiltersIndex].AsObject());
    }
    m_scanStatusFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduledByFilters"))
  {
    Aws::Utils::Array<JsonView> scheduledByFiltersJsonList = jsonValue.GetArray("scheduledByFilters");
    for(unsigned scheduledByFiltersIndex = 0; scheduledByFiltersIndex < scheduledByFiltersJsonList.GetLength(); ++scheduledByFiltersIndex)
    {
      m_scheduledByFilters.push_back(scheduledByFiltersJsonList[scheduledByFiltersIndex].AsObject());
    }
    m_scheduledByFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetAccountIdFilters"))
  {
    Aws::Utils::Array<JsonView> targetAccountIdFiltersJsonList = jsonValue.GetArray("targetAccountIdFilters");
    for(unsigned targetAccountIdFiltersIndex = 0; targetAccountIdFiltersIndex < targetAccountIdFiltersJsonList.GetLength(); ++targetAccountIdFiltersIndex)
    {
      m_targetAccountIdFilters.push_back(targetAccountIdFiltersJsonList[targetAccountIdFiltersIndex].AsObject());
    }
    m_targetAccountIdFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetResourceIdFilters"))
  {
    Aws::Utils::Array<JsonView> targetResourceIdFiltersJsonList = jsonValue.GetArray("targetResourceIdFilters");
    for(unsigned targetResourceIdFiltersIndex = 0; targetResourceIdFiltersIndex < targetResourceIdFiltersJsonList.GetLength(); ++targetResourceIdFiltersIndex)
    {
      m_targetResourceIdFilters.push_back(targetResourceIdFiltersJsonList[targetResourceIdFiltersIndex].AsObject());
    }
    m_targetResourceIdFiltersHasBeenSet = true;
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

JsonValue ListCisScansFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_failedChecksFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failedChecksFiltersJsonList(m_failedChecksFilters.size());
   for(unsigned failedChecksFiltersIndex = 0; failedChecksFiltersIndex < failedChecksFiltersJsonList.GetLength(); ++failedChecksFiltersIndex)
   {
     failedChecksFiltersJsonList[failedChecksFiltersIndex].AsObject(m_failedChecksFilters[failedChecksFiltersIndex].Jsonize());
   }
   payload.WithArray("failedChecksFilters", std::move(failedChecksFiltersJsonList));

  }

  if(m_scanArnFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scanArnFiltersJsonList(m_scanArnFilters.size());
   for(unsigned scanArnFiltersIndex = 0; scanArnFiltersIndex < scanArnFiltersJsonList.GetLength(); ++scanArnFiltersIndex)
   {
     scanArnFiltersJsonList[scanArnFiltersIndex].AsObject(m_scanArnFilters[scanArnFiltersIndex].Jsonize());
   }
   payload.WithArray("scanArnFilters", std::move(scanArnFiltersJsonList));

  }

  if(m_scanAtFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scanAtFiltersJsonList(m_scanAtFilters.size());
   for(unsigned scanAtFiltersIndex = 0; scanAtFiltersIndex < scanAtFiltersJsonList.GetLength(); ++scanAtFiltersIndex)
   {
     scanAtFiltersJsonList[scanAtFiltersIndex].AsObject(m_scanAtFilters[scanAtFiltersIndex].Jsonize());
   }
   payload.WithArray("scanAtFilters", std::move(scanAtFiltersJsonList));

  }

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

  if(m_scanStatusFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scanStatusFiltersJsonList(m_scanStatusFilters.size());
   for(unsigned scanStatusFiltersIndex = 0; scanStatusFiltersIndex < scanStatusFiltersJsonList.GetLength(); ++scanStatusFiltersIndex)
   {
     scanStatusFiltersJsonList[scanStatusFiltersIndex].AsObject(m_scanStatusFilters[scanStatusFiltersIndex].Jsonize());
   }
   payload.WithArray("scanStatusFilters", std::move(scanStatusFiltersJsonList));

  }

  if(m_scheduledByFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scheduledByFiltersJsonList(m_scheduledByFilters.size());
   for(unsigned scheduledByFiltersIndex = 0; scheduledByFiltersIndex < scheduledByFiltersJsonList.GetLength(); ++scheduledByFiltersIndex)
   {
     scheduledByFiltersJsonList[scheduledByFiltersIndex].AsObject(m_scheduledByFilters[scheduledByFiltersIndex].Jsonize());
   }
   payload.WithArray("scheduledByFilters", std::move(scheduledByFiltersJsonList));

  }

  if(m_targetAccountIdFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetAccountIdFiltersJsonList(m_targetAccountIdFilters.size());
   for(unsigned targetAccountIdFiltersIndex = 0; targetAccountIdFiltersIndex < targetAccountIdFiltersJsonList.GetLength(); ++targetAccountIdFiltersIndex)
   {
     targetAccountIdFiltersJsonList[targetAccountIdFiltersIndex].AsObject(m_targetAccountIdFilters[targetAccountIdFiltersIndex].Jsonize());
   }
   payload.WithArray("targetAccountIdFilters", std::move(targetAccountIdFiltersJsonList));

  }

  if(m_targetResourceIdFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetResourceIdFiltersJsonList(m_targetResourceIdFilters.size());
   for(unsigned targetResourceIdFiltersIndex = 0; targetResourceIdFiltersIndex < targetResourceIdFiltersJsonList.GetLength(); ++targetResourceIdFiltersIndex)
   {
     targetResourceIdFiltersJsonList[targetResourceIdFiltersIndex].AsObject(m_targetResourceIdFilters[targetResourceIdFiltersIndex].Jsonize());
   }
   payload.WithArray("targetResourceIdFilters", std::move(targetResourceIdFiltersJsonList));

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
