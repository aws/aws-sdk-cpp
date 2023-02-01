/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CookieObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

CookieObject::CookieObject() : 
    m_option(ForwardValues::NOT_SET),
    m_optionHasBeenSet(false),
    m_cookiesAllowListHasBeenSet(false)
{
}

CookieObject::CookieObject(JsonView jsonValue) : 
    m_option(ForwardValues::NOT_SET),
    m_optionHasBeenSet(false),
    m_cookiesAllowListHasBeenSet(false)
{
  *this = jsonValue;
}

CookieObject& CookieObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("option"))
  {
    m_option = ForwardValuesMapper::GetForwardValuesForName(jsonValue.GetString("option"));

    m_optionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cookiesAllowList"))
  {
    Aws::Utils::Array<JsonView> cookiesAllowListJsonList = jsonValue.GetArray("cookiesAllowList");
    for(unsigned cookiesAllowListIndex = 0; cookiesAllowListIndex < cookiesAllowListJsonList.GetLength(); ++cookiesAllowListIndex)
    {
      m_cookiesAllowList.push_back(cookiesAllowListJsonList[cookiesAllowListIndex].AsString());
    }
    m_cookiesAllowListHasBeenSet = true;
  }

  return *this;
}

JsonValue CookieObject::Jsonize() const
{
  JsonValue payload;

  if(m_optionHasBeenSet)
  {
   payload.WithString("option", ForwardValuesMapper::GetNameForForwardValues(m_option));
  }

  if(m_cookiesAllowListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cookiesAllowListJsonList(m_cookiesAllowList.size());
   for(unsigned cookiesAllowListIndex = 0; cookiesAllowListIndex < cookiesAllowListJsonList.GetLength(); ++cookiesAllowListIndex)
   {
     cookiesAllowListJsonList[cookiesAllowListIndex].AsString(m_cookiesAllowList[cookiesAllowListIndex]);
   }
   payload.WithArray("cookiesAllowList", std::move(cookiesAllowListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
