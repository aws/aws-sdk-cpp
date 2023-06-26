/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PropertyValidationException.h>
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

PropertyValidationException::PropertyValidationException() : 
    m_messageHasBeenSet(false),
    m_propertyListHasBeenSet(false)
{
}

PropertyValidationException::PropertyValidationException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_propertyListHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyValidationException& PropertyValidationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropertyList"))
  {
    Aws::Utils::Array<JsonView> propertyListJsonList = jsonValue.GetArray("PropertyList");
    for(unsigned propertyListIndex = 0; propertyListIndex < propertyListJsonList.GetLength(); ++propertyListIndex)
    {
      m_propertyList.push_back(propertyListJsonList[propertyListIndex].AsObject());
    }
    m_propertyListHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyValidationException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_propertyListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertyListJsonList(m_propertyList.size());
   for(unsigned propertyListIndex = 0; propertyListIndex < propertyListJsonList.GetLength(); ++propertyListIndex)
   {
     propertyListJsonList[propertyListIndex].AsObject(m_propertyList[propertyListIndex].Jsonize());
   }
   payload.WithArray("PropertyList", std::move(propertyListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
