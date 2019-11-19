/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iot/model/HttpAction.h>
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

HttpAction::HttpAction() : 
    m_urlHasBeenSet(false),
    m_confirmationUrlHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_authHasBeenSet(false)
{
}

HttpAction::HttpAction(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_confirmationUrlHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_authHasBeenSet(false)
{
  *this = jsonValue;
}

HttpAction& HttpAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("confirmationUrl"))
  {
    m_confirmationUrl = jsonValue.GetString("confirmationUrl");

    m_confirmationUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("headers"))
  {
    Array<JsonView> headersJsonList = jsonValue.GetArray("headers");
    for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
    {
      m_headers.push_back(headersJsonList[headersIndex].AsObject());
    }
    m_headersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("auth"))
  {
    m_auth = jsonValue.GetObject("auth");

    m_authHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpAction::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_confirmationUrlHasBeenSet)
  {
   payload.WithString("confirmationUrl", m_confirmationUrl);

  }

  if(m_headersHasBeenSet)
  {
   Array<JsonValue> headersJsonList(m_headers.size());
   for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
   {
     headersJsonList[headersIndex].AsObject(m_headers[headersIndex].Jsonize());
   }
   payload.WithArray("headers", std::move(headersJsonList));

  }

  if(m_authHasBeenSet)
  {
   payload.WithObject("auth", m_auth.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
