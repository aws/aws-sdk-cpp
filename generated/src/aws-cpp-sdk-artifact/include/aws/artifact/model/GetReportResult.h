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
  class GetReportResult
  {
  public:
    AWS_ARTIFACT_API GetReportResult() = default;
    AWS_ARTIFACT_API GetReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API GetReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Presigned S3 url to access the report content.</p>
     */
    inline const Aws::String& GetDocumentPresignedUrl() const { return m_documentPresignedUrl; }
    template<typename DocumentPresignedUrlT = Aws::String>
    void SetDocumentPresignedUrl(DocumentPresignedUrlT&& value) { m_documentPresignedUrlHasBeenSet = true; m_documentPresignedUrl = std::forward<DocumentPresignedUrlT>(value); }
    template<typename DocumentPresignedUrlT = Aws::String>
    GetReportResult& WithDocumentPresignedUrl(DocumentPresignedUrlT&& value) { SetDocumentPresignedUrl(std::forward<DocumentPresignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_documentPresignedUrl;
    bool m_documentPresignedUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
