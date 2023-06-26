/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace ApiGatewayV2
{
namespace Model
{
  class ExportApiResult
  {
  public:
    AWS_APIGATEWAYV2_API ExportApiResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_APIGATEWAYV2_API ExportApiResult(ExportApiResult&&);
    AWS_APIGATEWAYV2_API ExportApiResult& operator=(ExportApiResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    ExportApiResult(const ExportApiResult&) = delete;
    ExportApiResult& operator=(const ExportApiResult&) = delete;


    AWS_APIGATEWAYV2_API ExportApiResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_APIGATEWAYV2_API ExportApiResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    
    inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }

    
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExportApiResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExportApiResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExportApiResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::Stream::ResponseStream m_body;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
