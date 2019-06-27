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
  class AWS_DIRECTCONNECT_API AcceptDirectConnectGatewayAssociationProposalRequest : public DirectConnectRequest
  {
  public:
    AcceptDirectConnectGatewayAssociationProposalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptDirectConnectGatewayAssociationProposal"; }

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
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    /**
     * <p>The ID of the request proposal.</p>
     */
    inline const Aws::String& GetProposalId() const{ return m_proposalId; }

    /**
     * <p>The ID of the request proposal.</p>
     */
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }

    /**
     * <p>The ID of the request proposal.</p>
     */
    inline void SetProposalId(const Aws::String& value) { m_proposalIdHasBeenSet = true; m_proposalId = value; }

    /**
     * <p>The ID of the request proposal.</p>
     */
    inline void SetProposalId(Aws::String&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::move(value); }

    /**
     * <p>The ID of the request proposal.</p>
     */
    inline void SetProposalId(const char* value) { m_proposalIdHasBeenSet = true; m_proposalId.assign(value); }

    /**
     * <p>The ID of the request proposal.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}

    /**
     * <p>The ID of the request proposal.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the request proposal.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithProposalId(const char* value) { SetProposalId(value); return *this;}


    /**
     * <p>The ID of the AWS account that owns the virtual private gateway or transit
     * gateway.</p>
     */
    inline const Aws::String& GetAssociatedGatewayOwnerAccount() const{ return m_associatedGatewayOwnerAccount; }

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway or transit
     * gateway.</p>
     */
    inline bool AssociatedGatewayOwnerAccountHasBeenSet() const { return m_associatedGatewayOwnerAccountHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway or transit
     * gateway.</p>
     */
    inline void SetAssociatedGatewayOwnerAccount(const Aws::String& value) { m_associatedGatewayOwnerAccountHasBeenSet = true; m_associatedGatewayOwnerAccount = value; }

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway or transit
     * gateway.</p>
     */
    inline void SetAssociatedGatewayOwnerAccount(Aws::String&& value) { m_associatedGatewayOwnerAccountHasBeenSet = true; m_associatedGatewayOwnerAccount = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway or transit
     * gateway.</p>
     */
    inline void SetAssociatedGatewayOwnerAccount(const char* value) { m_associatedGatewayOwnerAccountHasBeenSet = true; m_associatedGatewayOwnerAccount.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway or transit
     * gateway.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithAssociatedGatewayOwnerAccount(const Aws::String& value) { SetAssociatedGatewayOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway or transit
     * gateway.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithAssociatedGatewayOwnerAccount(Aws::String&& value) { SetAssociatedGatewayOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway or transit
     * gateway.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithAssociatedGatewayOwnerAccount(const char* value) { SetAssociatedGatewayOwnerAccount(value); return *this;}


    /**
     * <p>Overrides the Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p> <p>For information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetOverrideAllowedPrefixesToDirectConnectGateway() const{ return m_overrideAllowedPrefixesToDirectConnectGateway; }

    /**
     * <p>Overrides the Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p> <p>For information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline bool OverrideAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet; }

    /**
     * <p>Overrides the Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p> <p>For information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline void SetOverrideAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_overrideAllowedPrefixesToDirectConnectGateway = value; }

    /**
     * <p>Overrides the Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p> <p>For information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline void SetOverrideAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_overrideAllowedPrefixesToDirectConnectGateway = std::move(value); }

    /**
     * <p>Overrides the Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p> <p>For information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithOverrideAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetOverrideAllowedPrefixesToDirectConnectGateway(value); return *this;}

    /**
     * <p>Overrides the Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p> <p>For information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& WithOverrideAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetOverrideAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}

    /**
     * <p>Overrides the Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p> <p>For information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& AddOverrideAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_overrideAllowedPrefixesToDirectConnectGateway.push_back(value); return *this; }

    /**
     * <p>Overrides the Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p> <p>For information about how to set the prefixes, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/multi-account-associate-vgw.html#allowed-prefixes">Allowed
     * Prefixes</a> in the <i>AWS Direct Connect User Guide</i>.</p>
     */
    inline AcceptDirectConnectGatewayAssociationProposalRequest& AddOverrideAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_overrideAllowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet;

    Aws::String m_associatedGatewayOwnerAccount;
    bool m_associatedGatewayOwnerAccountHasBeenSet;

    Aws::Vector<RouteFilterPrefix> m_overrideAllowedPrefixesToDirectConnectGateway;
    bool m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
