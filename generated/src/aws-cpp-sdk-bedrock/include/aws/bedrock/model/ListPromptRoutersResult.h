/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/PromptRouterSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListPromptRoutersResult
  {
  public:
    AWS_BEDROCK_API ListPromptRoutersResult() = default;
    AWS_BEDROCK_API ListPromptRoutersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListPromptRoutersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of prompt router summaries.</p>
     */
    inline const Aws::Vector<PromptRouterSummary>& GetPromptRouterSummaries() const { return m_promptRouterSummaries; }
    template<typename PromptRouterSummariesT = Aws::Vector<PromptRouterSummary>>
    void SetPromptRouterSummaries(PromptRouterSummariesT&& value) { m_promptRouterSummariesHasBeenSet = true; m_promptRouterSummaries = std::forward<PromptRouterSummariesT>(value); }
    template<typename PromptRouterSummariesT = Aws::Vector<PromptRouterSummary>>
    ListPromptRoutersResult& WithPromptRouterSummaries(PromptRouterSummariesT&& value) { SetPromptRouterSummaries(std::forward<PromptRouterSummariesT>(value)); return *this;}
    template<typename PromptRouterSummariesT = PromptRouterSummary>
    ListPromptRoutersResult& AddPromptRouterSummaries(PromptRouterSummariesT&& value) { m_promptRouterSummariesHasBeenSet = true; m_promptRouterSummaries.emplace_back(std::forward<PromptRouterSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPromptRoutersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPromptRoutersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PromptRouterSummary> m_promptRouterSummaries;
    bool m_promptRouterSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
