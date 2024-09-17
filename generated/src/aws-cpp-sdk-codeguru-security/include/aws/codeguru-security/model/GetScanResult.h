/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/model/AnalysisType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/ScanState.h>
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
    AWS_CODEGURUSECURITY_API GetScanResult();
    AWS_CODEGURUSECURITY_API GetScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API GetScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of analysis CodeGuru Security performed in the scan, either
     * <code>Security</code> or <code>All</code>. The <code>Security</code> type only
     * generates findings related to security. The <code>All</code> type generates both
     * security findings and quality findings.</p>
     */
    inline const AnalysisType& GetAnalysisType() const{ return m_analysisType; }
    inline void SetAnalysisType(const AnalysisType& value) { m_analysisType = value; }
    inline void SetAnalysisType(AnalysisType&& value) { m_analysisType = std::move(value); }
    inline GetScanResult& WithAnalysisType(const AnalysisType& value) { SetAnalysisType(value); return *this;}
    inline GetScanResult& WithAnalysisType(AnalysisType&& value) { SetAnalysisType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the scan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetScanResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetScanResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the error that causes a scan to fail to be retrieved.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline GetScanResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline GetScanResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline GetScanResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times a scan has been re-run on a revised resource.</p>
     */
    inline long long GetNumberOfRevisions() const{ return m_numberOfRevisions; }
    inline void SetNumberOfRevisions(long long value) { m_numberOfRevisions = value; }
    inline GetScanResult& WithNumberOfRevisions(long long value) { SetNumberOfRevisions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID that identifies the individual scan run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline void SetRunId(const Aws::String& value) { m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runId.assign(value); }
    inline GetScanResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline GetScanResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline GetScanResult& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scan.</p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }
    inline void SetScanName(const Aws::String& value) { m_scanName = value; }
    inline void SetScanName(Aws::String&& value) { m_scanName = std::move(value); }
    inline void SetScanName(const char* value) { m_scanName.assign(value); }
    inline GetScanResult& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}
    inline GetScanResult& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}
    inline GetScanResult& WithScanName(const char* value) { SetScanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the scan name.</p>
     */
    inline const Aws::String& GetScanNameArn() const{ return m_scanNameArn; }
    inline void SetScanNameArn(const Aws::String& value) { m_scanNameArn = value; }
    inline void SetScanNameArn(Aws::String&& value) { m_scanNameArn = std::move(value); }
    inline void SetScanNameArn(const char* value) { m_scanNameArn.assign(value); }
    inline GetScanResult& WithScanNameArn(const Aws::String& value) { SetScanNameArn(value); return *this;}
    inline GetScanResult& WithScanNameArn(Aws::String&& value) { SetScanNameArn(std::move(value)); return *this;}
    inline GetScanResult& WithScanNameArn(const char* value) { SetScanNameArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the scan. Returns either <code>InProgress</code>,
     * <code>Successful</code>, or <code>Failed</code>.</p>
     */
    inline const ScanState& GetScanState() const{ return m_scanState; }
    inline void SetScanState(const ScanState& value) { m_scanState = value; }
    inline void SetScanState(ScanState&& value) { m_scanState = std::move(value); }
    inline GetScanResult& WithScanState(const ScanState& value) { SetScanState(value); return *this;}
    inline GetScanResult& WithScanState(ScanState&& value) { SetScanState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the scan was last updated. Only available for
     * <code>STANDARD</code> scan types.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetScanResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetScanResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetScanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetScanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetScanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AnalysisType m_analysisType;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_errorMessage;

    long long m_numberOfRevisions;

    Aws::String m_runId;

    Aws::String m_scanName;

    Aws::String m_scanNameArn;

    ScanState m_scanState;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
