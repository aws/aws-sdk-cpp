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
    AWS_DEVOPSGURU_API DescribeFeedbackResult() = default;
    AWS_DEVOPSGURU_API DescribeFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const InsightFeedback& GetInsightFeedback() const { return m_insightFeedback; }
    template<typename InsightFeedbackT = InsightFeedback>
    void SetInsightFeedback(InsightFeedbackT&& value) { m_insightFeedbackHasBeenSet = true; m_insightFeedback = std::forward<InsightFeedbackT>(value); }
    template<typename InsightFeedbackT = InsightFeedback>
    DescribeFeedbackResult& WithInsightFeedback(InsightFeedbackT&& value) { SetInsightFeedback(std::forward<InsightFeedbackT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFeedbackResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InsightFeedback m_insightFeedback;
    bool m_insightFeedbackHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
