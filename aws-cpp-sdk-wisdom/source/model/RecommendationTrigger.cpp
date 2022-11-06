/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/RecommendationTrigger.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

RecommendationTrigger::RecommendationTrigger() : 
    m_dataHasBeenSet(false),
    m_idHasBeenSet(false),
    m_recommendationIdsHasBeenSet(false),
    m_source(RecommendationSourceType::NOT_SET),
    m_sourceHasBeenSet(false),
    m_type(RecommendationTriggerType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

RecommendationTrigger::RecommendationTrigger(JsonView jsonValue) : 
    m_dataHasBeenSet(false),
    m_idHasBeenSet(false),
    m_recommendationIdsHasBeenSet(false),
    m_source(RecommendationSourceType::NOT_SET),
    m_sourceHasBeenSet(false),
    m_type(RecommendationTriggerType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationTrigger& RecommendationTrigger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetObject("data");

    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
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

  if(jsonValue.ValueExists("source"))
  {
    m_source = RecommendationSourceTypeMapper::GetRecommendationSourceTypeForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = RecommendationTriggerTypeMapper::GetRecommendationTriggerTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationTrigger::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithObject("data", m_data.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

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

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", RecommendationSourceTypeMapper::GetNameForRecommendationSourceType(m_source));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RecommendationTriggerTypeMapper::GetNameForRecommendationTriggerType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
