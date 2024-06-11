﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotSummary.h>
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
  class ListBotsResult
  {
  public:
    AWS_LEXMODELSV2_API ListBotsResult();
    AWS_LEXMODELSV2_API ListBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information for the bots that meet the filter criteria specified in
     * the request. The length of the list is specified in the <code>maxResults</code>
     * parameter of the request. If there are more bots available, the
     * <code>nextToken</code> field contains a token to the next page of results.</p>
     */
    inline const Aws::Vector<BotSummary>& GetBotSummaries() const{ return m_botSummaries; }
    inline void SetBotSummaries(const Aws::Vector<BotSummary>& value) { m_botSummaries = value; }
    inline void SetBotSummaries(Aws::Vector<BotSummary>&& value) { m_botSummaries = std::move(value); }
    inline ListBotsResult& WithBotSummaries(const Aws::Vector<BotSummary>& value) { SetBotSummaries(value); return *this;}
    inline ListBotsResult& WithBotSummaries(Aws::Vector<BotSummary>&& value) { SetBotSummaries(std::move(value)); return *this;}
    inline ListBotsResult& AddBotSummaries(const BotSummary& value) { m_botSummaries.push_back(value); return *this; }
    inline ListBotsResult& AddBotSummaries(BotSummary&& value) { m_botSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBots</code> operation. If the <code>nextToken</code> field is
     * present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListBots</code> operation request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBotsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBotsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBotsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BotSummary> m_botSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
