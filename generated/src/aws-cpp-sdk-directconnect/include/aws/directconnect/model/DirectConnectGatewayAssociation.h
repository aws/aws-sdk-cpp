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
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociation() = default;
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const { return m_directConnectGatewayId; }
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }
    template<typename DirectConnectGatewayIdT = Aws::String>
    void SetDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::forward<DirectConnectGatewayIdT>(value); }
    template<typename DirectConnectGatewayIdT = Aws::String>
    DirectConnectGatewayAssociation& WithDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { SetDirectConnectGatewayId(std::forward<DirectConnectGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the associated
     * gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayOwnerAccount() const { return m_directConnectGatewayOwnerAccount; }
    inline bool DirectConnectGatewayOwnerAccountHasBeenSet() const { return m_directConnectGatewayOwnerAccountHasBeenSet; }
    template<typename DirectConnectGatewayOwnerAccountT = Aws::String>
    void SetDirectConnectGatewayOwnerAccount(DirectConnectGatewayOwnerAccountT&& value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount = std::forward<DirectConnectGatewayOwnerAccountT>(value); }
    template<typename DirectConnectGatewayOwnerAccountT = Aws::String>
    DirectConnectGatewayAssociation& WithDirectConnectGatewayOwnerAccount(DirectConnectGatewayOwnerAccountT&& value) { SetDirectConnectGatewayOwnerAccount(std::forward<DirectConnectGatewayOwnerAccountT>(value)); return *this;}
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
    inline DirectConnectGatewayAssociationState GetAssociationState() const { return m_associationState; }
    inline bool AssociationStateHasBeenSet() const { return m_associationStateHasBeenSet; }
    inline void SetAssociationState(DirectConnectGatewayAssociationState value) { m_associationStateHasBeenSet = true; m_associationState = value; }
    inline DirectConnectGatewayAssociation& WithAssociationState(DirectConnectGatewayAssociationState value) { SetAssociationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline const Aws::String& GetStateChangeError() const { return m_stateChangeError; }
    inline bool StateChangeErrorHasBeenSet() const { return m_stateChangeErrorHasBeenSet; }
    template<typename StateChangeErrorT = Aws::String>
    void SetStateChangeError(StateChangeErrorT&& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = std::forward<StateChangeErrorT>(value); }
    template<typename StateChangeErrorT = Aws::String>
    DirectConnectGatewayAssociation& WithStateChangeError(StateChangeErrorT&& value) { SetStateChangeError(std::forward<StateChangeErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the associated gateway.</p>
     */
    inline const AssociatedGateway& GetAssociatedGateway() const { return m_associatedGateway; }
    inline bool AssociatedGatewayHasBeenSet() const { return m_associatedGatewayHasBeenSet; }
    template<typename AssociatedGatewayT = AssociatedGateway>
    void SetAssociatedGateway(AssociatedGatewayT&& value) { m_associatedGatewayHasBeenSet = true; m_associatedGateway = std::forward<AssociatedGatewayT>(value); }
    template<typename AssociatedGatewayT = AssociatedGateway>
    DirectConnectGatewayAssociation& WithAssociatedGateway(AssociatedGatewayT&& value) { SetAssociatedGateway(std::forward<AssociatedGatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    DirectConnectGatewayAssociation& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetAllowedPrefixesToDirectConnectGateway() const { return m_allowedPrefixesToDirectConnectGateway; }
    inline bool AllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_allowedPrefixesToDirectConnectGatewayHasBeenSet; }
    template<typename AllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    void SetAllowedPrefixesToDirectConnectGateway(AllowedPrefixesToDirectConnectGatewayT&& value) { m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_allowedPrefixesToDirectConnectGateway = std::forward<AllowedPrefixesToDirectConnectGatewayT>(value); }
    template<typename AllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    DirectConnectGatewayAssociation& WithAllowedPrefixesToDirectConnectGateway(AllowedPrefixesToDirectConnectGatewayT&& value) { SetAllowedPrefixesToDirectConnectGateway(std::forward<AllowedPrefixesToDirectConnectGatewayT>(value)); return *this;}
    template<typename AllowedPrefixesToDirectConnectGatewayT = RouteFilterPrefix>
    DirectConnectGatewayAssociation& AddAllowedPrefixesToDirectConnectGateway(AllowedPrefixesToDirectConnectGatewayT&& value) { m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_allowedPrefixesToDirectConnectGateway.emplace_back(std::forward<AllowedPrefixesToDirectConnectGatewayT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Cloud WAN core network associated with the Direct Connect
     * gateway attachment.</p>
     */
    inline const AssociatedCoreNetwork& GetAssociatedCoreNetwork() const { return m_associatedCoreNetwork; }
    inline bool AssociatedCoreNetworkHasBeenSet() const { return m_associatedCoreNetworkHasBeenSet; }
    template<typename AssociatedCoreNetworkT = AssociatedCoreNetwork>
    void SetAssociatedCoreNetwork(AssociatedCoreNetworkT&& value) { m_associatedCoreNetworkHasBeenSet = true; m_associatedCoreNetwork = std::forward<AssociatedCoreNetworkT>(value); }
    template<typename AssociatedCoreNetworkT = AssociatedCoreNetwork>
    DirectConnectGatewayAssociation& WithAssociatedCoreNetwork(AssociatedCoreNetworkT&& value) { SetAssociatedCoreNetwork(std::forward<AssociatedCoreNetworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const { return m_virtualGatewayId; }
    inline bool VirtualGatewayIdHasBeenSet() const { return m_virtualGatewayIdHasBeenSet; }
    template<typename VirtualGatewayIdT = Aws::String>
    void SetVirtualGatewayId(VirtualGatewayIdT&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::forward<VirtualGatewayIdT>(value); }
    template<typename VirtualGatewayIdT = Aws::String>
    DirectConnectGatewayAssociation& WithVirtualGatewayId(VirtualGatewayIdT&& value) { SetVirtualGatewayId(std::forward<VirtualGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the virtual private gateway is
     * located.</p>
     */
    inline const Aws::String& GetVirtualGatewayRegion() const { return m_virtualGatewayRegion; }
    inline bool VirtualGatewayRegionHasBeenSet() const { return m_virtualGatewayRegionHasBeenSet; }
    template<typename VirtualGatewayRegionT = Aws::String>
    void SetVirtualGatewayRegion(VirtualGatewayRegionT&& value) { m_virtualGatewayRegionHasBeenSet = true; m_virtualGatewayRegion = std::forward<VirtualGatewayRegionT>(value); }
    template<typename VirtualGatewayRegionT = Aws::String>
    DirectConnectGatewayAssociation& WithVirtualGatewayRegion(VirtualGatewayRegionT&& value) { SetVirtualGatewayRegion(std::forward<VirtualGatewayRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the virtual private
     * gateway.</p>
     */
    inline const Aws::String& GetVirtualGatewayOwnerAccount() const { return m_virtualGatewayOwnerAccount; }
    inline bool VirtualGatewayOwnerAccountHasBeenSet() const { return m_virtualGatewayOwnerAccountHasBeenSet; }
    template<typename VirtualGatewayOwnerAccountT = Aws::String>
    void SetVirtualGatewayOwnerAccount(VirtualGatewayOwnerAccountT&& value) { m_virtualGatewayOwnerAccountHasBeenSet = true; m_virtualGatewayOwnerAccount = std::forward<VirtualGatewayOwnerAccountT>(value); }
    template<typename VirtualGatewayOwnerAccountT = Aws::String>
    DirectConnectGatewayAssociation& WithVirtualGatewayOwnerAccount(VirtualGatewayOwnerAccountT&& value) { SetVirtualGatewayOwnerAccount(std::forward<VirtualGatewayOwnerAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    Aws::String m_directConnectGatewayOwnerAccount;
    bool m_directConnectGatewayOwnerAccountHasBeenSet = false;

    DirectConnectGatewayAssociationState m_associationState{DirectConnectGatewayAssociationState::NOT_SET};
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
