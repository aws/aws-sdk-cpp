/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UsageCriteria.h>
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

UsageCriteria::UsageCriteria() : 
    m_accountIdsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_featuresHasBeenSet(false)
{
}

UsageCriteria::UsageCriteria(JsonView jsonValue) : 
    m_accountIdsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_featuresHasBeenSet(false)
{
  *this = jsonValue;
}

UsageCriteria& UsageCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountIds"))
  {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("accountIds");
    for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
    {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("features"))
  {
    Aws::Utils::Array<JsonView> featuresJsonList = jsonValue.GetArray("features");
    for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
    {
      m_features.push_back(UsageFeatureMapper::GetUsageFeatureForName(featuresJsonList[featuresIndex].AsString()));
    }
    m_featuresHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  if(m_featuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
   for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
   {
     featuresJsonList[featuresIndex].AsString(UsageFeatureMapper::GetNameForUsageFeature(m_features[featuresIndex]));
   }
   payload.WithArray("features", std::move(featuresJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
