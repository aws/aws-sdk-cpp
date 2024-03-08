/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrganizationFeatureStatisticsAdditionalConfiguration.h>
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

OrganizationFeatureStatisticsAdditionalConfiguration::OrganizationFeatureStatisticsAdditionalConfiguration() : 
    m_name(OrgFeatureAdditionalConfiguration::NOT_SET),
    m_nameHasBeenSet(false),
    m_enabledAccountsCount(0),
    m_enabledAccountsCountHasBeenSet(false)
{
}

OrganizationFeatureStatisticsAdditionalConfiguration::OrganizationFeatureStatisticsAdditionalConfiguration(JsonView jsonValue) : 
    m_name(OrgFeatureAdditionalConfiguration::NOT_SET),
    m_nameHasBeenSet(false),
    m_enabledAccountsCount(0),
    m_enabledAccountsCountHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationFeatureStatisticsAdditionalConfiguration& OrganizationFeatureStatisticsAdditionalConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = OrgFeatureAdditionalConfigurationMapper::GetOrgFeatureAdditionalConfigurationForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabledAccountsCount"))
  {
    m_enabledAccountsCount = jsonValue.GetInteger("enabledAccountsCount");

    m_enabledAccountsCountHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationFeatureStatisticsAdditionalConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", OrgFeatureAdditionalConfigurationMapper::GetNameForOrgFeatureAdditionalConfiguration(m_name));
  }

  if(m_enabledAccountsCountHasBeenSet)
  {
   payload.WithInteger("enabledAccountsCount", m_enabledAccountsCount);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
