/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/MessageAttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

MessageAttributeValue::MessageAttributeValue() : 
    m_stringValuesHasBeenSet(false)
{
}

MessageAttributeValue::MessageAttributeValue(JsonView jsonValue) : 
    m_stringValuesHasBeenSet(false)
{
  *this = jsonValue;
}

MessageAttributeValue& MessageAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringValues"))
  {
    Aws::Utils::Array<JsonView> stringValuesJsonList = jsonValue.GetArray("StringValues");
    for(unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex)
    {
      m_stringValues.push_back(stringValuesJsonList[stringValuesIndex].AsString());
    }
    m_stringValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_stringValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringValuesJsonList(m_stringValues.size());
   for(unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex)
   {
     stringValuesJsonList[stringValuesIndex].AsString(m_stringValues[stringValuesIndex]);
   }
   payload.WithArray("StringValues", std::move(stringValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
