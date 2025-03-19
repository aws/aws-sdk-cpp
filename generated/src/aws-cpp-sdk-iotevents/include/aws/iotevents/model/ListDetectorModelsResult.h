/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/DetectorModelSummary.h>
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
namespace IoTEvents
{
namespace Model
{
  class ListDetectorModelsResult
  {
  public:
    AWS_IOTEVENTS_API ListDetectorModelsResult() = default;
    AWS_IOTEVENTS_API ListDetectorModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API ListDetectorModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the detector models.</p>
     */
    inline const Aws::Vector<DetectorModelSummary>& GetDetectorModelSummaries() const { return m_detectorModelSummaries; }
    template<typename DetectorModelSummariesT = Aws::Vector<DetectorModelSummary>>
    void SetDetectorModelSummaries(DetectorModelSummariesT&& value) { m_detectorModelSummariesHasBeenSet = true; m_detectorModelSummaries = std::forward<DetectorModelSummariesT>(value); }
    template<typename DetectorModelSummariesT = Aws::Vector<DetectorModelSummary>>
    ListDetectorModelsResult& WithDetectorModelSummaries(DetectorModelSummariesT&& value) { SetDetectorModelSummaries(std::forward<DetectorModelSummariesT>(value)); return *this;}
    template<typename DetectorModelSummariesT = DetectorModelSummary>
    ListDetectorModelsResult& AddDetectorModelSummaries(DetectorModelSummariesT&& value) { m_detectorModelSummariesHasBeenSet = true; m_detectorModelSummaries.emplace_back(std::forward<DetectorModelSummariesT>(value)); return *this; }
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
    ListDetectorModelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDetectorModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DetectorModelSummary> m_detectorModelSummaries;
    bool m_detectorModelSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
