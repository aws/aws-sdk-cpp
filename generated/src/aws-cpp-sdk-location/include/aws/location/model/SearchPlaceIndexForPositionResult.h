﻿/**
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
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionResult();
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a summary of the request. Echoes the input values for
     * <code>Position</code>, <code>Language</code>, <code>MaxResults</code>, and the
     * <code>DataSource</code> of the place index. </p>
     */
    inline const SearchPlaceIndexForPositionSummary& GetSummary() const{ return m_summary; }
    inline void SetSummary(const SearchPlaceIndexForPositionSummary& value) { m_summary = value; }
    inline void SetSummary(SearchPlaceIndexForPositionSummary&& value) { m_summary = std::move(value); }
    inline SearchPlaceIndexForPositionResult& WithSummary(const SearchPlaceIndexForPositionSummary& value) { SetSummary(value); return *this;}
    inline SearchPlaceIndexForPositionResult& WithSummary(SearchPlaceIndexForPositionSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of Places closest to the specified position. Each result
     * contains additional information about the Places returned.</p>
     */
    inline const Aws::Vector<SearchForPositionResult>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<SearchForPositionResult>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<SearchForPositionResult>&& value) { m_results = std::move(value); }
    inline SearchPlaceIndexForPositionResult& WithResults(const Aws::Vector<SearchForPositionResult>& value) { SetResults(value); return *this;}
    inline SearchPlaceIndexForPositionResult& WithResults(Aws::Vector<SearchForPositionResult>&& value) { SetResults(std::move(value)); return *this;}
    inline SearchPlaceIndexForPositionResult& AddResults(const SearchForPositionResult& value) { m_results.push_back(value); return *this; }
    inline SearchPlaceIndexForPositionResult& AddResults(SearchForPositionResult&& value) { m_results.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchPlaceIndexForPositionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchPlaceIndexForPositionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchPlaceIndexForPositionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SearchPlaceIndexForPositionSummary m_summary;

    Aws::Vector<SearchForPositionResult> m_results;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
