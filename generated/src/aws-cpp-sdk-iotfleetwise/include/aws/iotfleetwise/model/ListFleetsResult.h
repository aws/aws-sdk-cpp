﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/FleetSummary.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class ListFleetsResult
  {
  public:
    AWS_IOTFLEETWISE_API ListFleetsResult();
    AWS_IOTFLEETWISE_API ListFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of information for each fleet. </p>
     */
    inline const Aws::Vector<FleetSummary>& GetFleetSummaries() const{ return m_fleetSummaries; }
    inline void SetFleetSummaries(const Aws::Vector<FleetSummary>& value) { m_fleetSummaries = value; }
    inline void SetFleetSummaries(Aws::Vector<FleetSummary>&& value) { m_fleetSummaries = std::move(value); }
    inline ListFleetsResult& WithFleetSummaries(const Aws::Vector<FleetSummary>& value) { SetFleetSummaries(value); return *this;}
    inline ListFleetsResult& WithFleetSummaries(Aws::Vector<FleetSummary>&& value) { SetFleetSummaries(std::move(value)); return *this;}
    inline ListFleetsResult& AddFleetSummaries(const FleetSummary& value) { m_fleetSummaries.push_back(value); return *this; }
    inline ListFleetsResult& AddFleetSummaries(FleetSummary&& value) { m_fleetSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFleetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFleetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFleetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFleetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFleetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFleetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FleetSummary> m_fleetSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
