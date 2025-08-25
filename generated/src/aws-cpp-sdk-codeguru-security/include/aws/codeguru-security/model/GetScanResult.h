/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/ScanState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeguru-security/model/AnalysisType.h>
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
namespace CodeGuruSecurity
{
namespace Model
{
  class GetScanResult
  {
  public:
    AWS_CODEGURUSECURITY_API GetScanResult() = default;
    AWS_CODEGURUSECURITY_API GetScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API GetScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the scan.</p>
     */
    inline const Aws::String& GetScanName() const { return m_scanName; }
    template<typename ScanNameT = Aws::String>
    void SetScanName(ScanNameT&& value) { m_scanNameHasBeenSet = true; m_scanName = std::forward<ScanNameT>(value); }
    template<typename ScanNameT = Aws::String>
    GetScanResult& WithScanName(ScanNameT&& value) { SetScanName(std::forward<ScanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID that identifies the individual scan run.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    GetScanResult& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the scan. Returns either <code>InProgress</code>,
     * <code>Successful</code>, or <code>Failed</code>.</p>
     */
    inline ScanState GetScanState() const { return m_scanState; }
    inline void SetScanState(ScanState value) { m_scanStateHasBeenSet = true; m_scanState = value; }
    inline GetScanResult& WithScanState(ScanState value) { SetScanState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the scan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetScanResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analysis CodeGuru Security performed in the scan, either
     * <code>Security</code> or <code>All</code>. The <code>Security</code> type only
     * generates findings related to security. The <code>All</code> type generates both
     * security findings and quality findings.</p>
     */
    inline AnalysisType GetAnalysisType() const { return m_analysisType; }
    inline void SetAnalysisType(AnalysisType value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline GetScanResult& WithAnalysisType(AnalysisType value) { SetAnalysisType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the scan was last updated. Only available for
     * <code>STANDARD</code> scan types.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetScanResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times a scan has been re-run on a revised resource.</p>
     */
    inline long long GetNumberOfRevisions() const { return m_numberOfRevisions; }
    inline void SetNumberOfRevisions(long long value) { m_numberOfRevisionsHasBeenSet = true; m_numberOfRevisions = value; }
    inline GetScanResult& WithNumberOfRevisions(long long value) { SetNumberOfRevisions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the scan name.</p>
     */
    inline const Aws::String& GetScanNameArn() const { return m_scanNameArn; }
    template<typename ScanNameArnT = Aws::String>
    void SetScanNameArn(ScanNameArnT&& value) { m_scanNameArnHasBeenSet = true; m_scanNameArn = std::forward<ScanNameArnT>(value); }
    template<typename ScanNameArnT = Aws::String>
    GetScanResult& WithScanNameArn(ScanNameArnT&& value) { SetScanNameArn(std::forward<ScanNameArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the error that causes a scan to fail to be retrieved.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    GetScanResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetScanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    ScanState m_scanState{ScanState::NOT_SET};
    bool m_scanStateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    AnalysisType m_analysisType{AnalysisType::NOT_SET};
    bool m_analysisTypeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    long long m_numberOfRevisions{0};
    bool m_numberOfRevisionsHasBeenSet = false;

    Aws::String m_scanNameArn;
    bool m_scanNameArnHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
