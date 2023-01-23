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
    AWS_LEXRUNTIMESERVICE_API GetSessionResult();
    AWS_LEXRUNTIMESERVICE_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXRUNTIMESERVICE_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of information about the intents used in the session. The array can
     * contain a maximum of three summaries. If more than three intents are used in the
     * session, the <code>recentIntentSummaryView</code> operation contains information
     * about the last three intents used.</p> <p>If you set the
     * <code>checkpointLabelFilter</code> parameter in the request, the array contains
     * only the intents with the specified label.</p>
     */
    inline const Aws::Vector<IntentSummary>& GetRecentIntentSummaryView() const{ return m_recentIntentSummaryView; }

    /**
     * <p>An array of information about the intents used in the session. The array can
     * contain a maximum of three summaries. If more than three intents are used in the
     * session, the <code>recentIntentSummaryView</code> operation contains information
     * about the last three intents used.</p> <p>If you set the
     * <code>checkpointLabelFilter</code> parameter in the request, the array contains
     * only the intents with the specified label.</p>
     */
    inline void SetRecentIntentSummaryView(const Aws::Vector<IntentSummary>& value) { m_recentIntentSummaryView = value; }

    /**
     * <p>An array of information about the intents used in the session. The array can
     * contain a maximum of three summaries. If more than three intents are used in the
     * session, the <code>recentIntentSummaryView</code> operation contains information
     * about the last three intents used.</p> <p>If you set the
     * <code>checkpointLabelFilter</code> parameter in the request, the array contains
     * only the intents with the specified label.</p>
     */
    inline void SetRecentIntentSummaryView(Aws::Vector<IntentSummary>&& value) { m_recentIntentSummaryView = std::move(value); }

    /**
     * <p>An array of information about the intents used in the session. The array can
     * contain a maximum of three summaries. If more than three intents are used in the
     * session, the <code>recentIntentSummaryView</code> operation contains information
     * about the last three intents used.</p> <p>If you set the
     * <code>checkpointLabelFilter</code> parameter in the request, the array contains
     * only the intents with the specified label.</p>
     */
    inline GetSessionResult& WithRecentIntentSummaryView(const Aws::Vector<IntentSummary>& value) { SetRecentIntentSummaryView(value); return *this;}

    /**
     * <p>An array of information about the intents used in the session. The array can
     * contain a maximum of three summaries. If more than three intents are used in the
     * session, the <code>recentIntentSummaryView</code> operation contains information
     * about the last three intents used.</p> <p>If you set the
     * <code>checkpointLabelFilter</code> parameter in the request, the array contains
     * only the intents with the specified label.</p>
     */
    inline GetSessionResult& WithRecentIntentSummaryView(Aws::Vector<IntentSummary>&& value) { SetRecentIntentSummaryView(std::move(value)); return *this;}

    /**
     * <p>An array of information about the intents used in the session. The array can
     * contain a maximum of three summaries. If more than three intents are used in the
     * session, the <code>recentIntentSummaryView</code> operation contains information
     * about the last three intents used.</p> <p>If you set the
     * <code>checkpointLabelFilter</code> parameter in the request, the array contains
     * only the intents with the specified label.</p>
     */
    inline GetSessionResult& AddRecentIntentSummaryView(const IntentSummary& value) { m_recentIntentSummaryView.push_back(value); return *this; }

    /**
     * <p>An array of information about the intents used in the session. The array can
     * contain a maximum of three summaries. If more than three intents are used in the
     * session, the <code>recentIntentSummaryView</code> operation contains information
     * about the last three intents used.</p> <p>If you set the
     * <code>checkpointLabelFilter</code> parameter in the request, the array contains
     * only the intents with the specified label.</p>
     */
    inline GetSessionResult& AddRecentIntentSummaryView(IntentSummary&& value) { m_recentIntentSummaryView.push_back(std::move(value)); return *this; }


    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributes = value; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributes = std::move(value); }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline GetSessionResult& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline GetSessionResult& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline GetSessionResult& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributes.emplace(key, value); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline GetSessionResult& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline GetSessionResult& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline GetSessionResult& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline GetSessionResult& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline GetSessionResult& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline GetSessionResult& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributes.emplace(key, value); return *this; }


    /**
     * <p>A unique identifier for the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline GetSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline GetSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline GetSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>Describes the current state of the bot.</p>
     */
    inline const DialogAction& GetDialogAction() const{ return m_dialogAction; }

    /**
     * <p>Describes the current state of the bot.</p>
     */
    inline void SetDialogAction(const DialogAction& value) { m_dialogAction = value; }

    /**
     * <p>Describes the current state of the bot.</p>
     */
    inline void SetDialogAction(DialogAction&& value) { m_dialogAction = std::move(value); }

    /**
     * <p>Describes the current state of the bot.</p>
     */
    inline GetSessionResult& WithDialogAction(const DialogAction& value) { SetDialogAction(value); return *this;}

    /**
     * <p>Describes the current state of the bot.</p>
     */
    inline GetSessionResult& WithDialogAction(DialogAction&& value) { SetDialogAction(std::move(value)); return *this;}


    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const{ return m_activeContexts; }

    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline void SetActiveContexts(const Aws::Vector<ActiveContext>& value) { m_activeContexts = value; }

    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline void SetActiveContexts(Aws::Vector<ActiveContext>&& value) { m_activeContexts = std::move(value); }

    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline GetSessionResult& WithActiveContexts(const Aws::Vector<ActiveContext>& value) { SetActiveContexts(value); return *this;}

    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline GetSessionResult& WithActiveContexts(Aws::Vector<ActiveContext>&& value) { SetActiveContexts(std::move(value)); return *this;}

    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline GetSessionResult& AddActiveContexts(const ActiveContext& value) { m_activeContexts.push_back(value); return *this; }

    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline GetSessionResult& AddActiveContexts(ActiveContext&& value) { m_activeContexts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<IntentSummary> m_recentIntentSummaryView;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;

    Aws::String m_sessionId;

    DialogAction m_dialogAction;

    Aws::Vector<ActiveContext> m_activeContexts;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
