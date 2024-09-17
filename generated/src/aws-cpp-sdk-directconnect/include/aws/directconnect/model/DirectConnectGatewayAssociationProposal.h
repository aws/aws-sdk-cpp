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
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociationProposal();
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociationProposal(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API DirectConnectGatewayAssociationProposal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the association proposal.</p>
     */
    inline const Aws::String& GetProposalId() const{ return m_proposalId; }
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }
    inline void SetProposalId(const Aws::String& value) { m_proposalIdHasBeenSet = true; m_proposalId = value; }
    inline void SetProposalId(Aws::String&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::move(value); }
    inline void SetProposalId(const char* value) { m_proposalIdHasBeenSet = true; m_proposalId.assign(value); }
    inline DirectConnectGatewayAssociationProposal& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}
    inline DirectConnectGatewayAssociationProposal& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociationProposal& WithProposalId(const char* value) { SetProposalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the Direct Connect
     * gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayOwnerAccount() const{ return m_directConnectGatewayOwnerAccount; }
    inline bool DirectConnectGatewayOwnerAccountHasBeenSet() const { return m_directConnectGatewayOwnerAccountHasBeenSet; }
    inline void SetDirectConnectGatewayOwnerAccount(const Aws::String& value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount = value; }
    inline void SetDirectConnectGatewayOwnerAccount(Aws::String&& value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount = std::move(value); }
    inline void SetDirectConnectGatewayOwnerAccount(const char* value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount.assign(value); }
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayOwnerAccount(const Aws::String& value) { SetDirectConnectGatewayOwnerAccount(value); return *this;}
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayOwnerAccount(Aws::String&& value) { SetDirectConnectGatewayOwnerAccount(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayOwnerAccount(const char* value) { SetDirectConnectGatewayOwnerAccount(value); return *this;}
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
    inline const DirectConnectGatewayAssociationProposalState& GetProposalState() const{ return m_proposalState; }
    inline bool ProposalStateHasBeenSet() const { return m_proposalStateHasBeenSet; }
    inline void SetProposalState(const DirectConnectGatewayAssociationProposalState& value) { m_proposalStateHasBeenSet = true; m_proposalState = value; }
    inline void SetProposalState(DirectConnectGatewayAssociationProposalState&& value) { m_proposalStateHasBeenSet = true; m_proposalState = std::move(value); }
    inline DirectConnectGatewayAssociationProposal& WithProposalState(const DirectConnectGatewayAssociationProposalState& value) { SetProposalState(value); return *this;}
    inline DirectConnectGatewayAssociationProposal& WithProposalState(DirectConnectGatewayAssociationProposalState&& value) { SetProposalState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the associated gateway.</p>
     */
    inline const AssociatedGateway& GetAssociatedGateway() const{ return m_associatedGateway; }
    inline bool AssociatedGatewayHasBeenSet() const { return m_associatedGatewayHasBeenSet; }
    inline void SetAssociatedGateway(const AssociatedGateway& value) { m_associatedGatewayHasBeenSet = true; m_associatedGateway = value; }
    inline void SetAssociatedGateway(AssociatedGateway&& value) { m_associatedGatewayHasBeenSet = true; m_associatedGateway = std::move(value); }
    inline DirectConnectGatewayAssociationProposal& WithAssociatedGateway(const AssociatedGateway& value) { SetAssociatedGateway(value); return *this;}
    inline DirectConnectGatewayAssociationProposal& WithAssociatedGateway(AssociatedGateway&& value) { SetAssociatedGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The existing Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetExistingAllowedPrefixesToDirectConnectGateway() const{ return m_existingAllowedPrefixesToDirectConnectGateway; }
    inline bool ExistingAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet; }
    inline void SetExistingAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_existingAllowedPrefixesToDirectConnectGateway = value; }
    inline void SetExistingAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_existingAllowedPrefixesToDirectConnectGateway = std::move(value); }
    inline DirectConnectGatewayAssociationProposal& WithExistingAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetExistingAllowedPrefixesToDirectConnectGateway(value); return *this;}
    inline DirectConnectGatewayAssociationProposal& WithExistingAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetExistingAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociationProposal& AddExistingAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_existingAllowedPrefixesToDirectConnectGateway.push_back(value); return *this; }
    inline DirectConnectGatewayAssociationProposal& AddExistingAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_existingAllowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetRequestedAllowedPrefixesToDirectConnectGateway() const{ return m_requestedAllowedPrefixesToDirectConnectGateway; }
    inline bool RequestedAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet; }
    inline void SetRequestedAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_requestedAllowedPrefixesToDirectConnectGateway = value; }
    inline void SetRequestedAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_requestedAllowedPrefixesToDirectConnectGateway = std::move(value); }
    inline DirectConnectGatewayAssociationProposal& WithRequestedAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetRequestedAllowedPrefixesToDirectConnectGateway(value); return *this;}
    inline DirectConnectGatewayAssociationProposal& WithRequestedAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetRequestedAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}
    inline DirectConnectGatewayAssociationProposal& AddRequestedAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_requestedAllowedPrefixesToDirectConnectGateway.push_back(value); return *this; }
    inline DirectConnectGatewayAssociationProposal& AddRequestedAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_requestedAllowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet = false;

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    Aws::String m_directConnectGatewayOwnerAccount;
    bool m_directConnectGatewayOwnerAccountHasBeenSet = false;

    DirectConnectGatewayAssociationProposalState m_proposalState;
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
