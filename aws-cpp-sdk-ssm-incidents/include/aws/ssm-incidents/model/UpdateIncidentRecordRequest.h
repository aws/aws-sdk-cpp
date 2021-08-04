/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/ChatChannel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/IncidentRecordStatus.h>
#include <aws/ssm-incidents/model/NotificationTargetItem.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class AWS_SSMINCIDENTS_API UpdateIncidentRecordRequest : public SSMIncidentsRequest
  {
  public:
    UpdateIncidentRecordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIncidentRecord"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the incident record you are updating.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record you are updating.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record you are updating.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record you are updating.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record you are updating.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record you are updating.</p>
     */
    inline UpdateIncidentRecordRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record you are updating.</p>
     */
    inline UpdateIncidentRecordRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record you are updating.</p>
     */
    inline UpdateIncidentRecordRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The AWS Chatbot chat channel for responders to collaborate in.</p>
     */
    inline const ChatChannel& GetChatChannel() const{ return m_chatChannel; }

    /**
     * <p>The AWS Chatbot chat channel for responders to collaborate in.</p>
     */
    inline bool ChatChannelHasBeenSet() const { return m_chatChannelHasBeenSet; }

    /**
     * <p>The AWS Chatbot chat channel for responders to collaborate in.</p>
     */
    inline void SetChatChannel(const ChatChannel& value) { m_chatChannelHasBeenSet = true; m_chatChannel = value; }

    /**
     * <p>The AWS Chatbot chat channel for responders to collaborate in.</p>
     */
    inline void SetChatChannel(ChatChannel&& value) { m_chatChannelHasBeenSet = true; m_chatChannel = std::move(value); }

    /**
     * <p>The AWS Chatbot chat channel for responders to collaborate in.</p>
     */
    inline UpdateIncidentRecordRequest& WithChatChannel(const ChatChannel& value) { SetChatChannel(value); return *this;}

    /**
     * <p>The AWS Chatbot chat channel for responders to collaborate in.</p>
     */
    inline UpdateIncidentRecordRequest& WithChatChannel(ChatChannel&& value) { SetChatChannel(std::move(value)); return *this;}


    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline UpdateIncidentRecordRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline UpdateIncidentRecordRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline UpdateIncidentRecordRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Defines the impact to customers and applications. Providing an impact
     * overwrites the impact provided by the response plan.</p> <p class="title">
     * <b>Possible impacts:</b> </p> <ul> <li> <p> <code>1</code> - Critical impact,
     * this typically relates to full application failure that impacts many to all
     * customers. </p> </li> <li> <p> <code>2</code> - High impact, partial application
     * failure with impact to many customers.</p> </li> <li> <p> <code>3</code> -
     * Medium impact, the application is providing reduced service to customers.</p>
     * </li> <li> <p> <code>4</code> - Low impact, customer might aren't impacted by
     * the problem yet.</p> </li> <li> <p> <code>5</code> - No impact, customers aren't
     * currently impacted but urgent action is needed to avoid impact.</p> </li> </ul>
     */
    inline int GetImpact() const{ return m_impact; }

    /**
     * <p>Defines the impact to customers and applications. Providing an impact
     * overwrites the impact provided by the response plan.</p> <p class="title">
     * <b>Possible impacts:</b> </p> <ul> <li> <p> <code>1</code> - Critical impact,
     * this typically relates to full application failure that impacts many to all
     * customers. </p> </li> <li> <p> <code>2</code> - High impact, partial application
     * failure with impact to many customers.</p> </li> <li> <p> <code>3</code> -
     * Medium impact, the application is providing reduced service to customers.</p>
     * </li> <li> <p> <code>4</code> - Low impact, customer might aren't impacted by
     * the problem yet.</p> </li> <li> <p> <code>5</code> - No impact, customers aren't
     * currently impacted but urgent action is needed to avoid impact.</p> </li> </ul>
     */
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }

    /**
     * <p>Defines the impact to customers and applications. Providing an impact
     * overwrites the impact provided by the response plan.</p> <p class="title">
     * <b>Possible impacts:</b> </p> <ul> <li> <p> <code>1</code> - Critical impact,
     * this typically relates to full application failure that impacts many to all
     * customers. </p> </li> <li> <p> <code>2</code> - High impact, partial application
     * failure with impact to many customers.</p> </li> <li> <p> <code>3</code> -
     * Medium impact, the application is providing reduced service to customers.</p>
     * </li> <li> <p> <code>4</code> - Low impact, customer might aren't impacted by
     * the problem yet.</p> </li> <li> <p> <code>5</code> - No impact, customers aren't
     * currently impacted but urgent action is needed to avoid impact.</p> </li> </ul>
     */
    inline void SetImpact(int value) { m_impactHasBeenSet = true; m_impact = value; }

    /**
     * <p>Defines the impact to customers and applications. Providing an impact
     * overwrites the impact provided by the response plan.</p> <p class="title">
     * <b>Possible impacts:</b> </p> <ul> <li> <p> <code>1</code> - Critical impact,
     * this typically relates to full application failure that impacts many to all
     * customers. </p> </li> <li> <p> <code>2</code> - High impact, partial application
     * failure with impact to many customers.</p> </li> <li> <p> <code>3</code> -
     * Medium impact, the application is providing reduced service to customers.</p>
     * </li> <li> <p> <code>4</code> - Low impact, customer might aren't impacted by
     * the problem yet.</p> </li> <li> <p> <code>5</code> - No impact, customers aren't
     * currently impacted but urgent action is needed to avoid impact.</p> </li> </ul>
     */
    inline UpdateIncidentRecordRequest& WithImpact(int value) { SetImpact(value); return *this;}


    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     * <p>Using multiple SNS topics creates redundancy in the case that a Region is
     * down during the incident.</p>
     */
    inline const Aws::Vector<NotificationTargetItem>& GetNotificationTargets() const{ return m_notificationTargets; }

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     * <p>Using multiple SNS topics creates redundancy in the case that a Region is
     * down during the incident.</p>
     */
    inline bool NotificationTargetsHasBeenSet() const { return m_notificationTargetsHasBeenSet; }

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     * <p>Using multiple SNS topics creates redundancy in the case that a Region is
     * down during the incident.</p>
     */
    inline void SetNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = value; }

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     * <p>Using multiple SNS topics creates redundancy in the case that a Region is
     * down during the incident.</p>
     */
    inline void SetNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = std::move(value); }

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     * <p>Using multiple SNS topics creates redundancy in the case that a Region is
     * down during the incident.</p>
     */
    inline UpdateIncidentRecordRequest& WithNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { SetNotificationTargets(value); return *this;}

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     * <p>Using multiple SNS topics creates redundancy in the case that a Region is
     * down during the incident.</p>
     */
    inline UpdateIncidentRecordRequest& WithNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { SetNotificationTargets(std::move(value)); return *this;}

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     * <p>Using multiple SNS topics creates redundancy in the case that a Region is
     * down during the incident.</p>
     */
    inline UpdateIncidentRecordRequest& AddNotificationTargets(const NotificationTargetItem& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.push_back(value); return *this; }

    /**
     * <p>The SNS targets that are notified when updates are made to an incident.</p>
     * <p>Using multiple SNS topics creates redundancy in the case that a Region is
     * down during the incident.</p>
     */
    inline UpdateIncidentRecordRequest& AddNotificationTargets(NotificationTargetItem&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the incident. An incident can be <code>Open</code> or
     * <code>Resolved</code>.</p>
     */
    inline const IncidentRecordStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the incident. An incident can be <code>Open</code> or
     * <code>Resolved</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the incident. An incident can be <code>Open</code> or
     * <code>Resolved</code>.</p>
     */
    inline void SetStatus(const IncidentRecordStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the incident. An incident can be <code>Open</code> or
     * <code>Resolved</code>.</p>
     */
    inline void SetStatus(IncidentRecordStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the incident. An incident can be <code>Open</code> or
     * <code>Resolved</code>.</p>
     */
    inline UpdateIncidentRecordRequest& WithStatus(const IncidentRecordStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the incident. An incident can be <code>Open</code> or
     * <code>Resolved</code>.</p>
     */
    inline UpdateIncidentRecordRequest& WithStatus(IncidentRecordStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The summary describes what has happened during the incident.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }

    /**
     * <p>The summary describes what has happened during the incident.</p>
     */
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }

    /**
     * <p>The summary describes what has happened during the incident.</p>
     */
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p>The summary describes what has happened during the incident.</p>
     */
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }

    /**
     * <p>The summary describes what has happened during the incident.</p>
     */
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }

    /**
     * <p>The summary describes what has happened during the incident.</p>
     */
    inline UpdateIncidentRecordRequest& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}

    /**
     * <p>The summary describes what has happened during the incident.</p>
     */
    inline UpdateIncidentRecordRequest& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}

    /**
     * <p>The summary describes what has happened during the incident.</p>
     */
    inline UpdateIncidentRecordRequest& WithSummary(const char* value) { SetSummary(value); return *this;}


    /**
     * <p>The title of the incident is a brief and easily recognizable.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the incident is a brief and easily recognizable.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the incident is a brief and easily recognizable.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the incident is a brief and easily recognizable.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the incident is a brief and easily recognizable.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the incident is a brief and easily recognizable.</p>
     */
    inline UpdateIncidentRecordRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the incident is a brief and easily recognizable.</p>
     */
    inline UpdateIncidentRecordRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the incident is a brief and easily recognizable.</p>
     */
    inline UpdateIncidentRecordRequest& WithTitle(const char* value) { SetTitle(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    ChatChannel m_chatChannel;
    bool m_chatChannelHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    int m_impact;
    bool m_impactHasBeenSet;

    Aws::Vector<NotificationTargetItem> m_notificationTargets;
    bool m_notificationTargetsHasBeenSet;

    IncidentRecordStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_summary;
    bool m_summaryHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
