/**
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
    AWS_AUDITMANAGER_API GetEvidenceByEvidenceFolderResult() = default;
    AWS_AUDITMANAGER_API GetEvidenceByEvidenceFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetEvidenceByEvidenceFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of evidence that the <code>GetEvidenceByEvidenceFolder</code> API
     * returned. </p>
     */
    inline const Aws::Vector<Evidence>& GetEvidence() const { return m_evidence; }
    template<typename EvidenceT = Aws::Vector<Evidence>>
    void SetEvidence(EvidenceT&& value) { m_evidenceHasBeenSet = true; m_evidence = std::forward<EvidenceT>(value); }
    template<typename EvidenceT = Aws::Vector<Evidence>>
    GetEvidenceByEvidenceFolderResult& WithEvidence(EvidenceT&& value) { SetEvidence(std::forward<EvidenceT>(value)); return *this;}
    template<typename EvidenceT = Evidence>
    GetEvidenceByEvidenceFolderResult& AddEvidence(EvidenceT&& value) { m_evidenceHasBeenSet = true; m_evidence.emplace_back(std::forward<EvidenceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetEvidenceByEvidenceFolderResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEvidenceByEvidenceFolderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Evidence> m_evidence;
    bool m_evidenceHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
