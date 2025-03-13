/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ScalingPlan.h>
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
namespace AutoScalingPlans
{
namespace Model
{
  class DescribeScalingPlansResult
  {
  public:
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlansResult() = default;
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the scaling plans.</p>
     */
    inline const Aws::Vector<ScalingPlan>& GetScalingPlans() const { return m_scalingPlans; }
    template<typename ScalingPlansT = Aws::Vector<ScalingPlan>>
    void SetScalingPlans(ScalingPlansT&& value) { m_scalingPlansHasBeenSet = true; m_scalingPlans = std::forward<ScalingPlansT>(value); }
    template<typename ScalingPlansT = Aws::Vector<ScalingPlan>>
    DescribeScalingPlansResult& WithScalingPlans(ScalingPlansT&& value) { SetScalingPlans(std::forward<ScalingPlansT>(value)); return *this;}
    template<typename ScalingPlansT = ScalingPlan>
    DescribeScalingPlansResult& AddScalingPlans(ScalingPlansT&& value) { m_scalingPlansHasBeenSet = true; m_scalingPlans.emplace_back(std::forward<ScalingPlansT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeScalingPlansResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeScalingPlansResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScalingPlan> m_scalingPlans;
    bool m_scalingPlansHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
