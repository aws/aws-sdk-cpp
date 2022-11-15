/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/Authorizer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

Authorizer::Authorizer() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(AuthorizerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_providerARNsHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_authorizerUriHasBeenSet(false),
    m_authorizerCredentialsHasBeenSet(false),
    m_identitySourceHasBeenSet(false),
    m_identityValidationExpressionHasBeenSet(false),
    m_authorizerResultTtlInSeconds(0),
    m_authorizerResultTtlInSecondsHasBeenSet(false)
{
}

Authorizer::Authorizer(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(AuthorizerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_providerARNsHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_authorizerUriHasBeenSet(false),
    m_authorizerCredentialsHasBeenSet(false),
    m_identitySourceHasBeenSet(false),
    m_identityValidationExpressionHasBeenSet(false),
    m_authorizerResultTtlInSeconds(0),
    m_authorizerResultTtlInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

Authorizer& Authorizer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = AuthorizerTypeMapper::GetAuthorizerTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providerARNs"))
  {
    Aws::Utils::Array<JsonView> providerARNsJsonList = jsonValue.GetArray("providerARNs");
    for(unsigned providerARNsIndex = 0; providerARNsIndex < providerARNsJsonList.GetLength(); ++providerARNsIndex)
    {
      m_providerARNs.push_back(providerARNsJsonList[providerARNsIndex].AsString());
    }
    m_providerARNsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authType"))
  {
    m_authType = jsonValue.GetString("authType");

    m_authTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizerUri"))
  {
    m_authorizerUri = jsonValue.GetString("authorizerUri");

    m_authorizerUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizerCredentials"))
  {
    m_authorizerCredentials = jsonValue.GetString("authorizerCredentials");

    m_authorizerCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identitySource"))
  {
    m_identitySource = jsonValue.GetString("identitySource");

    m_identitySourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identityValidationExpression"))
  {
    m_identityValidationExpression = jsonValue.GetString("identityValidationExpression");

    m_identityValidationExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizerResultTtlInSeconds"))
  {
    m_authorizerResultTtlInSeconds = jsonValue.GetInteger("authorizerResultTtlInSeconds");

    m_authorizerResultTtlInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue Authorizer::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AuthorizerTypeMapper::GetNameForAuthorizerType(m_type));
  }

  if(m_providerARNsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> providerARNsJsonList(m_providerARNs.size());
   for(unsigned providerARNsIndex = 0; providerARNsIndex < providerARNsJsonList.GetLength(); ++providerARNsIndex)
   {
     providerARNsJsonList[providerARNsIndex].AsString(m_providerARNs[providerARNsIndex]);
   }
   payload.WithArray("providerARNs", std::move(providerARNsJsonList));

  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", m_authType);

  }

  if(m_authorizerUriHasBeenSet)
  {
   payload.WithString("authorizerUri", m_authorizerUri);

  }

  if(m_authorizerCredentialsHasBeenSet)
  {
   payload.WithString("authorizerCredentials", m_authorizerCredentials);

  }

  if(m_identitySourceHasBeenSet)
  {
   payload.WithString("identitySource", m_identitySource);

  }

  if(m_identityValidationExpressionHasBeenSet)
  {
   payload.WithString("identityValidationExpression", m_identityValidationExpression);

  }

  if(m_authorizerResultTtlInSecondsHasBeenSet)
  {
   payload.WithInteger("authorizerResultTtlInSeconds", m_authorizerResultTtlInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
