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
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token to advance to the next page of Amazon RDS recommendations. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetRDSDatabaseRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetRDSDatabaseRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetRDSDatabaseRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the Amazon RDS recommendations. </p>
     */
    inline const Aws::Vector<RDSDBRecommendation>& GetRdsDBRecommendations() const{ return m_rdsDBRecommendations; }
    inline void SetRdsDBRecommendations(const Aws::Vector<RDSDBRecommendation>& value) { m_rdsDBRecommendations = value; }
    inline void SetRdsDBRecommendations(Aws::Vector<RDSDBRecommendation>&& value) { m_rdsDBRecommendations = std::move(value); }
    inline GetRDSDatabaseRecommendationsResult& WithRdsDBRecommendations(const Aws::Vector<RDSDBRecommendation>& value) { SetRdsDBRecommendations(value); return *this;}
    inline GetRDSDatabaseRecommendationsResult& WithRdsDBRecommendations(Aws::Vector<RDSDBRecommendation>&& value) { SetRdsDBRecommendations(std::move(value)); return *this;}
    inline GetRDSDatabaseRecommendationsResult& AddRdsDBRecommendations(const RDSDBRecommendation& value) { m_rdsDBRecommendations.push_back(value); return *this; }
    inline GetRDSDatabaseRecommendationsResult& AddRdsDBRecommendations(RDSDBRecommendation&& value) { m_rdsDBRecommendations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<GetRecommendationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<GetRecommendationError>&& value) { m_errors = std::move(value); }
    inline GetRDSDatabaseRecommendationsResult& WithErrors(const Aws::Vector<GetRecommendationError>& value) { SetErrors(value); return *this;}
    inline GetRDSDatabaseRecommendationsResult& WithErrors(Aws::Vector<GetRecommendationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline GetRDSDatabaseRecommendationsResult& AddErrors(const GetRecommendationError& value) { m_errors.push_back(value); return *this; }
    inline GetRDSDatabaseRecommendationsResult& AddErrors(GetRecommendationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRDSDatabaseRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRDSDatabaseRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRDSDatabaseRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RDSDBRecommendation> m_rdsDBRecommendations;

    Aws::Vector<GetRecommendationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
