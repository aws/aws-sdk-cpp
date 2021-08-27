/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/AccessControlRuleEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class AWS_WORKMAIL_API PutAccessControlRuleRequest : public WorkMailRequest
  {
  public:
    PutAccessControlRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccessControlRule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline PutAccessControlRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The rule name.</p>
     */
    inline PutAccessControlRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The rule name.</p>
     */
    inline PutAccessControlRuleRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline PutAccessControlRuleRequest& WithEffect(const AccessControlRuleEffect& value) { SetEffect(value); return *this;}

    /**
     * <p>The rule effect.</p>
     */
    inline PutAccessControlRuleRequest& WithEffect(AccessControlRuleEffect&& value) { SetEffect(std::move(value)); return *this;}


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
    inline PutAccessControlRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The rule description.</p>
     */
    inline PutAccessControlRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The rule description.</p>
     */
    inline PutAccessControlRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline PutAccessControlRuleRequest& WithIpRanges(const Aws::Vector<Aws::String>& value) { SetIpRanges(value); return *this;}

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline PutAccessControlRuleRequest& WithIpRanges(Aws::Vector<Aws::String>&& value) { SetIpRanges(std::move(value)); return *this;}

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddIpRanges(const Aws::String& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddIpRanges(Aws::String&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(std::move(value)); return *this; }

    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddIpRanges(const char* value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }


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
    inline PutAccessControlRuleRequest& WithNotIpRanges(const Aws::Vector<Aws::String>& value) { SetNotIpRanges(value); return *this;}

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline PutAccessControlRuleRequest& WithNotIpRanges(Aws::Vector<Aws::String>&& value) { SetNotIpRanges(std::move(value)); return *this;}

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddNotIpRanges(const Aws::String& value) { m_notIpRangesHasBeenSet = true; m_notIpRanges.push_back(value); return *this; }

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddNotIpRanges(Aws::String&& value) { m_notIpRangesHasBeenSet = true; m_notIpRanges.push_back(std::move(value)); return *this; }

    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddNotIpRanges(const char* value) { m_notIpRangesHasBeenSet = true; m_notIpRanges.push_back(value); return *this; }


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
    inline PutAccessControlRuleRequest& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline PutAccessControlRuleRequest& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline PutAccessControlRuleRequest& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline PutAccessControlRuleRequest& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline PutAccessControlRuleRequest& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }


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
    inline PutAccessControlRuleRequest& WithNotActions(const Aws::Vector<Aws::String>& value) { SetNotActions(value); return *this;}

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline PutAccessControlRuleRequest& WithNotActions(Aws::Vector<Aws::String>&& value) { SetNotActions(std::move(value)); return *this;}

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline PutAccessControlRuleRequest& AddNotActions(const Aws::String& value) { m_notActionsHasBeenSet = true; m_notActions.push_back(value); return *this; }

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline PutAccessControlRuleRequest& AddNotActions(Aws::String&& value) { m_notActionsHasBeenSet = true; m_notActions.push_back(std::move(value)); return *this; }

    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline PutAccessControlRuleRequest& AddNotActions(const char* value) { m_notActionsHasBeenSet = true; m_notActions.push_back(value); return *this; }


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
    inline PutAccessControlRuleRequest& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline PutAccessControlRuleRequest& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }

    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }


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
    inline PutAccessControlRuleRequest& WithNotUserIds(const Aws::Vector<Aws::String>& value) { SetNotUserIds(value); return *this;}

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline PutAccessControlRuleRequest& WithNotUserIds(Aws::Vector<Aws::String>&& value) { SetNotUserIds(std::move(value)); return *this;}

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddNotUserIds(const Aws::String& value) { m_notUserIdsHasBeenSet = true; m_notUserIds.push_back(value); return *this; }

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddNotUserIds(Aws::String&& value) { m_notUserIdsHasBeenSet = true; m_notUserIds.push_back(std::move(value)); return *this; }

    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline PutAccessControlRuleRequest& AddNotUserIds(const char* value) { m_notUserIdsHasBeenSet = true; m_notUserIds.push_back(value); return *this; }


    /**
     * <p>The identifier of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier of the organization.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier of the organization.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier of the organization.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier of the organization.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier of the organization.</p>
     */
    inline PutAccessControlRuleRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier of the organization.</p>
     */
    inline PutAccessControlRuleRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the organization.</p>
     */
    inline PutAccessControlRuleRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    AccessControlRuleEffect m_effect;
    bool m_effectHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_ipRanges;
    bool m_ipRangesHasBeenSet;

    Aws::Vector<Aws::String> m_notIpRanges;
    bool m_notIpRangesHasBeenSet;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet;

    Aws::Vector<Aws::String> m_notActions;
    bool m_notActionsHasBeenSet;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet;

    Aws::Vector<Aws::String> m_notUserIds;
    bool m_notUserIdsHasBeenSet;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
