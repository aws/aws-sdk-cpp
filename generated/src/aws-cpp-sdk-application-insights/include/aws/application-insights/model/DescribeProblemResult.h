/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/Problem.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class DescribeProblemResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeProblemResult() = default;
    AWS_APPLICATIONINSIGHTS_API DescribeProblemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeProblemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the problem. </p>
     */
    inline const Problem& GetProblem() const { return m_problem; }
    template<typename ProblemT = Problem>
    void SetProblem(ProblemT&& value) { m_problemHasBeenSet = true; m_problem = std::forward<ProblemT>(value); }
    template<typename ProblemT = Problem>
    DescribeProblemResult& WithProblem(ProblemT&& value) { SetProblem(std::forward<ProblemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SNS notification topic ARN of the problem. </p>
     */
    inline const Aws::String& GetSNSNotificationArn() const { return m_sNSNotificationArn; }
    template<typename SNSNotificationArnT = Aws::String>
    void SetSNSNotificationArn(SNSNotificationArnT&& value) { m_sNSNotificationArnHasBeenSet = true; m_sNSNotificationArn = std::forward<SNSNotificationArnT>(value); }
    template<typename SNSNotificationArnT = Aws::String>
    DescribeProblemResult& WithSNSNotificationArn(SNSNotificationArnT&& value) { SetSNSNotificationArn(std::forward<SNSNotificationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProblemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Problem m_problem;
    bool m_problemHasBeenSet = false;

    Aws::String m_sNSNotificationArn;
    bool m_sNSNotificationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
