/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/GatewayCapabilitySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

GatewayCapabilitySummary::GatewayCapabilitySummary() : 
    m_capabilityNamespaceHasBeenSet(false),
    m_capabilitySyncStatus(CapabilitySyncStatus::NOT_SET),
    m_capabilitySyncStatusHasBeenSet(false)
{
}

GatewayCapabilitySummary::GatewayCapabilitySummary(JsonView jsonValue) : 
    m_capabilityNamespaceHasBeenSet(false),
    m_capabilitySyncStatus(CapabilitySyncStatus::NOT_SET),
    m_capabilitySyncStatusHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayCapabilitySummary& GatewayCapabilitySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capabilityNamespace"))
  {
    m_capabilityNamespace = jsonValue.GetString("capabilityNamespace");

    m_capabilityNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capabilitySyncStatus"))
  {
    m_capabilitySyncStatus = CapabilitySyncStatusMapper::GetCapabilitySyncStatusForName(jsonValue.GetString("capabilitySyncStatus"));

    m_capabilitySyncStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayCapabilitySummary::Jsonize() const
{
  JsonValue payload;

  if(m_capabilityNamespaceHasBeenSet)
  {
   payload.WithString("capabilityNamespace", m_capabilityNamespace);

  }

  if(m_capabilitySyncStatusHasBeenSet)
  {
   payload.WithString("capabilitySyncStatus", CapabilitySyncStatusMapper::GetNameForCapabilitySyncStatus(m_capabilitySyncStatus));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
