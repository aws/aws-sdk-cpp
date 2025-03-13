/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace AppSync
{
namespace Model
{
  class GetIntrospectionSchemaResult
  {
  public:
    AWS_APPSYNC_API GetIntrospectionSchemaResult() = default;
    AWS_APPSYNC_API GetIntrospectionSchemaResult(GetIntrospectionSchemaResult&&) = default;
    AWS_APPSYNC_API GetIntrospectionSchemaResult& operator=(GetIntrospectionSchemaResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetIntrospectionSchemaResult(const GetIntrospectionSchemaResult&) = delete;
    GetIntrospectionSchemaResult& operator=(const GetIntrospectionSchemaResult&) = delete;


    AWS_APPSYNC_API GetIntrospectionSchemaResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_APPSYNC_API GetIntrospectionSchemaResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The schema, in GraphQL Schema Definition Language (SDL) format.</p> <p>For
     * more information, see the <a href="http://graphql.org/learn/schema/">GraphQL SDL
     * documentation</a>.</p>
     */
    inline Aws::IOStream& GetSchema() const { return m_schema.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_schema = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIntrospectionSchemaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_schema{};
    bool m_schemaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
