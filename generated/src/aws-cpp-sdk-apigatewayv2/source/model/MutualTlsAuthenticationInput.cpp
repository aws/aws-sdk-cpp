/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/MutualTlsAuthenticationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

MutualTlsAuthenticationInput::MutualTlsAuthenticationInput() : 
    m_truststoreUriHasBeenSet(false),
    m_truststoreVersionHasBeenSet(false)
{
}

MutualTlsAuthenticationInput::MutualTlsAuthenticationInput(JsonView jsonValue) : 
    m_truststoreUriHasBeenSet(false),
    m_truststoreVersionHasBeenSet(false)
{
  *this = jsonValue;
}

MutualTlsAuthenticationInput& MutualTlsAuthenticationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("truststoreUri"))
  {
    m_truststoreUri = jsonValue.GetString("truststoreUri");

    m_truststoreUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("truststoreVersion"))
  {
    m_truststoreVersion = jsonValue.GetString("truststoreVersion");

    m_truststoreVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue MutualTlsAuthenticationInput::Jsonize() const
{
  JsonValue payload;

  if(m_truststoreUriHasBeenSet)
  {
   payload.WithString("truststoreUri", m_truststoreUri);

  }

  if(m_truststoreVersionHasBeenSet)
  {
   payload.WithString("truststoreVersion", m_truststoreVersion);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
