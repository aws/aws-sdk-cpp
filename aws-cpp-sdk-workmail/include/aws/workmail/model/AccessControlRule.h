/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/AccessControlRuleEffect.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>A rule that controls access to an WorkMail organization.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AccessControlRule">AWS
   * API Reference</a></p>
   */
  class AccessControlRule
  {
  public:
    AWS_WORKMAIL_API AccessControlRule();
    AWS_WORKMAIL_API AccessControlRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API AccessControlRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rule name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The rule name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The rule name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The rule name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The rule name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The rule name.</p>
     */
    inline AccessControlRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The rule name.</p>
     */
    inline AccessControlRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The rule name.</p>
     */
    inline AccessControlRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The rule effect.</p>
     */
    inline const AccessControlRuleEffect& GetEffect() const{ return m_effect; }

    /**
     * <p>The rule effect.</p>
     */
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }

    /**
     * <p>The rule effect.</p>
     */
    inline void SetEffect(const AccessControlRuleEffect& value) { m_effectHasBeenSet = true; m_effect = value; }

    /**
     * <p>The rule effect.</p>
     */
    inline void SetEffect(AccessControlRuleEffect&& value) { m_effectHasBeenSet = true; m_effect = std::move(value); }

    /**
     * <p>The rule effect.</p>
     */
    inline AccessControlRule& WithEffect(const AccessControlRuleEffect& value) { SetEffect(value); return *this;}

    /**
     * <p>The rule effect.</p>
     */
    inline AccessControlRule& WithEffect(AccessControlRuleEffect&& value) { SetEffect(std::move(value)); return *this;}


    /**
     * <p>The rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The rule description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The rule description.</p>
     */
    inline AccessControlRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The rule description.</p>
     */
    inline AccessControlRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The rule description.</p>
     */
    inline AccessControlRule& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpRanges() const{ return m_ipRanges; }

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline bool IpRangesHasBeenSet() const { return m_ipRangesHasBeenSet; }

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline void SetIpRanges(const Aws::Vector<Aws::String>& value) { m_ipRangesHasBeenSet = true; m_ipRanges = value; }

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline void SetIpRanges(Aws::Vector<Aws::String>&& value) { m_ipRangesHasBeenSet = true; m_ipRanges = std::move(value); }

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline AccessControlRule& WithIpRanges(const Aws::Vector<Aws::String>& value) { SetIpRanges(value); return *this;}

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline AccessControlRule& WithIpRanges(Aws::Vector<Aws::String>&& value) { SetIpRanges(std::move(value)); return *this;}

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline AccessControlRule& AddIpRanges(const Aws::String& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline AccessControlRule& AddIpRanges(Aws::String&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(std::move(value)); return *this; }

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline AccessControlRule& AddIpRanges(const char* value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }


    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotIpRanges() const{ return m_notIpRanges; }

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline bool NotIpRangesHasBeenSet() const { return m_notIpRangesHasBeenSet; }

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline void SetNotIpRanges(const Aws::Vector<Aws::String>& value) { m_notIpRangesHasBeenSet = true; m_notIpRanges = value; }

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline void SetNotIpRanges(Aws::Vector<Aws::String>&& value) { m_notIpRangesHasBeenSet = true; m_notIpRanges = std::move(value); }

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline AccessControlRule& WithNotIpRanges(const Aws::Vector<Aws::String>& value) { SetNotIpRanges(value); return *this;}

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline AccessControlRule& WithNotIpRanges(Aws::Vector<Aws::String>&& value) { SetNotIpRanges(std::move(value)); return *this;}

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline AccessControlRule& AddNotIpRanges(const Aws::String& value) { m_notIpRangesHasBeenSet = true; m_notIpRanges.push_back(value); return *this; }

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline AccessControlRule& AddNotIpRanges(Aws::String&& value) { m_notIpRangesHasBeenSet = true; m_notIpRanges.push_back(std::move(value)); return *this; }

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline AccessControlRule& AddNotIpRanges(const char* value) { m_notIpRangesHasBeenSet = true; m_notIpRanges.push_back(value); return *this; }


    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline AccessControlRule& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline AccessControlRule& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline AccessControlRule& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline AccessControlRule& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline AccessControlRule& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }


    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotActions() const{ return m_notActions; }

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline bool NotActionsHasBeenSet() const { return m_notActionsHasBeenSet; }

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline void SetNotActions(const Aws::Vector<Aws::String>& value) { m_notActionsHasBeenSet = true; m_notActions = value; }

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline void SetNotActions(Aws::Vector<Aws::String>&& value) { m_notActionsHasBeenSet = true; m_notActions = std::move(value); }

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline AccessControlRule& WithNotActions(const Aws::Vector<Aws::String>& value) { SetNotActions(value); return *this;}

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline AccessControlRule& WithNotActions(Aws::Vector<Aws::String>&& value) { SetNotActions(std::move(value)); return *this;}

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline AccessControlRule& AddNotActions(const Aws::String& value) { m_notActionsHasBeenSet = true; m_notActions.push_back(value); return *this; }

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline AccessControlRule& AddNotActions(Aws::String&& value) { m_notActionsHasBeenSet = true; m_notActions.push_back(std::move(value)); return *this; }

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline AccessControlRule& AddNotActions(const char* value) { m_notActionsHasBeenSet = true; m_notActions.push_back(value); return *this; }


    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline AccessControlRule& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline AccessControlRule& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline AccessControlRule& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline AccessControlRule& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline AccessControlRule& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }


    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotUserIds() const{ return m_notUserIds; }

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline bool NotUserIdsHasBeenSet() const { return m_notUserIdsHasBeenSet; }

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline void SetNotUserIds(const Aws::Vector<Aws::String>& value) { m_notUserIdsHasBeenSet = true; m_notUserIds = value; }

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline void SetNotUserIds(Aws::Vector<Aws::String>&& value) { m_notUserIdsHasBeenSet = true; m_notUserIds = std::move(value); }

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline AccessControlRule& WithNotUserIds(const Aws::Vector<Aws::String>& value) { SetNotUserIds(value); return *this;}

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline AccessControlRule& WithNotUserIds(Aws::Vector<Aws::String>&& value) { SetNotUserIds(std::move(value)); return *this;}

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline AccessControlRule& AddNotUserIds(const Aws::String& value) { m_notUserIdsHasBeenSet = true; m_notUserIds.push_back(value); return *this; }

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline AccessControlRule& AddNotUserIds(Aws::String&& value) { m_notUserIdsHasBeenSet = true; m_notUserIds.push_back(std::move(value)); return *this; }

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline AccessControlRule& AddNotUserIds(const char* value) { m_notUserIdsHasBeenSet = true; m_notUserIds.push_back(value); return *this; }


    /**
     * <p>The date that the rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date that the rule was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date that the rule was created.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date that the rule was created.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date that the rule was created.</p>
     */
    inline AccessControlRule& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date that the rule was created.</p>
     */
    inline AccessControlRule& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}


    /**
     * <p>The date that the rule was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const{ return m_dateModified; }

    /**
     * <p>The date that the rule was modified.</p>
     */
    inline bool DateModifiedHasBeenSet() const { return m_dateModifiedHasBeenSet; }

    /**
     * <p>The date that the rule was modified.</p>
     */
    inline void SetDateModified(const Aws::Utils::DateTime& value) { m_dateModifiedHasBeenSet = true; m_dateModified = value; }

    /**
     * <p>The date that the rule was modified.</p>
     */
    inline void SetDateModified(Aws::Utils::DateTime&& value) { m_dateModifiedHasBeenSet = true; m_dateModified = std::move(value); }

    /**
     * <p>The date that the rule was modified.</p>
     */
    inline AccessControlRule& WithDateModified(const Aws::Utils::DateTime& value) { SetDateModified(value); return *this;}

    /**
     * <p>The date that the rule was modified.</p>
     */
    inline AccessControlRule& WithDateModified(Aws::Utils::DateTime&& value) { SetDateModified(std::move(value)); return *this;}


    /**
     * <p>Impersonation role IDs to include in the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpersonationRoleIds() const{ return m_impersonationRoleIds; }

    /**
     * <p>Impersonation role IDs to include in the rule.</p>
     */
    inline bool ImpersonationRoleIdsHasBeenSet() const { return m_impersonationRoleIdsHasBeenSet; }

    /**
     * <p>Impersonation role IDs to include in the rule.</p>
     */
    inline void SetImpersonationRoleIds(const Aws::Vector<Aws::String>& value) { m_impersonationRoleIdsHasBeenSet = true; m_impersonationRoleIds = value; }

    /**
     * <p>Impersonation role IDs to include in the rule.</p>
     */
    inline void SetImpersonationRoleIds(Aws::Vector<Aws::String>&& value) { m_impersonationRoleIdsHasBeenSet = true; m_impersonationRoleIds = std::move(value); }

    /**
     * <p>Impersonation role IDs to include in the rule.</p>
     */
    inline AccessControlRule& WithImpersonationRoleIds(const Aws::Vector<Aws::String>& value) { SetImpersonationRoleIds(value); return *this;}

    /**
     * <p>Impersonation role IDs to include in the rule.</p>
     */
    inline AccessControlRule& WithImpersonationRoleIds(Aws::Vector<Aws::String>&& value) { SetImpersonationRoleIds(std::move(value)); return *this;}

    /**
     * <p>Impersonation role IDs to include in the rule.</p>
     */
    inline AccessControlRule& AddImpersonationRoleIds(const Aws::String& value) { m_impersonationRoleIdsHasBeenSet = true; m_impersonationRoleIds.push_back(value); return *this; }

    /**
     * <p>Impersonation role IDs to include in the rule.</p>
     */
    inline AccessControlRule& AddImpersonationRoleIds(Aws::String&& value) { m_impersonationRoleIdsHasBeenSet = true; m_impersonationRoleIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Impersonation role IDs to include in the rule.</p>
     */
    inline AccessControlRule& AddImpersonationRoleIds(const char* value) { m_impersonationRoleIdsHasBeenSet = true; m_impersonationRoleIds.push_back(value); return *this; }


    /**
     * <p>Impersonation role IDs to exclude from the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotImpersonationRoleIds() const{ return m_notImpersonationRoleIds; }

    /**
     * <p>Impersonation role IDs to exclude from the rule.</p>
     */
    inline bool NotImpersonationRoleIdsHasBeenSet() const { return m_notImpersonationRoleIdsHasBeenSet; }

    /**
     * <p>Impersonation role IDs to exclude from the rule.</p>
     */
    inline void SetNotImpersonationRoleIds(const Aws::Vector<Aws::String>& value) { m_notImpersonationRoleIdsHasBeenSet = true; m_notImpersonationRoleIds = value; }

    /**
     * <p>Impersonation role IDs to exclude from the rule.</p>
     */
    inline void SetNotImpersonationRoleIds(Aws::Vector<Aws::String>&& value) { m_notImpersonationRoleIdsHasBeenSet = true; m_notImpersonationRoleIds = std::move(value); }

    /**
     * <p>Impersonation role IDs to exclude from the rule.</p>
     */
    inline AccessControlRule& WithNotImpersonationRoleIds(const Aws::Vector<Aws::String>& value) { SetNotImpersonationRoleIds(value); return *this;}

    /**
     * <p>Impersonation role IDs to exclude from the rule.</p>
     */
    inline AccessControlRule& WithNotImpersonationRoleIds(Aws::Vector<Aws::String>&& value) { SetNotImpersonationRoleIds(std::move(value)); return *this;}

    /**
     * <p>Impersonation role IDs to exclude from the rule.</p>
     */
    inline AccessControlRule& AddNotImpersonationRoleIds(const Aws::String& value) { m_notImpersonationRoleIdsHasBeenSet = true; m_notImpersonationRoleIds.push_back(value); return *this; }

    /**
     * <p>Impersonation role IDs to exclude from the rule.</p>
     */
    inline AccessControlRule& AddNotImpersonationRoleIds(Aws::String&& value) { m_notImpersonationRoleIdsHasBeenSet = true; m_notImpersonationRoleIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Impersonation role IDs to exclude from the rule.</p>
     */
    inline AccessControlRule& AddNotImpersonationRoleIds(const char* value) { m_notImpersonationRoleIdsHasBeenSet = true; m_notImpersonationRoleIds.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AccessControlRuleEffect m_effect;
    bool m_effectHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipRanges;
    bool m_ipRangesHasBeenSet = false;

    Aws::Vector<Aws::String> m_notIpRanges;
    bool m_notIpRangesHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notActions;
    bool m_notActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notUserIds;
    bool m_notUserIdsHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateModified;
    bool m_dateModifiedHasBeenSet = false;

    Aws::Vector<Aws::String> m_impersonationRoleIds;
    bool m_impersonationRoleIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notImpersonationRoleIds;
    bool m_notImpersonationRoleIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
