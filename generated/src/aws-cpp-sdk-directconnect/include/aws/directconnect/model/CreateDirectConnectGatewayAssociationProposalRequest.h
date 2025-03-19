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
  class CreateDirectConnectGatewayAssociationProposalRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationProposalRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDirectConnectGatewayAssociationProposal"; }

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
    CreateDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { SetDirectConnectGatewayId(std::forward<DirectConnectGatewayIdT>(value)); return *this;}
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
    CreateDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayOwnerAccount(DirectConnectGatewayOwnerAccountT&& value) { SetDirectConnectGatewayOwnerAccount(std::forward<DirectConnectGatewayOwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    CreateDirectConnectGatewayAssociationProposalRequest& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetAddAllowedPrefixesToDirectConnectGateway() const { return m_addAllowedPrefixesToDirectConnectGateway; }
    inline bool AddAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet; }
    template<typename AddAllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    void SetAddAllowedPrefixesToDirectConnectGateway(AddAllowedPrefixesToDirectConnectGatewayT&& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway = std::forward<AddAllowedPrefixesToDirectConnectGatewayT>(value); }
    template<typename AddAllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    CreateDirectConnectGatewayAssociationProposalRequest& WithAddAllowedPrefixesToDirectConnectGateway(AddAllowedPrefixesToDirectConnectGatewayT&& value) { SetAddAllowedPrefixesToDirectConnectGateway(std::forward<AddAllowedPrefixesToDirectConnectGatewayT>(value)); return *this;}
    template<typename AddAllowedPrefixesToDirectConnectGatewayT = RouteFilterPrefix>
    CreateDirectConnectGatewayAssociationProposalRequest& AddAddAllowedPrefixesToDirectConnectGateway(AddAllowedPrefixesToDirectConnectGatewayT&& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway.emplace_back(std::forward<AddAllowedPrefixesToDirectConnectGatewayT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon VPC prefixes to no longer advertise to the Direct Connect
     * gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetRemoveAllowedPrefixesToDirectConnectGateway() const { return m_removeAllowedPrefixesToDirectConnectGateway; }
    inline bool RemoveAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet; }
    template<typename RemoveAllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    void SetRemoveAllowedPrefixesToDirectConnectGateway(RemoveAllowedPrefixesToDirectConnectGatewayT&& value) { m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_removeAllowedPrefixesToDirectConnectGateway = std::forward<RemoveAllowedPrefixesToDirectConnectGatewayT>(value); }
    template<typename RemoveAllowedPrefixesToDirectConnectGatewayT = Aws::Vector<RouteFilterPrefix>>
    CreateDirectConnectGatewayAssociationProposalRequest& WithRemoveAllowedPrefixesToDirectConnectGateway(RemoveAllowedPrefixesToDirectConnectGatewayT&& value) { SetRemoveAllowedPrefixesToDirectConnectGateway(std::forward<RemoveAllowedPrefixesToDirectConnectGatewayT>(value)); return *this;}
    template<typename RemoveAllowedPrefixesToDirectConnectGatewayT = RouteFilterPrefix>
    CreateDirectConnectGatewayAssociationProposalRequest& AddRemoveAllowedPrefixesToDirectConnectGateway(RemoveAllowedPrefixesToDirectConnectGatewayT&& value) { m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_removeAllowedPrefixesToDirectConnectGateway.emplace_back(std::forward<RemoveAllowedPrefixesToDirectConnectGatewayT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    Aws::String m_directConnectGatewayOwnerAccount;
    bool m_directConnectGatewayOwnerAccountHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::Vector<RouteFilterPrefix> m_addAllowedPrefixesToDirectConnectGateway;
    bool m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = false;

    Aws::Vector<RouteFilterPrefix> m_removeAllowedPrefixesToDirectConnectGateway;
    bool m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
