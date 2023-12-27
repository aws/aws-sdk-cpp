/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/Filter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

Filter::Filter() : 
    m_accountIdsHasBeenSet(false),
    m_actionTypesHasBeenSet(false),
    m_implementationEffortsHasBeenSet(false),
    m_recommendationIdsHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_resourceArnsHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_restartNeeded(false),
    m_restartNeededHasBeenSet(false),
    m_rollbackPossible(false),
    m_rollbackPossibleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_accountIdsHasBeenSet(false),
    m_actionTypesHasBeenSet(false),
    m_implementationEffortsHasBeenSet(false),
    m_recommendationIdsHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_resourceArnsHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_restartNeeded(false),
    m_restartNeededHasBeenSet(false),
    m_rollbackPossible(false),
    m_rollbackPossibleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("actionTypes"))
  {
    Aws::Utils::Array<JsonView> actionTypesJsonList = jsonValue.GetArray("actionTypes");
    for(unsigned actionTypesIndex = 0; actionTypesIndex < actionTypesJsonList.GetLength(); ++actionTypesIndex)
    {
      m_actionTypes.push_back(ActionTypeMapper::GetActionTypeForName(actionTypesJsonList[actionTypesIndex].AsString()));
    }
    m_actionTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("implementationEfforts"))
  {
    Aws::Utils::Array<JsonView> implementationEffortsJsonList = jsonValue.GetArray("implementationEfforts");
    for(unsigned implementationEffortsIndex = 0; implementationEffortsIndex < implementationEffortsJsonList.GetLength(); ++implementationEffortsIndex)
    {
      m_implementationEfforts.push_back(ImplementationEffortMapper::GetImplementationEffortForName(implementationEffortsJsonList[implementationEffortsIndex].AsString()));
    }
    m_implementationEffortsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationIds"))
  {
    Aws::Utils::Array<JsonView> recommendationIdsJsonList = jsonValue.GetArray("recommendationIds");
    for(unsigned recommendationIdsIndex = 0; recommendationIdsIndex < recommendationIdsJsonList.GetLength(); ++recommendationIdsIndex)
    {
      m_recommendationIds.push_back(recommendationIdsJsonList[recommendationIdsIndex].AsString());
    }
    m_recommendationIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArns"))
  {
    Aws::Utils::Array<JsonView> resourceArnsJsonList = jsonValue.GetArray("resourceArns");
    for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
    {
      m_resourceArns.push_back(resourceArnsJsonList[resourceArnsIndex].AsString());
    }
    m_resourceArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceIds"))
  {
    Aws::Utils::Array<JsonView> resourceIdsJsonList = jsonValue.GetArray("resourceIds");
    for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
    {
      m_resourceIds.push_back(resourceIdsJsonList[resourceIdsIndex].AsString());
    }
    m_resourceIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceTypes"))
  {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("resourceTypes");
    for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
    {
      m_resourceTypes.push_back(ResourceTypeMapper::GetResourceTypeForName(resourceTypesJsonList[resourceTypesIndex].AsString()));
    }
    m_resourceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("restartNeeded"))
  {
    m_restartNeeded = jsonValue.GetBool("restartNeeded");

    m_restartNeededHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollbackPossible"))
  {
    m_rollbackPossible = jsonValue.GetBool("rollbackPossible");

    m_rollbackPossibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
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

  if(m_actionTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionTypesJsonList(m_actionTypes.size());
   for(unsigned actionTypesIndex = 0; actionTypesIndex < actionTypesJsonList.GetLength(); ++actionTypesIndex)
   {
     actionTypesJsonList[actionTypesIndex].AsString(ActionTypeMapper::GetNameForActionType(m_actionTypes[actionTypesIndex]));
   }
   payload.WithArray("actionTypes", std::move(actionTypesJsonList));

  }

  if(m_implementationEffortsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> implementationEffortsJsonList(m_implementationEfforts.size());
   for(unsigned implementationEffortsIndex = 0; implementationEffortsIndex < implementationEffortsJsonList.GetLength(); ++implementationEffortsIndex)
   {
     implementationEffortsJsonList[implementationEffortsIndex].AsString(ImplementationEffortMapper::GetNameForImplementationEffort(m_implementationEfforts[implementationEffortsIndex]));
   }
   payload.WithArray("implementationEfforts", std::move(implementationEffortsJsonList));

  }

  if(m_recommendationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationIdsJsonList(m_recommendationIds.size());
   for(unsigned recommendationIdsIndex = 0; recommendationIdsIndex < recommendationIdsJsonList.GetLength(); ++recommendationIdsIndex)
   {
     recommendationIdsJsonList[recommendationIdsIndex].AsString(m_recommendationIds[recommendationIdsIndex]);
   }
   payload.WithArray("recommendationIds", std::move(recommendationIdsJsonList));

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("regions", std::move(regionsJsonList));

  }

  if(m_resourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
   for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
   {
     resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
   }
   payload.WithArray("resourceArns", std::move(resourceArnsJsonList));

  }

  if(m_resourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
   for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
   {
     resourceIdsJsonList[resourceIdsIndex].AsString(m_resourceIds[resourceIdsIndex]);
   }
   payload.WithArray("resourceIds", std::move(resourceIdsJsonList));

  }

  if(m_resourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(ResourceTypeMapper::GetNameForResourceType(m_resourceTypes[resourceTypesIndex]));
   }
   payload.WithArray("resourceTypes", std::move(resourceTypesJsonList));

  }

  if(m_restartNeededHasBeenSet)
  {
   payload.WithBool("restartNeeded", m_restartNeeded);

  }

  if(m_rollbackPossibleHasBeenSet)
  {
   payload.WithBool("rollbackPossible", m_rollbackPossible);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
