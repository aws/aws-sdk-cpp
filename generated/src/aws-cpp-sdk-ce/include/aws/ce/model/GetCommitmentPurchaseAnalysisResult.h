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
    AWS_COSTEXPLORER_API GetCommitmentPurchaseAnalysisResult();
    AWS_COSTEXPLORER_API GetCommitmentPurchaseAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetCommitmentPurchaseAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The estimated time for when the analysis will complete.</p>
     */
    inline const Aws::String& GetEstimatedCompletionTime() const{ return m_estimatedCompletionTime; }
    inline void SetEstimatedCompletionTime(const Aws::String& value) { m_estimatedCompletionTime = value; }
    inline void SetEstimatedCompletionTime(Aws::String&& value) { m_estimatedCompletionTime = std::move(value); }
    inline void SetEstimatedCompletionTime(const char* value) { m_estimatedCompletionTime.assign(value); }
    inline GetCommitmentPurchaseAnalysisResult& WithEstimatedCompletionTime(const Aws::String& value) { SetEstimatedCompletionTime(value); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithEstimatedCompletionTime(Aws::String&& value) { SetEstimatedCompletionTime(std::move(value)); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithEstimatedCompletionTime(const char* value) { SetEstimatedCompletionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion time of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisCompletionTime() const{ return m_analysisCompletionTime; }
    inline void SetAnalysisCompletionTime(const Aws::String& value) { m_analysisCompletionTime = value; }
    inline void SetAnalysisCompletionTime(Aws::String&& value) { m_analysisCompletionTime = std::move(value); }
    inline void SetAnalysisCompletionTime(const char* value) { m_analysisCompletionTime.assign(value); }
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisCompletionTime(const Aws::String& value) { SetAnalysisCompletionTime(value); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisCompletionTime(Aws::String&& value) { SetAnalysisCompletionTime(std::move(value)); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisCompletionTime(const char* value) { SetAnalysisCompletionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisStartedTime() const{ return m_analysisStartedTime; }
    inline void SetAnalysisStartedTime(const Aws::String& value) { m_analysisStartedTime = value; }
    inline void SetAnalysisStartedTime(Aws::String&& value) { m_analysisStartedTime = std::move(value); }
    inline void SetAnalysisStartedTime(const char* value) { m_analysisStartedTime.assign(value); }
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisStartedTime(const Aws::String& value) { SetAnalysisStartedTime(value); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisStartedTime(Aws::String&& value) { SetAnalysisStartedTime(std::move(value)); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisStartedTime(const char* value) { SetAnalysisStartedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis ID that's associated with the commitment purchase analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisId.assign(value); }
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the analysis.</p>
     */
    inline const AnalysisStatus& GetAnalysisStatus() const{ return m_analysisStatus; }
    inline void SetAnalysisStatus(const AnalysisStatus& value) { m_analysisStatus = value; }
    inline void SetAnalysisStatus(AnalysisStatus&& value) { m_analysisStatus = std::move(value); }
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisStatus(const AnalysisStatus& value) { SetAnalysisStatus(value); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisStatus(AnalysisStatus&& value) { SetAnalysisStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code used for the analysis.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline void SetErrorCode(const ErrorCode& value) { m_errorCode = value; }
    inline void SetErrorCode(ErrorCode&& value) { m_errorCode = std::move(value); }
    inline GetCommitmentPurchaseAnalysisResult& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the analysis.</p>
     */
    inline const AnalysisDetails& GetAnalysisDetails() const{ return m_analysisDetails; }
    inline void SetAnalysisDetails(const AnalysisDetails& value) { m_analysisDetails = value; }
    inline void SetAnalysisDetails(AnalysisDetails&& value) { m_analysisDetails = std::move(value); }
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisDetails(const AnalysisDetails& value) { SetAnalysisDetails(value); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithAnalysisDetails(AnalysisDetails&& value) { SetAnalysisDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the commitment purchase analysis.</p>
     */
    inline const CommitmentPurchaseAnalysisConfiguration& GetCommitmentPurchaseAnalysisConfiguration() const{ return m_commitmentPurchaseAnalysisConfiguration; }
    inline void SetCommitmentPurchaseAnalysisConfiguration(const CommitmentPurchaseAnalysisConfiguration& value) { m_commitmentPurchaseAnalysisConfiguration = value; }
    inline void SetCommitmentPurchaseAnalysisConfiguration(CommitmentPurchaseAnalysisConfiguration&& value) { m_commitmentPurchaseAnalysisConfiguration = std::move(value); }
    inline GetCommitmentPurchaseAnalysisResult& WithCommitmentPurchaseAnalysisConfiguration(const CommitmentPurchaseAnalysisConfiguration& value) { SetCommitmentPurchaseAnalysisConfiguration(value); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithCommitmentPurchaseAnalysisConfiguration(CommitmentPurchaseAnalysisConfiguration&& value) { SetCommitmentPurchaseAnalysisConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCommitmentPurchaseAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCommitmentPurchaseAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_estimatedCompletionTime;

    Aws::String m_analysisCompletionTime;

    Aws::String m_analysisStartedTime;

    Aws::String m_analysisId;

    AnalysisStatus m_analysisStatus;

    ErrorCode m_errorCode;

    AnalysisDetails m_analysisDetails;

    CommitmentPurchaseAnalysisConfiguration m_commitmentPurchaseAnalysisConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
