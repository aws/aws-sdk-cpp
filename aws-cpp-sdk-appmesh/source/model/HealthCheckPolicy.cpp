/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HealthCheckPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

HealthCheckPolicy::HealthCheckPolicy() : 
    m_healthyThreshold(0),
    m_healthyThresholdHasBeenSet(false),
    m_intervalMillis(0),
    m_intervalMillisHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(PortProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_timeoutMillis(0),
    m_timeoutMillisHasBeenSet(false),
    m_unhealthyThreshold(0),
    m_unhealthyThresholdHasBeenSet(false)
{
}

HealthCheckPolicy::HealthCheckPolicy(JsonView jsonValue) : 
    m_healthyThreshold(0),
    m_healthyThresholdHasBeenSet(false),
    m_intervalMillis(0),
    m_intervalMillisHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(PortProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_timeoutMillis(0),
    m_timeoutMillisHasBeenSet(false),
    m_unhealthyThreshold(0),
    m_unhealthyThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

HealthCheckPolicy& HealthCheckPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("healthyThreshold"))
  {
    m_healthyThreshold = jsonValue.GetInteger("healthyThreshold");

    m_healthyThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intervalMillis"))
  {
    m_intervalMillis = jsonValue.GetInt64("intervalMillis");

    m_intervalMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = PortProtocolMapper::GetPortProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutMillis"))
  {
    m_timeoutMillis = jsonValue.GetInt64("timeoutMillis");

    m_timeoutMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unhealthyThreshold"))
  {
    m_unhealthyThreshold = jsonValue.GetInteger("unhealthyThreshold");

    m_unhealthyThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue HealthCheckPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_healthyThresholdHasBeenSet)
  {
   payload.WithInteger("healthyThreshold", m_healthyThreshold);

  }

  if(m_intervalMillisHasBeenSet)
  {
   payload.WithInt64("intervalMillis", m_intervalMillis);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", PortProtocolMapper::GetNameForPortProtocol(m_protocol));
  }

  if(m_timeoutMillisHasBeenSet)
  {
   payload.WithInt64("timeoutMillis", m_timeoutMillis);

  }

  if(m_unhealthyThresholdHasBeenSet)
  {
   payload.WithInteger("unhealthyThreshold", m_unhealthyThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
