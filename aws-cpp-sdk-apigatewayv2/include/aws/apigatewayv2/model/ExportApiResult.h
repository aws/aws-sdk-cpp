/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace ApiGatewayV2
{
namespace Model
{
  class AWS_APIGATEWAYV2_API ExportApiResult
  {
  public:
    ExportApiResult();
    //We have to define these because Microsoft doesn't auto generate them
    ExportApiResult(ExportApiResult&&);
    ExportApiResult& operator=(ExportApiResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    ExportApiResult(const ExportApiResult&) = delete;
    ExportApiResult& operator=(const ExportApiResult&) = delete;


    ExportApiResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    ExportApiResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    
    inline Aws::IOStream& GetBody() { return m_body.GetUnderlyingStream(); }

    
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

  private:

  Aws::Utils::Stream::ResponseStream m_body;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
