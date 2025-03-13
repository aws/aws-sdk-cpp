/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GatewayRouteStatusCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the current status of a gateway
   * route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GatewayRouteStatus">AWS
   * API Reference</a></p>
   */
  class GatewayRouteStatus
  {
  public:
    AWS_APPMESH_API GatewayRouteStatus() = default;
    AWS_APPMESH_API GatewayRouteStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GatewayRouteStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status for the gateway route.</p>
     */
    inline GatewayRouteStatusCode GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GatewayRouteStatusCode value) { m_statusHasBeenSet = true; m_status = value; }
    inline GatewayRouteStatus& WithStatus(GatewayRouteStatusCode value) { SetStatus(value); return *this;}
    ///@}
  private:

    GatewayRouteStatusCode m_status{GatewayRouteStatusCode::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
