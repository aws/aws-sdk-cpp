/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/MethodSnapshot.h>
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

MethodSnapshot::MethodSnapshot() : 
    m_authorizationTypeHasBeenSet(false),
    m_apiKeyRequired(false),
    m_apiKeyRequiredHasBeenSet(false)
{
}

MethodSnapshot::MethodSnapshot(JsonView jsonValue) : 
    m_authorizationTypeHasBeenSet(false),
    m_apiKeyRequired(false),
    m_apiKeyRequiredHasBeenSet(false)
{
  *this = jsonValue;
}

MethodSnapshot& MethodSnapshot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizationType"))
  {
    m_authorizationType = jsonValue.GetString("authorizationType");

    m_authorizationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiKeyRequired"))
  {
    m_apiKeyRequired = jsonValue.GetBool("apiKeyRequired");

    m_apiKeyRequiredHasBeenSet = true;
  }

  return *this;
}

JsonValue MethodSnapshot::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationTypeHasBeenSet)
  {
   payload.WithString("authorizationType", m_authorizationType);

  }

  if(m_apiKeyRequiredHasBeenSet)
  {
   payload.WithBool("apiKeyRequired", m_apiKeyRequired);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
