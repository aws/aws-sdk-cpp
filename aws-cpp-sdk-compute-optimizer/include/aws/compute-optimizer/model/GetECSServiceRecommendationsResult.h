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
    AWS_COMPUTEOPTIMIZER_API GetECSServiceRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API GetECSServiceRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetECSServiceRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The token to advance to the next page of ECS service recommendations. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token to advance to the next page of ECS service recommendations. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token to advance to the next page of ECS service recommendations. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The token to advance to the next page of ECS service recommendations. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token to advance to the next page of ECS service recommendations. </p>
     */
    inline GetECSServiceRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token to advance to the next page of ECS service recommendations. </p>
     */
    inline GetECSServiceRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token to advance to the next page of ECS service recommendations. </p>
     */
    inline GetECSServiceRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> An array of objects that describe the ECS service recommendations. </p>
     */
    inline const Aws::Vector<ECSServiceRecommendation>& GetEcsServiceRecommendations() const{ return m_ecsServiceRecommendations; }

    /**
     * <p> An array of objects that describe the ECS service recommendations. </p>
     */
    inline void SetEcsServiceRecommendations(const Aws::Vector<ECSServiceRecommendation>& value) { m_ecsServiceRecommendations = value; }

    /**
     * <p> An array of objects that describe the ECS service recommendations. </p>
     */
    inline void SetEcsServiceRecommendations(Aws::Vector<ECSServiceRecommendation>&& value) { m_ecsServiceRecommendations = std::move(value); }

    /**
     * <p> An array of objects that describe the ECS service recommendations. </p>
     */
    inline GetECSServiceRecommendationsResult& WithEcsServiceRecommendations(const Aws::Vector<ECSServiceRecommendation>& value) { SetEcsServiceRecommendations(value); return *this;}

    /**
     * <p> An array of objects that describe the ECS service recommendations. </p>
     */
    inline GetECSServiceRecommendationsResult& WithEcsServiceRecommendations(Aws::Vector<ECSServiceRecommendation>&& value) { SetEcsServiceRecommendations(std::move(value)); return *this;}

    /**
     * <p> An array of objects that describe the ECS service recommendations. </p>
     */
    inline GetECSServiceRecommendationsResult& AddEcsServiceRecommendations(const ECSServiceRecommendation& value) { m_ecsServiceRecommendations.push_back(value); return *this; }

    /**
     * <p> An array of objects that describe the ECS service recommendations. </p>
     */
    inline GetECSServiceRecommendationsResult& AddEcsServiceRecommendations(ECSServiceRecommendation&& value) { m_ecsServiceRecommendations.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const{ return m_errors; }

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline void SetErrors(const Aws::Vector<GetRecommendationError>& value) { m_errors = value; }

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline void SetErrors(Aws::Vector<GetRecommendationError>&& value) { m_errors = std::move(value); }

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline GetECSServiceRecommendationsResult& WithErrors(const Aws::Vector<GetRecommendationError>& value) { SetErrors(value); return *this;}

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline GetECSServiceRecommendationsResult& WithErrors(Aws::Vector<GetRecommendationError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline GetECSServiceRecommendationsResult& AddErrors(const GetRecommendationError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline GetECSServiceRecommendationsResult& AddErrors(GetRecommendationError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ECSServiceRecommendation> m_ecsServiceRecommendations;

    Aws::Vector<GetRecommendationError> m_errors;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
