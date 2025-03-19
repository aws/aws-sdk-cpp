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
    AWS_COSTEXPLORER_API StartCommitmentPurchaseAnalysisResult() = default;
    AWS_COSTEXPLORER_API StartCommitmentPurchaseAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API StartCommitmentPurchaseAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The analysis ID that's associated with the commitment purchase analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
    template<typename AnalysisIdT = Aws::String>
    void SetAnalysisId(AnalysisIdT&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::forward<AnalysisIdT>(value); }
    template<typename AnalysisIdT = Aws::String>
    StartCommitmentPurchaseAnalysisResult& WithAnalysisId(AnalysisIdT&& value) { SetAnalysisId(std::forward<AnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisStartedTime() const { return m_analysisStartedTime; }
    template<typename AnalysisStartedTimeT = Aws::String>
    void SetAnalysisStartedTime(AnalysisStartedTimeT&& value) { m_analysisStartedTimeHasBeenSet = true; m_analysisStartedTime = std::forward<AnalysisStartedTimeT>(value); }
    template<typename AnalysisStartedTimeT = Aws::String>
    StartCommitmentPurchaseAnalysisResult& WithAnalysisStartedTime(AnalysisStartedTimeT&& value) { SetAnalysisStartedTime(std::forward<AnalysisStartedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time for when the analysis will complete.</p>
     */
    inline const Aws::String& GetEstimatedCompletionTime() const { return m_estimatedCompletionTime; }
    template<typename EstimatedCompletionTimeT = Aws::String>
    void SetEstimatedCompletionTime(EstimatedCompletionTimeT&& value) { m_estimatedCompletionTimeHasBeenSet = true; m_estimatedCompletionTime = std::forward<EstimatedCompletionTimeT>(value); }
    template<typename EstimatedCompletionTimeT = Aws::String>
    StartCommitmentPurchaseAnalysisResult& WithEstimatedCompletionTime(EstimatedCompletionTimeT&& value) { SetEstimatedCompletionTime(std::forward<EstimatedCompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartCommitmentPurchaseAnalysisResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    Aws::String m_analysisStartedTime;
    bool m_analysisStartedTimeHasBeenSet = false;

    Aws::String m_estimatedCompletionTime;
    bool m_estimatedCompletionTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
