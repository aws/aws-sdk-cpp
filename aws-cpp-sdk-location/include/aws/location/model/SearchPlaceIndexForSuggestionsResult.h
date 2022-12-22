/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/SearchPlaceIndexForSuggestionsSummary.h>
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
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForSuggestionsResult();
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForSuggestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForSuggestionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of place suggestions that best match the search text.</p>
     */
    inline const Aws::Vector<SearchForSuggestionsResult>& GetResults() const{ return m_results; }

    /**
     * <p>A list of place suggestions that best match the search text.</p>
     */
    inline void SetResults(const Aws::Vector<SearchForSuggestionsResult>& value) { m_results = value; }

    /**
     * <p>A list of place suggestions that best match the search text.</p>
     */
    inline void SetResults(Aws::Vector<SearchForSuggestionsResult>&& value) { m_results = std::move(value); }

    /**
     * <p>A list of place suggestions that best match the search text.</p>
     */
    inline SearchPlaceIndexForSuggestionsResult& WithResults(const Aws::Vector<SearchForSuggestionsResult>& value) { SetResults(value); return *this;}

    /**
     * <p>A list of place suggestions that best match the search text.</p>
     */
    inline SearchPlaceIndexForSuggestionsResult& WithResults(Aws::Vector<SearchForSuggestionsResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list of place suggestions that best match the search text.</p>
     */
    inline SearchPlaceIndexForSuggestionsResult& AddResults(const SearchForSuggestionsResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list of place suggestions that best match the search text.</p>
     */
    inline SearchPlaceIndexForSuggestionsResult& AddResults(SearchForSuggestionsResult&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index. </p>
     */
    inline const SearchPlaceIndexForSuggestionsSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index. </p>
     */
    inline void SetSummary(const SearchPlaceIndexForSuggestionsSummary& value) { m_summary = value; }

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index. </p>
     */
    inline void SetSummary(SearchPlaceIndexForSuggestionsSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index. </p>
     */
    inline SearchPlaceIndexForSuggestionsResult& WithSummary(const SearchPlaceIndexForSuggestionsSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index. </p>
     */
    inline SearchPlaceIndexForSuggestionsResult& WithSummary(SearchPlaceIndexForSuggestionsSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    Aws::Vector<SearchForSuggestionsResult> m_results;

    SearchPlaceIndexForSuggestionsSummary m_summary;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
