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
   * <p>The binary blob response to GetSdk, which contains the generated
   * SDK.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/SdkResponse">AWS
   * API Reference</a></p>
   */
  class GetSdkResult
  {
  public:
    AWS_APIGATEWAY_API GetSdkResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_APIGATEWAY_API GetSdkResult(GetSdkResult&&);
    AWS_APIGATEWAY_API GetSdkResult& operator=(GetSdkResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetSdkResult(const GetSdkResult&) = delete;
    GetSdkResult& operator=(const GetSdkResult&) = delete;


    AWS_APIGATEWAY_API GetSdkResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_APIGATEWAY_API GetSdkResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The content-type header value in the HTTP response.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content-type header value in the HTTP response.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The content-type header value in the HTTP response.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The content-type header value in the HTTP response.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The content-type header value in the HTTP response.</p>
     */
    inline GetSdkResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content-type header value in the HTTP response.</p>
     */
    inline GetSdkResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content-type header value in the HTTP response.</p>
     */
    inline GetSdkResult& WithContentType(const char* value) { SetContentType(value); return *this;}


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
    inline GetSdkResult& WithContentDisposition(const Aws::String& value) { SetContentDisposition(value); return *this;}

    /**
     * <p>The content-disposition header value in the HTTP response.</p>
     */
    inline GetSdkResult& WithContentDisposition(Aws::String&& value) { SetContentDisposition(std::move(value)); return *this;}

    /**
     * <p>The content-disposition header value in the HTTP response.</p>
     */
    inline GetSdkResult& WithContentDisposition(const char* value) { SetContentDisposition(value); return *this;}


    /**
     * <p>The binary blob response to GetSdk, which contains the generated SDK.</p>
     */
    inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }

    /**
     * <p>The binary blob response to GetSdk, which contains the generated SDK.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_contentType;

    Aws::String m_contentDisposition;

    Aws::Utils::Stream::ResponseStream m_body;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
