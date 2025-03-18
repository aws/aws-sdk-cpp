/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/AnalysisStatus.h>
#include <aws/ce/model/ErrorCode.h>
#include <aws/ce/model/AnalysisDetails.h>
#include <aws/ce/model/CommitmentPurchaseAnalysisConfiguration.h>
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
  class GetCommitmentPurchaseAnalysisResult
  {
  public:
    AWS_COSTEXPLORER_API GetCommitmentPurchaseAnalysisResult() = default;
    AWS_COSTEXPLORER_API GetCommitmentPurchaseAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetCommitmentPurchaseAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The estimated time for when the analysis will complete.</p>
     */
    inline const Aws::String& GetEstimatedCompletionTime() const { return m_estimatedCompletionTime; }
    template<typename EstimatedCompletionTimeT = Aws::String>
    void SetEstimatedCompletionTime(EstimatedCompletionTimeT&& value) { m_estimatedCompletionTimeHasBeenSet = true; m_estimatedCompletionTime = std::forward<EstimatedCompletionTimeT>(value); }
    template<typename EstimatedCompletionTimeT = Aws::String>
    GetCommitmentPurchaseAnalysisResult& WithEstimatedCompletionTime(EstimatedCompletionTimeT&& value) { SetEstimatedCompletionTime(std::forward<EstimatedCompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion time of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisCompletionTime() const { return m_analysisCompletionTime; }
    template<typename AnalysisCompletionTimeT = Aws::String>
    void SetAnalysisCompletionTime(AnalysisCompletionTimeT&& value) { m_analysisCompletionTimeHasBeenSet = true; m_analysisCompletionTime = std::forward<AnalysisCompletionTimeT>(value); }
    template<typename AnalysisCompletionTimeT = Aws::String>
    GetCommitmentPurchaseAnalysisResult& WithAnalysisCompletionTime(AnalysisCompletionTimeT&& value) { SetAnalysisCompletionTime(std::forward<AnalysisCompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisStartedTime() const { return m_analysisStartedTime; }
    template<typename AnalysisStartedTimeT = Aws::String>
    void SetAnalysisStartedTime(AnalysisStartedTimeT&& value) { m_analysisStartedTimeHasBeenSet = true; m_analysisStartedTime = std::forward<AnalysisStartedTimeT>(value); }
    template<typename AnalysisStartedTimeT = Aws::String>
    GetCommitmentPurchaseAnalysisResult& WithAnalysisStartedTime(AnalysisStartedTimeT&& value) { SetAnalysisStartedTime(std::forward<AnalysisStartedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis ID that's associated with the commitment purchase analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
    template<typename AnalysisIdT = Aws::String>
    void SetAnalysisId(AnalysisIdT&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::forward<AnalysisIdT>(value); }
    template<typename AnalysisIdT = Aws::String>
    GetCommitmentPurchaseAnalysisResult& WithAnalysisId(AnalysisIdT&& value) { SetAnalysisId(std::forward<AnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the analysis.</p>
     */
    inline AnalysisStatus GetAnalysisStatus() const { return m_analysisStatus; }
    inline void SetAnalysisStatus(AnalysisStatus value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = value; }
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisStatus(AnalysisStatus value) { SetAnalysisStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code used for the analysis.</p>
     */
    inline ErrorCode GetErrorCode() const { return m_errorCode; }
    inline void SetErrorCode(ErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline GetCommitmentPurchaseAnalysisResult& WithErrorCode(ErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the analysis.</p>
     */
    inline const AnalysisDetails& GetAnalysisDetails() const { return m_analysisDetails; }
    template<typename AnalysisDetailsT = AnalysisDetails>
    void SetAnalysisDetails(AnalysisDetailsT&& value) { m_analysisDetailsHasBeenSet = true; m_analysisDetails = std::forward<AnalysisDetailsT>(value); }
    template<typename AnalysisDetailsT = AnalysisDetails>
    GetCommitmentPurchaseAnalysisResult& WithAnalysisDetails(AnalysisDetailsT&& value) { SetAnalysisDetails(std::forward<AnalysisDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the commitment purchase analysis.</p>
     */
    inline const CommitmentPurchaseAnalysisConfiguration& GetCommitmentPurchaseAnalysisConfiguration() const { return m_commitmentPurchaseAnalysisConfiguration; }
    template<typename CommitmentPurchaseAnalysisConfigurationT = CommitmentPurchaseAnalysisConfiguration>
    void SetCommitmentPurchaseAnalysisConfiguration(CommitmentPurchaseAnalysisConfigurationT&& value) { m_commitmentPurchaseAnalysisConfigurationHasBeenSet = true; m_commitmentPurchaseAnalysisConfiguration = std::forward<CommitmentPurchaseAnalysisConfigurationT>(value); }
    template<typename CommitmentPurchaseAnalysisConfigurationT = CommitmentPurchaseAnalysisConfiguration>
    GetCommitmentPurchaseAnalysisResult& WithCommitmentPurchaseAnalysisConfiguration(CommitmentPurchaseAnalysisConfigurationT&& value) { SetCommitmentPurchaseAnalysisConfiguration(std::forward<CommitmentPurchaseAnalysisConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCommitmentPurchaseAnalysisResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_estimatedCompletionTime;
    bool m_estimatedCompletionTimeHasBeenSet = false;

    Aws::String m_analysisCompletionTime;
    bool m_analysisCompletionTimeHasBeenSet = false;

    Aws::String m_analysisStartedTime;
    bool m_analysisStartedTimeHasBeenSet = false;

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    AnalysisStatus m_analysisStatus{AnalysisStatus::NOT_SET};
    bool m_analysisStatusHasBeenSet = false;

    ErrorCode m_errorCode{ErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    AnalysisDetails m_analysisDetails;
    bool m_analysisDetailsHasBeenSet = false;

    CommitmentPurchaseAnalysisConfiguration m_commitmentPurchaseAnalysisConfiguration;
    bool m_commitmentPurchaseAnalysisConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
