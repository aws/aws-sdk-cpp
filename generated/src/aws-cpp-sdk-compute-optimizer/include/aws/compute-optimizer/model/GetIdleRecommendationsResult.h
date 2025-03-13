/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/IdleRecommendation.h>
#include <aws/compute-optimizer/model/IdleRecommendationError.h>
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
  class GetIdleRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetIdleRecommendationsResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetIdleRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetIdleRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to advance to the next page of idle resource recommendations.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetIdleRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the idle resource recommendations.</p>
     */
    inline const Aws::Vector<IdleRecommendation>& GetIdleRecommendations() const { return m_idleRecommendations; }
    template<typename IdleRecommendationsT = Aws::Vector<IdleRecommendation>>
    void SetIdleRecommendations(IdleRecommendationsT&& value) { m_idleRecommendationsHasBeenSet = true; m_idleRecommendations = std::forward<IdleRecommendationsT>(value); }
    template<typename IdleRecommendationsT = Aws::Vector<IdleRecommendation>>
    GetIdleRecommendationsResult& WithIdleRecommendations(IdleRecommendationsT&& value) { SetIdleRecommendations(std::forward<IdleRecommendationsT>(value)); return *this;}
    template<typename IdleRecommendationsT = IdleRecommendation>
    GetIdleRecommendationsResult& AddIdleRecommendations(IdleRecommendationsT&& value) { m_idleRecommendationsHasBeenSet = true; m_idleRecommendations.emplace_back(std::forward<IdleRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe errors of the request.</p>
     */
    inline const Aws::Vector<IdleRecommendationError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<IdleRecommendationError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<IdleRecommendationError>>
    GetIdleRecommendationsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = IdleRecommendationError>
    GetIdleRecommendationsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIdleRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<IdleRecommendation> m_idleRecommendations;
    bool m_idleRecommendationsHasBeenSet = false;

    Aws::Vector<IdleRecommendationError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
