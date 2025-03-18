/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>

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
   * <p>An object that represents a type of connection pool.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayHttpConnectionPool">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayHttpConnectionPool
  {
  public:
    AWS_APPMESH_API VirtualGatewayHttpConnectionPool() = default;
    AWS_APPMESH_API VirtualGatewayHttpConnectionPool(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayHttpConnectionPool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum number of outbound TCP connections Envoy can establish concurrently
     * with all hosts in upstream cluster.</p>
     */
    inline int GetMaxConnections() const { return m_maxConnections; }
    inline bool MaxConnectionsHasBeenSet() const { return m_maxConnectionsHasBeenSet; }
    inline void SetMaxConnections(int value) { m_maxConnectionsHasBeenSet = true; m_maxConnections = value; }
    inline VirtualGatewayHttpConnectionPool& WithMaxConnections(int value) { SetMaxConnections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of overflowing requests after <code>max_connections</code> Envoy will
     * queue to upstream cluster.</p>
     */
    inline int GetMaxPendingRequests() const { return m_maxPendingRequests; }
    inline bool MaxPendingRequestsHasBeenSet() const { return m_maxPendingRequestsHasBeenSet; }
    inline void SetMaxPendingRequests(int value) { m_maxPendingRequestsHasBeenSet = true; m_maxPendingRequests = value; }
    inline VirtualGatewayHttpConnectionPool& WithMaxPendingRequests(int value) { SetMaxPendingRequests(value); return *this;}
    ///@}
  private:

    int m_maxConnections{0};
    bool m_maxConnectionsHasBeenSet = false;

    int m_maxPendingRequests{0};
    bool m_maxPendingRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
