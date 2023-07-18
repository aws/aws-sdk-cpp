/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/QueryRecommendationTriggerData.h>
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

QueryRecommendationTriggerData::QueryRecommendationTriggerData() : 
    m_textHasBeenSet(false)
{
}

QueryRecommendationTriggerData::QueryRecommendationTriggerData(JsonView jsonValue) : 
    m_textHasBeenSet(false)
{
  *this = jsonValue;
}

QueryRecommendationTriggerData& QueryRecommendationTriggerData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryRecommendationTriggerData::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
