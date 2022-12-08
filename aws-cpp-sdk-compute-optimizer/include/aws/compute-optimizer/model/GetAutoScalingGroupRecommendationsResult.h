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
    AWS_COMPUTEOPTIMIZER_API GetAutoScalingGroupRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API GetAutoScalingGroupRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetAutoScalingGroupRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to advance to the next page of Auto Scaling group
     * recommendations.</p> <p>This value is null when there are no more pages of Auto
     * Scaling group recommendations to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to advance to the next page of Auto Scaling group
     * recommendations.</p> <p>This value is null when there are no more pages of Auto
     * Scaling group recommendations to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to advance to the next page of Auto Scaling group
     * recommendations.</p> <p>This value is null when there are no more pages of Auto
     * Scaling group recommendations to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to advance to the next page of Auto Scaling group
     * recommendations.</p> <p>This value is null when there are no more pages of Auto
     * Scaling group recommendations to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to advance to the next page of Auto Scaling group
     * recommendations.</p> <p>This value is null when there are no more pages of Auto
     * Scaling group recommendations to return.</p>
     */
    inline GetAutoScalingGroupRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to advance to the next page of Auto Scaling group
     * recommendations.</p> <p>This value is null when there are no more pages of Auto
     * Scaling group recommendations to return.</p>
     */
    inline GetAutoScalingGroupRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to advance to the next page of Auto Scaling group
     * recommendations.</p> <p>This value is null when there are no more pages of Auto
     * Scaling group recommendations to return.</p>
     */
    inline GetAutoScalingGroupRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of objects that describe Auto Scaling group recommendations.</p>
     */
    inline const Aws::Vector<AutoScalingGroupRecommendation>& GetAutoScalingGroupRecommendations() const{ return m_autoScalingGroupRecommendations; }

    /**
     * <p>An array of objects that describe Auto Scaling group recommendations.</p>
     */
    inline void SetAutoScalingGroupRecommendations(const Aws::Vector<AutoScalingGroupRecommendation>& value) { m_autoScalingGroupRecommendations = value; }

    /**
     * <p>An array of objects that describe Auto Scaling group recommendations.</p>
     */
    inline void SetAutoScalingGroupRecommendations(Aws::Vector<AutoScalingGroupRecommendation>&& value) { m_autoScalingGroupRecommendations = std::move(value); }

    /**
     * <p>An array of objects that describe Auto Scaling group recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsResult& WithAutoScalingGroupRecommendations(const Aws::Vector<AutoScalingGroupRecommendation>& value) { SetAutoScalingGroupRecommendations(value); return *this;}

    /**
     * <p>An array of objects that describe Auto Scaling group recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsResult& WithAutoScalingGroupRecommendations(Aws::Vector<AutoScalingGroupRecommendation>&& value) { SetAutoScalingGroupRecommendations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe Auto Scaling group recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsResult& AddAutoScalingGroupRecommendations(const AutoScalingGroupRecommendation& value) { m_autoScalingGroupRecommendations.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe Auto Scaling group recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsResult& AddAutoScalingGroupRecommendations(AutoScalingGroupRecommendation&& value) { m_autoScalingGroupRecommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an unsupported Auto
     * Scaling group.</p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const{ return m_errors; }

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an unsupported Auto
     * Scaling group.</p>
     */
    inline void SetErrors(const Aws::Vector<GetRecommendationError>& value) { m_errors = value; }

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an unsupported Auto
     * Scaling group.</p>
     */
    inline void SetErrors(Aws::Vector<GetRecommendationError>&& value) { m_errors = std::move(value); }

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an unsupported Auto
     * Scaling group.</p>
     */
    inline GetAutoScalingGroupRecommendationsResult& WithErrors(const Aws::Vector<GetRecommendationError>& value) { SetErrors(value); return *this;}

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an unsupported Auto
     * Scaling group.</p>
     */
    inline GetAutoScalingGroupRecommendationsResult& WithErrors(Aws::Vector<GetRecommendationError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an unsupported Auto
     * Scaling group.</p>
     */
    inline GetAutoScalingGroupRecommendationsResult& AddErrors(const GetRecommendationError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an unsupported Auto
     * Scaling group.</p>
     */
    inline GetAutoScalingGroupRecommendationsResult& AddErrors(GetRecommendationError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<AutoScalingGroupRecommendation> m_autoScalingGroupRecommendations;

    Aws::Vector<GetRecommendationError> m_errors;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
