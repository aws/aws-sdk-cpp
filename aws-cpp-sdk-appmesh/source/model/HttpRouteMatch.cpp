/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HttpRouteMatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

HttpRouteMatch::HttpRouteMatch() : 
    m_headersHasBeenSet(false),
    m_method(HttpMethod::NOT_SET),
    m_methodHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_scheme(HttpScheme::NOT_SET),
    m_schemeHasBeenSet(false)
{
}

HttpRouteMatch::HttpRouteMatch(JsonView jsonValue) : 
    m_headersHasBeenSet(false),
    m_method(HttpMethod::NOT_SET),
    m_methodHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_scheme(HttpScheme::NOT_SET),
    m_schemeHasBeenSet(false)
{
  *this = jsonValue;
}

HttpRouteMatch& HttpRouteMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("headers"))
  {
    Array<JsonView> headersJsonList = jsonValue.GetArray("headers");
    for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
    {
      m_headers.push_back(headersJsonList[headersIndex].AsObject());
    }
    m_headersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("method"))
  {
    m_method = HttpMethodMapper::GetHttpMethodForName(jsonValue.GetString("method"));

    m_methodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheme"))
  {
    m_scheme = HttpSchemeMapper::GetHttpSchemeForName(jsonValue.GetString("scheme"));

    m_schemeHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpRouteMatch::Jsonize() const
{
  JsonValue payload;

  if(m_headersHasBeenSet)
  {
   Array<JsonValue> headersJsonList(m_headers.size());
   for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
   {
     headersJsonList[headersIndex].AsObject(m_headers[headersIndex].Jsonize());
   }
   payload.WithArray("headers", std::move(headersJsonList));

  }

  if(m_methodHasBeenSet)
  {
   payload.WithString("method", HttpMethodMapper::GetNameForHttpMethod(m_method));
  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  if(m_schemeHasBeenSet)
  {
   payload.WithString("scheme", HttpSchemeMapper::GetNameForHttpScheme(m_scheme));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
