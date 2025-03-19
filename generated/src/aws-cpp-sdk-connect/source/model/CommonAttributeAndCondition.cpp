/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CommonAttributeAndCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

CommonAttributeAndCondition::CommonAttributeAndCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

CommonAttributeAndCondition& CommonAttributeAndCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TagConditions"))
  {
    Aws::Utils::Array<JsonView> tagConditionsJsonList = jsonValue.GetArray("TagConditions");
    for(unsigned tagConditionsIndex = 0; tagConditionsIndex < tagConditionsJsonList.GetLength(); ++tagConditionsIndex)
    {
      m_tagConditions.push_back(tagConditionsJsonList[tagConditionsIndex].AsObject());
    }
    m_tagConditionsHasBeenSet = true;
  }
  return *this;
}

JsonValue CommonAttributeAndCondition::Jsonize() const
{
  JsonValue payload;

  if(m_tagConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagConditionsJsonList(m_tagConditions.size());
   for(unsigned tagConditionsIndex = 0; tagConditionsIndex < tagConditionsJsonList.GetLength(); ++tagConditionsIndex)
   {
     tagConditionsJsonList[tagConditionsIndex].AsObject(m_tagConditions[tagConditionsIndex].Jsonize());
   }
   payload.WithArray("TagConditions", std::move(tagConditionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
