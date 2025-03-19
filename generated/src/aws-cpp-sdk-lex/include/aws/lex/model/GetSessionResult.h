/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex/model/DialogAction.h>
#include <aws/lex/model/IntentSummary.h>
#include <aws/lex/model/ActiveContext.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexRuntimeService
{
namespace Model
{
  class GetSessionResult
  {
  public:
    AWS_LEXRUNTIMESERVICE_API GetSessionResult() = default;
    AWS_LEXRUNTIMESERVICE_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXRUNTIMESERVICE_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of information about the intents used in the session. The array can
     * contain a maximum of three summaries. If more than three intents are used in the
     * session, the <code>recentIntentSummaryView</code> operation contains information
     * about the last three intents used.</p> <p>If you set the
     * <code>checkpointLabelFilter</code> parameter in the request, the array contains
     * only the intents with the specified label.</p>
     */
    inline const Aws::Vector<IntentSummary>& GetRecentIntentSummaryView() const { return m_recentIntentSummaryView; }
    template<typename RecentIntentSummaryViewT = Aws::Vector<IntentSummary>>
    void SetRecentIntentSummaryView(RecentIntentSummaryViewT&& value) { m_recentIntentSummaryViewHasBeenSet = true; m_recentIntentSummaryView = std::forward<RecentIntentSummaryViewT>(value); }
    template<typename RecentIntentSummaryViewT = Aws::Vector<IntentSummary>>
    GetSessionResult& WithRecentIntentSummaryView(RecentIntentSummaryViewT&& value) { SetRecentIntentSummaryView(std::forward<RecentIntentSummaryViewT>(value)); return *this;}
    template<typename RecentIntentSummaryViewT = IntentSummary>
    GetSessionResult& AddRecentIntentSummaryView(RecentIntentSummaryViewT&& value) { m_recentIntentSummaryViewHasBeenSet = true; m_recentIntentSummaryView.emplace_back(std::forward<RecentIntentSummaryViewT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const { return m_sessionAttributes; }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetSessionAttributes(SessionAttributesT&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::forward<SessionAttributesT>(value); }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    GetSessionResult& WithSessionAttributes(SessionAttributesT&& value) { SetSessionAttributes(std::forward<SessionAttributesT>(value)); return *this;}
    template<typename SessionAttributesKeyT = Aws::String, typename SessionAttributesValueT = Aws::String>
    GetSessionResult& AddSessionAttributes(SessionAttributesKeyT&& key, SessionAttributesValueT&& value) {
      m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::forward<SessionAttributesKeyT>(key), std::forward<SessionAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    GetSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current state of the bot.</p>
     */
    inline const DialogAction& GetDialogAction() const { return m_dialogAction; }
    template<typename DialogActionT = DialogAction>
    void SetDialogAction(DialogActionT&& value) { m_dialogActionHasBeenSet = true; m_dialogAction = std::forward<DialogActionT>(value); }
    template<typename DialogActionT = DialogAction>
    GetSessionResult& WithDialogAction(DialogActionT&& value) { SetDialogAction(std::forward<DialogActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const { return m_activeContexts; }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    void SetActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::forward<ActiveContextsT>(value); }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    GetSessionResult& WithActiveContexts(ActiveContextsT&& value) { SetActiveContexts(std::forward<ActiveContextsT>(value)); return *this;}
    template<typename ActiveContextsT = ActiveContext>
    GetSessionResult& AddActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts.emplace_back(std::forward<ActiveContextsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IntentSummary> m_recentIntentSummaryView;
    bool m_recentIntentSummaryViewHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    DialogAction m_dialogAction;
    bool m_dialogActionHasBeenSet = false;

    Aws::Vector<ActiveContext> m_activeContexts;
    bool m_activeContextsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
