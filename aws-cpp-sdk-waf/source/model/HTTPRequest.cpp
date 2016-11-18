/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/waf/model/HTTPRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

HTTPRequest::HTTPRequest() : 
    m_clientIPHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_uRIHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_hTTPVersionHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

HTTPRequest::HTTPRequest(const JsonValue& jsonValue) : 
    m_clientIPHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_uRIHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_hTTPVersionHasBeenSet(false),
    m_headersHasBeenSet(false)
{
  *this = jsonValue;
}

HTTPRequest& HTTPRequest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ClientIP"))
  {
    m_clientIP = jsonValue.GetString("ClientIP");

    m_clientIPHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("URI"))
  {
    m_uRI = jsonValue.GetString("URI");

    m_uRIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Method"))
  {
    m_method = jsonValue.GetString("Method");

    m_methodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HTTPVersion"))
  {
    m_hTTPVersion = jsonValue.GetString("HTTPVersion");

    m_hTTPVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Headers"))
  {
    Array<JsonValue> headersJsonList = jsonValue.GetArray("Headers");
    for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
    {
      m_headers.push_back(headersJsonList[headersIndex].AsObject());
    }
    m_headersHasBeenSet = true;
  }

  return *this;
}

JsonValue HTTPRequest::Jsonize() const
{
  JsonValue payload;

  if(m_clientIPHasBeenSet)
  {
   payload.WithString("ClientIP", m_clientIP);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_uRIHasBeenSet)
  {
   payload.WithString("URI", m_uRI);

  }

  if(m_methodHasBeenSet)
  {
   payload.WithString("Method", m_method);

  }

  if(m_hTTPVersionHasBeenSet)
  {
   payload.WithString("HTTPVersion", m_hTTPVersion);

  }

  if(m_headersHasBeenSet)
  {
   Array<JsonValue> headersJsonList(m_headers.size());
   for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
   {
     headersJsonList[headersIndex].AsObject(m_headers[headersIndex].Jsonize());
   }
   payload.WithArray("Headers", std::move(headersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws