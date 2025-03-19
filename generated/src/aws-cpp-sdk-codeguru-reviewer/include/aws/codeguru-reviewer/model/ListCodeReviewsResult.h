/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/CodeReviewSummary.h>
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
namespace CodeGuruReviewer
{
namespace Model
{
  class ListCodeReviewsResult
  {
  public:
    AWS_CODEGURUREVIEWER_API ListCodeReviewsResult() = default;
    AWS_CODEGURUREVIEWER_API ListCodeReviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API ListCodeReviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of code reviews that meet the criteria of the request.</p>
     */
    inline const Aws::Vector<CodeReviewSummary>& GetCodeReviewSummaries() const { return m_codeReviewSummaries; }
    template<typename CodeReviewSummariesT = Aws::Vector<CodeReviewSummary>>
    void SetCodeReviewSummaries(CodeReviewSummariesT&& value) { m_codeReviewSummariesHasBeenSet = true; m_codeReviewSummaries = std::forward<CodeReviewSummariesT>(value); }
    template<typename CodeReviewSummariesT = Aws::Vector<CodeReviewSummary>>
    ListCodeReviewsResult& WithCodeReviewSummaries(CodeReviewSummariesT&& value) { SetCodeReviewSummaries(std::forward<CodeReviewSummariesT>(value)); return *this;}
    template<typename CodeReviewSummariesT = CodeReviewSummary>
    ListCodeReviewsResult& AddCodeReviewSummaries(CodeReviewSummariesT&& value) { m_codeReviewSummariesHasBeenSet = true; m_codeReviewSummaries.emplace_back(std::forward<CodeReviewSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCodeReviewsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCodeReviewsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CodeReviewSummary> m_codeReviewSummaries;
    bool m_codeReviewSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
