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
    AWS_CODEGURUSECURITY_API CreateUploadUrlResult() = default;
    AWS_CODEGURUSECURITY_API CreateUploadUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API CreateUploadUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pre-signed S3 URL. You can upload the code file you want to scan with the
     * required <code>requestHeaders</code> using any HTTP client.</p>
     */
    inline const Aws::String& GetS3Url() const { return m_s3Url; }
    template<typename S3UrlT = Aws::String>
    void SetS3Url(S3UrlT&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::forward<S3UrlT>(value); }
    template<typename S3UrlT = Aws::String>
    CreateUploadUrlResult& WithS3Url(S3UrlT&& value) { SetS3Url(std::forward<S3UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key-value pairs that contain the required headers when uploading
     * your resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestHeaders() const { return m_requestHeaders; }
    template<typename RequestHeadersT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestHeaders(RequestHeadersT&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = std::forward<RequestHeadersT>(value); }
    template<typename RequestHeadersT = Aws::Map<Aws::String, Aws::String>>
    CreateUploadUrlResult& WithRequestHeaders(RequestHeadersT&& value) { SetRequestHeaders(std::forward<RequestHeadersT>(value)); return *this;}
    template<typename RequestHeadersKeyT = Aws::String, typename RequestHeadersValueT = Aws::String>
    CreateUploadUrlResult& AddRequestHeaders(RequestHeadersKeyT&& key, RequestHeadersValueT&& value) {
      m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::forward<RequestHeadersKeyT>(key), std::forward<RequestHeadersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The identifier for the uploaded code resource. Pass this to
     * <code>CreateScan</code> to use the uploaded resources.</p>
     */
    inline const Aws::String& GetCodeArtifactId() const { return m_codeArtifactId; }
    template<typename CodeArtifactIdT = Aws::String>
    void SetCodeArtifactId(CodeArtifactIdT&& value) { m_codeArtifactIdHasBeenSet = true; m_codeArtifactId = std::forward<CodeArtifactIdT>(value); }
    template<typename CodeArtifactIdT = Aws::String>
    CreateUploadUrlResult& WithCodeArtifactId(CodeArtifactIdT&& value) { SetCodeArtifactId(std::forward<CodeArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateUploadUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestHeaders;
    bool m_requestHeadersHasBeenSet = false;

    Aws::String m_codeArtifactId;
    bool m_codeArtifactIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
