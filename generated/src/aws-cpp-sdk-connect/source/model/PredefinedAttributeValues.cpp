/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PredefinedAttributeValues.h>
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

PredefinedAttributeValues::PredefinedAttributeValues() : 
    m_stringListHasBeenSet(false)
{
}

PredefinedAttributeValues::PredefinedAttributeValues(JsonView jsonValue) : 
    m_stringListHasBeenSet(false)
{
  *this = jsonValue;
}

PredefinedAttributeValues& PredefinedAttributeValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringList"))
  {
    Aws::Utils::Array<JsonView> stringListJsonList = jsonValue.GetArray("StringList");
    for(unsigned stringListIndex = 0; stringListIndex < stringListJsonList.GetLength(); ++stringListIndex)
    {
      m_stringList.push_back(stringListJsonList[stringListIndex].AsString());
    }
    m_stringListHasBeenSet = true;
  }

  return *this;
}

JsonValue PredefinedAttributeValues::Jsonize() const
{
  JsonValue payload;

  if(m_stringListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringListJsonList(m_stringList.size());
   for(unsigned stringListIndex = 0; stringListIndex < stringListJsonList.GetLength(); ++stringListIndex)
   {
     stringListJsonList[stringListIndex].AsString(m_stringList[stringListIndex]);
   }
   payload.WithArray("StringList", std::move(stringListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
