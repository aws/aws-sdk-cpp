/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/ApiKeyCredential.h>
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

ApiKeyCredential::ApiKeyCredential() : 
    m_apiKeyHasBeenSet(false)
{
}

ApiKeyCredential::ApiKeyCredential(JsonView jsonValue) : 
    m_apiKeyHasBeenSet(false)
{
  *this = jsonValue;
}

ApiKeyCredential& ApiKeyCredential::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiKey"))
  {
    m_apiKey = jsonValue.GetString("apiKey");

    m_apiKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiKeyCredential::Jsonize() const
{
  JsonValue payload;

  if(m_apiKeyHasBeenSet)
  {
   payload.WithString("apiKey", m_apiKey);

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
