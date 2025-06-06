﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrganizationAdditionalConfiguration.h>
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

OrganizationAdditionalConfiguration::OrganizationAdditionalConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OrganizationAdditionalConfiguration& OrganizationAdditionalConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = OrgFeatureAdditionalConfigurationMapper::GetOrgFeatureAdditionalConfigurationForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoEnable"))
  {
    m_autoEnable = OrgFeatureStatusMapper::GetOrgFeatureStatusForName(jsonValue.GetString("autoEnable"));
    m_autoEnableHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationAdditionalConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", OrgFeatureAdditionalConfigurationMapper::GetNameForOrgFeatureAdditionalConfiguration(m_name));
  }

  if(m_autoEnableHasBeenSet)
  {
   payload.WithString("autoEnable", OrgFeatureStatusMapper::GetNameForOrgFeatureStatus(m_autoEnable));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
