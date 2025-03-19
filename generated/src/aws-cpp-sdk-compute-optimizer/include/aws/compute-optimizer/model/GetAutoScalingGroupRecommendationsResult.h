/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/AutoScalingGroupRecommendation.h>
#include <aws/compute-optimizer/model/GetRecommendationError.h>
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
namespace ComputeOptimizer
{
namespace Model
{
  class GetAutoScalingGroupRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetAutoScalingGroupRecommendationsResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetAutoScalingGroupRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetAutoScalingGroupRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to advance to the next page of Auto Scaling group
     * recommendations.</p> <p>This value is null when there are no more pages of Auto
     * Scaling group recommendations to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAutoScalingGroupRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe Auto Scaling group recommendations.</p>
     */
    inline const Aws::Vector<AutoScalingGroupRecommendation>& GetAutoScalingGroupRecommendations() const { return m_autoScalingGroupRecommendations; }
    template<typename AutoScalingGroupRecommendationsT = Aws::Vector<AutoScalingGroupRecommendation>>
    void SetAutoScalingGroupRecommendations(AutoScalingGroupRecommendationsT&& value) { m_autoScalingGroupRecommendationsHasBeenSet = true; m_autoScalingGroupRecommendations = std::forward<AutoScalingGroupRecommendationsT>(value); }
    template<typename AutoScalingGroupRecommendationsT = Aws::Vector<AutoScalingGroupRecommendation>>
    GetAutoScalingGroupRecommendationsResult& WithAutoScalingGroupRecommendations(AutoScalingGroupRecommendationsT&& value) { SetAutoScalingGroupRecommendations(std::forward<AutoScalingGroupRecommendationsT>(value)); return *this;}
    template<typename AutoScalingGroupRecommendationsT = AutoScalingGroupRecommendation>
    GetAutoScalingGroupRecommendationsResult& AddAutoScalingGroupRecommendations(AutoScalingGroupRecommendationsT&& value) { m_autoScalingGroupRecommendationsHasBeenSet = true; m_autoScalingGroupRecommendations.emplace_back(std::forward<AutoScalingGroupRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an unsupported Auto
     * Scaling group.</p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    GetAutoScalingGroupRecommendationsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = GetRecommendationError>
    GetAutoScalingGroupRecommendationsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutoScalingGroupRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AutoScalingGroupRecommendation> m_autoScalingGroupRecommendations;
    bool m_autoScalingGroupRecommendationsHasBeenSet = false;

    Aws::Vector<GetRecommendationError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
