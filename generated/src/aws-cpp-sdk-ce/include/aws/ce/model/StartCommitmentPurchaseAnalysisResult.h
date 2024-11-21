/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostExplorer
{
namespace Model
{
  class StartCommitmentPurchaseAnalysisResult
  {
  public:
    AWS_COSTEXPLORER_API StartCommitmentPurchaseAnalysisResult();
    AWS_COSTEXPLORER_API StartCommitmentPurchaseAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API StartCommitmentPurchaseAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The analysis ID that's associated with the commitment purchase analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisId.assign(value); }
    inline StartCommitmentPurchaseAnalysisResult& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline StartCommitmentPurchaseAnalysisResult& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline StartCommitmentPurchaseAnalysisResult& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisStartedTime() const{ return m_analysisStartedTime; }
    inline void SetAnalysisStartedTime(const Aws::String& value) { m_analysisStartedTime = value; }
    inline void SetAnalysisStartedTime(Aws::String&& value) { m_analysisStartedTime = std::move(value); }
    inline void SetAnalysisStartedTime(const char* value) { m_analysisStartedTime.assign(value); }
    inline StartCommitmentPurchaseAnalysisResult& WithAnalysisStartedTime(const Aws::String& value) { SetAnalysisStartedTime(value); return *this;}
    inline StartCommitmentPurchaseAnalysisResult& WithAnalysisStartedTime(Aws::String&& value) { SetAnalysisStartedTime(std::move(value)); return *this;}
    inline StartCommitmentPurchaseAnalysisResult& WithAnalysisStartedTime(const char* value) { SetAnalysisStartedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time for when the analysis will complete.</p>
     */
    inline const Aws::String& GetEstimatedCompletionTime() const{ return m_estimatedCompletionTime; }
    inline void SetEstimatedCompletionTime(const Aws::String& value) { m_estimatedCompletionTime = value; }
    inline void SetEstimatedCompletionTime(Aws::String&& value) { m_estimatedCompletionTime = std::move(value); }
    inline void SetEstimatedCompletionTime(const char* value) { m_estimatedCompletionTime.assign(value); }
    inline StartCommitmentPurchaseAnalysisResult& WithEstimatedCompletionTime(const Aws::String& value) { SetEstimatedCompletionTime(value); return *this;}
    inline StartCommitmentPurchaseAnalysisResult& WithEstimatedCompletionTime(Aws::String&& value) { SetEstimatedCompletionTime(std::move(value)); return *this;}
    inline StartCommitmentPurchaseAnalysisResult& WithEstimatedCompletionTime(const char* value) { SetEstimatedCompletionTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartCommitmentPurchaseAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartCommitmentPurchaseAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartCommitmentPurchaseAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_analysisId;

    Aws::String m_analysisStartedTime;

    Aws::String m_estimatedCompletionTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
