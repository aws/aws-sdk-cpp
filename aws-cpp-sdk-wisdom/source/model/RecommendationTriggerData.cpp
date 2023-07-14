/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/RecommendationTriggerData.h>
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

RecommendationTriggerData::RecommendationTriggerData() : 
    m_queryHasBeenSet(false)
{
}

RecommendationTriggerData::RecommendationTriggerData(JsonView jsonValue) : 
    m_queryHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationTriggerData& RecommendationTriggerData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("query"))
  {
    m_query = jsonValue.GetObject("query");

    m_queryHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationTriggerData::Jsonize() const
{
  JsonValue payload;

  if(m_queryHasBeenSet)
  {
   payload.WithObject("query", m_query.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
