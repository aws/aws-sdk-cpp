/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The binary blob response to GetExport, which contains the generated
   * SDK.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ExportResponse">AWS
   * API Reference</a></p>
   */
  class GetExportResult
  {
  public:
    AWS_APIGATEWAY_API GetExportResult() = default;
    AWS_APIGATEWAY_API GetExportResult(GetExportResult&&) = default;
    AWS_APIGATEWAY_API GetExportResult& operator=(GetExportResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetExportResult(const GetExportResult&) = delete;
    GetExportResult& operator=(const GetExportResult&) = delete;


    AWS_APIGATEWAY_API GetExportResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_APIGATEWAY_API GetExportResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The content-type header value in the HTTP response. This will correspond to a
     * valid 'accept' type in the request.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    GetExportResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content-disposition header value in the HTTP response.</p>
     */
    inline const Aws::String& GetContentDisposition() const { return m_contentDisposition; }
    template<typename ContentDispositionT = Aws::String>
    void SetContentDisposition(ContentDispositionT&& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = std::forward<ContentDispositionT>(value); }
    template<typename ContentDispositionT = Aws::String>
    GetExportResult& WithContentDisposition(ContentDispositionT&& value) { SetContentDisposition(std::forward<ContentDispositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The binary blob response to GetExport, which contains the export.</p>
     */
    inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_contentDisposition;
    bool m_contentDispositionHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_body{};
    bool m_bodyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
