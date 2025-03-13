/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/AnalysisStatus.h>
#include <aws/ce/model/ErrorCode.h>
#include <aws/ce/model/CommitmentPurchaseAnalysisConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>A summary of the analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/AnalysisSummary">AWS
   * API Reference</a></p>
   */
  class AnalysisSummary
  {
  public:
    AWS_COSTEXPLORER_API AnalysisSummary() = default;
    AWS_COSTEXPLORER_API AnalysisSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API AnalysisSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The estimated time for when the analysis will complete.</p>
     */
    inline const Aws::String& GetEstimatedCompletionTime() const { return m_estimatedCompletionTime; }
    inline bool EstimatedCompletionTimeHasBeenSet() const { return m_estimatedCompletionTimeHasBeenSet; }
    template<typename EstimatedCompletionTimeT = Aws::String>
    void SetEstimatedCompletionTime(EstimatedCompletionTimeT&& value) { m_estimatedCompletionTimeHasBeenSet = true; m_estimatedCompletionTime = std::forward<EstimatedCompletionTimeT>(value); }
    template<typename EstimatedCompletionTimeT = Aws::String>
    AnalysisSummary& WithEstimatedCompletionTime(EstimatedCompletionTimeT&& value) { SetEstimatedCompletionTime(std::forward<EstimatedCompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion time of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisCompletionTime() const { return m_analysisCompletionTime; }
    inline bool AnalysisCompletionTimeHasBeenSet() const { return m_analysisCompletionTimeHasBeenSet; }
    template<typename AnalysisCompletionTimeT = Aws::String>
    void SetAnalysisCompletionTime(AnalysisCompletionTimeT&& value) { m_analysisCompletionTimeHasBeenSet = true; m_analysisCompletionTime = std::forward<AnalysisCompletionTimeT>(value); }
    template<typename AnalysisCompletionTimeT = Aws::String>
    AnalysisSummary& WithAnalysisCompletionTime(AnalysisCompletionTimeT&& value) { SetAnalysisCompletionTime(std::forward<AnalysisCompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisStartedTime() const { return m_analysisStartedTime; }
    inline bool AnalysisStartedTimeHasBeenSet() const { return m_analysisStartedTimeHasBeenSet; }
    template<typename AnalysisStartedTimeT = Aws::String>
    void SetAnalysisStartedTime(AnalysisStartedTimeT&& value) { m_analysisStartedTimeHasBeenSet = true; m_analysisStartedTime = std::forward<AnalysisStartedTimeT>(value); }
    template<typename AnalysisStartedTimeT = Aws::String>
    AnalysisSummary& WithAnalysisStartedTime(AnalysisStartedTimeT&& value) { SetAnalysisStartedTime(std::forward<AnalysisStartedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the analysis.</p>
     */
    inline AnalysisStatus GetAnalysisStatus() const { return m_analysisStatus; }
    inline bool AnalysisStatusHasBeenSet() const { return m_analysisStatusHasBeenSet; }
    inline void SetAnalysisStatus(AnalysisStatus value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = value; }
    inline AnalysisSummary& WithAnalysisStatus(AnalysisStatus value) { SetAnalysisStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code used for the analysis.</p>
     */
    inline ErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(ErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline AnalysisSummary& WithErrorCode(ErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis ID that's associated with the commitment purchase analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
    template<typename AnalysisIdT = Aws::String>
    void SetAnalysisId(AnalysisIdT&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::forward<AnalysisIdT>(value); }
    template<typename AnalysisIdT = Aws::String>
    AnalysisSummary& WithAnalysisId(AnalysisIdT&& value) { SetAnalysisId(std::forward<AnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the commitment purchase analysis.</p>
     */
    inline const CommitmentPurchaseAnalysisConfiguration& GetCommitmentPurchaseAnalysisConfiguration() const { return m_commitmentPurchaseAnalysisConfiguration; }
    inline bool CommitmentPurchaseAnalysisConfigurationHasBeenSet() const { return m_commitmentPurchaseAnalysisConfigurationHasBeenSet; }
    template<typename CommitmentPurchaseAnalysisConfigurationT = CommitmentPurchaseAnalysisConfiguration>
    void SetCommitmentPurchaseAnalysisConfiguration(CommitmentPurchaseAnalysisConfigurationT&& value) { m_commitmentPurchaseAnalysisConfigurationHasBeenSet = true; m_commitmentPurchaseAnalysisConfiguration = std::forward<CommitmentPurchaseAnalysisConfigurationT>(value); }
    template<typename CommitmentPurchaseAnalysisConfigurationT = CommitmentPurchaseAnalysisConfiguration>
    AnalysisSummary& WithCommitmentPurchaseAnalysisConfiguration(CommitmentPurchaseAnalysisConfigurationT&& value) { SetCommitmentPurchaseAnalysisConfiguration(std::forward<CommitmentPurchaseAnalysisConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_estimatedCompletionTime;
    bool m_estimatedCompletionTimeHasBeenSet = false;

    Aws::String m_analysisCompletionTime;
    bool m_analysisCompletionTimeHasBeenSet = false;

    Aws::String m_analysisStartedTime;
    bool m_analysisStartedTimeHasBeenSet = false;

    AnalysisStatus m_analysisStatus{AnalysisStatus::NOT_SET};
    bool m_analysisStatusHasBeenSet = false;

    ErrorCode m_errorCode{ErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    CommitmentPurchaseAnalysisConfiguration m_commitmentPurchaseAnalysisConfiguration;
    bool m_commitmentPurchaseAnalysisConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
