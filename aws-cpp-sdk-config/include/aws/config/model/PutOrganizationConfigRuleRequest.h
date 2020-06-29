/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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


    /**
     * <p>The name that you assign to an organization config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const{ return m_organizationConfigRuleName; }

    /**
     * <p>The name that you assign to an organization config rule.</p>
     */
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }

    /**
     * <p>The name that you assign to an organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(const Aws::String& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = value; }

    /**
     * <p>The name that you assign to an organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(Aws::String&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::move(value); }

    /**
     * <p>The name that you assign to an organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(const char* value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName.assign(value); }

    /**
     * <p>The name that you assign to an organization config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(const Aws::String& value) { SetOrganizationConfigRuleName(value); return *this;}

    /**
     * <p>The name that you assign to an organization config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(Aws::String&& value) { SetOrganizationConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name that you assign to an organization config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(const char* value) { SetOrganizationConfigRuleName(value); return *this;}


    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. </p>
     */
    inline const OrganizationManagedRuleMetadata& GetOrganizationManagedRuleMetadata() const{ return m_organizationManagedRuleMetadata; }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. </p>
     */
    inline bool OrganizationManagedRuleMetadataHasBeenSet() const { return m_organizationManagedRuleMetadataHasBeenSet; }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. </p>
     */
    inline void SetOrganizationManagedRuleMetadata(const OrganizationManagedRuleMetadata& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = value; }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. </p>
     */
    inline void SetOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadata&& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = std::move(value); }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. </p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationManagedRuleMetadata(const OrganizationManagedRuleMetadata& value) { SetOrganizationManagedRuleMetadata(value); return *this;}

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. </p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadata&& value) { SetOrganizationManagedRuleMetadata(std::move(value)); return *this;}


    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object.</p>
     */
    inline const OrganizationCustomRuleMetadata& GetOrganizationCustomRuleMetadata() const{ return m_organizationCustomRuleMetadata; }

    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object.</p>
     */
    inline bool OrganizationCustomRuleMetadataHasBeenSet() const { return m_organizationCustomRuleMetadataHasBeenSet; }

    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object.</p>
     */
    inline void SetOrganizationCustomRuleMetadata(const OrganizationCustomRuleMetadata& value) { m_organizationCustomRuleMetadataHasBeenSet = true; m_organizationCustomRuleMetadata = value; }

    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object.</p>
     */
    inline void SetOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadata&& value) { m_organizationCustomRuleMetadataHasBeenSet = true; m_organizationCustomRuleMetadata = std::move(value); }

    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationCustomRuleMetadata(const OrganizationCustomRuleMetadata& value) { SetOrganizationCustomRuleMetadata(value); return *this;}

    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadata&& value) { SetOrganizationCustomRuleMetadata(std::move(value)); return *this;}


    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization config rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedAccounts() const{ return m_excludedAccounts; }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization config rule.</p>
     */
    inline bool ExcludedAccountsHasBeenSet() const { return m_excludedAccountsHasBeenSet; }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization config rule.</p>
     */
    inline void SetExcludedAccounts(const Aws::Vector<Aws::String>& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = value; }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization config rule.</p>
     */
    inline void SetExcludedAccounts(Aws::Vector<Aws::String>&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = std::move(value); }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithExcludedAccounts(const Aws::Vector<Aws::String>& value) { SetExcludedAccounts(value); return *this;}

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithExcludedAccounts(Aws::Vector<Aws::String>&& value) { SetExcludedAccounts(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& AddExcludedAccounts(const Aws::String& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& AddExcludedAccounts(Aws::String&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization config rule.</p>
     */
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
