/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/LinuxSubscriptionsDiscoverySettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

LinuxSubscriptionsDiscoverySettings::LinuxSubscriptionsDiscoverySettings() : 
    m_organizationIntegration(OrganizationIntegration::NOT_SET),
    m_organizationIntegrationHasBeenSet(false),
    m_sourceRegionsHasBeenSet(false)
{
}

LinuxSubscriptionsDiscoverySettings::LinuxSubscriptionsDiscoverySettings(JsonView jsonValue) : 
    m_organizationIntegration(OrganizationIntegration::NOT_SET),
    m_organizationIntegrationHasBeenSet(false),
    m_sourceRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

LinuxSubscriptionsDiscoverySettings& LinuxSubscriptionsDiscoverySettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationIntegration"))
  {
    m_organizationIntegration = OrganizationIntegrationMapper::GetOrganizationIntegrationForName(jsonValue.GetString("OrganizationIntegration"));

    m_organizationIntegrationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceRegions"))
  {
    Aws::Utils::Array<JsonView> sourceRegionsJsonList = jsonValue.GetArray("SourceRegions");
    for(unsigned sourceRegionsIndex = 0; sourceRegionsIndex < sourceRegionsJsonList.GetLength(); ++sourceRegionsIndex)
    {
      m_sourceRegions.push_back(sourceRegionsJsonList[sourceRegionsIndex].AsString());
    }
    m_sourceRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue LinuxSubscriptionsDiscoverySettings::Jsonize() const
{
  JsonValue payload;

  if(m_organizationIntegrationHasBeenSet)
  {
   payload.WithString("OrganizationIntegration", OrganizationIntegrationMapper::GetNameForOrganizationIntegration(m_organizationIntegration));
  }

  if(m_sourceRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceRegionsJsonList(m_sourceRegions.size());
   for(unsigned sourceRegionsIndex = 0; sourceRegionsIndex < sourceRegionsJsonList.GetLength(); ++sourceRegionsIndex)
   {
     sourceRegionsJsonList[sourceRegionsIndex].AsString(m_sourceRegions[sourceRegionsIndex]);
   }
   payload.WithArray("SourceRegions", std::move(sourceRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
