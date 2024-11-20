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
    AWS_COMPUTEOPTIMIZER_API GetIdleRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API GetIdleRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetIdleRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to advance to the next page of idle resource recommendations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetIdleRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetIdleRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetIdleRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the idle resource recommendations.</p>
     */
    inline const Aws::Vector<IdleRecommendation>& GetIdleRecommendations() const{ return m_idleRecommendations; }
    inline void SetIdleRecommendations(const Aws::Vector<IdleRecommendation>& value) { m_idleRecommendations = value; }
    inline void SetIdleRecommendations(Aws::Vector<IdleRecommendation>&& value) { m_idleRecommendations = std::move(value); }
    inline GetIdleRecommendationsResult& WithIdleRecommendations(const Aws::Vector<IdleRecommendation>& value) { SetIdleRecommendations(value); return *this;}
    inline GetIdleRecommendationsResult& WithIdleRecommendations(Aws::Vector<IdleRecommendation>&& value) { SetIdleRecommendations(std::move(value)); return *this;}
    inline GetIdleRecommendationsResult& AddIdleRecommendations(const IdleRecommendation& value) { m_idleRecommendations.push_back(value); return *this; }
    inline GetIdleRecommendationsResult& AddIdleRecommendations(IdleRecommendation&& value) { m_idleRecommendations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe errors of the request.</p>
     */
    inline const Aws::Vector<IdleRecommendationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<IdleRecommendationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<IdleRecommendationError>&& value) { m_errors = std::move(value); }
    inline GetIdleRecommendationsResult& WithErrors(const Aws::Vector<IdleRecommendationError>& value) { SetErrors(value); return *this;}
    inline GetIdleRecommendationsResult& WithErrors(Aws::Vector<IdleRecommendationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline GetIdleRecommendationsResult& AddErrors(const IdleRecommendationError& value) { m_errors.push_back(value); return *this; }
    inline GetIdleRecommendationsResult& AddErrors(IdleRecommendationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIdleRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIdleRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIdleRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<IdleRecommendation> m_idleRecommendations;

    Aws::Vector<IdleRecommendationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
