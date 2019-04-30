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
  class AWS_DIRECTCONNECT_API DirectConnectGatewayAssociationProposal
  {
  public:
    DirectConnectGatewayAssociationProposal();
    DirectConnectGatewayAssociationProposal(Aws::Utils::Json::JsonView jsonValue);
    DirectConnectGatewayAssociationProposal& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the association proposal.</p>
     */
    inline const Aws::String& GetProposalId() const{ return m_proposalId; }

    /**
     * <p>The ID of the association proposal.</p>
     */
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }

    /**
     * <p>The ID of the association proposal.</p>
     */
    inline void SetProposalId(const Aws::String& value) { m_proposalIdHasBeenSet = true; m_proposalId = value; }

    /**
     * <p>The ID of the association proposal.</p>
     */
    inline void SetProposalId(Aws::String&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::move(value); }

    /**
     * <p>The ID of the association proposal.</p>
     */
    inline void SetProposalId(const char* value) { m_proposalIdHasBeenSet = true; m_proposalId.assign(value); }

    /**
     * <p>The ID of the association proposal.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}

    /**
     * <p>The ID of the association proposal.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association proposal.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithProposalId(const char* value) { SetProposalId(value); return *this;}


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
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayOwnerAccount() const{ return m_directConnectGatewayOwnerAccount; }

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline bool DirectConnectGatewayOwnerAccountHasBeenSet() const { return m_directConnectGatewayOwnerAccountHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayOwnerAccount(const Aws::String& value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount = value; }

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayOwnerAccount(Aws::String&& value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayOwnerAccount(const char* value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayOwnerAccount(const Aws::String& value) { SetDirectConnectGatewayOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayOwnerAccount(Aws::String&& value) { SetDirectConnectGatewayOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithDirectConnectGatewayOwnerAccount(const char* value) { SetDirectConnectGatewayOwnerAccount(value); return *this;}


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
    inline bool ProposalStateHasBeenSet() const { return m_proposalStateHasBeenSet; }

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
    inline void SetProposalState(const DirectConnectGatewayAssociationProposalState& value) { m_proposalStateHasBeenSet = true; m_proposalState = value; }

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
    inline void SetProposalState(DirectConnectGatewayAssociationProposalState&& value) { m_proposalStateHasBeenSet = true; m_proposalState = std::move(value); }

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
    inline DirectConnectGatewayAssociationProposal& WithProposalState(const DirectConnectGatewayAssociationProposalState& value) { SetProposalState(value); return *this;}

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
    inline DirectConnectGatewayAssociationProposal& WithProposalState(DirectConnectGatewayAssociationProposalState&& value) { SetProposalState(std::move(value)); return *this;}


    /**
     * <p>Information about the associated gateway.</p>
     */
    inline const AssociatedGateway& GetAssociatedGateway() const{ return m_associatedGateway; }

    /**
     * <p>Information about the associated gateway.</p>
     */
    inline bool AssociatedGatewayHasBeenSet() const { return m_associatedGatewayHasBeenSet; }

    /**
     * <p>Information about the associated gateway.</p>
     */
    inline void SetAssociatedGateway(const AssociatedGateway& value) { m_associatedGatewayHasBeenSet = true; m_associatedGateway = value; }

    /**
     * <p>Information about the associated gateway.</p>
     */
    inline void SetAssociatedGateway(AssociatedGateway&& value) { m_associatedGatewayHasBeenSet = true; m_associatedGateway = std::move(value); }

    /**
     * <p>Information about the associated gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithAssociatedGateway(const AssociatedGateway& value) { SetAssociatedGateway(value); return *this;}

    /**
     * <p>Information about the associated gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithAssociatedGateway(AssociatedGateway&& value) { SetAssociatedGateway(std::move(value)); return *this;}


    /**
     * <p>The existing Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetExistingAllowedPrefixesToDirectConnectGateway() const{ return m_existingAllowedPrefixesToDirectConnectGateway; }

    /**
     * <p>The existing Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p>
     */
    inline bool ExistingAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet; }

    /**
     * <p>The existing Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p>
     */
    inline void SetExistingAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_existingAllowedPrefixesToDirectConnectGateway = value; }

    /**
     * <p>The existing Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p>
     */
    inline void SetExistingAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_existingAllowedPrefixesToDirectConnectGateway = std::move(value); }

    /**
     * <p>The existing Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithExistingAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetExistingAllowedPrefixesToDirectConnectGateway(value); return *this;}

    /**
     * <p>The existing Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithExistingAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetExistingAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}

    /**
     * <p>The existing Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& AddExistingAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_existingAllowedPrefixesToDirectConnectGateway.push_back(value); return *this; }

    /**
     * <p>The existing Amazon VPC prefixes advertised to the Direct Connect
     * gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& AddExistingAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_existingAllowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetRequestedAllowedPrefixesToDirectConnectGateway() const{ return m_requestedAllowedPrefixesToDirectConnectGateway; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline bool RequestedAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline void SetRequestedAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_requestedAllowedPrefixesToDirectConnectGateway = value; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline void SetRequestedAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_requestedAllowedPrefixesToDirectConnectGateway = std::move(value); }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithRequestedAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetRequestedAllowedPrefixesToDirectConnectGateway(value); return *this;}

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& WithRequestedAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetRequestedAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& AddRequestedAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_requestedAllowedPrefixesToDirectConnectGateway.push_back(value); return *this; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociationProposal& AddRequestedAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_requestedAllowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet;

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    Aws::String m_directConnectGatewayOwnerAccount;
    bool m_directConnectGatewayOwnerAccountHasBeenSet;

    DirectConnectGatewayAssociationProposalState m_proposalState;
    bool m_proposalStateHasBeenSet;

    AssociatedGateway m_associatedGateway;
    bool m_associatedGatewayHasBeenSet;

    Aws::Vector<RouteFilterPrefix> m_existingAllowedPrefixesToDirectConnectGateway;
    bool m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet;

    Aws::Vector<RouteFilterPrefix> m_requestedAllowedPrefixesToDirectConnectGateway;
    bool m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
