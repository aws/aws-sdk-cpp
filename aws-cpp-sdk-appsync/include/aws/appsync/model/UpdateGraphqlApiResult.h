/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  private:

    GraphqlApi m_graphqlApi;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
