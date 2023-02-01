/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AggregationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/AggregationResponse.h>
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
namespace Inspector2
{
namespace Model
{
  class ListFindingAggregationsResult
  {
  public:
    AWS_INSPECTOR2_API ListFindingAggregationsResult();
    AWS_INSPECTOR2_API ListFindingAggregationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListFindingAggregationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The type of aggregation to perform.</p>
     */
    inline const AggregationType& GetAggregationType() const{ return m_aggregationType; }

    /**
     * <p>The type of aggregation to perform.</p>
     */
    inline void SetAggregationType(const AggregationType& value) { m_aggregationType = value; }

    /**
     * <p>The type of aggregation to perform.</p>
     */
    inline void SetAggregationType(AggregationType&& value) { m_aggregationType = std::move(value); }

    /**
     * <p>The type of aggregation to perform.</p>
     */
    inline ListFindingAggregationsResult& WithAggregationType(const AggregationType& value) { SetAggregationType(value); return *this;}

    /**
     * <p>The type of aggregation to perform.</p>
     */
    inline ListFindingAggregationsResult& WithAggregationType(AggregationType&& value) { SetAggregationType(std::move(value)); return *this;}


    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline ListFindingAggregationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline ListFindingAggregationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline ListFindingAggregationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Objects that contain the results of an aggregation operation.</p>
     */
    inline const Aws::Vector<AggregationResponse>& GetResponses() const{ return m_responses; }

    /**
     * <p>Objects that contain the results of an aggregation operation.</p>
     */
    inline void SetResponses(const Aws::Vector<AggregationResponse>& value) { m_responses = value; }

    /**
     * <p>Objects that contain the results of an aggregation operation.</p>
     */
    inline void SetResponses(Aws::Vector<AggregationResponse>&& value) { m_responses = std::move(value); }

    /**
     * <p>Objects that contain the results of an aggregation operation.</p>
     */
    inline ListFindingAggregationsResult& WithResponses(const Aws::Vector<AggregationResponse>& value) { SetResponses(value); return *this;}

    /**
     * <p>Objects that contain the results of an aggregation operation.</p>
     */
    inline ListFindingAggregationsResult& WithResponses(Aws::Vector<AggregationResponse>&& value) { SetResponses(std::move(value)); return *this;}

    /**
     * <p>Objects that contain the results of an aggregation operation.</p>
     */
    inline ListFindingAggregationsResult& AddResponses(const AggregationResponse& value) { m_responses.push_back(value); return *this; }

    /**
     * <p>Objects that contain the results of an aggregation operation.</p>
     */
    inline ListFindingAggregationsResult& AddResponses(AggregationResponse&& value) { m_responses.push_back(std::move(value)); return *this; }

  private:

    AggregationType m_aggregationType;

    Aws::String m_nextToken;

    Aws::Vector<AggregationResponse> m_responses;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
