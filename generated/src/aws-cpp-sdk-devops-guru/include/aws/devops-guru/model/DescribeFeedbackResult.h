/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/InsightFeedback.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeFeedbackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeFeedbackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeFeedbackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InsightFeedback m_insightFeedback;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
