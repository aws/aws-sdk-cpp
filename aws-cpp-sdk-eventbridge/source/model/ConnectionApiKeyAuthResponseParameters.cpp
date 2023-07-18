/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ConnectionApiKeyAuthResponseParameters.h>
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

ConnectionApiKeyAuthResponseParameters::ConnectionApiKeyAuthResponseParameters() : 
    m_apiKeyNameHasBeenSet(false)
{
}

ConnectionApiKeyAuthResponseParameters::ConnectionApiKeyAuthResponseParameters(JsonView jsonValue) : 
    m_apiKeyNameHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionApiKeyAuthResponseParameters& ConnectionApiKeyAuthResponseParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApiKeyName"))
  {
    m_apiKeyName = jsonValue.GetString("ApiKeyName");

    m_apiKeyNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionApiKeyAuthResponseParameters::Jsonize() const
{
  JsonValue payload;

  if(m_apiKeyNameHasBeenSet)
  {
   payload.WithString("ApiKeyName", m_apiKeyName);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
