/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UDPEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

UDPEndpoint::UDPEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

UDPEndpoint& UDPEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");
    m_portHasBeenSet = true;
  }
  return *this;
}

JsonValue UDPEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
