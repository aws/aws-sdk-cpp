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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/GraphqlApi.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{
  class AWS_APPSYNC_API ListGraphqlApisResult
  {
  public:
    ListGraphqlApisResult();
    ListGraphqlApisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGraphqlApisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>GraphqlApi</code> objects.</p>
     */
    inline const Aws::Vector<GraphqlApi>& GetGraphqlApis() const{ return m_graphqlApis; }

    /**
     * <p>The <code>GraphqlApi</code> objects.</p>
     */
    inline void SetGraphqlApis(const Aws::Vector<GraphqlApi>& value) { m_graphqlApis = value; }

    /**
     * <p>The <code>GraphqlApi</code> objects.</p>
     */
    inline void SetGraphqlApis(Aws::Vector<GraphqlApi>&& value) { m_graphqlApis = std::move(value); }

    /**
     * <p>The <code>GraphqlApi</code> objects.</p>
     */
    inline ListGraphqlApisResult& WithGraphqlApis(const Aws::Vector<GraphqlApi>& value) { SetGraphqlApis(value); return *this;}

    /**
     * <p>The <code>GraphqlApi</code> objects.</p>
     */
    inline ListGraphqlApisResult& WithGraphqlApis(Aws::Vector<GraphqlApi>&& value) { SetGraphqlApis(std::move(value)); return *this;}

    /**
     * <p>The <code>GraphqlApi</code> objects.</p>
     */
    inline ListGraphqlApisResult& AddGraphqlApis(const GraphqlApi& value) { m_graphqlApis.push_back(value); return *this; }

    /**
     * <p>The <code>GraphqlApi</code> objects.</p>
     */
    inline ListGraphqlApisResult& AddGraphqlApis(GraphqlApi&& value) { m_graphqlApis.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListGraphqlApisResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListGraphqlApisResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListGraphqlApisResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GraphqlApi> m_graphqlApis;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
