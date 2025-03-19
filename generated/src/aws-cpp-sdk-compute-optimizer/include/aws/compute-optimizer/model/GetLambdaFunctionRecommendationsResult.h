/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/LambdaFunctionRecommendation.h>
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
  class GetLambdaFunctionRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetLambdaFunctionRecommendationsResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetLambdaFunctionRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetLambdaFunctionRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to advance to the next page of function recommendations.</p>
     * <p>This value is null when there are no more pages of function recommendations
     * to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetLambdaFunctionRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe function recommendations.</p>
     */
    inline const Aws::Vector<LambdaFunctionRecommendation>& GetLambdaFunctionRecommendations() const { return m_lambdaFunctionRecommendations; }
    template<typename LambdaFunctionRecommendationsT = Aws::Vector<LambdaFunctionRecommendation>>
    void SetLambdaFunctionRecommendations(LambdaFunctionRecommendationsT&& value) { m_lambdaFunctionRecommendationsHasBeenSet = true; m_lambdaFunctionRecommendations = std::forward<LambdaFunctionRecommendationsT>(value); }
    template<typename LambdaFunctionRecommendationsT = Aws::Vector<LambdaFunctionRecommendation>>
    GetLambdaFunctionRecommendationsResult& WithLambdaFunctionRecommendations(LambdaFunctionRecommendationsT&& value) { SetLambdaFunctionRecommendations(std::forward<LambdaFunctionRecommendationsT>(value)); return *this;}
    template<typename LambdaFunctionRecommendationsT = LambdaFunctionRecommendation>
    GetLambdaFunctionRecommendationsResult& AddLambdaFunctionRecommendations(LambdaFunctionRecommendationsT&& value) { m_lambdaFunctionRecommendationsHasBeenSet = true; m_lambdaFunctionRecommendations.emplace_back(std::forward<LambdaFunctionRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLambdaFunctionRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<LambdaFunctionRecommendation> m_lambdaFunctionRecommendations;
    bool m_lambdaFunctionRecommendationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
