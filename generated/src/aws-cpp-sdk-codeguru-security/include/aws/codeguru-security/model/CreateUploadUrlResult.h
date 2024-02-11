/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateUploadUrlResult
  {
  public:
    AWS_CODEGURUSECURITY_API CreateUploadUrlResult();
    AWS_CODEGURUSECURITY_API CreateUploadUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API CreateUploadUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the uploaded code resource. </p>
     */
    inline const Aws::String& GetCodeArtifactId() const{ return m_codeArtifactId; }

    /**
     * <p>The identifier for the uploaded code resource. </p>
     */
    inline void SetCodeArtifactId(const Aws::String& value) { m_codeArtifactId = value; }

    /**
     * <p>The identifier for the uploaded code resource. </p>
     */
    inline void SetCodeArtifactId(Aws::String&& value) { m_codeArtifactId = std::move(value); }

    /**
     * <p>The identifier for the uploaded code resource. </p>
     */
    inline void SetCodeArtifactId(const char* value) { m_codeArtifactId.assign(value); }

    /**
     * <p>The identifier for the uploaded code resource. </p>
     */
    inline CreateUploadUrlResult& WithCodeArtifactId(const Aws::String& value) { SetCodeArtifactId(value); return *this;}

    /**
     * <p>The identifier for the uploaded code resource. </p>
     */
    inline CreateUploadUrlResult& WithCodeArtifactId(Aws::String&& value) { SetCodeArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the uploaded code resource. </p>
     */
    inline CreateUploadUrlResult& WithCodeArtifactId(const char* value) { SetCodeArtifactId(value); return *this;}


    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestHeaders() const{ return m_requestHeaders; }

    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline void SetRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_requestHeaders = value; }

    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline void SetRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_requestHeaders = std::move(value); }

    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline CreateUploadUrlResult& WithRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestHeaders(value); return *this;}

    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline CreateUploadUrlResult& WithRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestHeaders(std::move(value)); return *this;}

    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline CreateUploadUrlResult& AddRequestHeaders(const Aws::String& key, const Aws::String& value) { m_requestHeaders.emplace(key, value); return *this; }

    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline CreateUploadUrlResult& AddRequestHeaders(Aws::String&& key, const Aws::String& value) { m_requestHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline CreateUploadUrlResult& AddRequestHeaders(const Aws::String& key, Aws::String&& value) { m_requestHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline CreateUploadUrlResult& AddRequestHeaders(Aws::String&& key, Aws::String&& value) { m_requestHeaders.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline CreateUploadUrlResult& AddRequestHeaders(const char* key, Aws::String&& value) { m_requestHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline CreateUploadUrlResult& AddRequestHeaders(Aws::String&& key, const char* value) { m_requestHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline CreateUploadUrlResult& AddRequestHeaders(const char* key, const char* value) { m_requestHeaders.emplace(key, value); return *this; }


    /**
     * <p>A pre-signed S3 URL. You can upload the code file you want to scan and add
     * the required <code>requestHeaders</code> using any HTTP client.</p>
     */
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }

    /**
     * <p>A pre-signed S3 URL. You can upload the code file you want to scan and add
     * the required <code>requestHeaders</code> using any HTTP client.</p>
     */
    inline void SetS3Url(const Aws::String& value) { m_s3Url = value; }

    /**
     * <p>A pre-signed S3 URL. You can upload the code file you want to scan and add
     * the required <code>requestHeaders</code> using any HTTP client.</p>
     */
    inline void SetS3Url(Aws::String&& value) { m_s3Url = std::move(value); }

    /**
     * <p>A pre-signed S3 URL. You can upload the code file you want to scan and add
     * the required <code>requestHeaders</code> using any HTTP client.</p>
     */
    inline void SetS3Url(const char* value) { m_s3Url.assign(value); }

    /**
     * <p>A pre-signed S3 URL. You can upload the code file you want to scan and add
     * the required <code>requestHeaders</code> using any HTTP client.</p>
     */
    inline CreateUploadUrlResult& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}

    /**
     * <p>A pre-signed S3 URL. You can upload the code file you want to scan and add
     * the required <code>requestHeaders</code> using any HTTP client.</p>
     */
    inline CreateUploadUrlResult& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}

    /**
     * <p>A pre-signed S3 URL. You can upload the code file you want to scan and add
     * the required <code>requestHeaders</code> using any HTTP client.</p>
     */
    inline CreateUploadUrlResult& WithS3Url(const char* value) { SetS3Url(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateUploadUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateUploadUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateUploadUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_codeArtifactId;

    Aws::Map<Aws::String, Aws::String> m_requestHeaders;

    Aws::String m_s3Url;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
