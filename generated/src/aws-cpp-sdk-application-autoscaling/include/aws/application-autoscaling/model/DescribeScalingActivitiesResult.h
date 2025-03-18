/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalingActivity.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{
  class DescribeScalingActivitiesResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API DescribeScalingActivitiesResult() = default;
    AWS_APPLICATIONAUTOSCALING_API DescribeScalingActivitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API DescribeScalingActivitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of scaling activity objects.</p>
     */
    inline const Aws::Vector<ScalingActivity>& GetScalingActivities() const { return m_scalingActivities; }
    template<typename ScalingActivitiesT = Aws::Vector<ScalingActivity>>
    void SetScalingActivities(ScalingActivitiesT&& value) { m_scalingActivitiesHasBeenSet = true; m_scalingActivities = std::forward<ScalingActivitiesT>(value); }
    template<typename ScalingActivitiesT = Aws::Vector<ScalingActivity>>
    DescribeScalingActivitiesResult& WithScalingActivities(ScalingActivitiesT&& value) { SetScalingActivities(std::forward<ScalingActivitiesT>(value)); return *this;}
    template<typename ScalingActivitiesT = ScalingActivity>
    DescribeScalingActivitiesResult& AddScalingActivities(ScalingActivitiesT&& value) { m_scalingActivitiesHasBeenSet = true; m_scalingActivities.emplace_back(std::forward<ScalingActivitiesT>(value)); return *this; }
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
    DescribeScalingActivitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeScalingActivitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScalingActivity> m_scalingActivities;
    bool m_scalingActivitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
