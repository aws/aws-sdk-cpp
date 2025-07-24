/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GlossaryItemAdditionalAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

GlossaryItemAdditionalAttributes::GlossaryItemAdditionalAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

GlossaryItemAdditionalAttributes& GlossaryItemAdditionalAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("matchRationale"))
  {
    Aws::Utils::Array<JsonView> matchRationaleJsonList = jsonValue.GetArray("matchRationale");
    for(unsigned matchRationaleIndex = 0; matchRationaleIndex < matchRationaleJsonList.GetLength(); ++matchRationaleIndex)
    {
      m_matchRationale.push_back(matchRationaleJsonList[matchRationaleIndex].AsObject());
    }
    m_matchRationaleHasBeenSet = true;
  }
  return *this;
}

JsonValue GlossaryItemAdditionalAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_matchRationaleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchRationaleJsonList(m_matchRationale.size());
   for(unsigned matchRationaleIndex = 0; matchRationaleIndex < matchRationaleJsonList.GetLength(); ++matchRationaleIndex)
   {
     matchRationaleJsonList[matchRationaleIndex].AsObject(m_matchRationale[matchRationaleIndex].Jsonize());
   }
   payload.WithArray("matchRationale", std::move(matchRationaleJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
