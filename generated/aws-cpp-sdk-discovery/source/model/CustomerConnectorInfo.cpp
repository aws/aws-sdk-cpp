/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/CustomerConnectorInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

CustomerConnectorInfo::CustomerConnectorInfo() : 
    m_activeConnectors(0),
    m_activeConnectorsHasBeenSet(false),
    m_healthyConnectors(0),
    m_healthyConnectorsHasBeenSet(false),
    m_blackListedConnectors(0),
    m_blackListedConnectorsHasBeenSet(false),
    m_shutdownConnectors(0),
    m_shutdownConnectorsHasBeenSet(false),
    m_unhealthyConnectors(0),
    m_unhealthyConnectorsHasBeenSet(false),
    m_totalConnectors(0),
    m_totalConnectorsHasBeenSet(false),
    m_unknownConnectors(0),
    m_unknownConnectorsHasBeenSet(false)
{
}

CustomerConnectorInfo::CustomerConnectorInfo(JsonView jsonValue) : 
    m_activeConnectors(0),
    m_activeConnectorsHasBeenSet(false),
    m_healthyConnectors(0),
    m_healthyConnectorsHasBeenSet(false),
    m_blackListedConnectors(0),
    m_blackListedConnectorsHasBeenSet(false),
    m_shutdownConnectors(0),
    m_shutdownConnectorsHasBeenSet(false),
    m_unhealthyConnectors(0),
    m_unhealthyConnectorsHasBeenSet(false),
    m_totalConnectors(0),
    m_totalConnectorsHasBeenSet(false),
    m_unknownConnectors(0),
    m_unknownConnectorsHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerConnectorInfo& CustomerConnectorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeConnectors"))
  {
    m_activeConnectors = jsonValue.GetInteger("activeConnectors");

    m_activeConnectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthyConnectors"))
  {
    m_healthyConnectors = jsonValue.GetInteger("healthyConnectors");

    m_healthyConnectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blackListedConnectors"))
  {
    m_blackListedConnectors = jsonValue.GetInteger("blackListedConnectors");

    m_blackListedConnectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shutdownConnectors"))
  {
    m_shutdownConnectors = jsonValue.GetInteger("shutdownConnectors");

    m_shutdownConnectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unhealthyConnectors"))
  {
    m_unhealthyConnectors = jsonValue.GetInteger("unhealthyConnectors");

    m_unhealthyConnectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalConnectors"))
  {
    m_totalConnectors = jsonValue.GetInteger("totalConnectors");

    m_totalConnectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unknownConnectors"))
  {
    m_unknownConnectors = jsonValue.GetInteger("unknownConnectors");

    m_unknownConnectorsHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerConnectorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_activeConnectorsHasBeenSet)
  {
   payload.WithInteger("activeConnectors", m_activeConnectors);

  }

  if(m_healthyConnectorsHasBeenSet)
  {
   payload.WithInteger("healthyConnectors", m_healthyConnectors);

  }

  if(m_blackListedConnectorsHasBeenSet)
  {
   payload.WithInteger("blackListedConnectors", m_blackListedConnectors);

  }

  if(m_shutdownConnectorsHasBeenSet)
  {
   payload.WithInteger("shutdownConnectors", m_shutdownConnectors);

  }

  if(m_unhealthyConnectorsHasBeenSet)
  {
   payload.WithInteger("unhealthyConnectors", m_unhealthyConnectors);

  }

  if(m_totalConnectorsHasBeenSet)
  {
   payload.WithInteger("totalConnectors", m_totalConnectors);

  }

  if(m_unknownConnectorsHasBeenSet)
  {
   payload.WithInteger("unknownConnectors", m_unknownConnectors);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
