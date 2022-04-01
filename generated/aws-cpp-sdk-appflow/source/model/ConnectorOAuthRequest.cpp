/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorOAuthRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

ConnectorOAuthRequest::ConnectorOAuthRequest() : 
    m_authCodeHasBeenSet(false),
    m_redirectUriHasBeenSet(false)
{
}

ConnectorOAuthRequest::ConnectorOAuthRequest(JsonView jsonValue) : 
    m_authCodeHasBeenSet(false),
    m_redirectUriHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorOAuthRequest& ConnectorOAuthRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authCode"))
  {
    m_authCode = jsonValue.GetString("authCode");

    m_authCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redirectUri"))
  {
    m_redirectUri = jsonValue.GetString("redirectUri");

    m_redirectUriHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorOAuthRequest::Jsonize() const
{
  JsonValue payload;

  if(m_authCodeHasBeenSet)
  {
   payload.WithString("authCode", m_authCode);

  }

  if(m_redirectUriHasBeenSet)
  {
   payload.WithString("redirectUri", m_redirectUri);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
