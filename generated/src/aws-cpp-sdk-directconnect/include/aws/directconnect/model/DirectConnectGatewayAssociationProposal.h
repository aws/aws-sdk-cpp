/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/DirectConnectGatewayAssociationProposalState.h>
#include <aws/directconnect/model/AssociatedGateway.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about the proposal request to attach a virtual private gateway to
   * a Direct Connect gateway. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DirectConnectGatewayAssociationProposal">AWS
   * API Reference</a></p>
   */
  class DirectConnectGatewayAssociationProposal
  {
  public:
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociationProposal() = default;
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociationProposal(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociationProposal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the association proposal.</p>
     */
    inline const Aws::String& GetProposalId() const { return m_proposalId; }
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }
    template<typename ProposalIdT = Aws::String>
    void SetProposalId(ProposalIdT&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::forward<ProposalIdT>(value); }
    template<typename ProposalIdT = Aws::String>
    DirectConnectGatewayAssociationProposal& WithProposalId(ProposalIdT&& value) { SetProposalId(std::forward<ProposalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const { return m_directConnectGatewayId; }
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }
    template<typename DirectConnectGatewayIdT = Aws::String>
    void SetDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::forward<DirectConnectGatewayIdT>(value); }
    template<typename DirectConnectGatewayIdT = Aws::String>
    DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { SetDirectConnectGatewayId(std::forward<DirectConnectGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the Direct Connect
     * gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayOwnerAccount() const { return m_directConnectGatewayOwnerAccount; }
    inline bool DirectConnectGatewayOwnerAccountHasBeenSet() const { return m_directConnectGatewayOwnerAccountHasBeenSet; }
    template<typename DirectConnectGatewayOwnerAccountT = Aws::String>
    void SetDirectConnectGatewayOwnerAccount(DirectConnectGatewayOwnerAccountT&& value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount = std::forward<DirectConnectGatewayOwnerAccountT>(value); }
    template<typename DirectConnectGatewayOwnerAccountT = Aws::String>
    DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayOwnerAccount(DirectConnectGatewayOwnerAccountT&& value) { SetDirectConnectGatewayOwnerAccount(std::forward<DirectConnectGatewayOwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the proposal. The following are possible values:</p> <ul> <li>
     * <p> <code>accepted</code>: The proposal has been accepted. The Direct Connect
     * gateway association is available to use in this state.</p> </li> <li> <p>
     * <code>deleted</code>: The proposal has been deleted by the owner that made the
     * proposal. The Direct Connect gateway association cannot be used in this
     * state.</p> </li> <li> <p> <code>requested</code>: The proposal has been
     * requested. The Direct Connect gateway association cannot be used in this
     * state.</p> </li> </ul>
     */
    inline DirectConnectGatewayAssociationProposalState GetProposalState() const { return m_proposalState; }
    inline bool ProposalStateHasBeenSet() const { return m_proposalStateHasBeenSet; }
    inline void SetProposalState(DirectConnectGatewayAssociationProposalState value) { m_proposalStateHasBeenSet = true; m_proposalState = value; }
    inline DirectConnectGatewayAssociationProposal& WithProposalState(DirectConnectGatewayAssociationProposalState value) { SetProposalState(value); return *this;}
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
    DirectConnectGatewayAssociationProposal& WithAssociatedGateway(AssociatedGatewayT&& value) { SetAssociatedGateway(std::forward<AssociatedGatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The existing Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetExistingAllowedPrefixesToDirectConnectGateway() const { return m_existingAllowedPrefixesToDirectConnectGateway; }
    inline bool ExistingAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet; }
    template<typename ExistingAllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    void SetExistingAllowedPrefixesToDirectConnectGateway(ExistingAllowedPrefixesToDirectConnectGatewayT&& value) { m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_existingAllowedPrefixesToDirectConnectGateway = std::forward<ExistingAllowedPrefixesToDirectConnectGatewayT>(value); }
    template<typename ExistingAllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    DirectConnectGatewayAssociationProposal& WithExistingAllowedPrefixesToDirectConnectGateway(ExistingAllowedPrefixesToDirectConnectGatewayT&& value) { SetExistingAllowedPrefixesToDirectConnectGateway(std::forward<ExistingAllowedPrefixesToDirectConnectGatewayT>(value)); return *this;}
    template<typename ExistingAllowedPrefixesToDirectConnectGatewayT = RouteFilterPrefix>
    DirectConnectGatewayAssociationProposal& AddExistingAllowedPrefixesToDirectConnectGateway(ExistingAllowedPrefixesToDirectConnectGatewayT&& value) { m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_existingAllowedPrefixesToDirectConnectGateway.emplace_back(std::forward<ExistingAllowedPrefixesToDirectConnectGatewayT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetRequestedAllowedPrefixesToDirectConnectGateway() const { return m_requestedAllowedPrefixesToDirectConnectGateway; }
    inline bool RequestedAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet; }
    template<typename RequestedAllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    void SetRequestedAllowedPrefixesToDirectConnectGateway(RequestedAllowedPrefixesToDirectConnectGatewayT&& value) { m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_requestedAllowedPrefixesToDirectConnectGateway = std::forward<RequestedAllowedPrefixesToDirectConnectGatewayT>(value); }
    template<typename RequestedAllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    DirectConnectGatewayAssociationProposal& WithRequestedAllowedPrefixesToDirectConnectGateway(RequestedAllowedPrefixesToDirectConnectGatewayT&& value) { SetRequestedAllowedPrefixesToDirectConnectGateway(std::forward<RequestedAllowedPrefixesToDirectConnectGatewayT>(value)); return *this;}
    template<typename RequestedAllowedPrefixesToDirectConnectGatewayT = RouteFilterPrefix>
    DirectConnectGatewayAssociationProposal& AddRequestedAllowedPrefixesToDirectConnectGateway(RequestedAllowedPrefixesToDirectConnectGatewayT&& value) { m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_requestedAllowedPrefixesToDirectConnectGateway.emplace_back(std::forward<RequestedAllowedPrefixesToDirectConnectGatewayT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet = false;

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    Aws::String m_directConnectGatewayOwnerAccount;
    bool m_directConnectGatewayOwnerAccountHasBeenSet = false;

    DirectConnectGatewayAssociationProposalState m_proposalState{DirectConnectGatewayAssociationProposalState::NOT_SET};
    bool m_proposalStateHasBeenSet = false;

    AssociatedGateway m_associatedGateway;
    bool m_associatedGatewayHasBeenSet = false;

    Aws::Vector<RouteFilterPrefix> m_existingAllowedPrefixesToDirectConnectGateway;
    bool m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = false;

    Aws::Vector<RouteFilterPrefix> m_requestedAllowedPrefixesToDirectConnectGateway;
    bool m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
