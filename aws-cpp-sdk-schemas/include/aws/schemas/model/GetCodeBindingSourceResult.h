/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Schemas
{
namespace Model
{
  class GetCodeBindingSourceResult
  {
  public:
    AWS_SCHEMAS_API GetCodeBindingSourceResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_SCHEMAS_API GetCodeBindingSourceResult(GetCodeBindingSourceResult&&);
    AWS_SCHEMAS_API GetCodeBindingSourceResult& operator=(GetCodeBindingSourceResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetCodeBindingSourceResult(const GetCodeBindingSourceResult&) = delete;
    GetCodeBindingSourceResult& operator=(const GetCodeBindingSourceResult&) = delete;


    AWS_SCHEMAS_API GetCodeBindingSourceResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_SCHEMAS_API GetCodeBindingSourceResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    
    inline Aws::IOStream& GetBody() { return m_body.GetUnderlyingStream(); }

    
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

  private:

  Aws::Utils::Stream::ResponseStream m_body;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
