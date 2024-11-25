/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/DirectConnectGatewayAssociationState.h>
#include <aws/directconnect/model/AssociatedGateway.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/AssociatedCoreNetwork.h>
#include <aws/directconnect/model/RouteFilterPrefix.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about an association between a Direct Connect gateway and a
   * virtual private gateway or transit gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DirectConnectGatewayAssociation">AWS
   * API Reference</a></p>
   */
  class DirectConnectGatewayAssociation
  {
  public:
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociation();
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the associated
     * gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayOwnerAccount() const{ return m_directConnectGatewayOwnerAccount; }
    inline bool DirectConnectGatewayOwnerAccountHasBeenSet() const { return m_directConnectGatewayOwnerAccountHasBeenSet; }
    inline void SetDirectConnectGatewayOwnerAccount(const Aws::String& value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount = value; }
    inline void SetDirectConnectGatewayOwnerAccount(Aws::String&& value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount = std::move(value); }
    inline void SetDirectConnectGatewayOwnerAccount(const char* value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount.assign(value); }
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayOwnerAccount(const Aws::String& value) { SetDirectConnectGatewayOwnerAccount(value); return *this;}
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayOwnerAccount(Aws::String&& value) { SetDirectConnectGatewayOwnerAccount(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayOwnerAccount(const char* value) { SetDirectConnectGatewayOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the association. The following are the possible values:</p> <ul>
     * <li> <p> <code>associating</code>: The initial state after calling
     * <a>CreateDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>associated</code>: The Direct Connect gateway and virtual private gateway
     * or transit gateway are successfully associated and ready to pass traffic.</p>
     * </li> <li> <p> <code>disassociating</code>: The initial state after calling
     * <a>DeleteDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>disassociated</code>: The virtual private gateway or transit gateway is
     * disassociated from the Direct Connect gateway. Traffic flow between the Direct
     * Connect gateway and virtual private gateway or transit gateway is stopped.</p>
     * </li> <li> <p> <code>updating</code>: The CIDR blocks for the virtual private
     * gateway or transit gateway are currently being updated. This could be new CIDR
     * blocks added or current CIDR blocks removed.</p> </li> </ul>
     */
    inline const DirectConnectGatewayAssociationState& GetAssociationState() const{ return m_associationState; }
    inline bool AssociationStateHasBeenSet() const { return m_associationStateHasBeenSet; }
    inline void SetAssociationState(const DirectConnectGatewayAssociationState& value) { m_associationStateHasBeenSet = true; m_associationState = value; }
    inline void SetAssociationState(DirectConnectGatewayAssociationState&& value) { m_associationStateHasBeenSet = true; m_associationState = std::move(value); }
    inline DirectConnectGatewayAssociation& WithAssociationState(const DirectConnectGatewayAssociationState& value) { SetAssociationState(value); return *this;}
    inline DirectConnectGatewayAssociation& WithAssociationState(DirectConnectGatewayAssociationState&& value) { SetAssociationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline const Aws::String& GetStateChangeError() const{ return m_stateChangeError; }
    inline bool StateChangeErrorHasBeenSet() const { return m_stateChangeErrorHasBeenSet; }
    inline void SetStateChangeError(const Aws::String& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = value; }
    inline void SetStateChangeError(Aws::String&& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = std::move(value); }
    inline void SetStateChangeError(const char* value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError.assign(value); }
    inline DirectConnectGatewayAssociation& WithStateChangeError(const Aws::String& value) { SetStateChangeError(value); return *this;}
    inline DirectConnectGatewayAssociation& WithStateChangeError(Aws::String&& value) { SetStateChangeError(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociation& WithStateChangeError(const char* value) { SetStateChangeError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the associated gateway.</p>
     */
    inline const AssociatedGateway& GetAssociatedGateway() const{ return m_associatedGateway; }
    inline bool AssociatedGatewayHasBeenSet() const { return m_associatedGatewayHasBeenSet; }
    inline void SetAssociatedGateway(const AssociatedGateway& value) { m_associatedGatewayHasBeenSet = true; m_associatedGateway = value; }
    inline void SetAssociatedGateway(AssociatedGateway&& value) { m_associatedGatewayHasBeenSet = true; m_associatedGateway = std::move(value); }
    inline DirectConnectGatewayAssociation& WithAssociatedGateway(const AssociatedGateway& value) { SetAssociatedGateway(value); return *this;}
    inline DirectConnectGatewayAssociation& WithAssociatedGateway(AssociatedGateway&& value) { SetAssociatedGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline DirectConnectGatewayAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline DirectConnectGatewayAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetAllowedPrefixesToDirectConnectGateway() const{ return m_allowedPrefixesToDirectConnectGateway; }
    inline bool AllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_allowedPrefixesToDirectConnectGatewayHasBeenSet; }
    inline void SetAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_allowedPrefixesToDirectConnectGateway = value; }
    inline void SetAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_allowedPrefixesToDirectConnectGateway = std::move(value); }
    inline DirectConnectGatewayAssociation& WithAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetAllowedPrefixesToDirectConnectGateway(value); return *this;}
    inline DirectConnectGatewayAssociation& WithAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociation& AddAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_allowedPrefixesToDirectConnectGateway.push_back(value); return *this; }
    inline DirectConnectGatewayAssociation& AddAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_allowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Cloud WAN core network associated with the Direct Connect
     * attachment.</p>
     */
    inline const AssociatedCoreNetwork& GetAssociatedCoreNetwork() const{ return m_associatedCoreNetwork; }
    inline bool AssociatedCoreNetworkHasBeenSet() const { return m_associatedCoreNetworkHasBeenSet; }
    inline void SetAssociatedCoreNetwork(const AssociatedCoreNetwork& value) { m_associatedCoreNetworkHasBeenSet = true; m_associatedCoreNetwork = value; }
    inline void SetAssociatedCoreNetwork(AssociatedCoreNetwork&& value) { m_associatedCoreNetworkHasBeenSet = true; m_associatedCoreNetwork = std::move(value); }
    inline DirectConnectGatewayAssociation& WithAssociatedCoreNetwork(const AssociatedCoreNetwork& value) { SetAssociatedCoreNetwork(value); return *this;}
    inline DirectConnectGatewayAssociation& WithAssociatedCoreNetwork(AssociatedCoreNetwork&& value) { SetAssociatedCoreNetwork(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }
    inline bool VirtualGatewayIdHasBeenSet() const { return m_virtualGatewayIdHasBeenSet; }
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::move(value); }
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }
    inline DirectConnectGatewayAssociation& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}
    inline DirectConnectGatewayAssociation& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociation& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the virtual private gateway is
     * located.</p>
     */
    inline const Aws::String& GetVirtualGatewayRegion() const{ return m_virtualGatewayRegion; }
    inline bool VirtualGatewayRegionHasBeenSet() const { return m_virtualGatewayRegionHasBeenSet; }
    inline void SetVirtualGatewayRegion(const Aws::String& value) { m_virtualGatewayRegionHasBeenSet = true; m_virtualGatewayRegion = value; }
    inline void SetVirtualGatewayRegion(Aws::String&& value) { m_virtualGatewayRegionHasBeenSet = true; m_virtualGatewayRegion = std::move(value); }
    inline void SetVirtualGatewayRegion(const char* value) { m_virtualGatewayRegionHasBeenSet = true; m_virtualGatewayRegion.assign(value); }
    inline DirectConnectGatewayAssociation& WithVirtualGatewayRegion(const Aws::String& value) { SetVirtualGatewayRegion(value); return *this;}
    inline DirectConnectGatewayAssociation& WithVirtualGatewayRegion(Aws::String&& value) { SetVirtualGatewayRegion(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociation& WithVirtualGatewayRegion(const char* value) { SetVirtualGatewayRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the virtual private
     * gateway.</p>
     */
    inline const Aws::String& GetVirtualGatewayOwnerAccount() const{ return m_virtualGatewayOwnerAccount; }
    inline bool VirtualGatewayOwnerAccountHasBeenSet() const { return m_virtualGatewayOwnerAccountHasBeenSet; }
    inline void SetVirtualGatewayOwnerAccount(const Aws::String& value) { m_virtualGatewayOwnerAccountHasBeenSet = true; m_virtualGatewayOwnerAccount = value; }
    inline void SetVirtualGatewayOwnerAccount(Aws::String&& value) { m_virtualGatewayOwnerAccountHasBeenSet = true; m_virtualGatewayOwnerAccount = std::move(value); }
    inline void SetVirtualGatewayOwnerAccount(const char* value) { m_virtualGatewayOwnerAccountHasBeenSet = true; m_virtualGatewayOwnerAccount.assign(value); }
    inline DirectConnectGatewayAssociation& WithVirtualGatewayOwnerAccount(const Aws::String& value) { SetVirtualGatewayOwnerAccount(value); return *this;}
    inline DirectConnectGatewayAssociation& WithVirtualGatewayOwnerAccount(Aws::String&& value) { SetVirtualGatewayOwnerAccount(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociation& WithVirtualGatewayOwnerAccount(const char* value) { SetVirtualGatewayOwnerAccount(value); return *this;}
    ///@}
  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    Aws::String m_directConnectGatewayOwnerAccount;
    bool m_directConnectGatewayOwnerAccountHasBeenSet = false;

    DirectConnectGatewayAssociationState m_associationState;
    bool m_associationStateHasBeenSet = false;

    Aws::String m_stateChangeError;
    bool m_stateChangeErrorHasBeenSet = false;

    AssociatedGateway m_associatedGateway;
    bool m_associatedGatewayHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::Vector<RouteFilterPrefix> m_allowedPrefixesToDirectConnectGateway;
    bool m_allowedPrefixesToDirectConnectGatewayHasBeenSet = false;

    AssociatedCoreNetwork m_associatedCoreNetwork;
    bool m_associatedCoreNetworkHasBeenSet = false;

    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet = false;

    Aws::String m_virtualGatewayRegion;
    bool m_virtualGatewayRegionHasBeenSet = false;

    Aws::String m_virtualGatewayOwnerAccount;
    bool m_virtualGatewayOwnerAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
