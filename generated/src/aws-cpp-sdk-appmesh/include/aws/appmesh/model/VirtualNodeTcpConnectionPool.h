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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualNodeTcpConnectionPool">AWS
   * API Reference</a></p>
   */
  class VirtualNodeTcpConnectionPool
  {
  public:
    AWS_APPMESH_API VirtualNodeTcpConnectionPool();
    AWS_APPMESH_API VirtualNodeTcpConnectionPool(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualNodeTcpConnectionPool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Maximum number of outbound TCP connections Envoy can establish concurrently
     * with all hosts in upstream cluster.</p>
     */
    inline int GetMaxConnections() const{ return m_maxConnections; }

    /**
     * <p>Maximum number of outbound TCP connections Envoy can establish concurrently
     * with all hosts in upstream cluster.</p>
     */
    inline bool MaxConnectionsHasBeenSet() const { return m_maxConnectionsHasBeenSet; }

    /**
     * <p>Maximum number of outbound TCP connections Envoy can establish concurrently
     * with all hosts in upstream cluster.</p>
     */
    inline void SetMaxConnections(int value) { m_maxConnectionsHasBeenSet = true; m_maxConnections = value; }

    /**
     * <p>Maximum number of outbound TCP connections Envoy can establish concurrently
     * with all hosts in upstream cluster.</p>
     */
    inline VirtualNodeTcpConnectionPool& WithMaxConnections(int value) { SetMaxConnections(value); return *this;}

  private:

    int m_maxConnections;
    bool m_maxConnectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
