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
#include <aws/config/model/OrganizationCustomPolicyRuleMetadata.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class PutOrganizationConfigRuleRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutOrganizationConfigRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutOrganizationConfigRule"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name that you assign to an organization Config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const { return m_organizationConfigRuleName; }
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }
    template<typename OrganizationConfigRuleNameT = Aws::String>
    void SetOrganizationConfigRuleName(OrganizationConfigRuleNameT&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::forward<OrganizationConfigRuleNameT>(value); }
    template<typename OrganizationConfigRuleNameT = Aws::String>
    PutOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(OrganizationConfigRuleNameT&& value) { SetOrganizationConfigRuleName(std::forward<OrganizationConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. This object specifies
     * organization managed rule metadata such as resource type and ID of Amazon Web
     * Services resource along with the rule identifier. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p>
     */
    inline const OrganizationManagedRuleMetadata& GetOrganizationManagedRuleMetadata() const { return m_organizationManagedRuleMetadata; }
    inline bool OrganizationManagedRuleMetadataHasBeenSet() const { return m_organizationManagedRuleMetadataHasBeenSet; }
    template<typename OrganizationManagedRuleMetadataT = OrganizationManagedRuleMetadata>
    void SetOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadataT&& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = std::forward<OrganizationManagedRuleMetadataT>(value); }
    template<typename OrganizationManagedRuleMetadataT = OrganizationManagedRuleMetadata>
    PutOrganizationConfigRuleRequest& WithOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadataT&& value) { SetOrganizationManagedRuleMetadata(std::forward<OrganizationManagedRuleMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object. This object specifies
     * organization custom rule metadata such as resource type, resource ID of Amazon
     * Web Services resource, Lambda function ARN, and organization trigger types that
     * trigger Config to evaluate your Amazon Web Services resources against a rule. It
     * also provides the frequency with which you want Config to run evaluations for
     * the rule if the trigger type is periodic.</p>
     */
    inline const OrganizationCustomRuleMetadata& GetOrganizationCustomRuleMetadata() const { return m_organizationCustomRuleMetadata; }
    inline bool OrganizationCustomRuleMetadataHasBeenSet() const { return m_organizationCustomRuleMetadataHasBeenSet; }
    template<typename OrganizationCustomRuleMetadataT = OrganizationCustomRuleMetadata>
    void SetOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadataT&& value) { m_organizationCustomRuleMetadataHasBeenSet = true; m_organizationCustomRuleMetadata = std::forward<OrganizationCustomRuleMetadataT>(value); }
    template<typename OrganizationCustomRuleMetadataT = OrganizationCustomRuleMetadata>
    PutOrganizationConfigRuleRequest& WithOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadataT&& value) { SetOrganizationCustomRuleMetadata(std::forward<OrganizationCustomRuleMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization Config rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedAccounts() const { return m_excludedAccounts; }
    inline bool ExcludedAccountsHasBeenSet() const { return m_excludedAccountsHasBeenSet; }
    template<typename ExcludedAccountsT = Aws::Vector<Aws::String>>
    void SetExcludedAccounts(ExcludedAccountsT&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = std::forward<ExcludedAccountsT>(value); }
    template<typename ExcludedAccountsT = Aws::Vector<Aws::String>>
    PutOrganizationConfigRuleRequest& WithExcludedAccounts(ExcludedAccountsT&& value) { SetExcludedAccounts(std::forward<ExcludedAccountsT>(value)); return *this;}
    template<typename ExcludedAccountsT = Aws::String>
    PutOrganizationConfigRuleRequest& AddExcludedAccounts(ExcludedAccountsT&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.emplace_back(std::forward<ExcludedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An <code>OrganizationCustomPolicyRuleMetadata</code> object. This object
     * specifies metadata for your organization's Config Custom Policy rule. The
     * metadata includes the runtime system in use, which accounts have debug logging
     * enabled, and other custom rule metadata, such as resource type, resource ID of
     * Amazon Web Services resource, and organization trigger types that initiate
     * Config to evaluate Amazon Web Services resources against a rule.</p>
     */
    inline const OrganizationCustomPolicyRuleMetadata& GetOrganizationCustomPolicyRuleMetadata() const { return m_organizationCustomPolicyRuleMetadata; }
    inline bool OrganizationCustomPolicyRuleMetadataHasBeenSet() const { return m_organizationCustomPolicyRuleMetadataHasBeenSet; }
    template<typename OrganizationCustomPolicyRuleMetadataT = OrganizationCustomPolicyRuleMetadata>
    void SetOrganizationCustomPolicyRuleMetadata(OrganizationCustomPolicyRuleMetadataT&& value) { m_organizationCustomPolicyRuleMetadataHasBeenSet = true; m_organizationCustomPolicyRuleMetadata = std::forward<OrganizationCustomPolicyRuleMetadataT>(value); }
    template<typename OrganizationCustomPolicyRuleMetadataT = OrganizationCustomPolicyRuleMetadata>
    PutOrganizationConfigRuleRequest& WithOrganizationCustomPolicyRuleMetadata(OrganizationCustomPolicyRuleMetadataT&& value) { SetOrganizationCustomPolicyRuleMetadata(std::forward<OrganizationCustomPolicyRuleMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet = false;

    OrganizationManagedRuleMetadata m_organizationManagedRuleMetadata;
    bool m_organizationManagedRuleMetadataHasBeenSet = false;

    OrganizationCustomRuleMetadata m_organizationCustomRuleMetadata;
    bool m_organizationCustomRuleMetadataHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedAccounts;
    bool m_excludedAccountsHasBeenSet = false;

    OrganizationCustomPolicyRuleMetadata m_organizationCustomPolicyRuleMetadata;
    bool m_organizationCustomPolicyRuleMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
