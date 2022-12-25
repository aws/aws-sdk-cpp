/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/ChatChannel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/IncidentTemplate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-incidents/model/Action.h>
#include <aws/ssm-incidents/model/Integration.h>
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
  class CreateResponsePlanRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API CreateResponsePlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResponsePlan"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The actions that the response plan starts at the beginning of an
     * incident.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions that the response plan starts at the beginning of an
     * incident.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions that the response plan starts at the beginning of an
     * incident.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions that the response plan starts at the beginning of an
     * incident.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions that the response plan starts at the beginning of an
     * incident.</p>
     */
    inline CreateResponsePlanRequest& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions that the response plan starts at the beginning of an
     * incident.</p>
     */
    inline CreateResponsePlanRequest& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions that the response plan starts at the beginning of an
     * incident.</p>
     */
    inline CreateResponsePlanRequest& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions that the response plan starts at the beginning of an
     * incident.</p>
     */
    inline CreateResponsePlanRequest& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline const ChatChannel& GetChatChannel() const{ return m_chatChannel; }

    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline bool ChatChannelHasBeenSet() const { return m_chatChannelHasBeenSet; }

    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline void SetChatChannel(const ChatChannel& value) { m_chatChannelHasBeenSet = true; m_chatChannel = value; }

    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline void SetChatChannel(ChatChannel&& value) { m_chatChannelHasBeenSet = true; m_chatChannel = std::move(value); }

    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline CreateResponsePlanRequest& WithChatChannel(const ChatChannel& value) { SetChatChannel(value); return *this;}

    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline CreateResponsePlanRequest& WithChatChannel(ChatChannel&& value) { SetChatChannel(std::move(value)); return *this;}


    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline CreateResponsePlanRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline CreateResponsePlanRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline CreateResponsePlanRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The long format of the response plan name. This field can contain spaces.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The long format of the response plan name. This field can contain spaces.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The long format of the response plan name. This field can contain spaces.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The long format of the response plan name. This field can contain spaces.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The long format of the response plan name. This field can contain spaces.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The long format of the response plan name. This field can contain spaces.</p>
     */
    inline CreateResponsePlanRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The long format of the response plan name. This field can contain spaces.</p>
     */
    inline CreateResponsePlanRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The long format of the response plan name. This field can contain spaces.</p>
     */
    inline CreateResponsePlanRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEngagements() const{ return m_engagements; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline bool EngagementsHasBeenSet() const { return m_engagementsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline void SetEngagements(const Aws::Vector<Aws::String>& value) { m_engagementsHasBeenSet = true; m_engagements = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline void SetEngagements(Aws::Vector<Aws::String>&& value) { m_engagementsHasBeenSet = true; m_engagements = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline CreateResponsePlanRequest& WithEngagements(const Aws::Vector<Aws::String>& value) { SetEngagements(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline CreateResponsePlanRequest& WithEngagements(Aws::Vector<Aws::String>&& value) { SetEngagements(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline CreateResponsePlanRequest& AddEngagements(const Aws::String& value) { m_engagementsHasBeenSet = true; m_engagements.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline CreateResponsePlanRequest& AddEngagements(Aws::String&& value) { m_engagementsHasBeenSet = true; m_engagements.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline CreateResponsePlanRequest& AddEngagements(const char* value) { m_engagementsHasBeenSet = true; m_engagements.push_back(value); return *this; }


    /**
     * <p>Details used to create an incident when using this response plan.</p>
     */
    inline const IncidentTemplate& GetIncidentTemplate() const{ return m_incidentTemplate; }

    /**
     * <p>Details used to create an incident when using this response plan.</p>
     */
    inline bool IncidentTemplateHasBeenSet() const { return m_incidentTemplateHasBeenSet; }

    /**
     * <p>Details used to create an incident when using this response plan.</p>
     */
    inline void SetIncidentTemplate(const IncidentTemplate& value) { m_incidentTemplateHasBeenSet = true; m_incidentTemplate = value; }

    /**
     * <p>Details used to create an incident when using this response plan.</p>
     */
    inline void SetIncidentTemplate(IncidentTemplate&& value) { m_incidentTemplateHasBeenSet = true; m_incidentTemplate = std::move(value); }

    /**
     * <p>Details used to create an incident when using this response plan.</p>
     */
    inline CreateResponsePlanRequest& WithIncidentTemplate(const IncidentTemplate& value) { SetIncidentTemplate(value); return *this;}

    /**
     * <p>Details used to create an incident when using this response plan.</p>
     */
    inline CreateResponsePlanRequest& WithIncidentTemplate(IncidentTemplate&& value) { SetIncidentTemplate(std::move(value)); return *this;}


    /**
     * <p>Information about third-party services integrated into the response plan.</p>
     */
    inline const Aws::Vector<Integration>& GetIntegrations() const{ return m_integrations; }

    /**
     * <p>Information about third-party services integrated into the response plan.</p>
     */
    inline bool IntegrationsHasBeenSet() const { return m_integrationsHasBeenSet; }

    /**
     * <p>Information about third-party services integrated into the response plan.</p>
     */
    inline void SetIntegrations(const Aws::Vector<Integration>& value) { m_integrationsHasBeenSet = true; m_integrations = value; }

    /**
     * <p>Information about third-party services integrated into the response plan.</p>
     */
    inline void SetIntegrations(Aws::Vector<Integration>&& value) { m_integrationsHasBeenSet = true; m_integrations = std::move(value); }

    /**
     * <p>Information about third-party services integrated into the response plan.</p>
     */
    inline CreateResponsePlanRequest& WithIntegrations(const Aws::Vector<Integration>& value) { SetIntegrations(value); return *this;}

    /**
     * <p>Information about third-party services integrated into the response plan.</p>
     */
    inline CreateResponsePlanRequest& WithIntegrations(Aws::Vector<Integration>&& value) { SetIntegrations(std::move(value)); return *this;}

    /**
     * <p>Information about third-party services integrated into the response plan.</p>
     */
    inline CreateResponsePlanRequest& AddIntegrations(const Integration& value) { m_integrationsHasBeenSet = true; m_integrations.push_back(value); return *this; }

    /**
     * <p>Information about third-party services integrated into the response plan.</p>
     */
    inline CreateResponsePlanRequest& AddIntegrations(Integration&& value) { m_integrationsHasBeenSet = true; m_integrations.push_back(std::move(value)); return *this; }


    /**
     * <p>The short format name of the response plan. Can't include spaces.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The short format name of the response plan. Can't include spaces.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The short format name of the response plan. Can't include spaces.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The short format name of the response plan. Can't include spaces.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The short format name of the response plan. Can't include spaces.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The short format name of the response plan. Can't include spaces.</p>
     */
    inline CreateResponsePlanRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The short format name of the response plan. Can't include spaces.</p>
     */
    inline CreateResponsePlanRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The short format name of the response plan. Can't include spaces.</p>
     */
    inline CreateResponsePlanRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline CreateResponsePlanRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline CreateResponsePlanRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline CreateResponsePlanRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline CreateResponsePlanRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline CreateResponsePlanRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline CreateResponsePlanRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline CreateResponsePlanRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline CreateResponsePlanRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline CreateResponsePlanRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    ChatChannel m_chatChannel;
    bool m_chatChannelHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_engagements;
    bool m_engagementsHasBeenSet = false;

    IncidentTemplate m_incidentTemplate;
    bool m_incidentTemplateHasBeenSet = false;

    Aws::Vector<Integration> m_integrations;
    bool m_integrationsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
