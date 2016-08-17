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
   * <p>Container for the parameters to the ConfirmPrivateVirtualInterface
   * operation.</p>
   */
  class AWS_DIRECTCONNECT_API ConfirmPrivateVirtualInterfaceRequest : public DirectConnectRequest
  {
  public:
    ConfirmPrivateVirtualInterfaceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }

    
    inline ConfirmPrivateVirtualInterfaceRequest& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    
    inline ConfirmPrivateVirtualInterfaceRequest& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(value); return *this;}

    
    inline ConfirmPrivateVirtualInterfaceRequest& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>ID of the virtual private gateway that will be attached to the virtual
     * interface.</p> <p> A virtual private gateway can be managed via the Amazon
     * Virtual Private Cloud (VPC) console or the <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
     * CreateVpnGateway</a> action.</p> <p>Default: None</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    /**
     * <p>ID of the virtual private gateway that will be attached to the virtual
     * interface.</p> <p> A virtual private gateway can be managed via the Amazon
     * Virtual Private Cloud (VPC) console or the <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
     * CreateVpnGateway</a> action.</p> <p>Default: None</p>
     */
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    /**
     * <p>ID of the virtual private gateway that will be attached to the virtual
     * interface.</p> <p> A virtual private gateway can be managed via the Amazon
     * Virtual Private Cloud (VPC) console or the <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
     * CreateVpnGateway</a> action.</p> <p>Default: None</p>
     */
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    /**
     * <p>ID of the virtual private gateway that will be attached to the virtual
     * interface.</p> <p> A virtual private gateway can be managed via the Amazon
     * Virtual Private Cloud (VPC) console or the <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
     * CreateVpnGateway</a> action.</p> <p>Default: None</p>
     */
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }

    /**
     * <p>ID of the virtual private gateway that will be attached to the virtual
     * interface.</p> <p> A virtual private gateway can be managed via the Amazon
     * Virtual Private Cloud (VPC) console or the <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
     * CreateVpnGateway</a> action.</p> <p>Default: None</p>
     */
    inline ConfirmPrivateVirtualInterfaceRequest& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    /**
     * <p>ID of the virtual private gateway that will be attached to the virtual
     * interface.</p> <p> A virtual private gateway can be managed via the Amazon
     * Virtual Private Cloud (VPC) console or the <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
     * CreateVpnGateway</a> action.</p> <p>Default: None</p>
     */
    inline ConfirmPrivateVirtualInterfaceRequest& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(value); return *this;}

    /**
     * <p>ID of the virtual private gateway that will be attached to the virtual
     * interface.</p> <p> A virtual private gateway can be managed via the Amazon
     * Virtual Private Cloud (VPC) console or the <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
     * CreateVpnGateway</a> action.</p> <p>Default: None</p>
     */
    inline ConfirmPrivateVirtualInterfaceRequest& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}

  private:
    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet;
    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
