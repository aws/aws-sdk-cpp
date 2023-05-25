/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/EmailRecipients.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

EmailRecipients::EmailRecipients() : 
    m_toHasBeenSet(false)
{
}

EmailRecipients::EmailRecipients(JsonView jsonValue) : 
    m_toHasBeenSet(false)
{
  *this = jsonValue;
}

EmailRecipients& EmailRecipients::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("to"))
  {
    Aws::Utils::Array<JsonView> toJsonList = jsonValue.GetArray("to");
    for(unsigned toIndex = 0; toIndex < toJsonList.GetLength(); ++toIndex)
    {
      m_to.push_back(toJsonList[toIndex].AsObject());
    }
    m_toHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailRecipients::Jsonize() const
{
  JsonValue payload;

  if(m_toHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> toJsonList(m_to.size());
   for(unsigned toIndex = 0; toIndex < toJsonList.GetLength(); ++toIndex)
   {
     toJsonList[toIndex].AsObject(m_to[toIndex].Jsonize());
   }
   payload.WithArray("to", std::move(toJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
