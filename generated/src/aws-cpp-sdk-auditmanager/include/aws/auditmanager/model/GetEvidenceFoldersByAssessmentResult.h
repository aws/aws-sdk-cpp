/**
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
  class GetEvidenceFoldersByAssessmentResult
  {
  public:
    AWS_AUDITMANAGER_API GetEvidenceFoldersByAssessmentResult() = default;
    AWS_AUDITMANAGER_API GetEvidenceFoldersByAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetEvidenceFoldersByAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of evidence folders that the
     * <code>GetEvidenceFoldersByAssessment</code> API returned. </p>
     */
    inline const Aws::Vector<AssessmentEvidenceFolder>& GetEvidenceFolders() const { return m_evidenceFolders; }
    template<typename EvidenceFoldersT = Aws::Vector<AssessmentEvidenceFolder>>
    void SetEvidenceFolders(EvidenceFoldersT&& value) { m_evidenceFoldersHasBeenSet = true; m_evidenceFolders = std::forward<EvidenceFoldersT>(value); }
    template<typename EvidenceFoldersT = Aws::Vector<AssessmentEvidenceFolder>>
    GetEvidenceFoldersByAssessmentResult& WithEvidenceFolders(EvidenceFoldersT&& value) { SetEvidenceFolders(std::forward<EvidenceFoldersT>(value)); return *this;}
    template<typename EvidenceFoldersT = AssessmentEvidenceFolder>
    GetEvidenceFoldersByAssessmentResult& AddEvidenceFolders(EvidenceFoldersT&& value) { m_evidenceFoldersHasBeenSet = true; m_evidenceFolders.emplace_back(std::forward<EvidenceFoldersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetEvidenceFoldersByAssessmentResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEvidenceFoldersByAssessmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentEvidenceFolder> m_evidenceFolders;
    bool m_evidenceFoldersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
