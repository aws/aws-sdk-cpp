/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/SearchPlaceIndexForPositionSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/SearchForPositionResult.h>
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
namespace LocationService
{
namespace Model
{
  class SearchPlaceIndexForPositionResult
  {
  public:
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionResult() = default;
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>Position</code>, <code>Language</code>, <code>MaxResults</code>, and the
     * <code>DataSource</code> of the place index. </p>
     */
    inline const SearchPlaceIndexForPositionSummary& GetSummary() const { return m_summary; }
    template<typename SummaryT = SearchPlaceIndexForPositionSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = SearchPlaceIndexForPositionSummary>
    SearchPlaceIndexForPositionResult& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of Places closest to the specified position. Each result
     * contains additional information about the Places returned.</p>
     */
    inline const Aws::Vector<SearchForPositionResult>& GetResults() const { return m_results; }
    template<typename ResultsT = Aws::Vector<SearchForPositionResult>>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = Aws::Vector<SearchForPositionResult>>
    SearchPlaceIndexForPositionResult& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    template<typename ResultsT = SearchForPositionResult>
    SearchPlaceIndexForPositionResult& AddResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results.emplace_back(std::forward<ResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchPlaceIndexForPositionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SearchPlaceIndexForPositionSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Vector<SearchForPositionResult> m_results;
    bool m_resultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
