/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/UpdateConnectionOAuthRequestParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

UpdateConnectionOAuthRequestParameters::UpdateConnectionOAuthRequestParameters() : 
    m_clientParametersHasBeenSet(false),
    m_authorizationEndpointHasBeenSet(false),
    m_httpMethod(ConnectionOAuthHttpMethod::NOT_SET),
    m_httpMethodHasBeenSet(false),
    m_oAuthHttpParametersHasBeenSet(false)
{
}

UpdateConnectionOAuthRequestParameters::UpdateConnectionOAuthRequestParameters(JsonView jsonValue) : 
    m_clientParametersHasBeenSet(false),
    m_authorizationEndpointHasBeenSet(false),
    m_httpMethod(ConnectionOAuthHttpMethod::NOT_SET),
    m_httpMethodHasBeenSet(false),
    m_oAuthHttpParametersHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateConnectionOAuthRequestParameters& UpdateConnectionOAuthRequestParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientParameters"))
  {
    m_clientParameters = jsonValue.GetObject("ClientParameters");

    m_clientParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizationEndpoint"))
  {
    m_authorizationEndpoint = jsonValue.GetString("AuthorizationEndpoint");

    m_authorizationEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpMethod"))
  {
    m_httpMethod = ConnectionOAuthHttpMethodMapper::GetConnectionOAuthHttpMethodForName(jsonValue.GetString("HttpMethod"));

    m_httpMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OAuthHttpParameters"))
  {
    m_oAuthHttpParameters = jsonValue.GetObject("OAuthHttpParameters");

    m_oAuthHttpParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateConnectionOAuthRequestParameters::Jsonize() const
{
  JsonValue payload;

  if(m_clientParametersHasBeenSet)
  {
   payload.WithObject("ClientParameters", m_clientParameters.Jsonize());

  }

  if(m_authorizationEndpointHasBeenSet)
  {
   payload.WithString("AuthorizationEndpoint", m_authorizationEndpoint);

  }

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("HttpMethod", ConnectionOAuthHttpMethodMapper::GetNameForConnectionOAuthHttpMethod(m_httpMethod));
  }

  if(m_oAuthHttpParametersHasBeenSet)
  {
   payload.WithObject("OAuthHttpParameters", m_oAuthHttpParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
