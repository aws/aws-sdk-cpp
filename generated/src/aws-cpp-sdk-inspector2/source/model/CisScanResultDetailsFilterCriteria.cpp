/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScanResultDetailsFilterCriteria.h>
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

CisScanResultDetailsFilterCriteria::CisScanResultDetailsFilterCriteria() : 
    m_checkIdFiltersHasBeenSet(false),
    m_findingArnFiltersHasBeenSet(false),
    m_findingStatusFiltersHasBeenSet(false),
    m_securityLevelFiltersHasBeenSet(false),
    m_titleFiltersHasBeenSet(false)
{
}

CisScanResultDetailsFilterCriteria::CisScanResultDetailsFilterCriteria(JsonView jsonValue) : 
    m_checkIdFiltersHasBeenSet(false),
    m_findingArnFiltersHasBeenSet(false),
    m_findingStatusFiltersHasBeenSet(false),
    m_securityLevelFiltersHasBeenSet(false),
    m_titleFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

CisScanResultDetailsFilterCriteria& CisScanResultDetailsFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("checkIdFilters"))
  {
    Aws::Utils::Array<JsonView> checkIdFiltersJsonList = jsonValue.GetArray("checkIdFilters");
    for(unsigned checkIdFiltersIndex = 0; checkIdFiltersIndex < checkIdFiltersJsonList.GetLength(); ++checkIdFiltersIndex)
    {
      m_checkIdFilters.push_back(checkIdFiltersJsonList[checkIdFiltersIndex].AsObject());
    }
    m_checkIdFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingArnFilters"))
  {
    Aws::Utils::Array<JsonView> findingArnFiltersJsonList = jsonValue.GetArray("findingArnFilters");
    for(unsigned findingArnFiltersIndex = 0; findingArnFiltersIndex < findingArnFiltersJsonList.GetLength(); ++findingArnFiltersIndex)
    {
      m_findingArnFilters.push_back(findingArnFiltersJsonList[findingArnFiltersIndex].AsObject());
    }
    m_findingArnFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingStatusFilters"))
  {
    Aws::Utils::Array<JsonView> findingStatusFiltersJsonList = jsonValue.GetArray("findingStatusFilters");
    for(unsigned findingStatusFiltersIndex = 0; findingStatusFiltersIndex < findingStatusFiltersJsonList.GetLength(); ++findingStatusFiltersIndex)
    {
      m_findingStatusFilters.push_back(findingStatusFiltersJsonList[findingStatusFiltersIndex].AsObject());
    }
    m_findingStatusFiltersHasBeenSet = true;
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

JsonValue CisScanResultDetailsFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_checkIdFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> checkIdFiltersJsonList(m_checkIdFilters.size());
   for(unsigned checkIdFiltersIndex = 0; checkIdFiltersIndex < checkIdFiltersJsonList.GetLength(); ++checkIdFiltersIndex)
   {
     checkIdFiltersJsonList[checkIdFiltersIndex].AsObject(m_checkIdFilters[checkIdFiltersIndex].Jsonize());
   }
   payload.WithArray("checkIdFilters", std::move(checkIdFiltersJsonList));

  }

  if(m_findingArnFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingArnFiltersJsonList(m_findingArnFilters.size());
   for(unsigned findingArnFiltersIndex = 0; findingArnFiltersIndex < findingArnFiltersJsonList.GetLength(); ++findingArnFiltersIndex)
   {
     findingArnFiltersJsonList[findingArnFiltersIndex].AsObject(m_findingArnFilters[findingArnFiltersIndex].Jsonize());
   }
   payload.WithArray("findingArnFilters", std::move(findingArnFiltersJsonList));

  }

  if(m_findingStatusFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingStatusFiltersJsonList(m_findingStatusFilters.size());
   for(unsigned findingStatusFiltersIndex = 0; findingStatusFiltersIndex < findingStatusFiltersJsonList.GetLength(); ++findingStatusFiltersIndex)
   {
     findingStatusFiltersJsonList[findingStatusFiltersIndex].AsObject(m_findingStatusFilters[findingStatusFiltersIndex].Jsonize());
   }
   payload.WithArray("findingStatusFilters", std::move(findingStatusFiltersJsonList));

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
