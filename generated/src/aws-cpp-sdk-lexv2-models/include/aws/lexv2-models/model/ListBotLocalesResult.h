/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/BotLocaleSummary.h>
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
  class ListBotLocalesResult
  {
  public:
    AWS_LEXMODELSV2_API ListBotLocalesResult();
    AWS_LEXMODELSV2_API ListBotLocalesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotLocalesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline ListBotLocalesResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline ListBotLocalesResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline ListBotLocalesResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot.</p>
     */
    inline ListBotLocalesResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot.</p>
     */
    inline ListBotLocalesResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot.</p>
     */
    inline ListBotLocalesResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotLocales</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotLocales</code> operation request to get the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotLocales</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotLocales</code> operation request to get the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotLocales</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotLocales</code> operation request to get the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotLocales</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotLocales</code> operation request to get the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotLocales</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotLocales</code> operation request to get the next page of
     * results.</p>
     */
    inline ListBotLocalesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotLocales</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotLocales</code> operation request to get the next page of
     * results.</p>
     */
    inline ListBotLocalesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotLocales</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotLocales</code> operation request to get the next page of
     * results.</p>
     */
    inline ListBotLocalesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Summary information for the locales that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more locales
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline const Aws::Vector<BotLocaleSummary>& GetBotLocaleSummaries() const{ return m_botLocaleSummaries; }

    /**
     * <p>Summary information for the locales that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more locales
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline void SetBotLocaleSummaries(const Aws::Vector<BotLocaleSummary>& value) { m_botLocaleSummaries = value; }

    /**
     * <p>Summary information for the locales that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more locales
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline void SetBotLocaleSummaries(Aws::Vector<BotLocaleSummary>&& value) { m_botLocaleSummaries = std::move(value); }

    /**
     * <p>Summary information for the locales that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more locales
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListBotLocalesResult& WithBotLocaleSummaries(const Aws::Vector<BotLocaleSummary>& value) { SetBotLocaleSummaries(value); return *this;}

    /**
     * <p>Summary information for the locales that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more locales
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListBotLocalesResult& WithBotLocaleSummaries(Aws::Vector<BotLocaleSummary>&& value) { SetBotLocaleSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information for the locales that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more locales
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListBotLocalesResult& AddBotLocaleSummaries(const BotLocaleSummary& value) { m_botLocaleSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information for the locales that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more locales
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListBotLocalesResult& AddBotLocaleSummaries(BotLocaleSummary&& value) { m_botLocaleSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_nextToken;

    Aws::Vector<BotLocaleSummary> m_botLocaleSummaries;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
