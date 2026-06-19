/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {
class GetDocumentContentResult {
 public:
  AWS_BEDROCKAGENTRUNTIME_API GetDocumentContentResult() = default;
  AWS_BEDROCKAGENTRUNTIME_API GetDocumentContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTRUNTIME_API GetDocumentContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The size of the document content in bytes available at the pre-signed
   * URL.</p>
   */
  inline long long GetDocumentContentLength() const { return m_documentContentLength; }
  inline void SetDocumentContentLength(long long value) {
    m_documentContentLengthHasBeenSet = true;
    m_documentContentLength = value;
  }
  inline GetDocumentContentResult& WithDocumentContentLength(long long value) {
    SetDocumentContentLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MIME type of the document content. For <code>RAW</code> format, this is
   * the original file type (for example, <code>application/pdf</code>). For
   * <code>EXTRACTED</code> format, this is always <code>application/json</code>.</p>
   */
  inline const Aws::String& GetMimeType() const { return m_mimeType; }
  template <typename MimeTypeT = Aws::String>
  void SetMimeType(MimeTypeT&& value) {
    m_mimeTypeHasBeenSet = true;
    m_mimeType = std::forward<MimeTypeT>(value);
  }
  template <typename MimeTypeT = Aws::String>
  GetDocumentContentResult& WithMimeType(MimeTypeT&& value) {
    SetMimeType(std::forward<MimeTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pre-signed URL for downloading the document content. The URL expires after
   * 5 minutes.</p>
   */
  inline const Aws::String& GetPresignedUrl() const { return m_presignedUrl; }
  template <typename PresignedUrlT = Aws::String>
  void SetPresignedUrl(PresignedUrlT&& value) {
    m_presignedUrlHasBeenSet = true;
    m_presignedUrl = std::forward<PresignedUrlT>(value);
  }
  template <typename PresignedUrlT = Aws::String>
  GetDocumentContentResult& WithPresignedUrl(PresignedUrlT&& value) {
    SetPresignedUrl(std::forward<PresignedUrlT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetDocumentContentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  long long m_documentContentLength{0};

  Aws::String m_mimeType;

  Aws::String m_presignedUrl;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_documentContentLengthHasBeenSet = false;
  bool m_mimeTypeHasBeenSet = false;
  bool m_presignedUrlHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
