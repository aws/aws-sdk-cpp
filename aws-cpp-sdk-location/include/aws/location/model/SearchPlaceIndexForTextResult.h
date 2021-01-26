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
  class AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextResult
  {
  public:
    SearchPlaceIndexForTextResult();
    SearchPlaceIndexForTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchPlaceIndexForTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of Places closest to the specified position. Each result contains
     * additional information about the specific point of interest. </p>
     */
    inline const Aws::Vector<SearchForTextResult>& GetResults() const{ return m_results; }

    /**
     * <p>A list of Places closest to the specified position. Each result contains
     * additional information about the specific point of interest. </p>
     */
    inline void SetResults(const Aws::Vector<SearchForTextResult>& value) { m_results = value; }

    /**
     * <p>A list of Places closest to the specified position. Each result contains
     * additional information about the specific point of interest. </p>
     */
    inline void SetResults(Aws::Vector<SearchForTextResult>&& value) { m_results = std::move(value); }

    /**
     * <p>A list of Places closest to the specified position. Each result contains
     * additional information about the specific point of interest. </p>
     */
    inline SearchPlaceIndexForTextResult& WithResults(const Aws::Vector<SearchForTextResult>& value) { SetResults(value); return *this;}

    /**
     * <p>A list of Places closest to the specified position. Each result contains
     * additional information about the specific point of interest. </p>
     */
    inline SearchPlaceIndexForTextResult& WithResults(Aws::Vector<SearchForTextResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list of Places closest to the specified position. Each result contains
     * additional information about the specific point of interest. </p>
     */
    inline SearchPlaceIndexForTextResult& AddResults(const SearchForTextResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list of Places closest to the specified position. Each result contains
     * additional information about the specific point of interest. </p>
     */
    inline SearchPlaceIndexForTextResult& AddResults(SearchForTextResult&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains a summary of the request. Contains the <code>BiasPosition</code>,
     * <code>DataSource</code>, <code>FilterBBox</code>, <code>FilterCountries</code>,
     * <code>MaxResults</code>, <code>ResultBBox</code>, and <code>Text</code>.</p>
     */
    inline const SearchPlaceIndexForTextSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>Contains a summary of the request. Contains the <code>BiasPosition</code>,
     * <code>DataSource</code>, <code>FilterBBox</code>, <code>FilterCountries</code>,
     * <code>MaxResults</code>, <code>ResultBBox</code>, and <code>Text</code>.</p>
     */
    inline void SetSummary(const SearchPlaceIndexForTextSummary& value) { m_summary = value; }

    /**
     * <p>Contains a summary of the request. Contains the <code>BiasPosition</code>,
     * <code>DataSource</code>, <code>FilterBBox</code>, <code>FilterCountries</code>,
     * <code>MaxResults</code>, <code>ResultBBox</code>, and <code>Text</code>.</p>
     */
    inline void SetSummary(SearchPlaceIndexForTextSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>Contains a summary of the request. Contains the <code>BiasPosition</code>,
     * <code>DataSource</code>, <code>FilterBBox</code>, <code>FilterCountries</code>,
     * <code>MaxResults</code>, <code>ResultBBox</code>, and <code>Text</code>.</p>
     */
    inline SearchPlaceIndexForTextResult& WithSummary(const SearchPlaceIndexForTextSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>Contains a summary of the request. Contains the <code>BiasPosition</code>,
     * <code>DataSource</code>, <code>FilterBBox</code>, <code>FilterCountries</code>,
     * <code>MaxResults</code>, <code>ResultBBox</code>, and <code>Text</code>.</p>
     */
    inline SearchPlaceIndexForTextResult& WithSummary(SearchPlaceIndexForTextSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    Aws::Vector<SearchForTextResult> m_results;

    SearchPlaceIndexForTextSummary m_summary;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
