/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/SearchPlaceIndexForPositionSummary.h>
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
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionResult();
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of Places closest to the specified position. Each result
     * contains additional information about the Places returned.</p>
     */
    inline const Aws::Vector<SearchForPositionResult>& GetResults() const{ return m_results; }

    /**
     * <p>Returns a list of Places closest to the specified position. Each result
     * contains additional information about the Places returned.</p>
     */
    inline void SetResults(const Aws::Vector<SearchForPositionResult>& value) { m_results = value; }

    /**
     * <p>Returns a list of Places closest to the specified position. Each result
     * contains additional information about the Places returned.</p>
     */
    inline void SetResults(Aws::Vector<SearchForPositionResult>&& value) { m_results = std::move(value); }

    /**
     * <p>Returns a list of Places closest to the specified position. Each result
     * contains additional information about the Places returned.</p>
     */
    inline SearchPlaceIndexForPositionResult& WithResults(const Aws::Vector<SearchForPositionResult>& value) { SetResults(value); return *this;}

    /**
     * <p>Returns a list of Places closest to the specified position. Each result
     * contains additional information about the Places returned.</p>
     */
    inline SearchPlaceIndexForPositionResult& WithResults(Aws::Vector<SearchForPositionResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>Returns a list of Places closest to the specified position. Each result
     * contains additional information about the Places returned.</p>
     */
    inline SearchPlaceIndexForPositionResult& AddResults(const SearchForPositionResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>Returns a list of Places closest to the specified position. Each result
     * contains additional information about the Places returned.</p>
     */
    inline SearchPlaceIndexForPositionResult& AddResults(SearchForPositionResult&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>Position</code>, <code>Language</code>, <code>MaxResults</code>, and the
     * <code>DataSource</code> of the place index. </p>
     */
    inline const SearchPlaceIndexForPositionSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>Position</code>, <code>Language</code>, <code>MaxResults</code>, and the
     * <code>DataSource</code> of the place index. </p>
     */
    inline void SetSummary(const SearchPlaceIndexForPositionSummary& value) { m_summary = value; }

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>Position</code>, <code>Language</code>, <code>MaxResults</code>, and the
     * <code>DataSource</code> of the place index. </p>
     */
    inline void SetSummary(SearchPlaceIndexForPositionSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>Position</code>, <code>Language</code>, <code>MaxResults</code>, and the
     * <code>DataSource</code> of the place index. </p>
     */
    inline SearchPlaceIndexForPositionResult& WithSummary(const SearchPlaceIndexForPositionSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>Position</code>, <code>Language</code>, <code>MaxResults</code>, and the
     * <code>DataSource</code> of the place index. </p>
     */
    inline SearchPlaceIndexForPositionResult& WithSummary(SearchPlaceIndexForPositionSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    Aws::Vector<SearchForPositionResult> m_results;

    SearchPlaceIndexForPositionSummary m_summary;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
