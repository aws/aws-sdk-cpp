/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/CreateConnectionApiKeyAuthRequestParameters.h>
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

CreateConnectionApiKeyAuthRequestParameters::CreateConnectionApiKeyAuthRequestParameters() : 
    m_apiKeyNameHasBeenSet(false),
    m_apiKeyValueHasBeenSet(false)
{
}

CreateConnectionApiKeyAuthRequestParameters::CreateConnectionApiKeyAuthRequestParameters(JsonView jsonValue) : 
    m_apiKeyNameHasBeenSet(false),
    m_apiKeyValueHasBeenSet(false)
{
  *this = jsonValue;
}

CreateConnectionApiKeyAuthRequestParameters& CreateConnectionApiKeyAuthRequestParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApiKeyName"))
  {
    m_apiKeyName = jsonValue.GetString("ApiKeyName");

    m_apiKeyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiKeyValue"))
  {
    m_apiKeyValue = jsonValue.GetString("ApiKeyValue");

    m_apiKeyValueHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateConnectionApiKeyAuthRequestParameters::Jsonize() const
{
  JsonValue payload;

  if(m_apiKeyNameHasBeenSet)
  {
   payload.WithString("ApiKeyName", m_apiKeyName);

  }

  if(m_apiKeyValueHasBeenSet)
  {
   payload.WithString("ApiKeyValue", m_apiKeyValue);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
