﻿/**
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
    AWS_DIRECTCONNECT_API AcceptDirectConnectGatewayAssociationProposalRequest();

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
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the request proposal.</p>
     */
    inline const Aws::String& GetProposalId() const{ return m_proposalId; }
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }
    inline void SetProposalId(const Aws::String& value) { m_proposalIdHasBeenSet = true; m_proposalId = value; }
    inline void SetProposalId(Aws::String&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::move(value); }
    inline void SetProposalId(const char* value) { m_proposalIdHasBeenSet = true; m_proposalId.assign(value); }
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithProposalId(const char* value) { SetProposalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the virtual private
     * gateway or transit gateway.</p>
     */
    inline const Aws::String& GetAssociatedGatewayOwnerAccount() const{ return m_associatedGatewayOwnerAccount; }
    inline bool AssociatedGatewayOwnerAccountHasBeenSet() const { return m_associatedGatewayOwnerAccountHasBeenSet; }
    inline void SetAssociatedGatewayOwnerAccount(const Aws::String& value) { m_associatedGatewayOwnerAccountHasBeenSet = true; m_associatedGatewayOwnerAccount = value; }
    inline void SetAssociatedGatewayOwnerAccount(Aws::String&& value) { m_associatedGatewayOwnerAccountHasBeenSet = true; m_associatedGatewayOwnerAccount = std::move(value); }
    inline void SetAssociatedGatewayOwnerAccount(const char* value) { m_associatedGatewayOwnerAccountHasBeenSet = true; m_associatedGatewayOwnerAccount.assign(value); }
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithAssociatedGatewayOwnerAccount(const Aws::String& value) { SetAssociatedGatewayOwnerAccount(value); return *this;}
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithAssociatedGatewayOwnerAccount(Aws::String&& value) { SetAssociatedGatewayOwnerAccount(std::move(value)); return *this;}
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithAssociatedGatewayOwnerAccount(const char* value) { SetAssociatedGatewayOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p> <p>For information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>Direct Connect User Guide</i>.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetOverrideAllowedPrefixesToDirectConnectGateway() const{ return m_overrideAllowedPrefixesToDirectConnectGateway; }
    inline bool OverrideAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet; }
    inline void SetOverrideAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_overrideAllowedPrefixesToDirectConnectGateway = value; }
    inline void SetOverrideAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_overrideAllowedPrefixesToDirectConnectGateway = std::move(value); }
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithOverrideAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetOverrideAllowedPrefixesToDirectConnectGateway(value); return *this;}
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithOverrideAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetOverrideAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}
    inline AcceptDirectConnectGatewayAssociationProposalRequest& AddOverrideAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_overrideAllowedPrefixesToDirectConnectGateway.push_back(value); return *this; }
    inline AcceptDirectConnectGatewayAssociationProposalRequest& AddOverrideAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_overrideAllowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }
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
