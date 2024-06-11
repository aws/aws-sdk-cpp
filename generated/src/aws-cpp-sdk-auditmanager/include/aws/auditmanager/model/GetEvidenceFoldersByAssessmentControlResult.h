﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentEvidenceFolder.h>
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
namespace AuditManager
{
namespace Model
{
  class GetEvidenceFoldersByAssessmentControlResult
  {
  public:
    AWS_AUDITMANAGER_API GetEvidenceFoldersByAssessmentControlResult();
    AWS_AUDITMANAGER_API GetEvidenceFoldersByAssessmentControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetEvidenceFoldersByAssessmentControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of evidence folders that the
     * <code>GetEvidenceFoldersByAssessmentControl</code> API returned. </p>
     */
    inline const Aws::Vector<AssessmentEvidenceFolder>& GetEvidenceFolders() const{ return m_evidenceFolders; }
    inline void SetEvidenceFolders(const Aws::Vector<AssessmentEvidenceFolder>& value) { m_evidenceFolders = value; }
    inline void SetEvidenceFolders(Aws::Vector<AssessmentEvidenceFolder>&& value) { m_evidenceFolders = std::move(value); }
    inline GetEvidenceFoldersByAssessmentControlResult& WithEvidenceFolders(const Aws::Vector<AssessmentEvidenceFolder>& value) { SetEvidenceFolders(value); return *this;}
    inline GetEvidenceFoldersByAssessmentControlResult& WithEvidenceFolders(Aws::Vector<AssessmentEvidenceFolder>&& value) { SetEvidenceFolders(std::move(value)); return *this;}
    inline GetEvidenceFoldersByAssessmentControlResult& AddEvidenceFolders(const AssessmentEvidenceFolder& value) { m_evidenceFolders.push_back(value); return *this; }
    inline GetEvidenceFoldersByAssessmentControlResult& AddEvidenceFolders(AssessmentEvidenceFolder&& value) { m_evidenceFolders.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetEvidenceFoldersByAssessmentControlResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetEvidenceFoldersByAssessmentControlResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetEvidenceFoldersByAssessmentControlResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEvidenceFoldersByAssessmentControlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEvidenceFoldersByAssessmentControlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEvidenceFoldersByAssessmentControlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentEvidenceFolder> m_evidenceFolders;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
