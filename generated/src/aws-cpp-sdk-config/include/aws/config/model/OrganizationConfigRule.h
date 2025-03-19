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
#include <aws/config/model/OrganizationCustomPolicyRuleMetadataNoPolicy.h>
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
   * <p>An organization Config rule that has information about Config rules that
   * Config creates in member accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationConfigRule">AWS
   * API Reference</a></p>
   */
  class OrganizationConfigRule
  {
  public:
    AWS_CONFIGSERVICE_API OrganizationConfigRule() = default;
    AWS_CONFIGSERVICE_API OrganizationConfigRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationConfigRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you assign to organization Config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const { return m_organizationConfigRuleName; }
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }
    template<typename OrganizationConfigRuleNameT = Aws::String>
    void SetOrganizationConfigRuleName(OrganizationConfigRuleNameT&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::forward<OrganizationConfigRuleNameT>(value); }
    template<typename OrganizationConfigRuleNameT = Aws::String>
    OrganizationConfigRule& WithOrganizationConfigRuleName(OrganizationConfigRuleNameT&& value) { SetOrganizationConfigRuleName(std::forward<OrganizationConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of organization Config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleArn() const { return m_organizationConfigRuleArn; }
    inline bool OrganizationConfigRuleArnHasBeenSet() const { return m_organizationConfigRuleArnHasBeenSet; }
    template<typename OrganizationConfigRuleArnT = Aws::String>
    void SetOrganizationConfigRuleArn(OrganizationConfigRuleArnT&& value) { m_organizationConfigRuleArnHasBeenSet = true; m_organizationConfigRuleArn = std::forward<OrganizationConfigRuleArnT>(value); }
    template<typename OrganizationConfigRuleArnT = Aws::String>
    OrganizationConfigRule& WithOrganizationConfigRuleArn(OrganizationConfigRuleArnT&& value) { SetOrganizationConfigRuleArn(std::forward<OrganizationConfigRuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object.</p>
     */
    inline const OrganizationManagedRuleMetadata& GetOrganizationManagedRuleMetadata() const { return m_organizationManagedRuleMetadata; }
    inline bool OrganizationManagedRuleMetadataHasBeenSet() const { return m_organizationManagedRuleMetadataHasBeenSet; }
    template<typename OrganizationManagedRuleMetadataT = OrganizationManagedRuleMetadata>
    void SetOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadataT&& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = std::forward<OrganizationManagedRuleMetadataT>(value); }
    template<typename OrganizationManagedRuleMetadataT = OrganizationManagedRuleMetadata>
    OrganizationConfigRule& WithOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadataT&& value) { SetOrganizationManagedRuleMetadata(std::forward<OrganizationManagedRuleMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object.</p>
     */
    inline const OrganizationCustomRuleMetadata& GetOrganizationCustomRuleMetadata() const { return m_organizationCustomRuleMetadata; }
    inline bool OrganizationCustomRuleMetadataHasBeenSet() const { return m_organizationCustomRuleMetadataHasBeenSet; }
    template<typename OrganizationCustomRuleMetadataT = OrganizationCustomRuleMetadata>
    void SetOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadataT&& value) { m_organizationCustomRuleMetadataHasBeenSet = true; m_organizationCustomRuleMetadata = std::forward<OrganizationCustomRuleMetadataT>(value); }
    template<typename OrganizationCustomRuleMetadataT = OrganizationCustomRuleMetadata>
    OrganizationConfigRule& WithOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadataT&& value) { SetOrganizationCustomRuleMetadata(std::forward<OrganizationCustomRuleMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of accounts excluded from organization Config
     * rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedAccounts() const { return m_excludedAccounts; }
    inline bool ExcludedAccountsHasBeenSet() const { return m_excludedAccountsHasBeenSet; }
    template<typename ExcludedAccountsT = Aws::Vector<Aws::String>>
    void SetExcludedAccounts(ExcludedAccountsT&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = std::forward<ExcludedAccountsT>(value); }
    template<typename ExcludedAccountsT = Aws::Vector<Aws::String>>
    OrganizationConfigRule& WithExcludedAccounts(ExcludedAccountsT&& value) { SetExcludedAccounts(std::forward<ExcludedAccountsT>(value)); return *this;}
    template<typename ExcludedAccountsT = Aws::String>
    OrganizationConfigRule& AddExcludedAccounts(ExcludedAccountsT&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.emplace_back(std::forward<ExcludedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    OrganizationConfigRule& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies metadata for your organization's Config Custom
     * Policy rule. The metadata includes the runtime system in use, which accounts
     * have debug logging enabled, and other custom rule metadata, such as resource
     * type, resource ID of Amazon Web Services resource, and organization trigger
     * types that initiate Config to evaluate Amazon Web Services resources against a
     * rule.</p>
     */
    inline const OrganizationCustomPolicyRuleMetadataNoPolicy& GetOrganizationCustomPolicyRuleMetadata() const { return m_organizationCustomPolicyRuleMetadata; }
    inline bool OrganizationCustomPolicyRuleMetadataHasBeenSet() const { return m_organizationCustomPolicyRuleMetadataHasBeenSet; }
    template<typename OrganizationCustomPolicyRuleMetadataT = OrganizationCustomPolicyRuleMetadataNoPolicy>
    void SetOrganizationCustomPolicyRuleMetadata(OrganizationCustomPolicyRuleMetadataT&& value) { m_organizationCustomPolicyRuleMetadataHasBeenSet = true; m_organizationCustomPolicyRuleMetadata = std::forward<OrganizationCustomPolicyRuleMetadataT>(value); }
    template<typename OrganizationCustomPolicyRuleMetadataT = OrganizationCustomPolicyRuleMetadataNoPolicy>
    OrganizationConfigRule& WithOrganizationCustomPolicyRuleMetadata(OrganizationCustomPolicyRuleMetadataT&& value) { SetOrganizationCustomPolicyRuleMetadata(std::forward<OrganizationCustomPolicyRuleMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet = false;

    Aws::String m_organizationConfigRuleArn;
    bool m_organizationConfigRuleArnHasBeenSet = false;

    OrganizationManagedRuleMetadata m_organizationManagedRuleMetadata;
    bool m_organizationManagedRuleMetadataHasBeenSet = false;

    OrganizationCustomRuleMetadata m_organizationCustomRuleMetadata;
    bool m_organizationCustomRuleMetadataHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedAccounts;
    bool m_excludedAccountsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    OrganizationCustomPolicyRuleMetadataNoPolicy m_organizationCustomPolicyRuleMetadata;
    bool m_organizationCustomPolicyRuleMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
