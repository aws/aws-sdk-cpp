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
  class AWS_APPSYNC_API GetGraphqlApiResult
  {
  public:
    GetGraphqlApiResult();
    GetGraphqlApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGraphqlApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>GraphqlApi</code> object.</p>
     */
    inline const GraphqlApi& GetGraphqlApi() const{ return m_graphqlApi; }

    /**
     * <p>The <code>GraphqlApi</code> object.</p>
     */
    inline void SetGraphqlApi(const GraphqlApi& value) { m_graphqlApi = value; }

    /**
     * <p>The <code>GraphqlApi</code> object.</p>
     */
    inline void SetGraphqlApi(GraphqlApi&& value) { m_graphqlApi = std::move(value); }

    /**
     * <p>The <code>GraphqlApi</code> object.</p>
     */
    inline GetGraphqlApiResult& WithGraphqlApi(const GraphqlApi& value) { SetGraphqlApi(value); return *this;}

    /**
     * <p>The <code>GraphqlApi</code> object.</p>
     */
    inline GetGraphqlApiResult& WithGraphqlApi(GraphqlApi&& value) { SetGraphqlApi(std::move(value)); return *this;}

  private:

    GraphqlApi m_graphqlApi;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
