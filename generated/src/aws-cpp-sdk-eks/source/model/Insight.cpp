/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/Insight.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

Insight::Insight() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_category(Category::NOT_SET),
    m_categoryHasBeenSet(false),
    m_kubernetesVersionHasBeenSet(false),
    m_lastRefreshTimeHasBeenSet(false),
    m_lastTransitionTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_insightStatusHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_additionalInfoHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_categorySpecificSummaryHasBeenSet(false)
{
}

Insight::Insight(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_category(Category::NOT_SET),
    m_categoryHasBeenSet(false),
    m_kubernetesVersionHasBeenSet(false),
    m_lastRefreshTimeHasBeenSet(false),
    m_lastTransitionTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_insightStatusHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_additionalInfoHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_categorySpecificSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

Insight& Insight::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("category"))
  {
    m_category = CategoryMapper::GetCategoryForName(jsonValue.GetString("category"));

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kubernetesVersion"))
  {
    m_kubernetesVersion = jsonValue.GetString("kubernetesVersion");

    m_kubernetesVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRefreshTime"))
  {
    m_lastRefreshTime = jsonValue.GetDouble("lastRefreshTime");

    m_lastRefreshTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastTransitionTime"))
  {
    m_lastTransitionTime = jsonValue.GetDouble("lastTransitionTime");

    m_lastTransitionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("insightStatus"))
  {
    m_insightStatus = jsonValue.GetObject("insightStatus");

    m_insightStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendation"))
  {
    m_recommendation = jsonValue.GetString("recommendation");

    m_recommendationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalInfo"))
  {
    Aws::Map<Aws::String, JsonView> additionalInfoJsonMap = jsonValue.GetObject("additionalInfo").GetAllObjects();
    for(auto& additionalInfoItem : additionalInfoJsonMap)
    {
      m_additionalInfo[additionalInfoItem.first] = additionalInfoItem.second.AsString();
    }
    m_additionalInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("categorySpecificSummary"))
  {
    m_categorySpecificSummary = jsonValue.GetObject("categorySpecificSummary");

    m_categorySpecificSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue Insight::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", CategoryMapper::GetNameForCategory(m_category));
  }

  if(m_kubernetesVersionHasBeenSet)
  {
   payload.WithString("kubernetesVersion", m_kubernetesVersion);

  }

  if(m_lastRefreshTimeHasBeenSet)
  {
   payload.WithDouble("lastRefreshTime", m_lastRefreshTime.SecondsWithMSPrecision());
  }

  if(m_lastTransitionTimeHasBeenSet)
  {
   payload.WithDouble("lastTransitionTime", m_lastTransitionTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_insightStatusHasBeenSet)
  {
   payload.WithObject("insightStatus", m_insightStatus.Jsonize());

  }

  if(m_recommendationHasBeenSet)
  {
   payload.WithString("recommendation", m_recommendation);

  }

  if(m_additionalInfoHasBeenSet)
  {
   JsonValue additionalInfoJsonMap;
   for(auto& additionalInfoItem : m_additionalInfo)
   {
     additionalInfoJsonMap.WithString(additionalInfoItem.first, additionalInfoItem.second);
   }
   payload.WithObject("additionalInfo", std::move(additionalInfoJsonMap));

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  if(m_categorySpecificSummaryHasBeenSet)
  {
   payload.WithObject("categorySpecificSummary", m_categorySpecificSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
