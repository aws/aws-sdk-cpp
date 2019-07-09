/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/config/model/OrganizationConfigRuleStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

OrganizationConfigRuleStatus::OrganizationConfigRuleStatus() : 
    m_organizationConfigRuleNameHasBeenSet(false),
    m_organizationRuleStatus(OrganizationRuleStatus::NOT_SET),
    m_organizationRuleStatusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

OrganizationConfigRuleStatus::OrganizationConfigRuleStatus(JsonView jsonValue) : 
    m_organizationConfigRuleNameHasBeenSet(false),
    m_organizationRuleStatus(OrganizationRuleStatus::NOT_SET),
    m_organizationRuleStatusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationConfigRuleStatus& OrganizationConfigRuleStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationConfigRuleName"))
  {
    m_organizationConfigRuleName = jsonValue.GetString("OrganizationConfigRuleName");

    m_organizationConfigRuleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationRuleStatus"))
  {
    m_organizationRuleStatus = OrganizationRuleStatusMapper::GetOrganizationRuleStatusForName(jsonValue.GetString("OrganizationRuleStatus"));

    m_organizationRuleStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationConfigRuleStatus::Jsonize() const
{
  JsonValue payload;

  if(m_organizationConfigRuleNameHasBeenSet)
  {
   payload.WithString("OrganizationConfigRuleName", m_organizationConfigRuleName);

  }

  if(m_organizationRuleStatusHasBeenSet)
  {
   payload.WithString("OrganizationRuleStatus", OrganizationRuleStatusMapper::GetNameForOrganizationRuleStatus(m_organizationRuleStatus));
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
