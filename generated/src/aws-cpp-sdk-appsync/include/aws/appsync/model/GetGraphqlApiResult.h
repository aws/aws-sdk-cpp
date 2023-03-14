/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/GraphqlApi.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetGraphqlApiResult
  {
  public:
    AWS_APPSYNC_API GetGraphqlApiResult();
    AWS_APPSYNC_API GetGraphqlApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetGraphqlApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGraphqlApiResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGraphqlApiResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGraphqlApiResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GraphqlApi m_graphqlApi;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
