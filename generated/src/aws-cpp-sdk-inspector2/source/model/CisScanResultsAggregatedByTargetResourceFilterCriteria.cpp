/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScanResultsAggregatedByTargetResourceFilterCriteria.h>
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

CisScanResultsAggregatedByTargetResourceFilterCriteria::CisScanResultsAggregatedByTargetResourceFilterCriteria() : 
    m_accountIdFiltersHasBeenSet(false),
    m_checkIdFiltersHasBeenSet(false),
    m_failedChecksFiltersHasBeenSet(false),
    m_platformFiltersHasBeenSet(false),
    m_statusFiltersHasBeenSet(false),
    m_targetResourceIdFiltersHasBeenSet(false),
    m_targetResourceTagFiltersHasBeenSet(false),
    m_targetStatusFiltersHasBeenSet(false),
    m_targetStatusReasonFiltersHasBeenSet(false)
{
}

CisScanResultsAggregatedByTargetResourceFilterCriteria::CisScanResultsAggregatedByTargetResourceFilterCriteria(JsonView jsonValue) : 
    m_accountIdFiltersHasBeenSet(false),
    m_checkIdFiltersHasBeenSet(false),
    m_failedChecksFiltersHasBeenSet(false),
    m_platformFiltersHasBeenSet(false),
    m_statusFiltersHasBeenSet(false),
    m_targetResourceIdFiltersHasBeenSet(false),
    m_targetResourceTagFiltersHasBeenSet(false),
    m_targetStatusFiltersHasBeenSet(false),
    m_targetStatusReasonFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

CisScanResultsAggregatedByTargetResourceFilterCriteria& CisScanResultsAggregatedByTargetResourceFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountIdFilters"))
  {
    Aws::Utils::Array<JsonView> accountIdFiltersJsonList = jsonValue.GetArray("accountIdFilters");
    for(unsigned accountIdFiltersIndex = 0; accountIdFiltersIndex < accountIdFiltersJsonList.GetLength(); ++accountIdFiltersIndex)
    {
      m_accountIdFilters.push_back(accountIdFiltersJsonList[accountIdFiltersIndex].AsObject());
    }
    m_accountIdFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("checkIdFilters"))
  {
    Aws::Utils::Array<JsonView> checkIdFiltersJsonList = jsonValue.GetArray("checkIdFilters");
    for(unsigned checkIdFiltersIndex = 0; checkIdFiltersIndex < checkIdFiltersJsonList.GetLength(); ++checkIdFiltersIndex)
    {
      m_checkIdFilters.push_back(checkIdFiltersJsonList[checkIdFiltersIndex].AsObject());
    }
    m_checkIdFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failedChecksFilters"))
  {
    Aws::Utils::Array<JsonView> failedChecksFiltersJsonList = jsonValue.GetArray("failedChecksFilters");
    for(unsigned failedChecksFiltersIndex = 0; failedChecksFiltersIndex < failedChecksFiltersJsonList.GetLength(); ++failedChecksFiltersIndex)
    {
      m_failedChecksFilters.push_back(failedChecksFiltersJsonList[failedChecksFiltersIndex].AsObject());
    }
    m_failedChecksFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformFilters"))
  {
    Aws::Utils::Array<JsonView> platformFiltersJsonList = jsonValue.GetArray("platformFilters");
    for(unsigned platformFiltersIndex = 0; platformFiltersIndex < platformFiltersJsonList.GetLength(); ++platformFiltersIndex)
    {
      m_platformFilters.push_back(platformFiltersJsonList[platformFiltersIndex].AsObject());
    }
    m_platformFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusFilters"))
  {
    Aws::Utils::Array<JsonView> statusFiltersJsonList = jsonValue.GetArray("statusFilters");
    for(unsigned statusFiltersIndex = 0; statusFiltersIndex < statusFiltersJsonList.GetLength(); ++statusFiltersIndex)
    {
      m_statusFilters.push_back(statusFiltersJsonList[statusFiltersIndex].AsObject());
    }
    m_statusFiltersHasBeenSet = true;
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

  if(jsonValue.ValueExists("targetStatusFilters"))
  {
    Aws::Utils::Array<JsonView> targetStatusFiltersJsonList = jsonValue.GetArray("targetStatusFilters");
    for(unsigned targetStatusFiltersIndex = 0; targetStatusFiltersIndex < targetStatusFiltersJsonList.GetLength(); ++targetStatusFiltersIndex)
    {
      m_targetStatusFilters.push_back(targetStatusFiltersJsonList[targetStatusFiltersIndex].AsObject());
    }
    m_targetStatusFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetStatusReasonFilters"))
  {
    Aws::Utils::Array<JsonView> targetStatusReasonFiltersJsonList = jsonValue.GetArray("targetStatusReasonFilters");
    for(unsigned targetStatusReasonFiltersIndex = 0; targetStatusReasonFiltersIndex < targetStatusReasonFiltersJsonList.GetLength(); ++targetStatusReasonFiltersIndex)
    {
      m_targetStatusReasonFilters.push_back(targetStatusReasonFiltersJsonList[targetStatusReasonFiltersIndex].AsObject());
    }
    m_targetStatusReasonFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue CisScanResultsAggregatedByTargetResourceFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdFiltersJsonList(m_accountIdFilters.size());
   for(unsigned accountIdFiltersIndex = 0; accountIdFiltersIndex < accountIdFiltersJsonList.GetLength(); ++accountIdFiltersIndex)
   {
     accountIdFiltersJsonList[accountIdFiltersIndex].AsObject(m_accountIdFilters[accountIdFiltersIndex].Jsonize());
   }
   payload.WithArray("accountIdFilters", std::move(accountIdFiltersJsonList));

  }

  if(m_checkIdFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> checkIdFiltersJsonList(m_checkIdFilters.size());
   for(unsigned checkIdFiltersIndex = 0; checkIdFiltersIndex < checkIdFiltersJsonList.GetLength(); ++checkIdFiltersIndex)
   {
     checkIdFiltersJsonList[checkIdFiltersIndex].AsObject(m_checkIdFilters[checkIdFiltersIndex].Jsonize());
   }
   payload.WithArray("checkIdFilters", std::move(checkIdFiltersJsonList));

  }

  if(m_failedChecksFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failedChecksFiltersJsonList(m_failedChecksFilters.size());
   for(unsigned failedChecksFiltersIndex = 0; failedChecksFiltersIndex < failedChecksFiltersJsonList.GetLength(); ++failedChecksFiltersIndex)
   {
     failedChecksFiltersJsonList[failedChecksFiltersIndex].AsObject(m_failedChecksFilters[failedChecksFiltersIndex].Jsonize());
   }
   payload.WithArray("failedChecksFilters", std::move(failedChecksFiltersJsonList));

  }

  if(m_platformFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformFiltersJsonList(m_platformFilters.size());
   for(unsigned platformFiltersIndex = 0; platformFiltersIndex < platformFiltersJsonList.GetLength(); ++platformFiltersIndex)
   {
     platformFiltersJsonList[platformFiltersIndex].AsObject(m_platformFilters[platformFiltersIndex].Jsonize());
   }
   payload.WithArray("platformFilters", std::move(platformFiltersJsonList));

  }

  if(m_statusFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusFiltersJsonList(m_statusFilters.size());
   for(unsigned statusFiltersIndex = 0; statusFiltersIndex < statusFiltersJsonList.GetLength(); ++statusFiltersIndex)
   {
     statusFiltersJsonList[statusFiltersIndex].AsObject(m_statusFilters[statusFiltersIndex].Jsonize());
   }
   payload.WithArray("statusFilters", std::move(statusFiltersJsonList));

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

  if(m_targetStatusFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetStatusFiltersJsonList(m_targetStatusFilters.size());
   for(unsigned targetStatusFiltersIndex = 0; targetStatusFiltersIndex < targetStatusFiltersJsonList.GetLength(); ++targetStatusFiltersIndex)
   {
     targetStatusFiltersJsonList[targetStatusFiltersIndex].AsObject(m_targetStatusFilters[targetStatusFiltersIndex].Jsonize());
   }
   payload.WithArray("targetStatusFilters", std::move(targetStatusFiltersJsonList));

  }

  if(m_targetStatusReasonFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetStatusReasonFiltersJsonList(m_targetStatusReasonFilters.size());
   for(unsigned targetStatusReasonFiltersIndex = 0; targetStatusReasonFiltersIndex < targetStatusReasonFiltersJsonList.GetLength(); ++targetStatusReasonFiltersIndex)
   {
     targetStatusReasonFiltersJsonList[targetStatusReasonFiltersIndex].AsObject(m_targetStatusReasonFilters[targetStatusReasonFiltersIndex].Jsonize());
   }
   payload.WithArray("targetStatusReasonFilters", std::move(targetStatusReasonFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
