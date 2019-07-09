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

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationManagedRuleMetadata.h>
#include <aws/config/model/OrganizationCustomRuleMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  class AWS_CONFIGSERVICE_API OrganizationConfigRule
  {
  public:
    OrganizationConfigRule();
    OrganizationConfigRule(Aws::Utils::Json::JsonView jsonValue);
    OrganizationConfigRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetOrganizationConfigRuleName() const{ return m_organizationConfigRuleName; }

    
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }

    
    inline void SetOrganizationConfigRuleName(const Aws::String& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = value; }

    
    inline void SetOrganizationConfigRuleName(Aws::String&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::move(value); }

    
    inline void SetOrganizationConfigRuleName(const char* value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName.assign(value); }

    
    inline OrganizationConfigRule& WithOrganizationConfigRuleName(const Aws::String& value) { SetOrganizationConfigRuleName(value); return *this;}

    
    inline OrganizationConfigRule& WithOrganizationConfigRuleName(Aws::String&& value) { SetOrganizationConfigRuleName(std::move(value)); return *this;}

    
    inline OrganizationConfigRule& WithOrganizationConfigRuleName(const char* value) { SetOrganizationConfigRuleName(value); return *this;}


    
    inline const Aws::String& GetOrganizationConfigRuleArn() const{ return m_organizationConfigRuleArn; }

    
    inline bool OrganizationConfigRuleArnHasBeenSet() const { return m_organizationConfigRuleArnHasBeenSet; }

    
    inline void SetOrganizationConfigRuleArn(const Aws::String& value) { m_organizationConfigRuleArnHasBeenSet = true; m_organizationConfigRuleArn = value; }

    
    inline void SetOrganizationConfigRuleArn(Aws::String&& value) { m_organizationConfigRuleArnHasBeenSet = true; m_organizationConfigRuleArn = std::move(value); }

    
    inline void SetOrganizationConfigRuleArn(const char* value) { m_organizationConfigRuleArnHasBeenSet = true; m_organizationConfigRuleArn.assign(value); }

    
    inline OrganizationConfigRule& WithOrganizationConfigRuleArn(const Aws::String& value) { SetOrganizationConfigRuleArn(value); return *this;}

    
    inline OrganizationConfigRule& WithOrganizationConfigRuleArn(Aws::String&& value) { SetOrganizationConfigRuleArn(std::move(value)); return *this;}

    
    inline OrganizationConfigRule& WithOrganizationConfigRuleArn(const char* value) { SetOrganizationConfigRuleArn(value); return *this;}


    
    inline const OrganizationManagedRuleMetadata& GetOrganizationManagedRuleMetadata() const{ return m_organizationManagedRuleMetadata; }

    
    inline bool OrganizationManagedRuleMetadataHasBeenSet() const { return m_organizationManagedRuleMetadataHasBeenSet; }

    
    inline void SetOrganizationManagedRuleMetadata(const OrganizationManagedRuleMetadata& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = value; }

    
    inline void SetOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadata&& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = std::move(value); }

    
    inline OrganizationConfigRule& WithOrganizationManagedRuleMetadata(const OrganizationManagedRuleMetadata& value) { SetOrganizationManagedRuleMetadata(value); return *this;}

    
    inline OrganizationConfigRule& WithOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadata&& value) { SetOrganizationManagedRuleMetadata(std::move(value)); return *this;}


    
    inline const OrganizationCustomRuleMetadata& GetOrganizationCustomRuleMetadata() const{ return m_organizationCustomRuleMetadata; }

    
    inline bool OrganizationCustomRuleMetadataHasBeenSet() const { return m_organizationCustomRuleMetadataHasBeenSet; }

    
    inline void SetOrganizationCustomRuleMetadata(const OrganizationCustomRuleMetadata& value) { m_organizationCustomRuleMetadataHasBeenSet = true; m_organizationCustomRuleMetadata = value; }

    
    inline void SetOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadata&& value) { m_organizationCustomRuleMetadataHasBeenSet = true; m_organizationCustomRuleMetadata = std::move(value); }

    
    inline OrganizationConfigRule& WithOrganizationCustomRuleMetadata(const OrganizationCustomRuleMetadata& value) { SetOrganizationCustomRuleMetadata(value); return *this;}

    
    inline OrganizationConfigRule& WithOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadata&& value) { SetOrganizationCustomRuleMetadata(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetExcludedAccounts() const{ return m_excludedAccounts; }

    
    inline bool ExcludedAccountsHasBeenSet() const { return m_excludedAccountsHasBeenSet; }

    
    inline void SetExcludedAccounts(const Aws::Vector<Aws::String>& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = value; }

    
    inline void SetExcludedAccounts(Aws::Vector<Aws::String>&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = std::move(value); }

    
    inline OrganizationConfigRule& WithExcludedAccounts(const Aws::Vector<Aws::String>& value) { SetExcludedAccounts(value); return *this;}

    
    inline OrganizationConfigRule& WithExcludedAccounts(Aws::Vector<Aws::String>&& value) { SetExcludedAccounts(std::move(value)); return *this;}

    
    inline OrganizationConfigRule& AddExcludedAccounts(const Aws::String& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }

    
    inline OrganizationConfigRule& AddExcludedAccounts(Aws::String&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(std::move(value)); return *this; }

    
    inline OrganizationConfigRule& AddExcludedAccounts(const char* value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }


    
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    
    inline OrganizationConfigRule& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    
    inline OrganizationConfigRule& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet;

    Aws::String m_organizationConfigRuleArn;
    bool m_organizationConfigRuleArnHasBeenSet;

    OrganizationManagedRuleMetadata m_organizationManagedRuleMetadata;
    bool m_organizationManagedRuleMetadataHasBeenSet;

    OrganizationCustomRuleMetadata m_organizationCustomRuleMetadata;
    bool m_organizationCustomRuleMetadataHasBeenSet;

    Aws::Vector<Aws::String> m_excludedAccounts;
    bool m_excludedAccountsHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
