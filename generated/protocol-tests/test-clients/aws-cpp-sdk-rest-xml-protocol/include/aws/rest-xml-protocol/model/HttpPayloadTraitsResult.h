/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace RestXmlProtocol
{
namespace Model
{
  class HttpPayloadTraitsResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API HttpPayloadTraitsResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_RESTXMLPROTOCOL_API HttpPayloadTraitsResult(HttpPayloadTraitsResult&&);
    AWS_RESTXMLPROTOCOL_API HttpPayloadTraitsResult& operator=(HttpPayloadTraitsResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    HttpPayloadTraitsResult(const HttpPayloadTraitsResult&) = delete;
    HttpPayloadTraitsResult& operator=(const HttpPayloadTraitsResult&) = delete;


    AWS_RESTXMLPROTOCOL_API HttpPayloadTraitsResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_RESTXMLPROTOCOL_API HttpPayloadTraitsResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline void SetFoo(const Aws::String& value) { m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_foo.assign(value); }
    inline HttpPayloadTraitsResult& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline HttpPayloadTraitsResult& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline HttpPayloadTraitsResult& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline Aws::IOStream& GetBlob() const { return m_blob.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_blob = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline HttpPayloadTraitsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpPayloadTraitsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpPayloadTraitsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_foo;

    Aws::Utils::Stream::ResponseStream m_blob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
