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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/RouteFilterPrefix.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationRequest : public DirectConnectRequest
  {
  public:
    CreateDirectConnectGatewayAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDirectConnectGatewayAssociation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway</p> <p>For
     * information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetAddAllowedPrefixesToDirectConnectGateway() const{ return m_addAllowedPrefixesToDirectConnectGateway; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway</p> <p>For
     * information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline bool AddAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway</p> <p>For
     * information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline void SetAddAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway = value; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway</p> <p>For
     * information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline void SetAddAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway = std::move(value); }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway</p> <p>For
     * information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& WithAddAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetAddAllowedPrefixesToDirectConnectGateway(value); return *this;}

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway</p> <p>For
     * information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& WithAddAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetAddAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway</p> <p>For
     * information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& AddAddAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway.push_back(value); return *this; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway</p> <p>For
     * information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& AddAddAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline bool VirtualGatewayIdHasBeenSet() const { return m_virtualGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationRequest& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet;

    Aws::Vector<RouteFilterPrefix> m_addAllowedPrefixesToDirectConnectGateway;
    bool m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet;

    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
