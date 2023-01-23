/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SingularConnectorProfileCredentials.h>
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

SingularConnectorProfileCredentials::SingularConnectorProfileCredentials() : 
    m_apiKeyHasBeenSet(false)
{
}

SingularConnectorProfileCredentials::SingularConnectorProfileCredentials(JsonView jsonValue) : 
    m_apiKeyHasBeenSet(false)
{
  *this = jsonValue;
}

SingularConnectorProfileCredentials& SingularConnectorProfileCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiKey"))
  {
    m_apiKey = jsonValue.GetString("apiKey");

    m_apiKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue SingularConnectorProfileCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_apiKeyHasBeenSet)
  {
   payload.WithString("apiKey", m_apiKey);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
