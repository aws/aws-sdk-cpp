/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DatadogConnectorProfileCredentials.h>
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

DatadogConnectorProfileCredentials::DatadogConnectorProfileCredentials() : 
    m_apiKeyHasBeenSet(false),
    m_applicationKeyHasBeenSet(false)
{
}

DatadogConnectorProfileCredentials::DatadogConnectorProfileCredentials(JsonView jsonValue) : 
    m_apiKeyHasBeenSet(false),
    m_applicationKeyHasBeenSet(false)
{
  *this = jsonValue;
}

DatadogConnectorProfileCredentials& DatadogConnectorProfileCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiKey"))
  {
    m_apiKey = jsonValue.GetString("apiKey");

    m_apiKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationKey"))
  {
    m_applicationKey = jsonValue.GetString("applicationKey");

    m_applicationKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue DatadogConnectorProfileCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_apiKeyHasBeenSet)
  {
   payload.WithString("apiKey", m_apiKey);

  }

  if(m_applicationKeyHasBeenSet)
  {
   payload.WithString("applicationKey", m_applicationKey);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
