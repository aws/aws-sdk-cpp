/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/RecommendationRelatedAnomaly.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

RecommendationRelatedAnomaly::RecommendationRelatedAnomaly() : 
    m_resourcesHasBeenSet(false),
    m_sourceDetailsHasBeenSet(false),
    m_anomalyIdHasBeenSet(false)
{
}

RecommendationRelatedAnomaly::RecommendationRelatedAnomaly(JsonView jsonValue) : 
    m_resourcesHasBeenSet(false),
    m_sourceDetailsHasBeenSet(false),
    m_anomalyIdHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationRelatedAnomaly& RecommendationRelatedAnomaly::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDetails"))
  {
    Aws::Utils::Array<JsonView> sourceDetailsJsonList = jsonValue.GetArray("SourceDetails");
    for(unsigned sourceDetailsIndex = 0; sourceDetailsIndex < sourceDetailsJsonList.GetLength(); ++sourceDetailsIndex)
    {
      m_sourceDetails.push_back(sourceDetailsJsonList[sourceDetailsIndex].AsObject());
    }
    m_sourceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyId"))
  {
    m_anomalyId = jsonValue.GetString("AnomalyId");

    m_anomalyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationRelatedAnomaly::Jsonize() const
{
  JsonValue payload;

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  if(m_sourceDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceDetailsJsonList(m_sourceDetails.size());
   for(unsigned sourceDetailsIndex = 0; sourceDetailsIndex < sourceDetailsJsonList.GetLength(); ++sourceDetailsIndex)
   {
     sourceDetailsJsonList[sourceDetailsIndex].AsObject(m_sourceDetails[sourceDetailsIndex].Jsonize());
   }
   payload.WithArray("SourceDetails", std::move(sourceDetailsJsonList));

  }

  if(m_anomalyIdHasBeenSet)
  {
   payload.WithString("AnomalyId", m_anomalyId);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
