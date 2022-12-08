/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/OrganizationFeatureSet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/PolicyTypeSummary.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains details about an organization. An organization is a collection of
   * accounts that are centrally managed together using consolidated billing,
   * organized hierarchically with organizational units (OUs), and controlled with
   * policies .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Organization">AWS
   * API Reference</a></p>
   */
  class Organization
  {
  public:
    AWS_ORGANIZATIONS_API Organization();
    AWS_ORGANIZATIONS_API Organization(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Organization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lowercase letters or digits.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lowercase letters or digits.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lowercase letters or digits.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lowercase letters or digits.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lowercase letters or digits.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lowercase letters or digits.</p>
     */
    inline Organization& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lowercase letters or digits.</p>
     */
    inline Organization& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lowercase letters or digits.</p>
     */
    inline Organization& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline Organization& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline Organization& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline Organization& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>Organizations User
     * Guide</i>.</p>
     */
    inline const OrganizationFeatureSet& GetFeatureSet() const{ return m_featureSet; }

    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>Organizations User
     * Guide</i>.</p>
     */
    inline bool FeatureSetHasBeenSet() const { return m_featureSetHasBeenSet; }

    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>Organizations User
     * Guide</i>.</p>
     */
    inline void SetFeatureSet(const OrganizationFeatureSet& value) { m_featureSetHasBeenSet = true; m_featureSet = value; }

    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>Organizations User
     * Guide</i>.</p>
     */
    inline void SetFeatureSet(OrganizationFeatureSet&& value) { m_featureSetHasBeenSet = true; m_featureSet = std::move(value); }

    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>Organizations User
     * Guide</i>.</p>
     */
    inline Organization& WithFeatureSet(const OrganizationFeatureSet& value) { SetFeatureSet(value); return *this;}

    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>Organizations User
     * Guide</i>.</p>
     */
    inline Organization& WithFeatureSet(OrganizationFeatureSet&& value) { SetFeatureSet(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * management account for the organization.</p> <p>For more information about ARNs
     * in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline const Aws::String& GetMasterAccountArn() const{ return m_masterAccountArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * management account for the organization.</p> <p>For more information about ARNs
     * in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline bool MasterAccountArnHasBeenSet() const { return m_masterAccountArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * management account for the organization.</p> <p>For more information about ARNs
     * in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline void SetMasterAccountArn(const Aws::String& value) { m_masterAccountArnHasBeenSet = true; m_masterAccountArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * management account for the organization.</p> <p>For more information about ARNs
     * in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline void SetMasterAccountArn(Aws::String&& value) { m_masterAccountArnHasBeenSet = true; m_masterAccountArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * management account for the organization.</p> <p>For more information about ARNs
     * in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline void SetMasterAccountArn(const char* value) { m_masterAccountArnHasBeenSet = true; m_masterAccountArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * management account for the organization.</p> <p>For more information about ARNs
     * in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline Organization& WithMasterAccountArn(const Aws::String& value) { SetMasterAccountArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * management account for the organization.</p> <p>For more information about ARNs
     * in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline Organization& WithMasterAccountArn(Aws::String&& value) { SetMasterAccountArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * management account for the organization.</p> <p>For more information about ARNs
     * in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline Organization& WithMasterAccountArn(const char* value) { SetMasterAccountArn(value); return *this;}


    /**
     * <p>The unique identifier (ID) of the management account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline const Aws::String& GetMasterAccountId() const{ return m_masterAccountId; }

    /**
     * <p>The unique identifier (ID) of the management account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline bool MasterAccountIdHasBeenSet() const { return m_masterAccountIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the management account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline void SetMasterAccountId(const Aws::String& value) { m_masterAccountIdHasBeenSet = true; m_masterAccountId = value; }

    /**
     * <p>The unique identifier (ID) of the management account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline void SetMasterAccountId(Aws::String&& value) { m_masterAccountIdHasBeenSet = true; m_masterAccountId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the management account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline void SetMasterAccountId(const char* value) { m_masterAccountIdHasBeenSet = true; m_masterAccountId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the management account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline Organization& WithMasterAccountId(const Aws::String& value) { SetMasterAccountId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the management account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline Organization& WithMasterAccountId(Aws::String&& value) { SetMasterAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the management account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline Organization& WithMasterAccountId(const char* value) { SetMasterAccountId(value); return *this;}


    /**
     * <p>The email address that is associated with the Amazon Web Services account
     * that is designated as the management account for the organization.</p>
     */
    inline const Aws::String& GetMasterAccountEmail() const{ return m_masterAccountEmail; }

    /**
     * <p>The email address that is associated with the Amazon Web Services account
     * that is designated as the management account for the organization.</p>
     */
    inline bool MasterAccountEmailHasBeenSet() const { return m_masterAccountEmailHasBeenSet; }

    /**
     * <p>The email address that is associated with the Amazon Web Services account
     * that is designated as the management account for the organization.</p>
     */
    inline void SetMasterAccountEmail(const Aws::String& value) { m_masterAccountEmailHasBeenSet = true; m_masterAccountEmail = value; }

    /**
     * <p>The email address that is associated with the Amazon Web Services account
     * that is designated as the management account for the organization.</p>
     */
    inline void SetMasterAccountEmail(Aws::String&& value) { m_masterAccountEmailHasBeenSet = true; m_masterAccountEmail = std::move(value); }

    /**
     * <p>The email address that is associated with the Amazon Web Services account
     * that is designated as the management account for the organization.</p>
     */
    inline void SetMasterAccountEmail(const char* value) { m_masterAccountEmailHasBeenSet = true; m_masterAccountEmail.assign(value); }

    /**
     * <p>The email address that is associated with the Amazon Web Services account
     * that is designated as the management account for the organization.</p>
     */
    inline Organization& WithMasterAccountEmail(const Aws::String& value) { SetMasterAccountEmail(value); return *this;}

    /**
     * <p>The email address that is associated with the Amazon Web Services account
     * that is designated as the management account for the organization.</p>
     */
    inline Organization& WithMasterAccountEmail(Aws::String&& value) { SetMasterAccountEmail(std::move(value)); return *this;}

    /**
     * <p>The email address that is associated with the Amazon Web Services account
     * that is designated as the management account for the organization.</p>
     */
    inline Organization& WithMasterAccountEmail(const char* value) { SetMasterAccountEmail(value); return *this;}


    /**
     *  <p>Do not use. This field is deprecated and doesn't provide complete
     * information about the policies in your organization.</p>  <p>To
     * determine the policies that are enabled and available for use in your
     * organization, use the <a>ListRoots</a> operation instead.</p>
     */
    inline const Aws::Vector<PolicyTypeSummary>& GetAvailablePolicyTypes() const{ return m_availablePolicyTypes; }

    /**
     *  <p>Do not use. This field is deprecated and doesn't provide complete
     * information about the policies in your organization.</p>  <p>To
     * determine the policies that are enabled and available for use in your
     * organization, use the <a>ListRoots</a> operation instead.</p>
     */
    inline bool AvailablePolicyTypesHasBeenSet() const { return m_availablePolicyTypesHasBeenSet; }

    /**
     *  <p>Do not use. This field is deprecated and doesn't provide complete
     * information about the policies in your organization.</p>  <p>To
     * determine the policies that are enabled and available for use in your
     * organization, use the <a>ListRoots</a> operation instead.</p>
     */
    inline void SetAvailablePolicyTypes(const Aws::Vector<PolicyTypeSummary>& value) { m_availablePolicyTypesHasBeenSet = true; m_availablePolicyTypes = value; }

    /**
     *  <p>Do not use. This field is deprecated and doesn't provide complete
     * information about the policies in your organization.</p>  <p>To
     * determine the policies that are enabled and available for use in your
     * organization, use the <a>ListRoots</a> operation instead.</p>
     */
    inline void SetAvailablePolicyTypes(Aws::Vector<PolicyTypeSummary>&& value) { m_availablePolicyTypesHasBeenSet = true; m_availablePolicyTypes = std::move(value); }

    /**
     *  <p>Do not use. This field is deprecated and doesn't provide complete
     * information about the policies in your organization.</p>  <p>To
     * determine the policies that are enabled and available for use in your
     * organization, use the <a>ListRoots</a> operation instead.</p>
     */
    inline Organization& WithAvailablePolicyTypes(const Aws::Vector<PolicyTypeSummary>& value) { SetAvailablePolicyTypes(value); return *this;}

    /**
     *  <p>Do not use. This field is deprecated and doesn't provide complete
     * information about the policies in your organization.</p>  <p>To
     * determine the policies that are enabled and available for use in your
     * organization, use the <a>ListRoots</a> operation instead.</p>
     */
    inline Organization& WithAvailablePolicyTypes(Aws::Vector<PolicyTypeSummary>&& value) { SetAvailablePolicyTypes(std::move(value)); return *this;}

    /**
     *  <p>Do not use. This field is deprecated and doesn't provide complete
     * information about the policies in your organization.</p>  <p>To
     * determine the policies that are enabled and available for use in your
     * organization, use the <a>ListRoots</a> operation instead.</p>
     */
    inline Organization& AddAvailablePolicyTypes(const PolicyTypeSummary& value) { m_availablePolicyTypesHasBeenSet = true; m_availablePolicyTypes.push_back(value); return *this; }

    /**
     *  <p>Do not use. This field is deprecated and doesn't provide complete
     * information about the policies in your organization.</p>  <p>To
     * determine the policies that are enabled and available for use in your
     * organization, use the <a>ListRoots</a> operation instead.</p>
     */
    inline Organization& AddAvailablePolicyTypes(PolicyTypeSummary&& value) { m_availablePolicyTypesHasBeenSet = true; m_availablePolicyTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    OrganizationFeatureSet m_featureSet;
    bool m_featureSetHasBeenSet = false;

    Aws::String m_masterAccountArn;
    bool m_masterAccountArnHasBeenSet = false;

    Aws::String m_masterAccountId;
    bool m_masterAccountIdHasBeenSet = false;

    Aws::String m_masterAccountEmail;
    bool m_masterAccountEmailHasBeenSet = false;

    Aws::Vector<PolicyTypeSummary> m_availablePolicyTypes;
    bool m_availablePolicyTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
