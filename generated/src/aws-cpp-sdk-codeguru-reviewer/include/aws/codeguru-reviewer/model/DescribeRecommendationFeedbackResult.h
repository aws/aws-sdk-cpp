/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/RecommendationFeedback.h>
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
  class DescribeRecommendationFeedbackResult
  {
  public:
    AWS_CODEGURUREVIEWER_API DescribeRecommendationFeedbackResult() = default;
    AWS_CODEGURUREVIEWER_API DescribeRecommendationFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API DescribeRecommendationFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The recommendation feedback given by the user.</p>
     */
    inline const RecommendationFeedback& GetRecommendationFeedback() const { return m_recommendationFeedback; }
    template<typename RecommendationFeedbackT = RecommendationFeedback>
    void SetRecommendationFeedback(RecommendationFeedbackT&& value) { m_recommendationFeedbackHasBeenSet = true; m_recommendationFeedback = std::forward<RecommendationFeedbackT>(value); }
    template<typename RecommendationFeedbackT = RecommendationFeedback>
    DescribeRecommendationFeedbackResult& WithRecommendationFeedback(RecommendationFeedbackT&& value) { SetRecommendationFeedback(std::forward<RecommendationFeedbackT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRecommendationFeedbackResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RecommendationFeedback m_recommendationFeedback;
    bool m_recommendationFeedbackHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
