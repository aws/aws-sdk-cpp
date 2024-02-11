/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/AuthRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

AuthRequest::AuthRequest() : 
    m_redirectUriHasBeenSet(false),
    m_codeHasBeenSet(false)
{
}

AuthRequest::AuthRequest(JsonView jsonValue) : 
    m_redirectUriHasBeenSet(false),
    m_codeHasBeenSet(false)
{
  *this = jsonValue;
}

AuthRequest& AuthRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("redirectUri"))
  {
    m_redirectUri = jsonValue.GetString("redirectUri");

    m_redirectUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthRequest::Jsonize() const
{
  JsonValue payload;

  if(m_redirectUriHasBeenSet)
  {
   payload.WithString("redirectUri", m_redirectUri);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
