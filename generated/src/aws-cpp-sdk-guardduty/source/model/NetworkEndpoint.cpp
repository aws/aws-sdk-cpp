/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/NetworkEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

NetworkEndpoint::NetworkEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkEndpoint& NetworkEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ip"))
  {
    m_ip = jsonValue.GetString("ip");
    m_ipHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domain"))
  {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");
    m_locationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autonomousSystem"))
  {
    m_autonomousSystem = jsonValue.GetObject("autonomousSystem");
    m_autonomousSystemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connection"))
  {
    m_connection = jsonValue.GetObject("connection");
    m_connectionHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_ipHasBeenSet)
  {
   payload.WithString("ip", m_ip);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_autonomousSystemHasBeenSet)
  {
   payload.WithObject("autonomousSystem", m_autonomousSystem.Jsonize());

  }

  if(m_connectionHasBeenSet)
  {
   payload.WithObject("connection", m_connection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
