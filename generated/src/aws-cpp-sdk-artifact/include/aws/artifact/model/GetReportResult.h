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
    AWS_ARTIFACT_API GetReportResult();
    AWS_ARTIFACT_API GetReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API GetReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Presigned S3 url to access the report content.</p>
     */
    inline const Aws::String& GetDocumentPresignedUrl() const{ return m_documentPresignedUrl; }

    /**
     * <p>Presigned S3 url to access the report content.</p>
     */
    inline void SetDocumentPresignedUrl(const Aws::String& value) { m_documentPresignedUrl = value; }

    /**
     * <p>Presigned S3 url to access the report content.</p>
     */
    inline void SetDocumentPresignedUrl(Aws::String&& value) { m_documentPresignedUrl = std::move(value); }

    /**
     * <p>Presigned S3 url to access the report content.</p>
     */
    inline void SetDocumentPresignedUrl(const char* value) { m_documentPresignedUrl.assign(value); }

    /**
     * <p>Presigned S3 url to access the report content.</p>
     */
    inline GetReportResult& WithDocumentPresignedUrl(const Aws::String& value) { SetDocumentPresignedUrl(value); return *this;}

    /**
     * <p>Presigned S3 url to access the report content.</p>
     */
    inline GetReportResult& WithDocumentPresignedUrl(Aws::String&& value) { SetDocumentPresignedUrl(std::move(value)); return *this;}

    /**
     * <p>Presigned S3 url to access the report content.</p>
     */
    inline GetReportResult& WithDocumentPresignedUrl(const char* value) { SetDocumentPresignedUrl(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_documentPresignedUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
