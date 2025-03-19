/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
  class GetEvidenceFileUploadUrlResult
  {
  public:
    AWS_AUDITMANAGER_API GetEvidenceFileUploadUrlResult() = default;
    AWS_AUDITMANAGER_API GetEvidenceFileUploadUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetEvidenceFileUploadUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the uploaded manual evidence file that the presigned URL was
     * generated for.</p>
     */
    inline const Aws::String& GetEvidenceFileName() const { return m_evidenceFileName; }
    template<typename EvidenceFileNameT = Aws::String>
    void SetEvidenceFileName(EvidenceFileNameT&& value) { m_evidenceFileNameHasBeenSet = true; m_evidenceFileName = std::forward<EvidenceFileNameT>(value); }
    template<typename EvidenceFileNameT = Aws::String>
    GetEvidenceFileUploadUrlResult& WithEvidenceFileName(EvidenceFileNameT&& value) { SetEvidenceFileName(std::forward<EvidenceFileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The presigned URL that was generated.</p>
     */
    inline const Aws::String& GetUploadUrl() const { return m_uploadUrl; }
    template<typename UploadUrlT = Aws::String>
    void SetUploadUrl(UploadUrlT&& value) { m_uploadUrlHasBeenSet = true; m_uploadUrl = std::forward<UploadUrlT>(value); }
    template<typename UploadUrlT = Aws::String>
    GetEvidenceFileUploadUrlResult& WithUploadUrl(UploadUrlT&& value) { SetUploadUrl(std::forward<UploadUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEvidenceFileUploadUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evidenceFileName;
    bool m_evidenceFileNameHasBeenSet = false;

    Aws::String m_uploadUrl;
    bool m_uploadUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
