/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Observations.h>
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

Observations::Observations() : 
    m_textHasBeenSet(false)
{
}

Observations::Observations(JsonView jsonValue) : 
    m_textHasBeenSet(false)
{
  *this = jsonValue;
}

Observations& Observations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    Aws::Utils::Array<JsonView> textJsonList = jsonValue.GetArray("text");
    for(unsigned textIndex = 0; textIndex < textJsonList.GetLength(); ++textIndex)
    {
      m_text.push_back(textJsonList[textIndex].AsString());
    }
    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue Observations::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> textJsonList(m_text.size());
   for(unsigned textIndex = 0; textIndex < textJsonList.GetLength(); ++textIndex)
   {
     textJsonList[textIndex].AsString(m_text[textIndex]);
   }
   payload.WithArray("text", std::move(textJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
