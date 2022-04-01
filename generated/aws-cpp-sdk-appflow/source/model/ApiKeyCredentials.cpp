/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ApiKeyCredentials.h>
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

ApiKeyCredentials::ApiKeyCredentials() : 
    m_apiKeyHasBeenSet(false),
    m_apiSecretKeyHasBeenSet(false)
{
}

ApiKeyCredentials::ApiKeyCredentials(JsonView jsonValue) : 
    m_apiKeyHasBeenSet(false),
    m_apiSecretKeyHasBeenSet(false)
{
  *this = jsonValue;
}

ApiKeyCredentials& ApiKeyCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiKey"))
  {
    m_apiKey = jsonValue.GetString("apiKey");

    m_apiKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiSecretKey"))
  {
    m_apiSecretKey = jsonValue.GetString("apiSecretKey");

    m_apiSecretKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiKeyCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_apiKeyHasBeenSet)
  {
   payload.WithString("apiKey", m_apiKey);

  }

  if(m_apiSecretKeyHasBeenSet)
  {
   payload.WithString("apiSecretKey", m_apiSecretKey);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
