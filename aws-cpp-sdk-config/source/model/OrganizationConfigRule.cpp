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

#include <aws/config/model/OrganizationConfigRule.h>
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

OrganizationConfigRule::OrganizationConfigRule() : 
    m_organizationConfigRuleNameHasBeenSet(false),
    m_organizationConfigRuleArnHasBeenSet(false),
    m_organizationManagedRuleMetadataHasBeenSet(false),
    m_organizationCustomRuleMetadataHasBeenSet(false),
    m_excludedAccountsHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

OrganizationConfigRule::OrganizationConfigRule(JsonView jsonValue) : 
    m_organizationConfigRuleNameHasBeenSet(false),
    m_organizationConfigRuleArnHasBeenSet(false),
    m_organizationManagedRuleMetadataHasBeenSet(false),
    m_organizationCustomRuleMetadataHasBeenSet(false),
    m_excludedAccountsHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationConfigRule& OrganizationConfigRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationConfigRuleName"))
  {
    m_organizationConfigRuleName = jsonValue.GetString("OrganizationConfigRuleName");

    m_organizationConfigRuleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationConfigRuleArn"))
  {
    m_organizationConfigRuleArn = jsonValue.GetString("OrganizationConfigRuleArn");

    m_organizationConfigRuleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationManagedRuleMetadata"))
  {
    m_organizationManagedRuleMetadata = jsonValue.GetObject("OrganizationManagedRuleMetadata");

    m_organizationManagedRuleMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationCustomRuleMetadata"))
  {
    m_organizationCustomRuleMetadata = jsonValue.GetObject("OrganizationCustomRuleMetadata");

    m_organizationCustomRuleMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludedAccounts"))
  {
    Array<JsonView> excludedAccountsJsonList = jsonValue.GetArray("ExcludedAccounts");
    for(unsigned excludedAccountsIndex = 0; excludedAccountsIndex < excludedAccountsJsonList.GetLength(); ++excludedAccountsIndex)
    {
      m_excludedAccounts.push_back(excludedAccountsJsonList[excludedAccountsIndex].AsString());
    }
    m_excludedAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationConfigRule::Jsonize() const
{
  JsonValue payload;

  if(m_organizationConfigRuleNameHasBeenSet)
  {
   payload.WithString("OrganizationConfigRuleName", m_organizationConfigRuleName);

  }

  if(m_organizationConfigRuleArnHasBeenSet)
  {
   payload.WithString("OrganizationConfigRuleArn", m_organizationConfigRuleArn);

  }

  if(m_organizationManagedRuleMetadataHasBeenSet)
  {
   payload.WithObject("OrganizationManagedRuleMetadata", m_organizationManagedRuleMetadata.Jsonize());

  }

  if(m_organizationCustomRuleMetadataHasBeenSet)
  {
   payload.WithObject("OrganizationCustomRuleMetadata", m_organizationCustomRuleMetadata.Jsonize());

  }

  if(m_excludedAccountsHasBeenSet)
  {
   Array<JsonValue> excludedAccountsJsonList(m_excludedAccounts.size());
   for(unsigned excludedAccountsIndex = 0; excludedAccountsIndex < excludedAccountsJsonList.GetLength(); ++excludedAccountsIndex)
   {
     excludedAccountsJsonList[excludedAccountsIndex].AsString(m_excludedAccounts[excludedAccountsIndex]);
   }
   payload.WithArray("ExcludedAccounts", std::move(excludedAccountsJsonList));

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
