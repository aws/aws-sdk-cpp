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
    AWS_CODEGURUREVIEWER_API DescribeRecommendationFeedbackResult();
    AWS_CODEGURUREVIEWER_API DescribeRecommendationFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API DescribeRecommendationFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The recommendation feedback given by the user.</p>
     */
    inline const RecommendationFeedback& GetRecommendationFeedback() const{ return m_recommendationFeedback; }

    /**
     * <p>The recommendation feedback given by the user.</p>
     */
    inline void SetRecommendationFeedback(const RecommendationFeedback& value) { m_recommendationFeedback = value; }

    /**
     * <p>The recommendation feedback given by the user.</p>
     */
    inline void SetRecommendationFeedback(RecommendationFeedback&& value) { m_recommendationFeedback = std::move(value); }

    /**
     * <p>The recommendation feedback given by the user.</p>
     */
    inline DescribeRecommendationFeedbackResult& WithRecommendationFeedback(const RecommendationFeedback& value) { SetRecommendationFeedback(value); return *this;}

    /**
     * <p>The recommendation feedback given by the user.</p>
     */
    inline DescribeRecommendationFeedbackResult& WithRecommendationFeedback(RecommendationFeedback&& value) { SetRecommendationFeedback(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRecommendationFeedbackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRecommendationFeedbackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRecommendationFeedbackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RecommendationFeedback m_recommendationFeedback;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
