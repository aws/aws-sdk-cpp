/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/IntentSummary.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListIntentsResult
  {
  public:
    AWS_LEXMODELSV2_API ListIntentsResult();
    AWS_LEXMODELSV2_API ListIntentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListIntentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline ListIntentsResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline ListIntentsResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline ListIntentsResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline ListIntentsResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline ListIntentsResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that contains the intent.</p>
     */
    inline ListIntentsResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The language and locale of the intents in the list.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The language and locale of the intents in the list.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The language and locale of the intents in the list.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The language and locale of the intents in the list.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The language and locale of the intents in the list.</p>
     */
    inline ListIntentsResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The language and locale of the intents in the list.</p>
     */
    inline ListIntentsResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The language and locale of the intents in the list.</p>
     */
    inline ListIntentsResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more intents
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline const Aws::Vector<IntentSummary>& GetIntentSummaries() const{ return m_intentSummaries; }

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more intents
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline void SetIntentSummaries(const Aws::Vector<IntentSummary>& value) { m_intentSummaries = value; }

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more intents
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline void SetIntentSummaries(Aws::Vector<IntentSummary>&& value) { m_intentSummaries = std::move(value); }

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more intents
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListIntentsResult& WithIntentSummaries(const Aws::Vector<IntentSummary>& value) { SetIntentSummaries(value); return *this;}

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more intents
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListIntentsResult& WithIntentSummaries(Aws::Vector<IntentSummary>&& value) { SetIntentSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more intents
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListIntentsResult& AddIntentSummaries(const IntentSummary& value) { m_intentSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information for the intents that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more intents
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListIntentsResult& AddIntentSummaries(IntentSummary&& value) { m_intentSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListIntents</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListIntents</code> operation request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListIntents</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListIntents</code> operation request to get the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListIntents</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListIntents</code> operation request to get the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListIntents</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListIntents</code> operation request to get the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListIntents</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListIntents</code> operation request to get the next page of results.</p>
     */
    inline ListIntentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListIntents</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListIntents</code> operation request to get the next page of results.</p>
     */
    inline ListIntentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListIntents</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListIntents</code> operation request to get the next page of results.</p>
     */
    inline ListIntentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::Vector<IntentSummary> m_intentSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
