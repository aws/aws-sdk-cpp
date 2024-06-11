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
    AWS_IOTEVENTS_API GetDetectorModelAnalysisResultsResult();
    AWS_IOTEVENTS_API GetDetectorModelAnalysisResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API GetDetectorModelAnalysisResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information about one or more analysis results.</p>
     */
    inline const Aws::Vector<AnalysisResult>& GetAnalysisResults() const{ return m_analysisResults; }
    inline void SetAnalysisResults(const Aws::Vector<AnalysisResult>& value) { m_analysisResults = value; }
    inline void SetAnalysisResults(Aws::Vector<AnalysisResult>&& value) { m_analysisResults = std::move(value); }
    inline GetDetectorModelAnalysisResultsResult& WithAnalysisResults(const Aws::Vector<AnalysisResult>& value) { SetAnalysisResults(value); return *this;}
    inline GetDetectorModelAnalysisResultsResult& WithAnalysisResults(Aws::Vector<AnalysisResult>&& value) { SetAnalysisResults(std::move(value)); return *this;}
    inline GetDetectorModelAnalysisResultsResult& AddAnalysisResults(const AnalysisResult& value) { m_analysisResults.push_back(value); return *this; }
    inline GetDetectorModelAnalysisResultsResult& AddAnalysisResults(AnalysisResult&& value) { m_analysisResults.push_back(std::move(value)); return *this; }
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
    inline GetDetectorModelAnalysisResultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetDetectorModelAnalysisResultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetDetectorModelAnalysisResultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDetectorModelAnalysisResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDetectorModelAnalysisResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDetectorModelAnalysisResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AnalysisResult> m_analysisResults;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
