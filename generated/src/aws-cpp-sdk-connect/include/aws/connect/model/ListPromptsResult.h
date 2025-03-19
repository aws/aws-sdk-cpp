/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PromptSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListPromptsResult
  {
  public:
    AWS_CONNECT_API ListPromptsResult() = default;
    AWS_CONNECT_API ListPromptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListPromptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the prompts.</p>
     */
    inline const Aws::Vector<PromptSummary>& GetPromptSummaryList() const { return m_promptSummaryList; }
    template<typename PromptSummaryListT = Aws::Vector<PromptSummary>>
    void SetPromptSummaryList(PromptSummaryListT&& value) { m_promptSummaryListHasBeenSet = true; m_promptSummaryList = std::forward<PromptSummaryListT>(value); }
    template<typename PromptSummaryListT = Aws::Vector<PromptSummary>>
    ListPromptsResult& WithPromptSummaryList(PromptSummaryListT&& value) { SetPromptSummaryList(std::forward<PromptSummaryListT>(value)); return *this;}
    template<typename PromptSummaryListT = PromptSummary>
    ListPromptsResult& AddPromptSummaryList(PromptSummaryListT&& value) { m_promptSummaryListHasBeenSet = true; m_promptSummaryList.emplace_back(std::forward<PromptSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPromptsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPromptsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PromptSummary> m_promptSummaryList;
    bool m_promptSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
