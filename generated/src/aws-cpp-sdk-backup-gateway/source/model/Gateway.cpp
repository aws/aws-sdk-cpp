/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/Gateway.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

Gateway::Gateway() : 
    m_gatewayArnHasBeenSet(false),
    m_gatewayDisplayNameHasBeenSet(false),
    m_gatewayType(GatewayType::NOT_SET),
    m_gatewayTypeHasBeenSet(false),
    m_hypervisorIdHasBeenSet(false),
    m_lastSeenTimeHasBeenSet(false)
{
}

Gateway::Gateway(JsonView jsonValue) : 
    m_gatewayArnHasBeenSet(false),
    m_gatewayDisplayNameHasBeenSet(false),
    m_gatewayType(GatewayType::NOT_SET),
    m_gatewayTypeHasBeenSet(false),
    m_hypervisorIdHasBeenSet(false),
    m_lastSeenTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Gateway& Gateway::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayArn"))
  {
    m_gatewayArn = jsonValue.GetString("GatewayArn");

    m_gatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayDisplayName"))
  {
    m_gatewayDisplayName = jsonValue.GetString("GatewayDisplayName");

    m_gatewayDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayType"))
  {
    m_gatewayType = GatewayTypeMapper::GetGatewayTypeForName(jsonValue.GetString("GatewayType"));

    m_gatewayTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HypervisorId"))
  {
    m_hypervisorId = jsonValue.GetString("HypervisorId");

    m_hypervisorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSeenTime"))
  {
    m_lastSeenTime = jsonValue.GetDouble("LastSeenTime");

    m_lastSeenTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Gateway::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayArnHasBeenSet)
  {
   payload.WithString("GatewayArn", m_gatewayArn);

  }

  if(m_gatewayDisplayNameHasBeenSet)
  {
   payload.WithString("GatewayDisplayName", m_gatewayDisplayName);

  }

  if(m_gatewayTypeHasBeenSet)
  {
   payload.WithString("GatewayType", GatewayTypeMapper::GetNameForGatewayType(m_gatewayType));
  }

  if(m_hypervisorIdHasBeenSet)
  {
   payload.WithString("HypervisorId", m_hypervisorId);

  }

  if(m_lastSeenTimeHasBeenSet)
  {
   payload.WithDouble("LastSeenTime", m_lastSeenTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
