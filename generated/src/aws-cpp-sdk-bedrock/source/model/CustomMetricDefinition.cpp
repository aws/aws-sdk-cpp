/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CustomMetricDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

CustomMetricDefinition::CustomMetricDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomMetricDefinition& CustomMetricDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instructions"))
  {
    m_instructions = jsonValue.GetString("instructions");
    m_instructionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ratingScale"))
  {
    Aws::Utils::Array<JsonView> ratingScaleJsonList = jsonValue.GetArray("ratingScale");
    for(unsigned ratingScaleIndex = 0; ratingScaleIndex < ratingScaleJsonList.GetLength(); ++ratingScaleIndex)
    {
      m_ratingScale.push_back(ratingScaleJsonList[ratingScaleIndex].AsObject());
    }
    m_ratingScaleHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomMetricDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_instructionsHasBeenSet)
  {
   payload.WithString("instructions", m_instructions);

  }

  if(m_ratingScaleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ratingScaleJsonList(m_ratingScale.size());
   for(unsigned ratingScaleIndex = 0; ratingScaleIndex < ratingScaleJsonList.GetLength(); ++ratingScaleIndex)
   {
     ratingScaleJsonList[ratingScaleIndex].AsObject(m_ratingScale[ratingScaleIndex].Jsonize());
   }
   payload.WithArray("ratingScale", std::move(ratingScaleJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
