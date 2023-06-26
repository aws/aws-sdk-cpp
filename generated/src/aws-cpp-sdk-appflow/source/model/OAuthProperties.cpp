/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/OAuthProperties.h>
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

OAuthProperties::OAuthProperties() : 
    m_tokenUrlHasBeenSet(false),
    m_authCodeUrlHasBeenSet(false),
    m_oAuthScopesHasBeenSet(false)
{
}

OAuthProperties::OAuthProperties(JsonView jsonValue) : 
    m_tokenUrlHasBeenSet(false),
    m_authCodeUrlHasBeenSet(false),
    m_oAuthScopesHasBeenSet(false)
{
  *this = jsonValue;
}

OAuthProperties& OAuthProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tokenUrl"))
  {
    m_tokenUrl = jsonValue.GetString("tokenUrl");

    m_tokenUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authCodeUrl"))
  {
    m_authCodeUrl = jsonValue.GetString("authCodeUrl");

    m_authCodeUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oAuthScopes"))
  {
    Aws::Utils::Array<JsonView> oAuthScopesJsonList = jsonValue.GetArray("oAuthScopes");
    for(unsigned oAuthScopesIndex = 0; oAuthScopesIndex < oAuthScopesJsonList.GetLength(); ++oAuthScopesIndex)
    {
      m_oAuthScopes.push_back(oAuthScopesJsonList[oAuthScopesIndex].AsString());
    }
    m_oAuthScopesHasBeenSet = true;
  }

  return *this;
}

JsonValue OAuthProperties::Jsonize() const
{
  JsonValue payload;

  if(m_tokenUrlHasBeenSet)
  {
   payload.WithString("tokenUrl", m_tokenUrl);

  }

  if(m_authCodeUrlHasBeenSet)
  {
   payload.WithString("authCodeUrl", m_authCodeUrl);

  }

  if(m_oAuthScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> oAuthScopesJsonList(m_oAuthScopes.size());
   for(unsigned oAuthScopesIndex = 0; oAuthScopesIndex < oAuthScopesJsonList.GetLength(); ++oAuthScopesIndex)
   {
     oAuthScopesJsonList[oAuthScopesIndex].AsString(m_oAuthScopes[oAuthScopesIndex]);
   }
   payload.WithArray("oAuthScopes", std::move(oAuthScopesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
