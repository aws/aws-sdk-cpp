/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  /**
   * <p>An organization config rule that has information about config rules that AWS
   * Config creates in member accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationConfigRule">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API OrganizationConfigRule
  {
  public:
    OrganizationConfigRule();
    OrganizationConfigRule(Aws::Utils::Json::JsonView jsonValue);
    OrganizationConfigRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const{ return m_organizationConfigRuleName; }

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(const Aws::String& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = value; }

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(Aws::String&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::move(value); }

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(const char* value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName.assign(value); }

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline OrganizationConfigRule& WithOrganizationConfigRuleName(const Aws::String& value) { SetOrganizationConfigRuleName(value); return *this;}

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline OrganizationConfigRule& WithOrganizationConfigRuleName(Aws::String&& value) { SetOrganizationConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name that you assign to organization config rule.</p>
     */
    inline OrganizationConfigRule& WithOrganizationConfigRuleName(const char* value) { SetOrganizationConfigRuleName(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of organization config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleArn() const{ return m_organizationConfigRuleArn; }

    /**
     * <p>Amazon Resource Name (ARN) of organization config rule.</p>
     */
    inline bool OrganizationConfigRuleArnHasBeenSet() const { return m_organizationConfigRuleArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleArn(const Aws::String& value) { m_organizationConfigRuleArnHasBeenSet = true; m_organizationConfigRuleArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleArn(Aws::String&& value) { m_organizationConfigRuleArnHasBeenSet = true; m_organizationConfigRuleArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of organization config rule.</p>
     */
    inline void SetOrganizationConfigRuleArn(const char* value) { m_organizationConfigRuleArnHasBeenSet = true; m_organizationConfigRuleArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of organization config rule.</p>
     */
    inline OrganizationConfigRule& WithOrganizationConfigRuleArn(const Aws::String& value) { SetOrganizationConfigRuleArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of organization config rule.</p>
     */
    inline OrganizationConfigRule& WithOrganizationConfigRuleArn(Aws::String&& value) { SetOrganizationConfigRuleArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of organization config rule.</p>
     */
    inline OrganizationConfigRule& WithOrganizationConfigRuleArn(const char* value) { SetOrganizationConfigRuleArn(value); return *this;}


    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object.</p>
     */
    inline const OrganizationManagedRuleMetadata& GetOrganizationManagedRuleMetadata() const{ return m_organizationManagedRuleMetadata; }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object.</p>
     */
    inline bool OrganizationManagedRuleMetadataHasBeenSet() const { return m_organizationManagedRuleMetadataHasBeenSet; }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object.</p>
     */
    inline void SetOrganizationManagedRuleMetadata(const OrganizationManagedRuleMetadata& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = value; }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object.</p>
     */
    inline void SetOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadata&& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = std::move(value); }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object.</p>
     */
    inline OrganizationConfigRule& WithOrganizationManagedRuleMetadata(const OrganizationManagedRuleMetadata& value) { SetOrganizationManagedRuleMetadata(value); return *this;}

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object.</p>
     */
    inline OrganizationConfigRule& WithOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadata&& value) { SetOrganizationManagedRuleMetadata(std::move(value)); return *this;}


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
    inline OrganizationConfigRule& WithOrganizationCustomRuleMetadata(const OrganizationCustomRuleMetadata& value) { SetOrganizationCustomRuleMetadata(value); return *this;}

    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object.</p>
     */
    inline OrganizationConfigRule& WithOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadata&& value) { SetOrganizationCustomRuleMetadata(std::move(value)); return *this;}


    /**
     * <p>A comma-separated list of accounts excluded from organization config
     * rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedAccounts() const{ return m_excludedAccounts; }

    /**
     * <p>A comma-separated list of accounts excluded from organization config
     * rule.</p>
     */
    inline bool ExcludedAccountsHasBeenSet() const { return m_excludedAccountsHasBeenSet; }

    /**
     * <p>A comma-separated list of accounts excluded from organization config
     * rule.</p>
     */
    inline void SetExcludedAccounts(const Aws::Vector<Aws::String>& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = value; }

    /**
     * <p>A comma-separated list of accounts excluded from organization config
     * rule.</p>
     */
    inline void SetExcludedAccounts(Aws::Vector<Aws::String>&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = std::move(value); }

    /**
     * <p>A comma-separated list of accounts excluded from organization config
     * rule.</p>
     */
    inline OrganizationConfigRule& WithExcludedAccounts(const Aws::Vector<Aws::String>& value) { SetExcludedAccounts(value); return *this;}

    /**
     * <p>A comma-separated list of accounts excluded from organization config
     * rule.</p>
     */
    inline OrganizationConfigRule& WithExcludedAccounts(Aws::Vector<Aws::String>&& value) { SetExcludedAccounts(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of accounts excluded from organization config
     * rule.</p>
     */
    inline OrganizationConfigRule& AddExcludedAccounts(const Aws::String& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }

    /**
     * <p>A comma-separated list of accounts excluded from organization config
     * rule.</p>
     */
    inline OrganizationConfigRule& AddExcludedAccounts(Aws::String&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of accounts excluded from organization config
     * rule.</p>
     */
    inline OrganizationConfigRule& AddExcludedAccounts(const char* value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }


    /**
     * <p>The timestamp of the last update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The timestamp of the last update.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The timestamp of the last update.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The timestamp of the last update.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The timestamp of the last update.</p>
     */
    inline OrganizationConfigRule& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The timestamp of the last update.</p>
     */
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
