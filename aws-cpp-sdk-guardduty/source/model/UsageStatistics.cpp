/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UsageStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

UsageStatistics::UsageStatistics() : 
    m_sumByAccountHasBeenSet(false),
    m_sumByDataSourceHasBeenSet(false),
    m_sumByResourceHasBeenSet(false),
    m_topResourcesHasBeenSet(false)
{
}

UsageStatistics::UsageStatistics(JsonView jsonValue) : 
    m_sumByAccountHasBeenSet(false),
    m_sumByDataSourceHasBeenSet(false),
    m_sumByResourceHasBeenSet(false),
    m_topResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

UsageStatistics& UsageStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sumByAccount"))
  {
    Aws::Utils::Array<JsonView> sumByAccountJsonList = jsonValue.GetArray("sumByAccount");
    for(unsigned sumByAccountIndex = 0; sumByAccountIndex < sumByAccountJsonList.GetLength(); ++sumByAccountIndex)
    {
      m_sumByAccount.push_back(sumByAccountJsonList[sumByAccountIndex].AsObject());
    }
    m_sumByAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sumByDataSource"))
  {
    Aws::Utils::Array<JsonView> sumByDataSourceJsonList = jsonValue.GetArray("sumByDataSource");
    for(unsigned sumByDataSourceIndex = 0; sumByDataSourceIndex < sumByDataSourceJsonList.GetLength(); ++sumByDataSourceIndex)
    {
      m_sumByDataSource.push_back(sumByDataSourceJsonList[sumByDataSourceIndex].AsObject());
    }
    m_sumByDataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sumByResource"))
  {
    Aws::Utils::Array<JsonView> sumByResourceJsonList = jsonValue.GetArray("sumByResource");
    for(unsigned sumByResourceIndex = 0; sumByResourceIndex < sumByResourceJsonList.GetLength(); ++sumByResourceIndex)
    {
      m_sumByResource.push_back(sumByResourceJsonList[sumByResourceIndex].AsObject());
    }
    m_sumByResourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topResources"))
  {
    Aws::Utils::Array<JsonView> topResourcesJsonList = jsonValue.GetArray("topResources");
    for(unsigned topResourcesIndex = 0; topResourcesIndex < topResourcesJsonList.GetLength(); ++topResourcesIndex)
    {
      m_topResources.push_back(topResourcesJsonList[topResourcesIndex].AsObject());
    }
    m_topResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_sumByAccountHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sumByAccountJsonList(m_sumByAccount.size());
   for(unsigned sumByAccountIndex = 0; sumByAccountIndex < sumByAccountJsonList.GetLength(); ++sumByAccountIndex)
   {
     sumByAccountJsonList[sumByAccountIndex].AsObject(m_sumByAccount[sumByAccountIndex].Jsonize());
   }
   payload.WithArray("sumByAccount", std::move(sumByAccountJsonList));

  }

  if(m_sumByDataSourceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sumByDataSourceJsonList(m_sumByDataSource.size());
   for(unsigned sumByDataSourceIndex = 0; sumByDataSourceIndex < sumByDataSourceJsonList.GetLength(); ++sumByDataSourceIndex)
   {
     sumByDataSourceJsonList[sumByDataSourceIndex].AsObject(m_sumByDataSource[sumByDataSourceIndex].Jsonize());
   }
   payload.WithArray("sumByDataSource", std::move(sumByDataSourceJsonList));

  }

  if(m_sumByResourceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sumByResourceJsonList(m_sumByResource.size());
   for(unsigned sumByResourceIndex = 0; sumByResourceIndex < sumByResourceJsonList.GetLength(); ++sumByResourceIndex)
   {
     sumByResourceJsonList[sumByResourceIndex].AsObject(m_sumByResource[sumByResourceIndex].Jsonize());
   }
   payload.WithArray("sumByResource", std::move(sumByResourceJsonList));

  }

  if(m_topResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topResourcesJsonList(m_topResources.size());
   for(unsigned topResourcesIndex = 0; topResourcesIndex < topResourcesJsonList.GetLength(); ++topResourcesIndex)
   {
     topResourcesJsonList[topResourcesIndex].AsObject(m_topResources[topResourcesIndex].Jsonize());
   }
   payload.WithArray("topResources", std::move(topResourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
