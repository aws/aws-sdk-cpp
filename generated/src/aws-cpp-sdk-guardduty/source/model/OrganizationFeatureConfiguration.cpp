/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrganizationFeatureConfiguration.h>
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

OrganizationFeatureConfiguration::OrganizationFeatureConfiguration() : 
    m_name(OrgFeature::NOT_SET),
    m_nameHasBeenSet(false),
    m_autoEnable(OrgFeatureStatus::NOT_SET),
    m_autoEnableHasBeenSet(false),
    m_additionalConfigurationHasBeenSet(false)
{
}

OrganizationFeatureConfiguration::OrganizationFeatureConfiguration(JsonView jsonValue) : 
    m_name(OrgFeature::NOT_SET),
    m_nameHasBeenSet(false),
    m_autoEnable(OrgFeatureStatus::NOT_SET),
    m_autoEnableHasBeenSet(false),
    m_additionalConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationFeatureConfiguration& OrganizationFeatureConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = OrgFeatureMapper::GetOrgFeatureForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoEnable"))
  {
    m_autoEnable = OrgFeatureStatusMapper::GetOrgFeatureStatusForName(jsonValue.GetString("autoEnable"));

    m_autoEnableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalConfiguration"))
  {
    Aws::Utils::Array<JsonView> additionalConfigurationJsonList = jsonValue.GetArray("additionalConfiguration");
    for(unsigned additionalConfigurationIndex = 0; additionalConfigurationIndex < additionalConfigurationJsonList.GetLength(); ++additionalConfigurationIndex)
    {
      m_additionalConfiguration.push_back(additionalConfigurationJsonList[additionalConfigurationIndex].AsObject());
    }
    m_additionalConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationFeatureConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", OrgFeatureMapper::GetNameForOrgFeature(m_name));
  }

  if(m_autoEnableHasBeenSet)
  {
   payload.WithString("autoEnable", OrgFeatureStatusMapper::GetNameForOrgFeatureStatus(m_autoEnable));
  }

  if(m_additionalConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalConfigurationJsonList(m_additionalConfiguration.size());
   for(unsigned additionalConfigurationIndex = 0; additionalConfigurationIndex < additionalConfigurationJsonList.GetLength(); ++additionalConfigurationIndex)
   {
     additionalConfigurationJsonList[additionalConfigurationIndex].AsObject(m_additionalConfiguration[additionalConfigurationIndex].Jsonize());
   }
   payload.WithArray("additionalConfiguration", std::move(additionalConfigurationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
