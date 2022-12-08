/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/model/HandshakeParty.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class InviteAccountToOrganizationRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API InviteAccountToOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InviteAccountToOrganization"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier (ID) of the Amazon Web Services account that you want to
     * invite to join your organization. This is a JSON object that contains the
     * following elements:</p> <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account
     * id number</b> </i>&gt;" }</code> </p> <p>If you use the CLI, you can submit this
     * as a single string, similar to the following example:</p> <p> <code>--target
     * Id=123456789012,Type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, you must provide the Amazon Web Services account ID number as
     * the <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target Id=diego@example.com,Type=EMAIL</code> </p>
     */
    inline const HandshakeParty& GetTarget() const{ return m_target; }

    /**
     * <p>The identifier (ID) of the Amazon Web Services account that you want to
     * invite to join your organization. This is a JSON object that contains the
     * following elements:</p> <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account
     * id number</b> </i>&gt;" }</code> </p> <p>If you use the CLI, you can submit this
     * as a single string, similar to the following example:</p> <p> <code>--target
     * Id=123456789012,Type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, you must provide the Amazon Web Services account ID number as
     * the <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target Id=diego@example.com,Type=EMAIL</code> </p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The identifier (ID) of the Amazon Web Services account that you want to
     * invite to join your organization. This is a JSON object that contains the
     * following elements:</p> <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account
     * id number</b> </i>&gt;" }</code> </p> <p>If you use the CLI, you can submit this
     * as a single string, similar to the following example:</p> <p> <code>--target
     * Id=123456789012,Type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, you must provide the Amazon Web Services account ID number as
     * the <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target Id=diego@example.com,Type=EMAIL</code> </p>
     */
    inline void SetTarget(const HandshakeParty& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The identifier (ID) of the Amazon Web Services account that you want to
     * invite to join your organization. This is a JSON object that contains the
     * following elements:</p> <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account
     * id number</b> </i>&gt;" }</code> </p> <p>If you use the CLI, you can submit this
     * as a single string, similar to the following example:</p> <p> <code>--target
     * Id=123456789012,Type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, you must provide the Amazon Web Services account ID number as
     * the <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target Id=diego@example.com,Type=EMAIL</code> </p>
     */
    inline void SetTarget(HandshakeParty&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The identifier (ID) of the Amazon Web Services account that you want to
     * invite to join your organization. This is a JSON object that contains the
     * following elements:</p> <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account
     * id number</b> </i>&gt;" }</code> </p> <p>If you use the CLI, you can submit this
     * as a single string, similar to the following example:</p> <p> <code>--target
     * Id=123456789012,Type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, you must provide the Amazon Web Services account ID number as
     * the <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target Id=diego@example.com,Type=EMAIL</code> </p>
     */
    inline InviteAccountToOrganizationRequest& WithTarget(const HandshakeParty& value) { SetTarget(value); return *this;}

    /**
     * <p>The identifier (ID) of the Amazon Web Services account that you want to
     * invite to join your organization. This is a JSON object that contains the
     * following elements:</p> <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account
     * id number</b> </i>&gt;" }</code> </p> <p>If you use the CLI, you can submit this
     * as a single string, similar to the following example:</p> <p> <code>--target
     * Id=123456789012,Type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, you must provide the Amazon Web Services account ID number as
     * the <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target Id=diego@example.com,Type=EMAIL</code> </p>
     */
    inline InviteAccountToOrganizationRequest& WithTarget(HandshakeParty&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline const Aws::String& GetNotes() const{ return m_notes; }

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline InviteAccountToOrganizationRequest& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline InviteAccountToOrganizationRequest& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline InviteAccountToOrganizationRequest& WithNotes(const char* value) { SetNotes(value); return *this;}


    /**
     * <p>A list of tags that you want to attach to the account when it becomes a
     * member of the organization. For each tag in the list, you must specify both a
     * tag key and a value. You can set the value to an empty string, but you can't set
     * it to <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p> 
     * <p>Any tags in the request are checked for compliance with any applicable tag
     * policies when the request is made. The request is rejected if the tags in the
     * request don't match the requirements of the policy at that time. Tag policy
     * compliance is <i> <b>not</b> </i> checked again when the invitation is accepted
     * and the tags are actually attached to the account. That means that if the tag
     * policy changes between the invitation and the acceptance, then that tags could
     * potentially be non-compliant.</p>   <p>If any one of the tags
     * is invalid or if you exceed the allowed number of tags for an account, then the
     * entire request fails and invitations are not sent.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags that you want to attach to the account when it becomes a
     * member of the organization. For each tag in the list, you must specify both a
     * tag key and a value. You can set the value to an empty string, but you can't set
     * it to <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p> 
     * <p>Any tags in the request are checked for compliance with any applicable tag
     * policies when the request is made. The request is rejected if the tags in the
     * request don't match the requirements of the policy at that time. Tag policy
     * compliance is <i> <b>not</b> </i> checked again when the invitation is accepted
     * and the tags are actually attached to the account. That means that if the tag
     * policy changes between the invitation and the acceptance, then that tags could
     * potentially be non-compliant.</p>   <p>If any one of the tags
     * is invalid or if you exceed the allowed number of tags for an account, then the
     * entire request fails and invitations are not sent.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags that you want to attach to the account when it becomes a
     * member of the organization. For each tag in the list, you must specify both a
     * tag key and a value. You can set the value to an empty string, but you can't set
     * it to <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p> 
     * <p>Any tags in the request are checked for compliance with any applicable tag
     * policies when the request is made. The request is rejected if the tags in the
     * request don't match the requirements of the policy at that time. Tag policy
     * compliance is <i> <b>not</b> </i> checked again when the invitation is accepted
     * and the tags are actually attached to the account. That means that if the tag
     * policy changes between the invitation and the acceptance, then that tags could
     * potentially be non-compliant.</p>   <p>If any one of the tags
     * is invalid or if you exceed the allowed number of tags for an account, then the
     * entire request fails and invitations are not sent.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags that you want to attach to the account when it becomes a
     * member of the organization. For each tag in the list, you must specify both a
     * tag key and a value. You can set the value to an empty string, but you can't set
     * it to <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p> 
     * <p>Any tags in the request are checked for compliance with any applicable tag
     * policies when the request is made. The request is rejected if the tags in the
     * request don't match the requirements of the policy at that time. Tag policy
     * compliance is <i> <b>not</b> </i> checked again when the invitation is accepted
     * and the tags are actually attached to the account. That means that if the tag
     * policy changes between the invitation and the acceptance, then that tags could
     * potentially be non-compliant.</p>   <p>If any one of the tags
     * is invalid or if you exceed the allowed number of tags for an account, then the
     * entire request fails and invitations are not sent.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags that you want to attach to the account when it becomes a
     * member of the organization. For each tag in the list, you must specify both a
     * tag key and a value. You can set the value to an empty string, but you can't set
     * it to <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p> 
     * <p>Any tags in the request are checked for compliance with any applicable tag
     * policies when the request is made. The request is rejected if the tags in the
     * request don't match the requirements of the policy at that time. Tag policy
     * compliance is <i> <b>not</b> </i> checked again when the invitation is accepted
     * and the tags are actually attached to the account. That means that if the tag
     * policy changes between the invitation and the acceptance, then that tags could
     * potentially be non-compliant.</p>   <p>If any one of the tags
     * is invalid or if you exceed the allowed number of tags for an account, then the
     * entire request fails and invitations are not sent.</p> 
     */
    inline InviteAccountToOrganizationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags that you want to attach to the account when it becomes a
     * member of the organization. For each tag in the list, you must specify both a
     * tag key and a value. You can set the value to an empty string, but you can't set
     * it to <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p> 
     * <p>Any tags in the request are checked for compliance with any applicable tag
     * policies when the request is made. The request is rejected if the tags in the
     * request don't match the requirements of the policy at that time. Tag policy
     * compliance is <i> <b>not</b> </i> checked again when the invitation is accepted
     * and the tags are actually attached to the account. That means that if the tag
     * policy changes between the invitation and the acceptance, then that tags could
     * potentially be non-compliant.</p>   <p>If any one of the tags
     * is invalid or if you exceed the allowed number of tags for an account, then the
     * entire request fails and invitations are not sent.</p> 
     */
    inline InviteAccountToOrganizationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags that you want to attach to the account when it becomes a
     * member of the organization. For each tag in the list, you must specify both a
     * tag key and a value. You can set the value to an empty string, but you can't set
     * it to <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p> 
     * <p>Any tags in the request are checked for compliance with any applicable tag
     * policies when the request is made. The request is rejected if the tags in the
     * request don't match the requirements of the policy at that time. Tag policy
     * compliance is <i> <b>not</b> </i> checked again when the invitation is accepted
     * and the tags are actually attached to the account. That means that if the tag
     * policy changes between the invitation and the acceptance, then that tags could
     * potentially be non-compliant.</p>   <p>If any one of the tags
     * is invalid or if you exceed the allowed number of tags for an account, then the
     * entire request fails and invitations are not sent.</p> 
     */
    inline InviteAccountToOrganizationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags that you want to attach to the account when it becomes a
     * member of the organization. For each tag in the list, you must specify both a
     * tag key and a value. You can set the value to an empty string, but you can't set
     * it to <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p> 
     * <p>Any tags in the request are checked for compliance with any applicable tag
     * policies when the request is made. The request is rejected if the tags in the
     * request don't match the requirements of the policy at that time. Tag policy
     * compliance is <i> <b>not</b> </i> checked again when the invitation is accepted
     * and the tags are actually attached to the account. That means that if the tag
     * policy changes between the invitation and the acceptance, then that tags could
     * potentially be non-compliant.</p>   <p>If any one of the tags
     * is invalid or if you exceed the allowed number of tags for an account, then the
     * entire request fails and invitations are not sent.</p> 
     */
    inline InviteAccountToOrganizationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    HandshakeParty m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
