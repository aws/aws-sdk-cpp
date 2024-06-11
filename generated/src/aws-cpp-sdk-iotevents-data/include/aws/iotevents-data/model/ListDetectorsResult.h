﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents-data/model/DetectorSummary.h>
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
namespace IoTEventsData
{
namespace Model
{
  class ListDetectorsResult
  {
  public:
    AWS_IOTEVENTSDATA_API ListDetectorsResult();
    AWS_IOTEVENTSDATA_API ListDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API ListDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summary information about the detectors (instances).</p>
     */
    inline const Aws::Vector<DetectorSummary>& GetDetectorSummaries() const{ return m_detectorSummaries; }
    inline void SetDetectorSummaries(const Aws::Vector<DetectorSummary>& value) { m_detectorSummaries = value; }
    inline void SetDetectorSummaries(Aws::Vector<DetectorSummary>&& value) { m_detectorSummaries = std::move(value); }
    inline ListDetectorsResult& WithDetectorSummaries(const Aws::Vector<DetectorSummary>& value) { SetDetectorSummaries(value); return *this;}
    inline ListDetectorsResult& WithDetectorSummaries(Aws::Vector<DetectorSummary>&& value) { SetDetectorSummaries(std::move(value)); return *this;}
    inline ListDetectorsResult& AddDetectorSummaries(const DetectorSummary& value) { m_detectorSummaries.push_back(value); return *this; }
    inline ListDetectorsResult& AddDetectorSummaries(DetectorSummary&& value) { m_detectorSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDetectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDetectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDetectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDetectorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDetectorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDetectorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DetectorSummary> m_detectorSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
