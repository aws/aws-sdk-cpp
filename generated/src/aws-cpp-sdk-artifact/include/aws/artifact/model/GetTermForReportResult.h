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
    AWS_ARTIFACT_API GetTermForReportResult();
    AWS_ARTIFACT_API GetTermForReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API GetTermForReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Presigned S3 url to access the term content.</p>
     */
    inline const Aws::String& GetDocumentPresignedUrl() const{ return m_documentPresignedUrl; }

    /**
     * <p>Presigned S3 url to access the term content.</p>
     */
    inline void SetDocumentPresignedUrl(const Aws::String& value) { m_documentPresignedUrl = value; }

    /**
     * <p>Presigned S3 url to access the term content.</p>
     */
    inline void SetDocumentPresignedUrl(Aws::String&& value) { m_documentPresignedUrl = std::move(value); }

    /**
     * <p>Presigned S3 url to access the term content.</p>
     */
    inline void SetDocumentPresignedUrl(const char* value) { m_documentPresignedUrl.assign(value); }

    /**
     * <p>Presigned S3 url to access the term content.</p>
     */
    inline GetTermForReportResult& WithDocumentPresignedUrl(const Aws::String& value) { SetDocumentPresignedUrl(value); return *this;}

    /**
     * <p>Presigned S3 url to access the term content.</p>
     */
    inline GetTermForReportResult& WithDocumentPresignedUrl(Aws::String&& value) { SetDocumentPresignedUrl(std::move(value)); return *this;}

    /**
     * <p>Presigned S3 url to access the term content.</p>
     */
    inline GetTermForReportResult& WithDocumentPresignedUrl(const char* value) { SetDocumentPresignedUrl(value); return *this;}


    /**
     * <p>Unique token representing this request event.</p>
     */
    inline const Aws::String& GetTermToken() const{ return m_termToken; }

    /**
     * <p>Unique token representing this request event.</p>
     */
    inline void SetTermToken(const Aws::String& value) { m_termToken = value; }

    /**
     * <p>Unique token representing this request event.</p>
     */
    inline void SetTermToken(Aws::String&& value) { m_termToken = std::move(value); }

    /**
     * <p>Unique token representing this request event.</p>
     */
    inline void SetTermToken(const char* value) { m_termToken.assign(value); }

    /**
     * <p>Unique token representing this request event.</p>
     */
    inline GetTermForReportResult& WithTermToken(const Aws::String& value) { SetTermToken(value); return *this;}

    /**
     * <p>Unique token representing this request event.</p>
     */
    inline GetTermForReportResult& WithTermToken(Aws::String&& value) { SetTermToken(std::move(value)); return *this;}

    /**
     * <p>Unique token representing this request event.</p>
     */
    inline GetTermForReportResult& WithTermToken(const char* value) { SetTermToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTermForReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTermForReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTermForReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_documentPresignedUrl;

    Aws::String m_termToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
