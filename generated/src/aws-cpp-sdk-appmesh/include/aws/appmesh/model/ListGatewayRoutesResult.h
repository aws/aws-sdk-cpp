/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/GatewayRouteRef.h>
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
namespace AppMesh
{
namespace Model
{
  class ListGatewayRoutesResult
  {
  public:
    AWS_APPMESH_API ListGatewayRoutesResult() = default;
    AWS_APPMESH_API ListGatewayRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API ListGatewayRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of existing gateway routes for the specified service mesh and
     * virtual gateway.</p>
     */
    inline const Aws::Vector<GatewayRouteRef>& GetGatewayRoutes() const { return m_gatewayRoutes; }
    template<typename GatewayRoutesT = Aws::Vector<GatewayRouteRef>>
    void SetGatewayRoutes(GatewayRoutesT&& value) { m_gatewayRoutesHasBeenSet = true; m_gatewayRoutes = std::forward<GatewayRoutesT>(value); }
    template<typename GatewayRoutesT = Aws::Vector<GatewayRouteRef>>
    ListGatewayRoutesResult& WithGatewayRoutes(GatewayRoutesT&& value) { SetGatewayRoutes(std::forward<GatewayRoutesT>(value)); return *this;}
    template<typename GatewayRoutesT = GatewayRouteRef>
    ListGatewayRoutesResult& AddGatewayRoutes(GatewayRoutesT&& value) { m_gatewayRoutesHasBeenSet = true; m_gatewayRoutes.emplace_back(std::forward<GatewayRoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListGatewayRoutes</code> request. When the results of a
     * <code>ListGatewayRoutes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGatewayRoutesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGatewayRoutesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GatewayRouteRef> m_gatewayRoutes;
    bool m_gatewayRoutesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
