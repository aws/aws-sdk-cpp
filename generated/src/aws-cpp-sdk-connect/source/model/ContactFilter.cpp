/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFilter.h>
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

ContactFilter::ContactFilter() : 
    m_contactStatesHasBeenSet(false)
{
}

ContactFilter::ContactFilter(JsonView jsonValue) : 
    m_contactStatesHasBeenSet(false)
{
  *this = jsonValue;
}

ContactFilter& ContactFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactStates"))
  {
    Aws::Utils::Array<JsonView> contactStatesJsonList = jsonValue.GetArray("ContactStates");
    for(unsigned contactStatesIndex = 0; contactStatesIndex < contactStatesJsonList.GetLength(); ++contactStatesIndex)
    {
      m_contactStates.push_back(ContactStateMapper::GetContactStateForName(contactStatesJsonList[contactStatesIndex].AsString()));
    }
    m_contactStatesHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactFilter::Jsonize() const
{
  JsonValue payload;

  if(m_contactStatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contactStatesJsonList(m_contactStates.size());
   for(unsigned contactStatesIndex = 0; contactStatesIndex < contactStatesJsonList.GetLength(); ++contactStatesIndex)
   {
     contactStatesJsonList[contactStatesIndex].AsString(ContactStateMapper::GetNameForContactState(m_contactStates[contactStatesIndex]));
   }
   payload.WithArray("ContactStates", std::move(contactStatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
