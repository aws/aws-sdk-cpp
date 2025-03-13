/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
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
namespace Artifact
{
namespace Model
{
  class GetTermForReportResult
  {
  public:
    AWS_ARTIFACT_API GetTermForReportResult() = default;
    AWS_ARTIFACT_API GetTermForReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API GetTermForReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Presigned S3 url to access the term content.</p>
     */
    inline const Aws::String& GetDocumentPresignedUrl() const { return m_documentPresignedUrl; }
    template<typename DocumentPresignedUrlT = Aws::String>
    void SetDocumentPresignedUrl(DocumentPresignedUrlT&& value) { m_documentPresignedUrlHasBeenSet = true; m_documentPresignedUrl = std::forward<DocumentPresignedUrlT>(value); }
    template<typename DocumentPresignedUrlT = Aws::String>
    GetTermForReportResult& WithDocumentPresignedUrl(DocumentPresignedUrlT&& value) { SetDocumentPresignedUrl(std::forward<DocumentPresignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique token representing this request event.</p>
     */
    inline const Aws::String& GetTermToken() const { return m_termToken; }
    template<typename TermTokenT = Aws::String>
    void SetTermToken(TermTokenT&& value) { m_termTokenHasBeenSet = true; m_termToken = std::forward<TermTokenT>(value); }
    template<typename TermTokenT = Aws::String>
    GetTermForReportResult& WithTermToken(TermTokenT&& value) { SetTermToken(std::forward<TermTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTermForReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_documentPresignedUrl;
    bool m_documentPresignedUrlHasBeenSet = false;

    Aws::String m_termToken;
    bool m_termTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
