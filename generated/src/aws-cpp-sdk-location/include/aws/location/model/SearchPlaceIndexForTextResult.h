/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/SearchPlaceIndexForTextSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/SearchForTextResult.h>
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
  class SearchPlaceIndexForTextResult
  {
  public:
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextResult() = default;
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index and the bounding box, <code>ResultBBox</code>, which surrounds the search
     * results. </p>
     */
    inline const SearchPlaceIndexForTextSummary& GetSummary() const { return m_summary; }
    template<typename SummaryT = SearchPlaceIndexForTextSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = SearchPlaceIndexForTextSummary>
    SearchPlaceIndexForTextResult& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Places matching the input text. Each result contains additional
     * information about the specific point of interest. </p> <p>Not all response
     * properties are included with all responses. Some properties may only be returned
     * by specific data partners.</p>
     */
    inline const Aws::Vector<SearchForTextResult>& GetResults() const { return m_results; }
    template<typename ResultsT = Aws::Vector<SearchForTextResult>>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = Aws::Vector<SearchForTextResult>>
    SearchPlaceIndexForTextResult& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    template<typename ResultsT = SearchForTextResult>
    SearchPlaceIndexForTextResult& AddResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results.emplace_back(std::forward<ResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchPlaceIndexForTextResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SearchPlaceIndexForTextSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Vector<SearchForTextResult> m_results;
    bool m_resultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
