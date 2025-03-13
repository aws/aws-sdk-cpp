/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/SearchPlaceIndexForSuggestionsSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/SearchForSuggestionsResult.h>
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
  class SearchPlaceIndexForSuggestionsResult
  {
  public:
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForSuggestionsResult() = default;
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForSuggestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForSuggestionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index. </p>
     */
    inline const SearchPlaceIndexForSuggestionsSummary& GetSummary() const { return m_summary; }
    template<typename SummaryT = SearchPlaceIndexForSuggestionsSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = SearchPlaceIndexForSuggestionsSummary>
    SearchPlaceIndexForSuggestionsResult& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of place suggestions that best match the search text.</p>
     */
    inline const Aws::Vector<SearchForSuggestionsResult>& GetResults() const { return m_results; }
    template<typename ResultsT = Aws::Vector<SearchForSuggestionsResult>>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = Aws::Vector<SearchForSuggestionsResult>>
    SearchPlaceIndexForSuggestionsResult& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    template<typename ResultsT = SearchForSuggestionsResult>
    SearchPlaceIndexForSuggestionsResult& AddResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results.emplace_back(std::forward<ResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchPlaceIndexForSuggestionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SearchPlaceIndexForSuggestionsSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Vector<SearchForSuggestionsResult> m_results;
    bool m_resultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
