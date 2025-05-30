﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/DetectorModelVersionSummary.h>
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
  class ListDetectorModelVersionsResult
  {
  public:
    AWS_IOTEVENTS_API ListDetectorModelVersionsResult() = default;
    AWS_IOTEVENTS_API ListDetectorModelVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API ListDetectorModelVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the detector model versions.</p>
     */
    inline const Aws::Vector<DetectorModelVersionSummary>& GetDetectorModelVersionSummaries() const { return m_detectorModelVersionSummaries; }
    template<typename DetectorModelVersionSummariesT = Aws::Vector<DetectorModelVersionSummary>>
    void SetDetectorModelVersionSummaries(DetectorModelVersionSummariesT&& value) { m_detectorModelVersionSummariesHasBeenSet = true; m_detectorModelVersionSummaries = std::forward<DetectorModelVersionSummariesT>(value); }
    template<typename DetectorModelVersionSummariesT = Aws::Vector<DetectorModelVersionSummary>>
    ListDetectorModelVersionsResult& WithDetectorModelVersionSummaries(DetectorModelVersionSummariesT&& value) { SetDetectorModelVersionSummaries(std::forward<DetectorModelVersionSummariesT>(value)); return *this;}
    template<typename DetectorModelVersionSummariesT = DetectorModelVersionSummary>
    ListDetectorModelVersionsResult& AddDetectorModelVersionSummaries(DetectorModelVersionSummariesT&& value) { m_detectorModelVersionSummariesHasBeenSet = true; m_detectorModelVersionSummaries.emplace_back(std::forward<DetectorModelVersionSummariesT>(value)); return *this; }
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
    ListDetectorModelVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDetectorModelVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DetectorModelVersionSummary> m_detectorModelVersionSummaries;
    bool m_detectorModelVersionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
