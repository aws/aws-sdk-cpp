/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/CookieMatchPattern.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

CookieMatchPattern::CookieMatchPattern() : 
    m_allHasBeenSet(false),
    m_includedCookiesHasBeenSet(false),
    m_excludedCookiesHasBeenSet(false)
{
}

CookieMatchPattern::CookieMatchPattern(JsonView jsonValue) : 
    m_allHasBeenSet(false),
    m_includedCookiesHasBeenSet(false),
    m_excludedCookiesHasBeenSet(false)
{
  *this = jsonValue;
}

CookieMatchPattern& CookieMatchPattern::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("All"))
  {
    m_all = jsonValue.GetObject("All");

    m_allHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludedCookies"))
  {
    Aws::Utils::Array<JsonView> includedCookiesJsonList = jsonValue.GetArray("IncludedCookies");
    for(unsigned includedCookiesIndex = 0; includedCookiesIndex < includedCookiesJsonList.GetLength(); ++includedCookiesIndex)
    {
      m_includedCookies.push_back(includedCookiesJsonList[includedCookiesIndex].AsString());
    }
    m_includedCookiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludedCookies"))
  {
    Aws::Utils::Array<JsonView> excludedCookiesJsonList = jsonValue.GetArray("ExcludedCookies");
    for(unsigned excludedCookiesIndex = 0; excludedCookiesIndex < excludedCookiesJsonList.GetLength(); ++excludedCookiesIndex)
    {
      m_excludedCookies.push_back(excludedCookiesJsonList[excludedCookiesIndex].AsString());
    }
    m_excludedCookiesHasBeenSet = true;
  }

  return *this;
}

JsonValue CookieMatchPattern::Jsonize() const
{
  JsonValue payload;

  if(m_allHasBeenSet)
  {
   payload.WithObject("All", m_all.Jsonize());

  }

  if(m_includedCookiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includedCookiesJsonList(m_includedCookies.size());
   for(unsigned includedCookiesIndex = 0; includedCookiesIndex < includedCookiesJsonList.GetLength(); ++includedCookiesIndex)
   {
     includedCookiesJsonList[includedCookiesIndex].AsString(m_includedCookies[includedCookiesIndex]);
   }
   payload.WithArray("IncludedCookies", std::move(includedCookiesJsonList));

  }

  if(m_excludedCookiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedCookiesJsonList(m_excludedCookies.size());
   for(unsigned excludedCookiesIndex = 0; excludedCookiesIndex < excludedCookiesJsonList.GetLength(); ++excludedCookiesIndex)
   {
     excludedCookiesJsonList[excludedCookiesIndex].AsString(m_excludedCookies[excludedCookiesIndex]);
   }
   payload.WithArray("ExcludedCookies", std::move(excludedCookiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
