/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ConnectionOAuthClientResponseParameters.h>
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

ConnectionOAuthClientResponseParameters::ConnectionOAuthClientResponseParameters() : 
    m_clientIDHasBeenSet(false)
{
}

ConnectionOAuthClientResponseParameters::ConnectionOAuthClientResponseParameters(JsonView jsonValue) : 
    m_clientIDHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionOAuthClientResponseParameters& ConnectionOAuthClientResponseParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientID"))
  {
    m_clientID = jsonValue.GetString("ClientID");

    m_clientIDHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionOAuthClientResponseParameters::Jsonize() const
{
  JsonValue payload;

  if(m_clientIDHasBeenSet)
  {
   payload.WithString("ClientID", m_clientID);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
