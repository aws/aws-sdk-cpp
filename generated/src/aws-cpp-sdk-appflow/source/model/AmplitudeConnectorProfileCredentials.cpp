/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/AmplitudeConnectorProfileCredentials.h>
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

AmplitudeConnectorProfileCredentials::AmplitudeConnectorProfileCredentials() : 
    m_apiKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false)
{
}

AmplitudeConnectorProfileCredentials::AmplitudeConnectorProfileCredentials(JsonView jsonValue) : 
    m_apiKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false)
{
  *this = jsonValue;
}

AmplitudeConnectorProfileCredentials& AmplitudeConnectorProfileCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiKey"))
  {
    m_apiKey = jsonValue.GetString("apiKey");

    m_apiKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretKey"))
  {
    m_secretKey = jsonValue.GetString("secretKey");

    m_secretKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue AmplitudeConnectorProfileCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_apiKeyHasBeenSet)
  {
   payload.WithString("apiKey", m_apiKey);

  }

  if(m_secretKeyHasBeenSet)
  {
   payload.WithString("secretKey", m_secretKey);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
