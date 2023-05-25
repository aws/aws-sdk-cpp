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
    inline Aws::IOStream& GetSchema() const { return m_schema.GetUnderlyingStream(); }

    /**
     * <p>The schema, in GraphQL Schema Definition Language (SDL) format.</p> <p>For
     * more information, see the <a href="http://graphql.org/learn/schema/">GraphQL SDL
     * documentation</a>.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_schema = Aws::Utils::Stream::ResponseStream(body); }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetIntrospectionSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetIntrospectionSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetIntrospectionSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::Stream::ResponseStream m_schema;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
