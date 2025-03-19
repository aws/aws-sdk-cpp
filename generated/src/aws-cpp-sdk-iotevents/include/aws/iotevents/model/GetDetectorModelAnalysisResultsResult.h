/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/AnalysisResult.h>
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
  class GetDetectorModelAnalysisResultsResult
  {
  public:
    AWS_IOTEVENTS_API GetDetectorModelAnalysisResultsResult() = default;
    AWS_IOTEVENTS_API GetDetectorModelAnalysisResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API GetDetectorModelAnalysisResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information about one or more analysis results.</p>
     */
    inline const Aws::Vector<AnalysisResult>& GetAnalysisResults() const { return m_analysisResults; }
    template<typename AnalysisResultsT = Aws::Vector<AnalysisResult>>
    void SetAnalysisResults(AnalysisResultsT&& value) { m_analysisResultsHasBeenSet = true; m_analysisResults = std::forward<AnalysisResultsT>(value); }
    template<typename AnalysisResultsT = Aws::Vector<AnalysisResult>>
    GetDetectorModelAnalysisResultsResult& WithAnalysisResults(AnalysisResultsT&& value) { SetAnalysisResults(std::forward<AnalysisResultsT>(value)); return *this;}
    template<typename AnalysisResultsT = AnalysisResult>
    GetDetectorModelAnalysisResultsResult& AddAnalysisResults(AnalysisResultsT&& value) { m_analysisResultsHasBeenSet = true; m_analysisResults.emplace_back(std::forward<AnalysisResultsT>(value)); return *this; }
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
    GetDetectorModelAnalysisResultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDetectorModelAnalysisResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalysisResult> m_analysisResults;
    bool m_analysisResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
