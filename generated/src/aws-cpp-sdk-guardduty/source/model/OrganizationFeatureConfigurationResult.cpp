/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrganizationFeatureConfigurationResult.h>
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

OrganizationFeatureConfigurationResult::OrganizationFeatureConfigurationResult() : 
    m_name(OrgFeature::NOT_SET),
    m_nameHasBeenSet(false),
    m_autoEnable(OrgFeatureStatus::NOT_SET),
    m_autoEnableHasBeenSet(false)
{
}

OrganizationFeatureConfigurationResult::OrganizationFeatureConfigurationResult(JsonView jsonValue) : 
    m_name(OrgFeature::NOT_SET),
    m_nameHasBeenSet(false),
    m_autoEnable(OrgFeatureStatus::NOT_SET),
    m_autoEnableHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationFeatureConfigurationResult& OrganizationFeatureConfigurationResult::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue OrganizationFeatureConfigurationResult::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
