/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ExchangeCodeForTokenRequestBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

ExchangeCodeForTokenRequestBody::ExchangeCodeForTokenRequestBody() : 
    m_codeHasBeenSet(false),
    m_redirectUriHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
}

ExchangeCodeForTokenRequestBody::ExchangeCodeForTokenRequestBody(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_redirectUriHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
  *this = jsonValue;
}

ExchangeCodeForTokenRequestBody& ExchangeCodeForTokenRequestBody::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redirectUri"))
  {
    m_redirectUri = jsonValue.GetString("redirectUri");

    m_redirectUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");

    m_clientIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ExchangeCodeForTokenRequestBody::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_redirectUriHasBeenSet)
  {
   payload.WithString("redirectUri", m_redirectUri);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
