/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GatewayRouteData.h>
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
namespace AppMesh
{
namespace Model
{
  class CreateGatewayRouteResult
  {
  public:
    AWS_APPMESH_API CreateGatewayRouteResult() = default;
    AWS_APPMESH_API CreateGatewayRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API CreateGatewayRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full description of your gateway route following the create call.</p>
     */
    inline const GatewayRouteData& GetGatewayRoute() const { return m_gatewayRoute; }
    template<typename GatewayRouteT = GatewayRouteData>
    void SetGatewayRoute(GatewayRouteT&& value) { m_gatewayRouteHasBeenSet = true; m_gatewayRoute = std::forward<GatewayRouteT>(value); }
    template<typename GatewayRouteT = GatewayRouteData>
    CreateGatewayRouteResult& WithGatewayRoute(GatewayRouteT&& value) { SetGatewayRoute(std::forward<GatewayRouteT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGatewayRouteResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GatewayRouteData m_gatewayRoute;
    bool m_gatewayRouteHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
