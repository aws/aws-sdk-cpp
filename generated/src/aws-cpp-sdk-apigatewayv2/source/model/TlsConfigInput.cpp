/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/TlsConfigInput.h>
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

TlsConfigInput::TlsConfigInput() : 
    m_serverNameToVerifyHasBeenSet(false)
{
}

TlsConfigInput::TlsConfigInput(JsonView jsonValue) : 
    m_serverNameToVerifyHasBeenSet(false)
{
  *this = jsonValue;
}

TlsConfigInput& TlsConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serverNameToVerify"))
  {
    m_serverNameToVerify = jsonValue.GetString("serverNameToVerify");

    m_serverNameToVerifyHasBeenSet = true;
  }

  return *this;
}

JsonValue TlsConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_serverNameToVerifyHasBeenSet)
  {
   payload.WithString("serverNameToVerify", m_serverNameToVerify);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
