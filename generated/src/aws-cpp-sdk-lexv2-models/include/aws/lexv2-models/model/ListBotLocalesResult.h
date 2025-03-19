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
    AWS_LEXMODELSV2_API ListBotLocalesResult() = default;
    AWS_LEXMODELSV2_API ListBotLocalesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotLocalesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the bot to list locales for.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    ListBotLocalesResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    ListBotLocalesResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotLocales</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotLocales</code> operation request to get the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBotLocalesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information for the locales that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more locales
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline const Aws::Vector<BotLocaleSummary>& GetBotLocaleSummaries() const { return m_botLocaleSummaries; }
    template<typename BotLocaleSummariesT = Aws::Vector<BotLocaleSummary>>
    void SetBotLocaleSummaries(BotLocaleSummariesT&& value) { m_botLocaleSummariesHasBeenSet = true; m_botLocaleSummaries = std::forward<BotLocaleSummariesT>(value); }
    template<typename BotLocaleSummariesT = Aws::Vector<BotLocaleSummary>>
    ListBotLocalesResult& WithBotLocaleSummaries(BotLocaleSummariesT&& value) { SetBotLocaleSummaries(std::forward<BotLocaleSummariesT>(value)); return *this;}
    template<typename BotLocaleSummariesT = BotLocaleSummary>
    ListBotLocalesResult& AddBotLocaleSummaries(BotLocaleSummariesT&& value) { m_botLocaleSummariesHasBeenSet = true; m_botLocaleSummaries.emplace_back(std::forward<BotLocaleSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBotLocalesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<BotLocaleSummary> m_botLocaleSummaries;
    bool m_botLocaleSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
