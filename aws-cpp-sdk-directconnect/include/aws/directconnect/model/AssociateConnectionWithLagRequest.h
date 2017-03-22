/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Container for the parameters to the AssociateConnectionWithLag
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateConnectionWithLagRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API AssociateConnectionWithLagRequest : public DirectConnectRequest
  {
  public:
    AssociateConnectionWithLagRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline AssociateConnectionWithLagRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline AssociateConnectionWithLagRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline AssociateConnectionWithLagRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the LAG with which to associate the connection.</p> <p>Example:
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline const Aws::String& GetLagId() const{ return m_lagId; }

    /**
     * <p>The ID of the LAG with which to associate the connection.</p> <p>Example:
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline void SetLagId(const Aws::String& value) { m_lagIdHasBeenSet = true; m_lagId = value; }

    /**
     * <p>The ID of the LAG with which to associate the connection.</p> <p>Example:
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline void SetLagId(Aws::String&& value) { m_lagIdHasBeenSet = true; m_lagId = value; }

    /**
     * <p>The ID of the LAG with which to associate the connection.</p> <p>Example:
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline void SetLagId(const char* value) { m_lagIdHasBeenSet = true; m_lagId.assign(value); }

    /**
     * <p>The ID of the LAG with which to associate the connection.</p> <p>Example:
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline AssociateConnectionWithLagRequest& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}

    /**
     * <p>The ID of the LAG with which to associate the connection.</p> <p>Example:
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline AssociateConnectionWithLagRequest& WithLagId(Aws::String&& value) { SetLagId(value); return *this;}

    /**
     * <p>The ID of the LAG with which to associate the connection.</p> <p>Example:
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline AssociateConnectionWithLagRequest& WithLagId(const char* value) { SetLagId(value); return *this;}

  private:
    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;
    Aws::String m_lagId;
    bool m_lagIdHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
