/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/SearchPlaceIndexForTextSummary.h>
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
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextResult();
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of Places matching the input text. Each result contains additional
     * information about the specific point of interest. </p> <p>Not all response
     * properties are included with all responses. Some properties may only be returned
     * by specific data partners.</p>
     */
    inline const Aws::Vector<SearchForTextResult>& GetResults() const{ return m_results; }

    /**
     * <p>A list of Places matching the input text. Each result contains additional
     * information about the specific point of interest. </p> <p>Not all response
     * properties are included with all responses. Some properties may only be returned
     * by specific data partners.</p>
     */
    inline void SetResults(const Aws::Vector<SearchForTextResult>& value) { m_results = value; }

    /**
     * <p>A list of Places matching the input text. Each result contains additional
     * information about the specific point of interest. </p> <p>Not all response
     * properties are included with all responses. Some properties may only be returned
     * by specific data partners.</p>
     */
    inline void SetResults(Aws::Vector<SearchForTextResult>&& value) { m_results = std::move(value); }

    /**
     * <p>A list of Places matching the input text. Each result contains additional
     * information about the specific point of interest. </p> <p>Not all response
     * properties are included with all responses. Some properties may only be returned
     * by specific data partners.</p>
     */
    inline SearchPlaceIndexForTextResult& WithResults(const Aws::Vector<SearchForTextResult>& value) { SetResults(value); return *this;}

    /**
     * <p>A list of Places matching the input text. Each result contains additional
     * information about the specific point of interest. </p> <p>Not all response
     * properties are included with all responses. Some properties may only be returned
     * by specific data partners.</p>
     */
    inline SearchPlaceIndexForTextResult& WithResults(Aws::Vector<SearchForTextResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list of Places matching the input text. Each result contains additional
     * information about the specific point of interest. </p> <p>Not all response
     * properties are included with all responses. Some properties may only be returned
     * by specific data partners.</p>
     */
    inline SearchPlaceIndexForTextResult& AddResults(const SearchForTextResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list of Places matching the input text. Each result contains additional
     * information about the specific point of interest. </p> <p>Not all response
     * properties are included with all responses. Some properties may only be returned
     * by specific data partners.</p>
     */
    inline SearchPlaceIndexForTextResult& AddResults(SearchForTextResult&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index and the bounding box, <code>ResultBBox</code>, which surrounds the search
     * results. </p>
     */
    inline const SearchPlaceIndexForTextSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index and the bounding box, <code>ResultBBox</code>, which surrounds the search
     * results. </p>
     */
    inline void SetSummary(const SearchPlaceIndexForTextSummary& value) { m_summary = value; }

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index and the bounding box, <code>ResultBBox</code>, which surrounds the search
     * results. </p>
     */
    inline void SetSummary(SearchPlaceIndexForTextSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index and the bounding box, <code>ResultBBox</code>, which surrounds the search
     * results. </p>
     */
    inline SearchPlaceIndexForTextResult& WithSummary(const SearchPlaceIndexForTextSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>BiasPosition</code>, <code>FilterBBox</code>,
     * <code>FilterCountries</code>, <code>Language</code>, <code>MaxResults</code>,
     * and <code>Text</code>. Also includes the <code>DataSource</code> of the place
     * index and the bounding box, <code>ResultBBox</code>, which surrounds the search
     * results. </p>
     */
    inline SearchPlaceIndexForTextResult& WithSummary(SearchPlaceIndexForTextSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    Aws::Vector<SearchForTextResult> m_results;

    SearchPlaceIndexForTextSummary m_summary;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
