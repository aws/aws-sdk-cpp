/**
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
    AWS_IOTEVENTSDATA_API ListDetectorsResult() = default;
    AWS_IOTEVENTSDATA_API ListDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API ListDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summary information about the detectors (instances).</p>
     */
    inline const Aws::Vector<DetectorSummary>& GetDetectorSummaries() const { return m_detectorSummaries; }
    template<typename DetectorSummariesT = Aws::Vector<DetectorSummary>>
    void SetDetectorSummaries(DetectorSummariesT&& value) { m_detectorSummariesHasBeenSet = true; m_detectorSummaries = std::forward<DetectorSummariesT>(value); }
    template<typename DetectorSummariesT = Aws::Vector<DetectorSummary>>
    ListDetectorsResult& WithDetectorSummaries(DetectorSummariesT&& value) { SetDetectorSummaries(std::forward<DetectorSummariesT>(value)); return *this;}
    template<typename DetectorSummariesT = DetectorSummary>
    ListDetectorsResult& AddDetectorSummaries(DetectorSummariesT&& value) { m_detectorSummariesHasBeenSet = true; m_detectorSummaries.emplace_back(std::forward<DetectorSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDetectorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDetectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DetectorSummary> m_detectorSummaries;
    bool m_detectorSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
