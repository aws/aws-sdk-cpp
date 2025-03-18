/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ScalingPlanResource.h>
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
  class DescribeScalingPlanResourcesResult
  {
  public:
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlanResourcesResult() = default;
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlanResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlanResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the scalable resources.</p>
     */
    inline const Aws::Vector<ScalingPlanResource>& GetScalingPlanResources() const { return m_scalingPlanResources; }
    template<typename ScalingPlanResourcesT = Aws::Vector<ScalingPlanResource>>
    void SetScalingPlanResources(ScalingPlanResourcesT&& value) { m_scalingPlanResourcesHasBeenSet = true; m_scalingPlanResources = std::forward<ScalingPlanResourcesT>(value); }
    template<typename ScalingPlanResourcesT = Aws::Vector<ScalingPlanResource>>
    DescribeScalingPlanResourcesResult& WithScalingPlanResources(ScalingPlanResourcesT&& value) { SetScalingPlanResources(std::forward<ScalingPlanResourcesT>(value)); return *this;}
    template<typename ScalingPlanResourcesT = ScalingPlanResource>
    DescribeScalingPlanResourcesResult& AddScalingPlanResources(ScalingPlanResourcesT&& value) { m_scalingPlanResourcesHasBeenSet = true; m_scalingPlanResources.emplace_back(std::forward<ScalingPlanResourcesT>(value)); return *this; }
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
    DescribeScalingPlanResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeScalingPlanResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScalingPlanResource> m_scalingPlanResources;
    bool m_scalingPlanResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
