﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/Evidence.h>
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
  class GetEvidenceByEvidenceFolderResult
  {
  public:
    AWS_AUDITMANAGER_API GetEvidenceByEvidenceFolderResult();
    AWS_AUDITMANAGER_API GetEvidenceByEvidenceFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetEvidenceByEvidenceFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of evidence that the <code>GetEvidenceByEvidenceFolder</code> API
     * returned. </p>
     */
    inline const Aws::Vector<Evidence>& GetEvidence() const{ return m_evidence; }
    inline void SetEvidence(const Aws::Vector<Evidence>& value) { m_evidence = value; }
    inline void SetEvidence(Aws::Vector<Evidence>&& value) { m_evidence = std::move(value); }
    inline GetEvidenceByEvidenceFolderResult& WithEvidence(const Aws::Vector<Evidence>& value) { SetEvidence(value); return *this;}
    inline GetEvidenceByEvidenceFolderResult& WithEvidence(Aws::Vector<Evidence>&& value) { SetEvidence(std::move(value)); return *this;}
    inline GetEvidenceByEvidenceFolderResult& AddEvidence(const Evidence& value) { m_evidence.push_back(value); return *this; }
    inline GetEvidenceByEvidenceFolderResult& AddEvidence(Evidence&& value) { m_evidence.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetEvidenceByEvidenceFolderResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetEvidenceByEvidenceFolderResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetEvidenceByEvidenceFolderResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEvidenceByEvidenceFolderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEvidenceByEvidenceFolderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEvidenceByEvidenceFolderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Evidence> m_evidence;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
