/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/InstanceRecommendation.h>
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
  class GetEC2InstanceRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEC2InstanceRecommendationsResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetEC2InstanceRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEC2InstanceRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to advance to the next page of instance recommendations.</p>
     * <p>This value is null when there are no more pages of instance recommendations
     * to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetEC2InstanceRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe instance recommendations.</p>
     */
    inline const Aws::Vector<InstanceRecommendation>& GetInstanceRecommendations() const { return m_instanceRecommendations; }
    template<typename InstanceRecommendationsT = Aws::Vector<InstanceRecommendation>>
    void SetInstanceRecommendations(InstanceRecommendationsT&& value) { m_instanceRecommendationsHasBeenSet = true; m_instanceRecommendations = std::forward<InstanceRecommendationsT>(value); }
    template<typename InstanceRecommendationsT = Aws::Vector<InstanceRecommendation>>
    GetEC2InstanceRecommendationsResult& WithInstanceRecommendations(InstanceRecommendationsT&& value) { SetInstanceRecommendations(std::forward<InstanceRecommendationsT>(value)); return *this;}
    template<typename InstanceRecommendationsT = InstanceRecommendation>
    GetEC2InstanceRecommendationsResult& AddInstanceRecommendations(InstanceRecommendationsT&& value) { m_instanceRecommendationsHasBeenSet = true; m_instanceRecommendations.emplace_back(std::forward<InstanceRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an instance of an
     * unsupported instance family.</p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    GetEC2InstanceRecommendationsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = GetRecommendationError>
    GetEC2InstanceRecommendationsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEC2InstanceRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<InstanceRecommendation> m_instanceRecommendations;
    bool m_instanceRecommendationsHasBeenSet = false;

    Aws::Vector<GetRecommendationError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
