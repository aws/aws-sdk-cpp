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
    AWS_AUDITMANAGER_API GetEvidenceFolderResult();
    AWS_AUDITMANAGER_API GetEvidenceFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetEvidenceFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The folder that the evidence is stored in. </p>
     */
    inline const AssessmentEvidenceFolder& GetEvidenceFolder() const{ return m_evidenceFolder; }

    /**
     * <p> The folder that the evidence is stored in. </p>
     */
    inline void SetEvidenceFolder(const AssessmentEvidenceFolder& value) { m_evidenceFolder = value; }

    /**
     * <p> The folder that the evidence is stored in. </p>
     */
    inline void SetEvidenceFolder(AssessmentEvidenceFolder&& value) { m_evidenceFolder = std::move(value); }

    /**
     * <p> The folder that the evidence is stored in. </p>
     */
    inline GetEvidenceFolderResult& WithEvidenceFolder(const AssessmentEvidenceFolder& value) { SetEvidenceFolder(value); return *this;}

    /**
     * <p> The folder that the evidence is stored in. </p>
     */
    inline GetEvidenceFolderResult& WithEvidenceFolder(AssessmentEvidenceFolder&& value) { SetEvidenceFolder(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEvidenceFolderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEvidenceFolderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEvidenceFolderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AssessmentEvidenceFolder m_evidenceFolder;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
