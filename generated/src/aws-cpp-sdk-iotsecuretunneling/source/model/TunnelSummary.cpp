/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/model/TunnelSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSecureTunneling
{
namespace Model
{

TunnelSummary::TunnelSummary() : 
    m_tunnelIdHasBeenSet(false),
    m_tunnelArnHasBeenSet(false),
    m_status(TunnelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
}

TunnelSummary::TunnelSummary(JsonView jsonValue) : 
    m_tunnelIdHasBeenSet(false),
    m_tunnelArnHasBeenSet(false),
    m_status(TunnelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

TunnelSummary& TunnelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tunnelId"))
  {
    m_tunnelId = jsonValue.GetString("tunnelId");

    m_tunnelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tunnelArn"))
  {
    m_tunnelArn = jsonValue.GetString("tunnelArn");

    m_tunnelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TunnelStatusMapper::GetTunnelStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue TunnelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_tunnelIdHasBeenSet)
  {
   payload.WithString("tunnelId", m_tunnelId);

  }

  if(m_tunnelArnHasBeenSet)
  {
   payload.WithString("tunnelArn", m_tunnelArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TunnelStatusMapper::GetNameForTunnelStatus(m_status));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
