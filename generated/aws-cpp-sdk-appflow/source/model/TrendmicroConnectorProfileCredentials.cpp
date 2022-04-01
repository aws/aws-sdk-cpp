/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/TrendmicroConnectorProfileCredentials.h>
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

TrendmicroConnectorProfileCredentials::TrendmicroConnectorProfileCredentials() : 
    m_apiSecretKeyHasBeenSet(false)
{
}

TrendmicroConnectorProfileCredentials::TrendmicroConnectorProfileCredentials(JsonView jsonValue) : 
    m_apiSecretKeyHasBeenSet(false)
{
  *this = jsonValue;
}

TrendmicroConnectorProfileCredentials& TrendmicroConnectorProfileCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiSecretKey"))
  {
    m_apiSecretKey = jsonValue.GetString("apiSecretKey");

    m_apiSecretKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue TrendmicroConnectorProfileCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_apiSecretKeyHasBeenSet)
  {
   payload.WithString("apiSecretKey", m_apiSecretKey);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
