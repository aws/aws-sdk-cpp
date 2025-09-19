/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/LicenseServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

LicenseServer::LicenseServer(JsonView jsonValue)
{
  *this = jsonValue;
}

LicenseServer& LicenseServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProvisioningStatus"))
  {
    m_provisioningStatus = LicenseServerEndpointProvisioningStatusMapper::GetLicenseServerEndpointProvisioningStatusForName(jsonValue.GetString("ProvisioningStatus"));
    m_provisioningStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HealthStatus"))
  {
    m_healthStatus = LicenseServerHealthStatusMapper::GetLicenseServerHealthStatusForName(jsonValue.GetString("HealthStatus"));
    m_healthStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ipv4Address"))
  {
    m_ipv4Address = jsonValue.GetString("Ipv4Address");
    m_ipv4AddressHasBeenSet = true;
  }
  return *this;
}

JsonValue LicenseServer::Jsonize() const
{
  JsonValue payload;

  if(m_provisioningStatusHasBeenSet)
  {
   payload.WithString("ProvisioningStatus", LicenseServerEndpointProvisioningStatusMapper::GetNameForLicenseServerEndpointProvisioningStatus(m_provisioningStatus));
  }

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("HealthStatus", LicenseServerHealthStatusMapper::GetNameForLicenseServerHealthStatus(m_healthStatus));
  }

  if(m_ipv4AddressHasBeenSet)
  {
   payload.WithString("Ipv4Address", m_ipv4Address);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
