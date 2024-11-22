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
    AWS_COSTEXPLORER_API AnalysisSummary();
    AWS_COSTEXPLORER_API AnalysisSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API AnalysisSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The estimated time for when the analysis will complete.</p>
     */
    inline const Aws::String& GetEstimatedCompletionTime() const{ return m_estimatedCompletionTime; }
    inline bool EstimatedCompletionTimeHasBeenSet() const { return m_estimatedCompletionTimeHasBeenSet; }
    inline void SetEstimatedCompletionTime(const Aws::String& value) { m_estimatedCompletionTimeHasBeenSet = true; m_estimatedCompletionTime = value; }
    inline void SetEstimatedCompletionTime(Aws::String&& value) { m_estimatedCompletionTimeHasBeenSet = true; m_estimatedCompletionTime = std::move(value); }
    inline void SetEstimatedCompletionTime(const char* value) { m_estimatedCompletionTimeHasBeenSet = true; m_estimatedCompletionTime.assign(value); }
    inline AnalysisSummary& WithEstimatedCompletionTime(const Aws::String& value) { SetEstimatedCompletionTime(value); return *this;}
    inline AnalysisSummary& WithEstimatedCompletionTime(Aws::String&& value) { SetEstimatedCompletionTime(std::move(value)); return *this;}
    inline AnalysisSummary& WithEstimatedCompletionTime(const char* value) { SetEstimatedCompletionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion time of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisCompletionTime() const{ return m_analysisCompletionTime; }
    inline bool AnalysisCompletionTimeHasBeenSet() const { return m_analysisCompletionTimeHasBeenSet; }
    inline void SetAnalysisCompletionTime(const Aws::String& value) { m_analysisCompletionTimeHasBeenSet = true; m_analysisCompletionTime = value; }
    inline void SetAnalysisCompletionTime(Aws::String&& value) { m_analysisCompletionTimeHasBeenSet = true; m_analysisCompletionTime = std::move(value); }
    inline void SetAnalysisCompletionTime(const char* value) { m_analysisCompletionTimeHasBeenSet = true; m_analysisCompletionTime.assign(value); }
    inline AnalysisSummary& WithAnalysisCompletionTime(const Aws::String& value) { SetAnalysisCompletionTime(value); return *this;}
    inline AnalysisSummary& WithAnalysisCompletionTime(Aws::String&& value) { SetAnalysisCompletionTime(std::move(value)); return *this;}
    inline AnalysisSummary& WithAnalysisCompletionTime(const char* value) { SetAnalysisCompletionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisStartedTime() const{ return m_analysisStartedTime; }
    inline bool AnalysisStartedTimeHasBeenSet() const { return m_analysisStartedTimeHasBeenSet; }
    inline void SetAnalysisStartedTime(const Aws::String& value) { m_analysisStartedTimeHasBeenSet = true; m_analysisStartedTime = value; }
    inline void SetAnalysisStartedTime(Aws::String&& value) { m_analysisStartedTimeHasBeenSet = true; m_analysisStartedTime = std::move(value); }
    inline void SetAnalysisStartedTime(const char* value) { m_analysisStartedTimeHasBeenSet = true; m_analysisStartedTime.assign(value); }
    inline AnalysisSummary& WithAnalysisStartedTime(const Aws::String& value) { SetAnalysisStartedTime(value); return *this;}
    inline AnalysisSummary& WithAnalysisStartedTime(Aws::String&& value) { SetAnalysisStartedTime(std::move(value)); return *this;}
    inline AnalysisSummary& WithAnalysisStartedTime(const char* value) { SetAnalysisStartedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the analysis.</p>
     */
    inline const AnalysisStatus& GetAnalysisStatus() const{ return m_analysisStatus; }
    inline bool AnalysisStatusHasBeenSet() const { return m_analysisStatusHasBeenSet; }
    inline void SetAnalysisStatus(const AnalysisStatus& value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = value; }
    inline void SetAnalysisStatus(AnalysisStatus&& value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = std::move(value); }
    inline AnalysisSummary& WithAnalysisStatus(const AnalysisStatus& value) { SetAnalysisStatus(value); return *this;}
    inline AnalysisSummary& WithAnalysisStatus(AnalysisStatus&& value) { SetAnalysisStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code used for the analysis.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline AnalysisSummary& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}
    inline AnalysisSummary& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis ID that's associated with the commitment purchase analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }
    inline AnalysisSummary& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline AnalysisSummary& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline AnalysisSummary& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the commitment purchase analysis.</p>
     */
    inline const CommitmentPurchaseAnalysisConfiguration& GetCommitmentPurchaseAnalysisConfiguration() const{ return m_commitmentPurchaseAnalysisConfiguration; }
    inline bool CommitmentPurchaseAnalysisConfigurationHasBeenSet() const { return m_commitmentPurchaseAnalysisConfigurationHasBeenSet; }
    inline void SetCommitmentPurchaseAnalysisConfiguration(const CommitmentPurchaseAnalysisConfiguration& value) { m_commitmentPurchaseAnalysisConfigurationHasBeenSet = true; m_commitmentPurchaseAnalysisConfiguration = value; }
    inline void SetCommitmentPurchaseAnalysisConfiguration(CommitmentPurchaseAnalysisConfiguration&& value) { m_commitmentPurchaseAnalysisConfigurationHasBeenSet = true; m_commitmentPurchaseAnalysisConfiguration = std::move(value); }
    inline AnalysisSummary& WithCommitmentPurchaseAnalysisConfiguration(const CommitmentPurchaseAnalysisConfiguration& value) { SetCommitmentPurchaseAnalysisConfiguration(value); return *this;}
    inline AnalysisSummary& WithCommitmentPurchaseAnalysisConfiguration(CommitmentPurchaseAnalysisConfiguration&& value) { SetCommitmentPurchaseAnalysisConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_estimatedCompletionTime;
    bool m_estimatedCompletionTimeHasBeenSet = false;

    Aws::String m_analysisCompletionTime;
    bool m_analysisCompletionTimeHasBeenSet = false;

    Aws::String m_analysisStartedTime;
    bool m_analysisStartedTimeHasBeenSet = false;

    AnalysisStatus m_analysisStatus;
    bool m_analysisStatusHasBeenSet = false;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    CommitmentPurchaseAnalysisConfiguration m_commitmentPurchaseAnalysisConfiguration;
    bool m_commitmentPurchaseAnalysisConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
