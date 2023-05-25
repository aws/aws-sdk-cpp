/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/AdditionalSearchKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

AdditionalSearchKey::AdditionalSearchKey() : 
    m_keyNameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

AdditionalSearchKey::AdditionalSearchKey(JsonView jsonValue) : 
    m_keyNameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

AdditionalSearchKey& AdditionalSearchKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyName"))
  {
    m_keyName = jsonValue.GetString("KeyName");

    m_keyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue AdditionalSearchKey::Jsonize() const
{
  JsonValue payload;

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("KeyName", m_keyName);

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
