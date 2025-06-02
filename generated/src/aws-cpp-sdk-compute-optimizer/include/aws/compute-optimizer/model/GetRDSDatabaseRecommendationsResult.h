/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/RDSDBRecommendation.h>
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
  class GetRDSDatabaseRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationsResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token to advance to the next page of Amazon Aurora and RDS database
     * recommendations. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetRDSDatabaseRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the Amazon Aurora and RDS database
     * recommendations. </p>
     */
    inline const Aws::Vector<RDSDBRecommendation>& GetRdsDBRecommendations() const { return m_rdsDBRecommendations; }
    template<typename RdsDBRecommendationsT = Aws::Vector<RDSDBRecommendation>>
    void SetRdsDBRecommendations(RdsDBRecommendationsT&& value) { m_rdsDBRecommendationsHasBeenSet = true; m_rdsDBRecommendations = std::forward<RdsDBRecommendationsT>(value); }
    template<typename RdsDBRecommendationsT = Aws::Vector<RDSDBRecommendation>>
    GetRDSDatabaseRecommendationsResult& WithRdsDBRecommendations(RdsDBRecommendationsT&& value) { SetRdsDBRecommendations(std::forward<RdsDBRecommendationsT>(value)); return *this;}
    template<typename RdsDBRecommendationsT = RDSDBRecommendation>
    GetRDSDatabaseRecommendationsResult& AddRdsDBRecommendations(RdsDBRecommendationsT&& value) { m_rdsDBRecommendationsHasBeenSet = true; m_rdsDBRecommendations.emplace_back(std::forward<RdsDBRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    GetRDSDatabaseRecommendationsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = GetRecommendationError>
    GetRDSDatabaseRecommendationsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRDSDatabaseRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RDSDBRecommendation> m_rdsDBRecommendations;
    bool m_rdsDBRecommendationsHasBeenSet = false;

    Aws::Vector<GetRecommendationError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
