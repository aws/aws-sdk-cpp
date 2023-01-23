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
   * <p>An object representing the TCP route to match.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TcpRouteMatch">AWS
   * API Reference</a></p>
   */
  class TcpRouteMatch
  {
  public:
    AWS_APPMESH_API TcpRouteMatch();
    AWS_APPMESH_API TcpRouteMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API TcpRouteMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The port number to match on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number to match on.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number to match on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number to match on.</p>
     */
    inline TcpRouteMatch& WithPort(int value) { SetPort(value); return *this;}

  private:

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
