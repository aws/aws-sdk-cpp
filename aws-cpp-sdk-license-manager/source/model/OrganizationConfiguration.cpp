/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/OrganizationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

OrganizationConfiguration::OrganizationConfiguration() : 
    m_enableIntegration(false),
    m_enableIntegrationHasBeenSet(false)
{
}

OrganizationConfiguration::OrganizationConfiguration(JsonView jsonValue) : 
    m_enableIntegration(false),
    m_enableIntegrationHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationConfiguration& OrganizationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableIntegration"))
  {
    m_enableIntegration = jsonValue.GetBool("EnableIntegration");

    m_enableIntegrationHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableIntegrationHasBeenSet)
  {
   payload.WithBool("EnableIntegration", m_enableIntegration);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
