/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/LambdaAuthorizerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

LambdaAuthorizerConfig::LambdaAuthorizerConfig() : 
    m_authorizerResultTtlInSeconds(0),
    m_authorizerResultTtlInSecondsHasBeenSet(false),
    m_authorizerUriHasBeenSet(false),
    m_identityValidationExpressionHasBeenSet(false)
{
}

LambdaAuthorizerConfig::LambdaAuthorizerConfig(JsonView jsonValue) : 
    m_authorizerResultTtlInSeconds(0),
    m_authorizerResultTtlInSecondsHasBeenSet(false),
    m_authorizerUriHasBeenSet(false),
    m_identityValidationExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaAuthorizerConfig& LambdaAuthorizerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizerResultTtlInSeconds"))
  {
    m_authorizerResultTtlInSeconds = jsonValue.GetInteger("authorizerResultTtlInSeconds");

    m_authorizerResultTtlInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizerUri"))
  {
    m_authorizerUri = jsonValue.GetString("authorizerUri");

    m_authorizerUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identityValidationExpression"))
  {
    m_identityValidationExpression = jsonValue.GetString("identityValidationExpression");

    m_identityValidationExpressionHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaAuthorizerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_authorizerResultTtlInSecondsHasBeenSet)
  {
   payload.WithInteger("authorizerResultTtlInSeconds", m_authorizerResultTtlInSeconds);

  }

  if(m_authorizerUriHasBeenSet)
  {
   payload.WithString("authorizerUri", m_authorizerUri);

  }

  if(m_identityValidationExpressionHasBeenSet)
  {
   payload.WithString("identityValidationExpression", m_identityValidationExpression);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
