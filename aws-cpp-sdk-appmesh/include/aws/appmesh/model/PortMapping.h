/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/PortProtocol.h>
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
   * <p>An object representing a virtual node or virtual router listener port
   * mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/PortMapping">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API PortMapping
  {
  public:
    PortMapping();
    PortMapping(Aws::Utils::Json::JsonView jsonValue);
    PortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The port used for the port mapping.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port used for the port mapping.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port used for the port mapping.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port used for the port mapping.</p>
     */
    inline PortMapping& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline const PortProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline void SetProtocol(const PortProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline void SetProtocol(PortProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline PortMapping& WithProtocol(const PortProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline PortMapping& WithProtocol(PortProtocol&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    int m_port;
    bool m_portHasBeenSet;

    PortProtocol m_protocol;
    bool m_protocolHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
