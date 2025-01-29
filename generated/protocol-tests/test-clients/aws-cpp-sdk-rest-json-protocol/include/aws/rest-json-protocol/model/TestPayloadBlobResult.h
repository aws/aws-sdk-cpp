/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace RestJsonProtocol
{
namespace Model
{
  class TestPayloadBlobResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API TestPayloadBlobResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_RESTJSONPROTOCOL_API TestPayloadBlobResult(TestPayloadBlobResult&&);
    AWS_RESTJSONPROTOCOL_API TestPayloadBlobResult& operator=(TestPayloadBlobResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    TestPayloadBlobResult(const TestPayloadBlobResult&) = delete;
    TestPayloadBlobResult& operator=(const TestPayloadBlobResult&) = delete;


    AWS_RESTJSONPROTOCOL_API TestPayloadBlobResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_RESTJSONPROTOCOL_API TestPayloadBlobResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    
    inline Aws::IOStream& GetData() const { return m_data.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_data = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TestPayloadBlobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TestPayloadBlobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TestPayloadBlobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_data;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
