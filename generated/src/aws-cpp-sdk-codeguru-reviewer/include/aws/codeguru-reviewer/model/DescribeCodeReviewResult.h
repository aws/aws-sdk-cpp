/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/CodeReview.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeCodeReviewResult
  {
  public:
    AWS_CODEGURUREVIEWER_API DescribeCodeReviewResult() = default;
    AWS_CODEGURUREVIEWER_API DescribeCodeReviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API DescribeCodeReviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the code review.</p>
     */
    inline const CodeReview& GetCodeReview() const { return m_codeReview; }
    template<typename CodeReviewT = CodeReview>
    void SetCodeReview(CodeReviewT&& value) { m_codeReviewHasBeenSet = true; m_codeReview = std::forward<CodeReviewT>(value); }
    template<typename CodeReviewT = CodeReview>
    DescribeCodeReviewResult& WithCodeReview(CodeReviewT&& value) { SetCodeReview(std::forward<CodeReviewT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCodeReviewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CodeReview m_codeReview;
    bool m_codeReviewHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
