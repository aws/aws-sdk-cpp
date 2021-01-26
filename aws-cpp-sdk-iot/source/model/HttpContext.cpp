/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/HttpContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

HttpContext::HttpContext() : 
    m_headersHasBeenSet(false),
    m_queryStringHasBeenSet(false)
{
}

HttpContext::HttpContext(JsonView jsonValue) : 
    m_headersHasBeenSet(false),
    m_queryStringHasBeenSet(false)
{
  *this = jsonValue;
}

HttpContext& HttpContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("headers"))
  {
    Aws::Map<Aws::String, JsonView> headersJsonMap = jsonValue.GetObject("headers").GetAllObjects();
    for(auto& headersItem : headersJsonMap)
    {
      m_headers[headersItem.first] = headersItem.second.AsString();
    }
    m_headersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryString"))
  {
    m_queryString = jsonValue.GetString("queryString");

    m_queryStringHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpContext::Jsonize() const
{
  JsonValue payload;

  if(m_headersHasBeenSet)
  {
   JsonValue headersJsonMap;
   for(auto& headersItem : m_headers)
   {
     headersJsonMap.WithString(headersItem.first, headersItem.second);
   }
   payload.WithObject("headers", std::move(headersJsonMap));

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
