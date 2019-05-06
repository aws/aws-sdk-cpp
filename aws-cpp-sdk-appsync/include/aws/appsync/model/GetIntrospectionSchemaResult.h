/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPSYNC_API GetIntrospectionSchemaResult
  {
  public:
    GetIntrospectionSchemaResult();
    //We have to define these because Microsoft doesn't auto generate them
    GetIntrospectionSchemaResult(GetIntrospectionSchemaResult&&);
    GetIntrospectionSchemaResult& operator=(GetIntrospectionSchemaResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetIntrospectionSchemaResult(const GetIntrospectionSchemaResult&) = delete;
    GetIntrospectionSchemaResult& operator=(const GetIntrospectionSchemaResult&) = delete;


    GetIntrospectionSchemaResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    GetIntrospectionSchemaResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



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
