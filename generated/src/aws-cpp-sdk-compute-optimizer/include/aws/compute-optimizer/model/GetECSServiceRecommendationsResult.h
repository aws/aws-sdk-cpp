/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/ECSServiceRecommendation.h>
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
  class GetECSServiceRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetECSServiceRecommendationsResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetECSServiceRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetECSServiceRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token to advance to the next page of Amazon ECS service recommendations.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetECSServiceRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the Amazon ECS service recommendations.
     * </p>
     */
    inline const Aws::Vector<ECSServiceRecommendation>& GetEcsServiceRecommendations() const { return m_ecsServiceRecommendations; }
    template<typename EcsServiceRecommendationsT = Aws::Vector<ECSServiceRecommendation>>
    void SetEcsServiceRecommendations(EcsServiceRecommendationsT&& value) { m_ecsServiceRecommendationsHasBeenSet = true; m_ecsServiceRecommendations = std::forward<EcsServiceRecommendationsT>(value); }
    template<typename EcsServiceRecommendationsT = Aws::Vector<ECSServiceRecommendation>>
    GetECSServiceRecommendationsResult& WithEcsServiceRecommendations(EcsServiceRecommendationsT&& value) { SetEcsServiceRecommendations(std::forward<EcsServiceRecommendationsT>(value)); return *this;}
    template<typename EcsServiceRecommendationsT = ECSServiceRecommendation>
    GetECSServiceRecommendationsResult& AddEcsServiceRecommendations(EcsServiceRecommendationsT&& value) { m_ecsServiceRecommendationsHasBeenSet = true; m_ecsServiceRecommendations.emplace_back(std::forward<EcsServiceRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    GetECSServiceRecommendationsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = GetRecommendationError>
    GetECSServiceRecommendationsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetECSServiceRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ECSServiceRecommendation> m_ecsServiceRecommendations;
    bool m_ecsServiceRecommendationsHasBeenSet = false;

    Aws::Vector<GetRecommendationError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
