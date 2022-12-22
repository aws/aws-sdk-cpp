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
    AWS_COMPUTEOPTIMIZER_API GetEC2InstanceRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API GetEC2InstanceRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEC2InstanceRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to advance to the next page of instance recommendations.</p>
     * <p>This value is null when there are no more pages of instance recommendations
     * to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to advance to the next page of instance recommendations.</p>
     * <p>This value is null when there are no more pages of instance recommendations
     * to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to advance to the next page of instance recommendations.</p>
     * <p>This value is null when there are no more pages of instance recommendations
     * to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to advance to the next page of instance recommendations.</p>
     * <p>This value is null when there are no more pages of instance recommendations
     * to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to advance to the next page of instance recommendations.</p>
     * <p>This value is null when there are no more pages of instance recommendations
     * to return.</p>
     */
    inline GetEC2InstanceRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to advance to the next page of instance recommendations.</p>
     * <p>This value is null when there are no more pages of instance recommendations
     * to return.</p>
     */
    inline GetEC2InstanceRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to advance to the next page of instance recommendations.</p>
     * <p>This value is null when there are no more pages of instance recommendations
     * to return.</p>
     */
    inline GetEC2InstanceRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of objects that describe instance recommendations.</p>
     */
    inline const Aws::Vector<InstanceRecommendation>& GetInstanceRecommendations() const{ return m_instanceRecommendations; }

    /**
     * <p>An array of objects that describe instance recommendations.</p>
     */
    inline void SetInstanceRecommendations(const Aws::Vector<InstanceRecommendation>& value) { m_instanceRecommendations = value; }

    /**
     * <p>An array of objects that describe instance recommendations.</p>
     */
    inline void SetInstanceRecommendations(Aws::Vector<InstanceRecommendation>&& value) { m_instanceRecommendations = std::move(value); }

    /**
     * <p>An array of objects that describe instance recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsResult& WithInstanceRecommendations(const Aws::Vector<InstanceRecommendation>& value) { SetInstanceRecommendations(value); return *this;}

    /**
     * <p>An array of objects that describe instance recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsResult& WithInstanceRecommendations(Aws::Vector<InstanceRecommendation>&& value) { SetInstanceRecommendations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe instance recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsResult& AddInstanceRecommendations(const InstanceRecommendation& value) { m_instanceRecommendations.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe instance recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsResult& AddInstanceRecommendations(InstanceRecommendation&& value) { m_instanceRecommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an instance of an
     * unsupported instance family.</p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const{ return m_errors; }

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an instance of an
     * unsupported instance family.</p>
     */
    inline void SetErrors(const Aws::Vector<GetRecommendationError>& value) { m_errors = value; }

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an instance of an
     * unsupported instance family.</p>
     */
    inline void SetErrors(Aws::Vector<GetRecommendationError>&& value) { m_errors = std::move(value); }

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an instance of an
     * unsupported instance family.</p>
     */
    inline GetEC2InstanceRecommendationsResult& WithErrors(const Aws::Vector<GetRecommendationError>& value) { SetErrors(value); return *this;}

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an instance of an
     * unsupported instance family.</p>
     */
    inline GetEC2InstanceRecommendationsResult& WithErrors(Aws::Vector<GetRecommendationError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an instance of an
     * unsupported instance family.</p>
     */
    inline GetEC2InstanceRecommendationsResult& AddErrors(const GetRecommendationError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an instance of an
     * unsupported instance family.</p>
     */
    inline GetEC2InstanceRecommendationsResult& AddErrors(GetRecommendationError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<InstanceRecommendation> m_instanceRecommendations;

    Aws::Vector<GetRecommendationError> m_errors;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
