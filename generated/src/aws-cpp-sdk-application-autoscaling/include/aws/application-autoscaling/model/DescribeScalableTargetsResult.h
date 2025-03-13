/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalableTarget.h>
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
  class DescribeScalableTargetsResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API DescribeScalableTargetsResult() = default;
    AWS_APPLICATIONAUTOSCALING_API DescribeScalableTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API DescribeScalableTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The scalable targets that match the request parameters.</p>
     */
    inline const Aws::Vector<ScalableTarget>& GetScalableTargets() const { return m_scalableTargets; }
    template<typename ScalableTargetsT = Aws::Vector<ScalableTarget>>
    void SetScalableTargets(ScalableTargetsT&& value) { m_scalableTargetsHasBeenSet = true; m_scalableTargets = std::forward<ScalableTargetsT>(value); }
    template<typename ScalableTargetsT = Aws::Vector<ScalableTarget>>
    DescribeScalableTargetsResult& WithScalableTargets(ScalableTargetsT&& value) { SetScalableTargets(std::forward<ScalableTargetsT>(value)); return *this;}
    template<typename ScalableTargetsT = ScalableTarget>
    DescribeScalableTargetsResult& AddScalableTargets(ScalableTargetsT&& value) { m_scalableTargetsHasBeenSet = true; m_scalableTargets.emplace_back(std::forward<ScalableTargetsT>(value)); return *this; }
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
    DescribeScalableTargetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeScalableTargetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScalableTarget> m_scalableTargets;
    bool m_scalableTargetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
