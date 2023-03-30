/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/FeaturedResultsConflictException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

FeaturedResultsConflictException::FeaturedResultsConflictException() : 
    m_messageHasBeenSet(false),
    m_conflictingItemsHasBeenSet(false)
{
}

FeaturedResultsConflictException::FeaturedResultsConflictException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_conflictingItemsHasBeenSet(false)
{
  *this = jsonValue;
}

FeaturedResultsConflictException& FeaturedResultsConflictException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConflictingItems"))
  {
    Aws::Utils::Array<JsonView> conflictingItemsJsonList = jsonValue.GetArray("ConflictingItems");
    for(unsigned conflictingItemsIndex = 0; conflictingItemsIndex < conflictingItemsJsonList.GetLength(); ++conflictingItemsIndex)
    {
      m_conflictingItems.push_back(conflictingItemsJsonList[conflictingItemsIndex].AsObject());
    }
    m_conflictingItemsHasBeenSet = true;
  }

  return *this;
}

JsonValue FeaturedResultsConflictException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_conflictingItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conflictingItemsJsonList(m_conflictingItems.size());
   for(unsigned conflictingItemsIndex = 0; conflictingItemsIndex < conflictingItemsJsonList.GetLength(); ++conflictingItemsIndex)
   {
     conflictingItemsJsonList[conflictingItemsIndex].AsObject(m_conflictingItems[conflictingItemsIndex].Jsonize());
   }
   payload.WithArray("ConflictingItems", std::move(conflictingItemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
