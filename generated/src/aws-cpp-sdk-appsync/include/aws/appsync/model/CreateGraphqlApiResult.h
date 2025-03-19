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
  class CreateGraphqlApiResult
  {
  public:
    AWS_APPSYNC_API CreateGraphqlApiResult() = default;
    AWS_APPSYNC_API CreateGraphqlApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API CreateGraphqlApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>GraphqlApi</code>.</p>
     */
    inline const GraphqlApi& GetGraphqlApi() const { return m_graphqlApi; }
    template<typename GraphqlApiT = GraphqlApi>
    void SetGraphqlApi(GraphqlApiT&& value) { m_graphqlApiHasBeenSet = true; m_graphqlApi = std::forward<GraphqlApiT>(value); }
    template<typename GraphqlApiT = GraphqlApi>
    CreateGraphqlApiResult& WithGraphqlApi(GraphqlApiT&& value) { SetGraphqlApi(std::forward<GraphqlApiT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGraphqlApiResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GraphqlApi m_graphqlApi;
    bool m_graphqlApiHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
