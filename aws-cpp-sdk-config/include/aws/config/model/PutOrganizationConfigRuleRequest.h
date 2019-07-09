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
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationManagedRuleMetadata.h>
#include <aws/config/model/OrganizationCustomRuleMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API PutOrganizationConfigRuleRequest : public ConfigServiceRequest
  {
  public:
    PutOrganizationConfigRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutOrganizationConfigRule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetOrganizationConfigRuleName() const{ return m_organizationConfigRuleName; }

    
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }

    
    inline void SetOrganizationConfigRuleName(const Aws::String& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = value; }

    
    inline void SetOrganizationConfigRuleName(Aws::String&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::move(value); }

    
    inline void SetOrganizationConfigRuleName(const char* value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName.assign(value); }

    
    inline PutOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(const Aws::String& value) { SetOrganizationConfigRuleName(value); return *this;}

    
    inline PutOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(Aws::String&& value) { SetOrganizationConfigRuleName(std::move(value)); return *this;}

    
    inline PutOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(const char* value) { SetOrganizationConfigRuleName(value); return *this;}


    
    inline const OrganizationManagedRuleMetadata& GetOrganizationManagedRuleMetadata() const{ return m_organizationManagedRuleMetadata; }

    
    inline bool OrganizationManagedRuleMetadataHasBeenSet() const { return m_organizationManagedRuleMetadataHasBeenSet; }

    
    inline void SetOrganizationManagedRuleMetadata(const OrganizationManagedRuleMetadata& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = value; }

    
    inline void SetOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadata&& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = std::move(value); }

    
    inline PutOrganizationConfigRuleRequest& WithOrganizationManagedRuleMetadata(const OrganizationManagedRuleMetadata& value) { SetOrganizationManagedRuleMetadata(value); return *this;}

    
    inline PutOrganizationConfigRuleRequest& WithOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadata&& value) { SetOrganizationManagedRuleMetadata(std::move(value)); return *this;}


    
    inline const OrganizationCustomRuleMetadata& GetOrganizationCustomRuleMetadata() const{ return m_organizationCustomRuleMetadata; }

    
    inline bool OrganizationCustomRuleMetadataHasBeenSet() const { return m_organizationCustomRuleMetadataHasBeenSet; }

    
    inline void SetOrganizationCustomRuleMetadata(const OrganizationCustomRuleMetadata& value) { m_organizationCustomRuleMetadataHasBeenSet = true; m_organizationCustomRuleMetadata = value; }

    
    inline void SetOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadata&& value) { m_organizationCustomRuleMetadataHasBeenSet = true; m_organizationCustomRuleMetadata = std::move(value); }

    
    inline PutOrganizationConfigRuleRequest& WithOrganizationCustomRuleMetadata(const OrganizationCustomRuleMetadata& value) { SetOrganizationCustomRuleMetadata(value); return *this;}

    
    inline PutOrganizationConfigRuleRequest& WithOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadata&& value) { SetOrganizationCustomRuleMetadata(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetExcludedAccounts() const{ return m_excludedAccounts; }

    
    inline bool ExcludedAccountsHasBeenSet() const { return m_excludedAccountsHasBeenSet; }

    
    inline void SetExcludedAccounts(const Aws::Vector<Aws::String>& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = value; }

    
    inline void SetExcludedAccounts(Aws::Vector<Aws::String>&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = std::move(value); }

    
    inline PutOrganizationConfigRuleRequest& WithExcludedAccounts(const Aws::Vector<Aws::String>& value) { SetExcludedAccounts(value); return *this;}

    
    inline PutOrganizationConfigRuleRequest& WithExcludedAccounts(Aws::Vector<Aws::String>&& value) { SetExcludedAccounts(std::move(value)); return *this;}

    
    inline PutOrganizationConfigRuleRequest& AddExcludedAccounts(const Aws::String& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }

    
    inline PutOrganizationConfigRuleRequest& AddExcludedAccounts(Aws::String&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(std::move(value)); return *this; }

    
    inline PutOrganizationConfigRuleRequest& AddExcludedAccounts(const char* value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }

  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet;

    OrganizationManagedRuleMetadata m_organizationManagedRuleMetadata;
    bool m_organizationManagedRuleMetadataHasBeenSet;

    OrganizationCustomRuleMetadata m_organizationCustomRuleMetadata;
    bool m_organizationCustomRuleMetadataHasBeenSet;

    Aws::Vector<Aws::String> m_excludedAccounts;
    bool m_excludedAccountsHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
