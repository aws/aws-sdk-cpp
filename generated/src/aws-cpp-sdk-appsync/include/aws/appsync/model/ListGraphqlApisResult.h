/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListGraphqlApisResult
  {
  public:
    AWS_APPSYNC_API ListGraphqlApisResult() = default;
    AWS_APPSYNC_API ListGraphqlApisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListGraphqlApisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>GraphqlApi</code> objects.</p>
     */
    inline const Aws::Vector<GraphqlApi>& GetGraphqlApis() const { return m_graphqlApis; }
    template<typename GraphqlApisT = Aws::Vector<GraphqlApi>>
    void SetGraphqlApis(GraphqlApisT&& value) { m_graphqlApisHasBeenSet = true; m_graphqlApis = std::forward<GraphqlApisT>(value); }
    template<typename GraphqlApisT = Aws::Vector<GraphqlApi>>
    ListGraphqlApisResult& WithGraphqlApis(GraphqlApisT&& value) { SetGraphqlApis(std::forward<GraphqlApisT>(value)); return *this;}
    template<typename GraphqlApisT = GraphqlApi>
    ListGraphqlApisResult& AddGraphqlApis(GraphqlApisT&& value) { m_graphqlApisHasBeenSet = true; m_graphqlApis.emplace_back(std::forward<GraphqlApisT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier to pass in the next request to this operation to return the
     * next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGraphqlApisResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGraphqlApisResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GraphqlApi> m_graphqlApis;
    bool m_graphqlApisHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
