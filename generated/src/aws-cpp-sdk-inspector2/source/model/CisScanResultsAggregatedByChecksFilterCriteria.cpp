/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScanResultsAggregatedByChecksFilterCriteria.h>
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

CisScanResultsAggregatedByChecksFilterCriteria::CisScanResultsAggregatedByChecksFilterCriteria() : 
    m_accountIdFiltersHasBeenSet(false),
    m_checkIdFiltersHasBeenSet(false),
    m_failedResourcesFiltersHasBeenSet(false),
    m_platformFiltersHasBeenSet(false),
    m_securityLevelFiltersHasBeenSet(false),
    m_titleFiltersHasBeenSet(false)
{
}

CisScanResultsAggregatedByChecksFilterCriteria::CisScanResultsAggregatedByChecksFilterCriteria(JsonView jsonValue) : 
    m_accountIdFiltersHasBeenSet(false),
    m_checkIdFiltersHasBeenSet(false),
    m_failedResourcesFiltersHasBeenSet(false),
    m_platformFiltersHasBeenSet(false),
    m_securityLevelFiltersHasBeenSet(false),
    m_titleFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

CisScanResultsAggregatedByChecksFilterCriteria& CisScanResultsAggregatedByChecksFilterCriteria::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("failedResourcesFilters"))
  {
    Aws::Utils::Array<JsonView> failedResourcesFiltersJsonList = jsonValue.GetArray("failedResourcesFilters");
    for(unsigned failedResourcesFiltersIndex = 0; failedResourcesFiltersIndex < failedResourcesFiltersJsonList.GetLength(); ++failedResourcesFiltersIndex)
    {
      m_failedResourcesFilters.push_back(failedResourcesFiltersJsonList[failedResourcesFiltersIndex].AsObject());
    }
    m_failedResourcesFiltersHasBeenSet = true;
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

  if(jsonValue.ValueExists("securityLevelFilters"))
  {
    Aws::Utils::Array<JsonView> securityLevelFiltersJsonList = jsonValue.GetArray("securityLevelFilters");
    for(unsigned securityLevelFiltersIndex = 0; securityLevelFiltersIndex < securityLevelFiltersJsonList.GetLength(); ++securityLevelFiltersIndex)
    {
      m_securityLevelFilters.push_back(securityLevelFiltersJsonList[securityLevelFiltersIndex].AsObject());
    }
    m_securityLevelFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("titleFilters"))
  {
    Aws::Utils::Array<JsonView> titleFiltersJsonList = jsonValue.GetArray("titleFilters");
    for(unsigned titleFiltersIndex = 0; titleFiltersIndex < titleFiltersJsonList.GetLength(); ++titleFiltersIndex)
    {
      m_titleFilters.push_back(titleFiltersJsonList[titleFiltersIndex].AsObject());
    }
    m_titleFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue CisScanResultsAggregatedByChecksFilterCriteria::Jsonize() const
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

  if(m_failedResourcesFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failedResourcesFiltersJsonList(m_failedResourcesFilters.size());
   for(unsigned failedResourcesFiltersIndex = 0; failedResourcesFiltersIndex < failedResourcesFiltersJsonList.GetLength(); ++failedResourcesFiltersIndex)
   {
     failedResourcesFiltersJsonList[failedResourcesFiltersIndex].AsObject(m_failedResourcesFilters[failedResourcesFiltersIndex].Jsonize());
   }
   payload.WithArray("failedResourcesFilters", std::move(failedResourcesFiltersJsonList));

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

  if(m_securityLevelFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityLevelFiltersJsonList(m_securityLevelFilters.size());
   for(unsigned securityLevelFiltersIndex = 0; securityLevelFiltersIndex < securityLevelFiltersJsonList.GetLength(); ++securityLevelFiltersIndex)
   {
     securityLevelFiltersJsonList[securityLevelFiltersIndex].AsObject(m_securityLevelFilters[securityLevelFiltersIndex].Jsonize());
   }
   payload.WithArray("securityLevelFilters", std::move(securityLevelFiltersJsonList));

  }

  if(m_titleFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> titleFiltersJsonList(m_titleFilters.size());
   for(unsigned titleFiltersIndex = 0; titleFiltersIndex < titleFiltersJsonList.GetLength(); ++titleFiltersIndex)
   {
     titleFiltersJsonList[titleFiltersIndex].AsObject(m_titleFilters[titleFiltersIndex].Jsonize());
   }
   payload.WithArray("titleFilters", std::move(titleFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
