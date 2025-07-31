/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AggregationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_INSPECTOR2_API ListFindingAggregationsResult() = default;
    AWS_INSPECTOR2_API ListFindingAggregationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListFindingAggregationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of aggregation to perform.</p>
     */
    inline AggregationType GetAggregationType() const { return m_aggregationType; }
    inline void SetAggregationType(AggregationType value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = value; }
    inline ListFindingAggregationsResult& WithAggregationType(AggregationType value) { SetAggregationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Objects that contain the results of an aggregation operation.</p>
     */
    inline const Aws::Vector<AggregationResponse>& GetResponses() const { return m_responses; }
    template<typename ResponsesT = Aws::Vector<AggregationResponse>>
    void SetResponses(ResponsesT&& value) { m_responsesHasBeenSet = true; m_responses = std::forward<ResponsesT>(value); }
    template<typename ResponsesT = Aws::Vector<AggregationResponse>>
    ListFindingAggregationsResult& WithResponses(ResponsesT&& value) { SetResponses(std::forward<ResponsesT>(value)); return *this;}
    template<typename ResponsesT = AggregationResponse>
    ListFindingAggregationsResult& AddResponses(ResponsesT&& value) { m_responsesHasBeenSet = true; m_responses.emplace_back(std::forward<ResponsesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFindingAggregationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFindingAggregationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AggregationType m_aggregationType{AggregationType::NOT_SET};
    bool m_aggregationTypeHasBeenSet = false;

    Aws::Vector<AggregationResponse> m_responses;
    bool m_responsesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
