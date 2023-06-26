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
    AWS_AUDITMANAGER_API GetEvidenceFileUploadUrlResult();
    AWS_AUDITMANAGER_API GetEvidenceFileUploadUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetEvidenceFileUploadUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the uploaded manual evidence file that the presigned URL was
     * generated for.</p>
     */
    inline const Aws::String& GetEvidenceFileName() const{ return m_evidenceFileName; }

    /**
     * <p>The name of the uploaded manual evidence file that the presigned URL was
     * generated for.</p>
     */
    inline void SetEvidenceFileName(const Aws::String& value) { m_evidenceFileName = value; }

    /**
     * <p>The name of the uploaded manual evidence file that the presigned URL was
     * generated for.</p>
     */
    inline void SetEvidenceFileName(Aws::String&& value) { m_evidenceFileName = std::move(value); }

    /**
     * <p>The name of the uploaded manual evidence file that the presigned URL was
     * generated for.</p>
     */
    inline void SetEvidenceFileName(const char* value) { m_evidenceFileName.assign(value); }

    /**
     * <p>The name of the uploaded manual evidence file that the presigned URL was
     * generated for.</p>
     */
    inline GetEvidenceFileUploadUrlResult& WithEvidenceFileName(const Aws::String& value) { SetEvidenceFileName(value); return *this;}

    /**
     * <p>The name of the uploaded manual evidence file that the presigned URL was
     * generated for.</p>
     */
    inline GetEvidenceFileUploadUrlResult& WithEvidenceFileName(Aws::String&& value) { SetEvidenceFileName(std::move(value)); return *this;}

    /**
     * <p>The name of the uploaded manual evidence file that the presigned URL was
     * generated for.</p>
     */
    inline GetEvidenceFileUploadUrlResult& WithEvidenceFileName(const char* value) { SetEvidenceFileName(value); return *this;}


    /**
     * <p>The presigned URL that was generated.</p>
     */
    inline const Aws::String& GetUploadUrl() const{ return m_uploadUrl; }

    /**
     * <p>The presigned URL that was generated.</p>
     */
    inline void SetUploadUrl(const Aws::String& value) { m_uploadUrl = value; }

    /**
     * <p>The presigned URL that was generated.</p>
     */
    inline void SetUploadUrl(Aws::String&& value) { m_uploadUrl = std::move(value); }

    /**
     * <p>The presigned URL that was generated.</p>
     */
    inline void SetUploadUrl(const char* value) { m_uploadUrl.assign(value); }

    /**
     * <p>The presigned URL that was generated.</p>
     */
    inline GetEvidenceFileUploadUrlResult& WithUploadUrl(const Aws::String& value) { SetUploadUrl(value); return *this;}

    /**
     * <p>The presigned URL that was generated.</p>
     */
    inline GetEvidenceFileUploadUrlResult& WithUploadUrl(Aws::String&& value) { SetUploadUrl(std::move(value)); return *this;}

    /**
     * <p>The presigned URL that was generated.</p>
     */
    inline GetEvidenceFileUploadUrlResult& WithUploadUrl(const char* value) { SetUploadUrl(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEvidenceFileUploadUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEvidenceFileUploadUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEvidenceFileUploadUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_evidenceFileName;

    Aws::String m_uploadUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
