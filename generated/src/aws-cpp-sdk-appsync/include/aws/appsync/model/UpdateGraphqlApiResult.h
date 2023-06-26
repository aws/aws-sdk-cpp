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
  class UpdateGraphqlApiResult
  {
  public:
    AWS_APPSYNC_API UpdateGraphqlApiResult();
    AWS_APPSYNC_API UpdateGraphqlApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API UpdateGraphqlApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated <code>GraphqlApi</code> object.</p>
     */
    inline const GraphqlApi& GetGraphqlApi() const{ return m_graphqlApi; }

    /**
     * <p>The updated <code>GraphqlApi</code> object.</p>
     */
    inline void SetGraphqlApi(const GraphqlApi& value) { m_graphqlApi = value; }

    /**
     * <p>The updated <code>GraphqlApi</code> object.</p>
     */
    inline void SetGraphqlApi(GraphqlApi&& value) { m_graphqlApi = std::move(value); }

    /**
     * <p>The updated <code>GraphqlApi</code> object.</p>
     */
    inline UpdateGraphqlApiResult& WithGraphqlApi(const GraphqlApi& value) { SetGraphqlApi(value); return *this;}

    /**
     * <p>The updated <code>GraphqlApi</code> object.</p>
     */
    inline UpdateGraphqlApiResult& WithGraphqlApi(GraphqlApi&& value) { SetGraphqlApi(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateGraphqlApiResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateGraphqlApiResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateGraphqlApiResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GraphqlApi m_graphqlApi;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
