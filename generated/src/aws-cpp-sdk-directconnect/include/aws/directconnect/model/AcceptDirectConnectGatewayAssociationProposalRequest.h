/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AcceptDirectConnectGatewayAssociationProposalRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API AcceptDirectConnectGatewayAssociationProposalRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptDirectConnectGatewayAssociationProposal"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const { return m_directConnectGatewayId; }
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }
    template<typename DirectConnectGatewayIdT = Aws::String>
    void SetDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::forward<DirectConnectGatewayIdT>(value); }
    template<typename DirectConnectGatewayIdT = Aws::String>
    AcceptDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { SetDirectConnectGatewayId(std::forward<DirectConnectGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the request proposal.</p>
     */
    inline const Aws::String& GetProposalId() const { return m_proposalId; }
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }
    template<typename ProposalIdT = Aws::String>
    void SetProposalId(ProposalIdT&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::forward<ProposalIdT>(value); }
    template<typename ProposalIdT = Aws::String>
    AcceptDirectConnectGatewayAssociationProposalRequest& WithProposalId(ProposalIdT&& value) { SetProposalId(std::forward<ProposalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the virtual private
     * gateway or transit gateway.</p>
     */
    inline const Aws::String& GetAssociatedGatewayOwnerAccount() const { return m_associatedGatewayOwnerAccount; }
    inline bool AssociatedGatewayOwnerAccountHasBeenSet() const { return m_associatedGatewayOwnerAccountHasBeenSet; }
    template<typename AssociatedGatewayOwnerAccountT = Aws::String>
    void SetAssociatedGatewayOwnerAccount(AssociatedGatewayOwnerAccountT&& value) { m_associatedGatewayOwnerAccountHasBeenSet = true; m_associatedGatewayOwnerAccount = std::forward<AssociatedGatewayOwnerAccountT>(value); }
    template<typename AssociatedGatewayOwnerAccountT = Aws::String>
    AcceptDirectConnectGatewayAssociationProposalRequest& WithAssociatedGatewayOwnerAccount(AssociatedGatewayOwnerAccountT&& value) { SetAssociatedGatewayOwnerAccount(std::forward<AssociatedGatewayOwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p> <p>For information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>Direct Connect User Guide</i>.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetOverrideAllowedPrefixesToDirectConnectGateway() const { return m_overrideAllowedPrefixesToDirectConnectGateway; }
    inline bool OverrideAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet; }
    template<typename OverrideAllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    void SetOverrideAllowedPrefixesToDirectConnectGateway(OverrideAllowedPrefixesToDirectConnectGatewayT&& value) { m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_overrideAllowedPrefixesToDirectConnectGateway = std::forward<OverrideAllowedPrefixesToDirectConnectGatewayT>(value); }
    template<typename OverrideAllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    AcceptDirectConnectGatewayAssociationProposalRequest& WithOverrideAllowedPrefixesToDirectConnectGateway(OverrideAllowedPrefixesToDirectConnectGatewayT&& value) { SetOverrideAllowedPrefixesToDirectConnectGateway(std::forward<OverrideAllowedPrefixesToDirectConnectGatewayT>(value)); return *this;}
    template<typename OverrideAllowedPrefixesToDirectConnectGatewayT = RouteFilterPrefix>
    AcceptDirectConnectGatewayAssociationProposalRequest& AddOverrideAllowedPrefixesToDirectConnectGateway(OverrideAllowedPrefixesToDirectConnectGatewayT&& value) { m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_overrideAllowedPrefixesToDirectConnectGateway.emplace_back(std::forward<OverrideAllowedPrefixesToDirectConnectGatewayT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet = false;

    Aws::String m_associatedGatewayOwnerAccount;
    bool m_associatedGatewayOwnerAccountHasBeenSet = false;

    Aws::Vector<RouteFilterPrefix> m_overrideAllowedPrefixesToDirectConnectGateway;
    bool m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
