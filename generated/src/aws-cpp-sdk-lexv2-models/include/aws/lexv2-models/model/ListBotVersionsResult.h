/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/BotVersionSummary.h>
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
  class ListBotVersionsResult
  {
  public:
    AWS_LEXMODELSV2_API ListBotVersionsResult();
    AWS_LEXMODELSV2_API ListBotVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline ListBotVersionsResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline ListBotVersionsResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot to list versions for.</p>
     */
    inline ListBotVersionsResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>Summary information for the bot versions that meet the filter criteria
     * specified in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more versions
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline const Aws::Vector<BotVersionSummary>& GetBotVersionSummaries() const{ return m_botVersionSummaries; }

    /**
     * <p>Summary information for the bot versions that meet the filter criteria
     * specified in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more versions
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline void SetBotVersionSummaries(const Aws::Vector<BotVersionSummary>& value) { m_botVersionSummaries = value; }

    /**
     * <p>Summary information for the bot versions that meet the filter criteria
     * specified in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more versions
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline void SetBotVersionSummaries(Aws::Vector<BotVersionSummary>&& value) { m_botVersionSummaries = std::move(value); }

    /**
     * <p>Summary information for the bot versions that meet the filter criteria
     * specified in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more versions
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListBotVersionsResult& WithBotVersionSummaries(const Aws::Vector<BotVersionSummary>& value) { SetBotVersionSummaries(value); return *this;}

    /**
     * <p>Summary information for the bot versions that meet the filter criteria
     * specified in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more versions
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListBotVersionsResult& WithBotVersionSummaries(Aws::Vector<BotVersionSummary>&& value) { SetBotVersionSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information for the bot versions that meet the filter criteria
     * specified in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more versions
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListBotVersionsResult& AddBotVersionSummaries(const BotVersionSummary& value) { m_botVersionSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information for the bot versions that meet the filter criteria
     * specified in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more versions
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline ListBotVersionsResult& AddBotVersionSummaries(BotVersionSummary&& value) { m_botVersionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotVersions</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotAliases</code> operation request to get the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotVersions</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotAliases</code> operation request to get the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotVersions</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotAliases</code> operation request to get the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotVersions</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotAliases</code> operation request to get the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotVersions</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotAliases</code> operation request to get the next page of
     * results.</p>
     */
    inline ListBotVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotVersions</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotAliases</code> operation request to get the next page of
     * results.</p>
     */
    inline ListBotVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotVersions</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotAliases</code> operation request to get the next page of
     * results.</p>
     */
    inline ListBotVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::Vector<BotVersionSummary> m_botVersionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
