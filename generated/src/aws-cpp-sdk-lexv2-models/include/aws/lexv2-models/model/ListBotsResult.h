/**
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
    AWS_LEXMODELSV2_API ListBotsResult() = default;
    AWS_LEXMODELSV2_API ListBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information for the bots that meet the filter criteria specified in
     * the request. The length of the list is specified in the <code>maxResults</code>
     * parameter of the request. If there are more bots available, the
     * <code>nextToken</code> field contains a token to the next page of results.</p>
     */
    inline const Aws::Vector<BotSummary>& GetBotSummaries() const { return m_botSummaries; }
    template<typename BotSummariesT = Aws::Vector<BotSummary>>
    void SetBotSummaries(BotSummariesT&& value) { m_botSummariesHasBeenSet = true; m_botSummaries = std::forward<BotSummariesT>(value); }
    template<typename BotSummariesT = Aws::Vector<BotSummary>>
    ListBotsResult& WithBotSummaries(BotSummariesT&& value) { SetBotSummaries(std::forward<BotSummariesT>(value)); return *this;}
    template<typename BotSummariesT = BotSummary>
    ListBotsResult& AddBotSummaries(BotSummariesT&& value) { m_botSummariesHasBeenSet = true; m_botSummaries.emplace_back(std::forward<BotSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBots</code> operation. If the <code>nextToken</code> field is
     * present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListBots</code> operation request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBotsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BotSummary> m_botSummaries;
    bool m_botSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
