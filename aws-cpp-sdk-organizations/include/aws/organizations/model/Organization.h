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
  class AWS_ORGANIZATIONS_API Organization
  {
  public:
    Organization();
    Organization(Aws::Utils::Json::JsonView jsonValue);
    Organization& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lower-case letters or digits.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lower-case letters or digits.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lower-case letters or digits.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lower-case letters or digits.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lower-case letters or digits.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lower-case letters or digits.</p>
     */
    inline Organization& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lower-case letters or digits.</p>
     */
    inline Organization& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lower-case letters or digits.</p>
     */
    inline Organization& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Organization& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Organization& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Organization& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline const OrganizationFeatureSet& GetFeatureSet() const{ return m_featureSet; }

    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline bool FeatureSetHasBeenSet() const { return m_featureSetHasBeenSet; }

    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetFeatureSet(const OrganizationFeatureSet& value) { m_featureSetHasBeenSet = true; m_featureSet = value; }

    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetFeatureSet(OrganizationFeatureSet&& value) { m_featureSetHasBeenSet = true; m_featureSet = std::move(value); }

    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Organization& WithFeatureSet(const OrganizationFeatureSet& value) { SetFeatureSet(value); return *this;}

    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * All Features in Your Organization</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Organization& WithFeatureSet(OrganizationFeatureSet&& value) { SetFeatureSet(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * master account for the organization.</p> <p>For more information about ARNs in
     * Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetMasterAccountArn() const{ return m_masterAccountArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * master account for the organization.</p> <p>For more information about ARNs in
     * Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline bool MasterAccountArnHasBeenSet() const { return m_masterAccountArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * master account for the organization.</p> <p>For more information about ARNs in
     * Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetMasterAccountArn(const Aws::String& value) { m_masterAccountArnHasBeenSet = true; m_masterAccountArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * master account for the organization.</p> <p>For more information about ARNs in
     * Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetMasterAccountArn(Aws::String&& value) { m_masterAccountArnHasBeenSet = true; m_masterAccountArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * master account for the organization.</p> <p>For more information about ARNs in
     * Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetMasterAccountArn(const char* value) { m_masterAccountArnHasBeenSet = true; m_masterAccountArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * master account for the organization.</p> <p>For more information about ARNs in
     * Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Organization& WithMasterAccountArn(const Aws::String& value) { SetMasterAccountArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * master account for the organization.</p> <p>For more information about ARNs in
     * Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Organization& WithMasterAccountArn(Aws::String&& value) { SetMasterAccountArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * master account for the organization.</p> <p>For more information about ARNs in
     * Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Organization& WithMasterAccountArn(const char* value) { SetMasterAccountArn(value); return *this;}


    /**
     * <p>The unique identifier (ID) of the master account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline const Aws::String& GetMasterAccountId() const{ return m_masterAccountId; }

    /**
     * <p>The unique identifier (ID) of the master account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline bool MasterAccountIdHasBeenSet() const { return m_masterAccountIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the master account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline void SetMasterAccountId(const Aws::String& value) { m_masterAccountIdHasBeenSet = true; m_masterAccountId = value; }

    /**
     * <p>The unique identifier (ID) of the master account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline void SetMasterAccountId(Aws::String&& value) { m_masterAccountIdHasBeenSet = true; m_masterAccountId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the master account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline void SetMasterAccountId(const char* value) { m_masterAccountIdHasBeenSet = true; m_masterAccountId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the master account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline Organization& WithMasterAccountId(const Aws::String& value) { SetMasterAccountId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the master account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline Organization& WithMasterAccountId(Aws::String&& value) { SetMasterAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the master account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline Organization& WithMasterAccountId(const char* value) { SetMasterAccountId(value); return *this;}


    /**
     * <p>The email address that is associated with the AWS account that is designated
     * as the master account for the organization.</p>
     */
    inline const Aws::String& GetMasterAccountEmail() const{ return m_masterAccountEmail; }

    /**
     * <p>The email address that is associated with the AWS account that is designated
     * as the master account for the organization.</p>
     */
    inline bool MasterAccountEmailHasBeenSet() const { return m_masterAccountEmailHasBeenSet; }

    /**
     * <p>The email address that is associated with the AWS account that is designated
     * as the master account for the organization.</p>
     */
    inline void SetMasterAccountEmail(const Aws::String& value) { m_masterAccountEmailHasBeenSet = true; m_masterAccountEmail = value; }

    /**
     * <p>The email address that is associated with the AWS account that is designated
     * as the master account for the organization.</p>
     */
    inline void SetMasterAccountEmail(Aws::String&& value) { m_masterAccountEmailHasBeenSet = true; m_masterAccountEmail = std::move(value); }

    /**
     * <p>The email address that is associated with the AWS account that is designated
     * as the master account for the organization.</p>
     */
    inline void SetMasterAccountEmail(const char* value) { m_masterAccountEmailHasBeenSet = true; m_masterAccountEmail.assign(value); }

    /**
     * <p>The email address that is associated with the AWS account that is designated
     * as the master account for the organization.</p>
     */
    inline Organization& WithMasterAccountEmail(const Aws::String& value) { SetMasterAccountEmail(value); return *this;}

    /**
     * <p>The email address that is associated with the AWS account that is designated
     * as the master account for the organization.</p>
     */
    inline Organization& WithMasterAccountEmail(Aws::String&& value) { SetMasterAccountEmail(std::move(value)); return *this;}

    /**
     * <p>The email address that is associated with the AWS account that is designated
     * as the master account for the organization.</p>
     */
    inline Organization& WithMasterAccountEmail(const char* value) { SetMasterAccountEmail(value); return *this;}


    /**
     * <p>A list of policy types that are enabled for this organization. For example,
     * if your organization has all features enabled, then service control policies
     * (SCPs) are included in the list.</p> <note> <p>Even if a policy type is shown as
     * available in the organization, you can separately enable and disable them at the
     * root level by using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. Use
     * <a>ListRoots</a> to see the status of a policy type in that root.</p> </note>
     */
    inline const Aws::Vector<PolicyTypeSummary>& GetAvailablePolicyTypes() const{ return m_availablePolicyTypes; }

    /**
     * <p>A list of policy types that are enabled for this organization. For example,
     * if your organization has all features enabled, then service control policies
     * (SCPs) are included in the list.</p> <note> <p>Even if a policy type is shown as
     * available in the organization, you can separately enable and disable them at the
     * root level by using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. Use
     * <a>ListRoots</a> to see the status of a policy type in that root.</p> </note>
     */
    inline bool AvailablePolicyTypesHasBeenSet() const { return m_availablePolicyTypesHasBeenSet; }

    /**
     * <p>A list of policy types that are enabled for this organization. For example,
     * if your organization has all features enabled, then service control policies
     * (SCPs) are included in the list.</p> <note> <p>Even if a policy type is shown as
     * available in the organization, you can separately enable and disable them at the
     * root level by using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. Use
     * <a>ListRoots</a> to see the status of a policy type in that root.</p> </note>
     */
    inline void SetAvailablePolicyTypes(const Aws::Vector<PolicyTypeSummary>& value) { m_availablePolicyTypesHasBeenSet = true; m_availablePolicyTypes = value; }

    /**
     * <p>A list of policy types that are enabled for this organization. For example,
     * if your organization has all features enabled, then service control policies
     * (SCPs) are included in the list.</p> <note> <p>Even if a policy type is shown as
     * available in the organization, you can separately enable and disable them at the
     * root level by using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. Use
     * <a>ListRoots</a> to see the status of a policy type in that root.</p> </note>
     */
    inline void SetAvailablePolicyTypes(Aws::Vector<PolicyTypeSummary>&& value) { m_availablePolicyTypesHasBeenSet = true; m_availablePolicyTypes = std::move(value); }

    /**
     * <p>A list of policy types that are enabled for this organization. For example,
     * if your organization has all features enabled, then service control policies
     * (SCPs) are included in the list.</p> <note> <p>Even if a policy type is shown as
     * available in the organization, you can separately enable and disable them at the
     * root level by using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. Use
     * <a>ListRoots</a> to see the status of a policy type in that root.</p> </note>
     */
    inline Organization& WithAvailablePolicyTypes(const Aws::Vector<PolicyTypeSummary>& value) { SetAvailablePolicyTypes(value); return *this;}

    /**
     * <p>A list of policy types that are enabled for this organization. For example,
     * if your organization has all features enabled, then service control policies
     * (SCPs) are included in the list.</p> <note> <p>Even if a policy type is shown as
     * available in the organization, you can separately enable and disable them at the
     * root level by using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. Use
     * <a>ListRoots</a> to see the status of a policy type in that root.</p> </note>
     */
    inline Organization& WithAvailablePolicyTypes(Aws::Vector<PolicyTypeSummary>&& value) { SetAvailablePolicyTypes(std::move(value)); return *this;}

    /**
     * <p>A list of policy types that are enabled for this organization. For example,
     * if your organization has all features enabled, then service control policies
     * (SCPs) are included in the list.</p> <note> <p>Even if a policy type is shown as
     * available in the organization, you can separately enable and disable them at the
     * root level by using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. Use
     * <a>ListRoots</a> to see the status of a policy type in that root.</p> </note>
     */
    inline Organization& AddAvailablePolicyTypes(const PolicyTypeSummary& value) { m_availablePolicyTypesHasBeenSet = true; m_availablePolicyTypes.push_back(value); return *this; }

    /**
     * <p>A list of policy types that are enabled for this organization. For example,
     * if your organization has all features enabled, then service control policies
     * (SCPs) are included in the list.</p> <note> <p>Even if a policy type is shown as
     * available in the organization, you can separately enable and disable them at the
     * root level by using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. Use
     * <a>ListRoots</a> to see the status of a policy type in that root.</p> </note>
     */
    inline Organization& AddAvailablePolicyTypes(PolicyTypeSummary&& value) { m_availablePolicyTypesHasBeenSet = true; m_availablePolicyTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    OrganizationFeatureSet m_featureSet;
    bool m_featureSetHasBeenSet;

    Aws::String m_masterAccountArn;
    bool m_masterAccountArnHasBeenSet;

    Aws::String m_masterAccountId;
    bool m_masterAccountIdHasBeenSet;

    Aws::String m_masterAccountEmail;
    bool m_masterAccountEmailHasBeenSet;

    Aws::Vector<PolicyTypeSummary> m_availablePolicyTypes;
    bool m_availablePolicyTypesHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
