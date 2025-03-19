/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/lex/LexRuntimeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lex/model/DialogAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex/model/IntentSummary.h>
#include <aws/lex/model/ActiveContext.h>
#include <utility>

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

  /**
   */
  class PutSessionRequest : public LexRuntimeServiceRequest
  {
  public:
    AWS_LEXRUNTIMESERVICE_API PutSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSession"; }

    AWS_LEXRUNTIMESERVICE_API Aws::String SerializePayload() const override;

    AWS_LEXRUNTIMESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    PutSessionRequest& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotAlias() const { return m_botAlias; }
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }
    template<typename BotAliasT = Aws::String>
    void SetBotAlias(BotAliasT&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::forward<BotAliasT>(value); }
    template<typename BotAliasT = Aws::String>
    PutSessionRequest& WithBotAlias(BotAliasT&& value) { SetBotAlias(std::forward<BotAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    PutSessionRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const { return m_sessionAttributes; }
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetSessionAttributes(SessionAttributesT&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::forward<SessionAttributesT>(value); }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    PutSessionRequest& WithSessionAttributes(SessionAttributesT&& value) { SetSessionAttributes(std::forward<SessionAttributesT>(value)); return *this;}
    template<typename SessionAttributesKeyT = Aws::String, typename SessionAttributesValueT = Aws::String>
    PutSessionRequest& AddSessionAttributes(SessionAttributesKeyT&& key, SessionAttributesValueT&& value) {
      m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::forward<SessionAttributesKeyT>(key), std::forward<SessionAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline const DialogAction& GetDialogAction() const { return m_dialogAction; }
    inline bool DialogActionHasBeenSet() const { return m_dialogActionHasBeenSet; }
    template<typename DialogActionT = DialogAction>
    void SetDialogAction(DialogActionT&& value) { m_dialogActionHasBeenSet = true; m_dialogAction = std::forward<DialogActionT>(value); }
    template<typename DialogActionT = DialogAction>
    PutSessionRequest& WithDialogAction(DialogActionT&& value) { SetDialogAction(std::forward<DialogActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the recent intents for the bot. You can use the intent summary
     * view to set a checkpoint label on an intent and modify attributes of intents.
     * You can also use it to remove or add intent summary objects to the list.</p>
     * <p>An intent that you modify or add to the list must make sense for the bot. For
     * example, the intent name must be valid for the bot. You must provide valid
     * values for:</p> <ul> <li> <p> <code>intentName</code> </p> </li> <li> <p>slot
     * names</p> </li> <li> <p> <code>slotToElict</code> </p> </li> </ul> <p>If you
     * send the <code>recentIntentSummaryView</code> parameter in a
     * <code>PutSession</code> request, the contents of the new summary view replaces
     * the old summary view. For example, if a <code>GetSession</code> request returns
     * three intents in the summary view and you call <code>PutSession</code> with one
     * intent in the summary view, the next call to <code>GetSession</code> will only
     * return one intent.</p>
     */
    inline const Aws::Vector<IntentSummary>& GetRecentIntentSummaryView() const { return m_recentIntentSummaryView; }
    inline bool RecentIntentSummaryViewHasBeenSet() const { return m_recentIntentSummaryViewHasBeenSet; }
    template<typename RecentIntentSummaryViewT = Aws::Vector<IntentSummary>>
    void SetRecentIntentSummaryView(RecentIntentSummaryViewT&& value) { m_recentIntentSummaryViewHasBeenSet = true; m_recentIntentSummaryView = std::forward<RecentIntentSummaryViewT>(value); }
    template<typename RecentIntentSummaryViewT = Aws::Vector<IntentSummary>>
    PutSessionRequest& WithRecentIntentSummaryView(RecentIntentSummaryViewT&& value) { SetRecentIntentSummaryView(std::forward<RecentIntentSummaryViewT>(value)); return *this;}
    template<typename RecentIntentSummaryViewT = IntentSummary>
    PutSessionRequest& AddRecentIntentSummaryView(RecentIntentSummaryViewT&& value) { m_recentIntentSummaryViewHasBeenSet = true; m_recentIntentSummaryView.emplace_back(std::forward<RecentIntentSummaryViewT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetAccept() const { return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    template<typename AcceptT = Aws::String>
    void SetAccept(AcceptT&& value) { m_acceptHasBeenSet = true; m_accept = std::forward<AcceptT>(value); }
    template<typename AcceptT = Aws::String>
    PutSessionRequest& WithAccept(AcceptT&& value) { SetAccept(std::forward<AcceptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request,</p>
     * <p>If you don't specify a list of contexts, Amazon Lex will use the current list
     * of contexts for the session. If you specify an empty list, all contexts for the
     * session are cleared.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const { return m_activeContexts; }
    inline bool ActiveContextsHasBeenSet() const { return m_activeContextsHasBeenSet; }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    void SetActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::forward<ActiveContextsT>(value); }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    PutSessionRequest& WithActiveContexts(ActiveContextsT&& value) { SetActiveContexts(std::forward<ActiveContextsT>(value)); return *this;}
    template<typename ActiveContextsT = ActiveContext>
    PutSessionRequest& AddActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts.emplace_back(std::forward<ActiveContextsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;

    DialogAction m_dialogAction;
    bool m_dialogActionHasBeenSet = false;

    Aws::Vector<IntentSummary> m_recentIntentSummaryView;
    bool m_recentIntentSummaryViewHasBeenSet = false;

    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::Vector<ActiveContext> m_activeContexts;
    bool m_activeContextsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
