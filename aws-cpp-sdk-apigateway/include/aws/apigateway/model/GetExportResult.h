/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace APIGateway
{
namespace Model
{
  /**
   * <p>The binary blob response to <a>GetExport</a>, which contains the generated
   * SDK.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ExportResponse">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetExportResult
  {
  public:
    GetExportResult();
    //We have to define these because Microsoft doesn't auto generate them
    GetExportResult(GetExportResult&&);
    GetExportResult& operator=(GetExportResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetExportResult(const GetExportResult&) = delete;
    GetExportResult& operator=(const GetExportResult&) = delete;


    GetExportResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    GetExportResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The content-type header value in the HTTP response. This will correspond to a
     * valid 'accept' type in the request.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content-type header value in the HTTP response. This will correspond to a
     * valid 'accept' type in the request.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The content-type header value in the HTTP response. This will correspond to a
     * valid 'accept' type in the request.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The content-type header value in the HTTP response. This will correspond to a
     * valid 'accept' type in the request.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The content-type header value in the HTTP response. This will correspond to a
     * valid 'accept' type in the request.</p>
     */
    inline GetExportResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content-type header value in the HTTP response. This will correspond to a
     * valid 'accept' type in the request.</p>
     */
    inline GetExportResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content-type header value in the HTTP response. This will correspond to a
     * valid 'accept' type in the request.</p>
     */
    inline GetExportResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The content-disposition header value in the HTTP response.</p>
     */
    inline const Aws::String& GetContentDisposition() const{ return m_contentDisposition; }

    /**
     * <p>The content-disposition header value in the HTTP response.</p>
     */
    inline void SetContentDisposition(const Aws::String& value) { m_contentDisposition = value; }

    /**
     * <p>The content-disposition header value in the HTTP response.</p>
     */
    inline void SetContentDisposition(Aws::String&& value) { m_contentDisposition = std::move(value); }

    /**
     * <p>The content-disposition header value in the HTTP response.</p>
     */
    inline void SetContentDisposition(const char* value) { m_contentDisposition.assign(value); }

    /**
     * <p>The content-disposition header value in the HTTP response.</p>
     */
    inline GetExportResult& WithContentDisposition(const Aws::String& value) { SetContentDisposition(value); return *this;}

    /**
     * <p>The content-disposition header value in the HTTP response.</p>
     */
    inline GetExportResult& WithContentDisposition(Aws::String&& value) { SetContentDisposition(std::move(value)); return *this;}

    /**
     * <p>The content-disposition header value in the HTTP response.</p>
     */
    inline GetExportResult& WithContentDisposition(const char* value) { SetContentDisposition(value); return *this;}


    /**
     * <p>The binary blob response to <a>GetExport</a>, which contains the export.</p>
     */
    inline Aws::IOStream& GetBody() { return m_body.GetUnderlyingStream(); }

    /**
     * <p>The binary blob response to <a>GetExport</a>, which contains the export.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

  private:

    Aws::String m_contentType;

    Aws::String m_contentDisposition;

  Aws::Utils::Stream::ResponseStream m_body;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
