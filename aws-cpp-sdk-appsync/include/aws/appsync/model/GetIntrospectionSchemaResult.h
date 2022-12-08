/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
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
    AWS_APPSYNC_API GetIntrospectionSchemaResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_APPSYNC_API GetIntrospectionSchemaResult(GetIntrospectionSchemaResult&&);
    AWS_APPSYNC_API GetIntrospectionSchemaResult& operator=(GetIntrospectionSchemaResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetIntrospectionSchemaResult(const GetIntrospectionSchemaResult&) = delete;
    GetIntrospectionSchemaResult& operator=(const GetIntrospectionSchemaResult&) = delete;


    AWS_APPSYNC_API GetIntrospectionSchemaResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_APPSYNC_API GetIntrospectionSchemaResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The schema, in GraphQL Schema Definition Language (SDL) format.</p> <p>For
     * more information, see the <a href="http://graphql.org/learn/schema/">GraphQL SDL
     * documentation</a>.</p>
     */
    inline Aws::IOStream& GetSchema() { return m_schema.GetUnderlyingStream(); }

    /**
     * <p>The schema, in GraphQL Schema Definition Language (SDL) format.</p> <p>For
     * more information, see the <a href="http://graphql.org/learn/schema/">GraphQL SDL
     * documentation</a>.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_schema = Aws::Utils::Stream::ResponseStream(body); }

  private:

  Aws::Utils::Stream::ResponseStream m_schema;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
