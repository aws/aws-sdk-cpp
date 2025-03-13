/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AssessmentEvidenceFolder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetEvidenceFolderResult
  {
  public:
    AWS_AUDITMANAGER_API GetEvidenceFolderResult() = default;
    AWS_AUDITMANAGER_API GetEvidenceFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetEvidenceFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The folder that the evidence is stored in. </p>
     */
    inline const AssessmentEvidenceFolder& GetEvidenceFolder() const { return m_evidenceFolder; }
    template<typename EvidenceFolderT = AssessmentEvidenceFolder>
    void SetEvidenceFolder(EvidenceFolderT&& value) { m_evidenceFolderHasBeenSet = true; m_evidenceFolder = std::forward<EvidenceFolderT>(value); }
    template<typename EvidenceFolderT = AssessmentEvidenceFolder>
    GetEvidenceFolderResult& WithEvidenceFolder(EvidenceFolderT&& value) { SetEvidenceFolder(std::forward<EvidenceFolderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEvidenceFolderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AssessmentEvidenceFolder m_evidenceFolder;
    bool m_evidenceFolderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
