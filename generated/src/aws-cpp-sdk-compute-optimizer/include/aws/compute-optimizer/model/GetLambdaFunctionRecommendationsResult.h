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
    AWS_COMPUTEOPTIMIZER_API GetLambdaFunctionRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API GetLambdaFunctionRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetLambdaFunctionRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to advance to the next page of function recommendations.</p>
     * <p>This value is null when there are no more pages of function recommendations
     * to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to advance to the next page of function recommendations.</p>
     * <p>This value is null when there are no more pages of function recommendations
     * to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to advance to the next page of function recommendations.</p>
     * <p>This value is null when there are no more pages of function recommendations
     * to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to advance to the next page of function recommendations.</p>
     * <p>This value is null when there are no more pages of function recommendations
     * to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to advance to the next page of function recommendations.</p>
     * <p>This value is null when there are no more pages of function recommendations
     * to return.</p>
     */
    inline GetLambdaFunctionRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to advance to the next page of function recommendations.</p>
     * <p>This value is null when there are no more pages of function recommendations
     * to return.</p>
     */
    inline GetLambdaFunctionRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to advance to the next page of function recommendations.</p>
     * <p>This value is null when there are no more pages of function recommendations
     * to return.</p>
     */
    inline GetLambdaFunctionRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of objects that describe function recommendations.</p>
     */
    inline const Aws::Vector<LambdaFunctionRecommendation>& GetLambdaFunctionRecommendations() const{ return m_lambdaFunctionRecommendations; }

    /**
     * <p>An array of objects that describe function recommendations.</p>
     */
    inline void SetLambdaFunctionRecommendations(const Aws::Vector<LambdaFunctionRecommendation>& value) { m_lambdaFunctionRecommendations = value; }

    /**
     * <p>An array of objects that describe function recommendations.</p>
     */
    inline void SetLambdaFunctionRecommendations(Aws::Vector<LambdaFunctionRecommendation>&& value) { m_lambdaFunctionRecommendations = std::move(value); }

    /**
     * <p>An array of objects that describe function recommendations.</p>
     */
    inline GetLambdaFunctionRecommendationsResult& WithLambdaFunctionRecommendations(const Aws::Vector<LambdaFunctionRecommendation>& value) { SetLambdaFunctionRecommendations(value); return *this;}

    /**
     * <p>An array of objects that describe function recommendations.</p>
     */
    inline GetLambdaFunctionRecommendationsResult& WithLambdaFunctionRecommendations(Aws::Vector<LambdaFunctionRecommendation>&& value) { SetLambdaFunctionRecommendations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe function recommendations.</p>
     */
    inline GetLambdaFunctionRecommendationsResult& AddLambdaFunctionRecommendations(const LambdaFunctionRecommendation& value) { m_lambdaFunctionRecommendations.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe function recommendations.</p>
     */
    inline GetLambdaFunctionRecommendationsResult& AddLambdaFunctionRecommendations(LambdaFunctionRecommendation&& value) { m_lambdaFunctionRecommendations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<LambdaFunctionRecommendation> m_lambdaFunctionRecommendations;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
