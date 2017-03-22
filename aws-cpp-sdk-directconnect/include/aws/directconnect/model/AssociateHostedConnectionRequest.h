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
   * <p>Container for the parameters to the AssociateHostedConnection
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateHostedConnectionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API AssociateHostedConnectionRequest : public DirectConnectRequest
  {
  public:
    AssociateHostedConnectionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the hosted connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the hosted connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the hosted connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the hosted connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the hosted connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline AssociateHostedConnectionRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the hosted connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline AssociateHostedConnectionRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the hosted connection.</p> <p>Example: dxcon-abc123</p> <p>Default:
     * None</p>
     */
    inline AssociateHostedConnectionRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the interconnect or the LAG.</p> <p>Example: dxcon-abc123 or
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline const Aws::String& GetParentConnectionId() const{ return m_parentConnectionId; }

    /**
     * <p>The ID of the interconnect or the LAG.</p> <p>Example: dxcon-abc123 or
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline void SetParentConnectionId(const Aws::String& value) { m_parentConnectionIdHasBeenSet = true; m_parentConnectionId = value; }

    /**
     * <p>The ID of the interconnect or the LAG.</p> <p>Example: dxcon-abc123 or
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline void SetParentConnectionId(Aws::String&& value) { m_parentConnectionIdHasBeenSet = true; m_parentConnectionId = value; }

    /**
     * <p>The ID of the interconnect or the LAG.</p> <p>Example: dxcon-abc123 or
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline void SetParentConnectionId(const char* value) { m_parentConnectionIdHasBeenSet = true; m_parentConnectionId.assign(value); }

    /**
     * <p>The ID of the interconnect or the LAG.</p> <p>Example: dxcon-abc123 or
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline AssociateHostedConnectionRequest& WithParentConnectionId(const Aws::String& value) { SetParentConnectionId(value); return *this;}

    /**
     * <p>The ID of the interconnect or the LAG.</p> <p>Example: dxcon-abc123 or
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline AssociateHostedConnectionRequest& WithParentConnectionId(Aws::String&& value) { SetParentConnectionId(value); return *this;}

    /**
     * <p>The ID of the interconnect or the LAG.</p> <p>Example: dxcon-abc123 or
     * dxlag-abc123</p> <p>Default: None</p>
     */
    inline AssociateHostedConnectionRequest& WithParentConnectionId(const char* value) { SetParentConnectionId(value); return *this;}

  private:
    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;
    Aws::String m_parentConnectionId;
    bool m_parentConnectionIdHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
