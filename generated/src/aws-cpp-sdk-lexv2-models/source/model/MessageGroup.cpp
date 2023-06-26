/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/MessageGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

MessageGroup::MessageGroup() : 
    m_messageHasBeenSet(false),
    m_variationsHasBeenSet(false)
{
}

MessageGroup::MessageGroup(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_variationsHasBeenSet(false)
{
  *this = jsonValue;
}

MessageGroup& MessageGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetObject("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variations"))
  {
    Aws::Utils::Array<JsonView> variationsJsonList = jsonValue.GetArray("variations");
    for(unsigned variationsIndex = 0; variationsIndex < variationsJsonList.GetLength(); ++variationsIndex)
    {
      m_variations.push_back(variationsJsonList[variationsIndex].AsObject());
    }
    m_variationsHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageGroup::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithObject("message", m_message.Jsonize());

  }

  if(m_variationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variationsJsonList(m_variations.size());
   for(unsigned variationsIndex = 0; variationsIndex < variationsJsonList.GetLength(); ++variationsIndex)
   {
     variationsJsonList[variationsIndex].AsObject(m_variations[variationsIndex].Jsonize());
   }
   payload.WithArray("variations", std::move(variationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
