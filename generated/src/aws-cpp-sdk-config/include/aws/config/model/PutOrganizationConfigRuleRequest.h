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
    AWS_CONFIGSERVICE_API PutOrganizationConfigRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutOrganizationConfigRule"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name that you assign to an organization Config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const{ return m_organizationConfigRuleName; }

    /**
     * <p>The name that you assign to an organization Config rule.</p>
     */
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }

    /**
     * <p>The name that you assign to an organization Config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(const Aws::String& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = value; }

    /**
     * <p>The name that you assign to an organization Config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(Aws::String&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::move(value); }

    /**
     * <p>The name that you assign to an organization Config rule.</p>
     */
    inline void SetOrganizationConfigRuleName(const char* value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName.assign(value); }

    /**
     * <p>The name that you assign to an organization Config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(const Aws::String& value) { SetOrganizationConfigRuleName(value); return *this;}

    /**
     * <p>The name that you assign to an organization Config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(Aws::String&& value) { SetOrganizationConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name that you assign to an organization Config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(const char* value) { SetOrganizationConfigRuleName(value); return *this;}


    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. This object specifies
     * organization managed rule metadata such as resource type and ID of Amazon Web
     * Services resource along with the rule identifier. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p>
     */
    inline const OrganizationManagedRuleMetadata& GetOrganizationManagedRuleMetadata() const{ return m_organizationManagedRuleMetadata; }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. This object specifies
     * organization managed rule metadata such as resource type and ID of Amazon Web
     * Services resource along with the rule identifier. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p>
     */
    inline bool OrganizationManagedRuleMetadataHasBeenSet() const { return m_organizationManagedRuleMetadataHasBeenSet; }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. This object specifies
     * organization managed rule metadata such as resource type and ID of Amazon Web
     * Services resource along with the rule identifier. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p>
     */
    inline void SetOrganizationManagedRuleMetadata(const OrganizationManagedRuleMetadata& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = value; }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. This object specifies
     * organization managed rule metadata such as resource type and ID of Amazon Web
     * Services resource along with the rule identifier. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p>
     */
    inline void SetOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadata&& value) { m_organizationManagedRuleMetadataHasBeenSet = true; m_organizationManagedRuleMetadata = std::move(value); }

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. This object specifies
     * organization managed rule metadata such as resource type and ID of Amazon Web
     * Services resource along with the rule identifier. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationManagedRuleMetadata(const OrganizationManagedRuleMetadata& value) { SetOrganizationManagedRuleMetadata(value); return *this;}

    /**
     * <p>An <code>OrganizationManagedRuleMetadata</code> object. This object specifies
     * organization managed rule metadata such as resource type and ID of Amazon Web
     * Services resource along with the rule identifier. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationManagedRuleMetadata(OrganizationManagedRuleMetadata&& value) { SetOrganizationManagedRuleMetadata(std::move(value)); return *this;}


    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object. This object specifies
     * organization custom rule metadata such as resource type, resource ID of Amazon
     * Web Services resource, Lambda function ARN, and organization trigger types that
     * trigger Config to evaluate your Amazon Web Services resources against a rule. It
     * also provides the frequency with which you want Config to run evaluations for
     * the rule if the trigger type is periodic.</p>
     */
    inline const OrganizationCustomRuleMetadata& GetOrganizationCustomRuleMetadata() const{ return m_organizationCustomRuleMetadata; }

    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object. This object specifies
     * organization custom rule metadata such as resource type, resource ID of Amazon
     * Web Services resource, Lambda function ARN, and organization trigger types that
     * trigger Config to evaluate your Amazon Web Services resources against a rule. It
     * also provides the frequency with which you want Config to run evaluations for
     * the rule if the trigger type is periodic.</p>
     */
    inline bool OrganizationCustomRuleMetadataHasBeenSet() const { return m_organizationCustomRuleMetadataHasBeenSet; }

    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object. This object specifies
     * organization custom rule metadata such as resource type, resource ID of Amazon
     * Web Services resource, Lambda function ARN, and organization trigger types that
     * trigger Config to evaluate your Amazon Web Services resources against a rule. It
     * also provides the frequency with which you want Config to run evaluations for
     * the rule if the trigger type is periodic.</p>
     */
    inline void SetOrganizationCustomRuleMetadata(const OrganizationCustomRuleMetadata& value) { m_organizationCustomRuleMetadataHasBeenSet = true; m_organizationCustomRuleMetadata = value; }

    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object. This object specifies
     * organization custom rule metadata such as resource type, resource ID of Amazon
     * Web Services resource, Lambda function ARN, and organization trigger types that
     * trigger Config to evaluate your Amazon Web Services resources against a rule. It
     * also provides the frequency with which you want Config to run evaluations for
     * the rule if the trigger type is periodic.</p>
     */
    inline void SetOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadata&& value) { m_organizationCustomRuleMetadataHasBeenSet = true; m_organizationCustomRuleMetadata = std::move(value); }

    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object. This object specifies
     * organization custom rule metadata such as resource type, resource ID of Amazon
     * Web Services resource, Lambda function ARN, and organization trigger types that
     * trigger Config to evaluate your Amazon Web Services resources against a rule. It
     * also provides the frequency with which you want Config to run evaluations for
     * the rule if the trigger type is periodic.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationCustomRuleMetadata(const OrganizationCustomRuleMetadata& value) { SetOrganizationCustomRuleMetadata(value); return *this;}

    /**
     * <p>An <code>OrganizationCustomRuleMetadata</code> object. This object specifies
     * organization custom rule metadata such as resource type, resource ID of Amazon
     * Web Services resource, Lambda function ARN, and organization trigger types that
     * trigger Config to evaluate your Amazon Web Services resources against a rule. It
     * also provides the frequency with which you want Config to run evaluations for
     * the rule if the trigger type is periodic.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationCustomRuleMetadata(OrganizationCustomRuleMetadata&& value) { SetOrganizationCustomRuleMetadata(std::move(value)); return *this;}


    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization Config rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedAccounts() const{ return m_excludedAccounts; }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization Config rule.</p>
     */
    inline bool ExcludedAccountsHasBeenSet() const { return m_excludedAccountsHasBeenSet; }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization Config rule.</p>
     */
    inline void SetExcludedAccounts(const Aws::Vector<Aws::String>& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = value; }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization Config rule.</p>
     */
    inline void SetExcludedAccounts(Aws::Vector<Aws::String>&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = std::move(value); }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization Config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithExcludedAccounts(const Aws::Vector<Aws::String>& value) { SetExcludedAccounts(value); return *this;}

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization Config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithExcludedAccounts(Aws::Vector<Aws::String>&& value) { SetExcludedAccounts(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization Config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& AddExcludedAccounts(const Aws::String& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization Config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& AddExcludedAccounts(Aws::String&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of accounts that you want to exclude from an
     * organization Config rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& AddExcludedAccounts(const char* value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }


    /**
     * <p>An <code>OrganizationCustomPolicyRuleMetadata</code> object. This object
     * specifies metadata for your organization's Config Custom Policy rule. The
     * metadata includes the runtime system in use, which accounts have debug logging
     * enabled, and other custom rule metadata, such as resource type, resource ID of
     * Amazon Web Services resource, and organization trigger types that initiate
     * Config to evaluate Amazon Web Services resources against a rule.</p>
     */
    inline const OrganizationCustomPolicyRuleMetadata& GetOrganizationCustomPolicyRuleMetadata() const{ return m_organizationCustomPolicyRuleMetadata; }

    /**
     * <p>An <code>OrganizationCustomPolicyRuleMetadata</code> object. This object
     * specifies metadata for your organization's Config Custom Policy rule. The
     * metadata includes the runtime system in use, which accounts have debug logging
     * enabled, and other custom rule metadata, such as resource type, resource ID of
     * Amazon Web Services resource, and organization trigger types that initiate
     * Config to evaluate Amazon Web Services resources against a rule.</p>
     */
    inline bool OrganizationCustomPolicyRuleMetadataHasBeenSet() const { return m_organizationCustomPolicyRuleMetadataHasBeenSet; }

    /**
     * <p>An <code>OrganizationCustomPolicyRuleMetadata</code> object. This object
     * specifies metadata for your organization's Config Custom Policy rule. The
     * metadata includes the runtime system in use, which accounts have debug logging
     * enabled, and other custom rule metadata, such as resource type, resource ID of
     * Amazon Web Services resource, and organization trigger types that initiate
     * Config to evaluate Amazon Web Services resources against a rule.</p>
     */
    inline void SetOrganizationCustomPolicyRuleMetadata(const OrganizationCustomPolicyRuleMetadata& value) { m_organizationCustomPolicyRuleMetadataHasBeenSet = true; m_organizationCustomPolicyRuleMetadata = value; }

    /**
     * <p>An <code>OrganizationCustomPolicyRuleMetadata</code> object. This object
     * specifies metadata for your organization's Config Custom Policy rule. The
     * metadata includes the runtime system in use, which accounts have debug logging
     * enabled, and other custom rule metadata, such as resource type, resource ID of
     * Amazon Web Services resource, and organization trigger types that initiate
     * Config to evaluate Amazon Web Services resources against a rule.</p>
     */
    inline void SetOrganizationCustomPolicyRuleMetadata(OrganizationCustomPolicyRuleMetadata&& value) { m_organizationCustomPolicyRuleMetadataHasBeenSet = true; m_organizationCustomPolicyRuleMetadata = std::move(value); }

    /**
     * <p>An <code>OrganizationCustomPolicyRuleMetadata</code> object. This object
     * specifies metadata for your organization's Config Custom Policy rule. The
     * metadata includes the runtime system in use, which accounts have debug logging
     * enabled, and other custom rule metadata, such as resource type, resource ID of
     * Amazon Web Services resource, and organization trigger types that initiate
     * Config to evaluate Amazon Web Services resources against a rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationCustomPolicyRuleMetadata(const OrganizationCustomPolicyRuleMetadata& value) { SetOrganizationCustomPolicyRuleMetadata(value); return *this;}

    /**
     * <p>An <code>OrganizationCustomPolicyRuleMetadata</code> object. This object
     * specifies metadata for your organization's Config Custom Policy rule. The
     * metadata includes the runtime system in use, which accounts have debug logging
     * enabled, and other custom rule metadata, such as resource type, resource ID of
     * Amazon Web Services resource, and organization trigger types that initiate
     * Config to evaluate Amazon Web Services resources against a rule.</p>
     */
    inline PutOrganizationConfigRuleRequest& WithOrganizationCustomPolicyRuleMetadata(OrganizationCustomPolicyRuleMetadata&& value) { SetOrganizationCustomPolicyRuleMetadata(std::move(value)); return *this;}

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
