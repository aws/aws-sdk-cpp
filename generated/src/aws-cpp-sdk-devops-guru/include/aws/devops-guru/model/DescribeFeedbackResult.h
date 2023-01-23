/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/InsightFeedback.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class DescribeFeedbackResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeFeedbackResult();
    AWS_DEVOPSGURU_API DescribeFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const InsightFeedback& GetInsightFeedback() const{ return m_insightFeedback; }

    
    inline void SetInsightFeedback(const InsightFeedback& value) { m_insightFeedback = value; }

    
    inline void SetInsightFeedback(InsightFeedback&& value) { m_insightFeedback = std::move(value); }

    
    inline DescribeFeedbackResult& WithInsightFeedback(const InsightFeedback& value) { SetInsightFeedback(value); return *this;}

    
    inline DescribeFeedbackResult& WithInsightFeedback(InsightFeedback&& value) { SetInsightFeedback(std::move(value)); return *this;}

  private:

    InsightFeedback m_insightFeedback;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
