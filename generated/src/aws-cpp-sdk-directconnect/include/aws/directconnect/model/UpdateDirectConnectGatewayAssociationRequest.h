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
  class UpdateDirectConnectGatewayAssociationRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API UpdateDirectConnectGatewayAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDirectConnectGatewayAssociation"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    UpdateDirectConnectGatewayAssociationRequest& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
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
    UpdateDirectConnectGatewayAssociationRequest& WithAddAllowedPrefixesToDirectConnectGateway(AddAllowedPrefixesToDirectConnectGatewayT&& value) { SetAddAllowedPrefixesToDirectConnectGateway(std::forward<AddAllowedPrefixesToDirectConnectGatewayT>(value)); return *this;}
    template<typename AddAllowedPrefixesToDirectConnectGatewayT = RouteFilterPrefix>
    UpdateDirectConnectGatewayAssociationRequest& AddAddAllowedPrefixesToDirectConnectGateway(AddAllowedPrefixesToDirectConnectGatewayT&& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway.emplace_back(std::forward<AddAllowedPrefixesToDirectConnectGatewayT>(value)); return *this; }
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
    UpdateDirectConnectGatewayAssociationRequest& WithRemoveAllowedPrefixesToDirectConnectGateway(RemoveAllowedPrefixesToDirectConnectGatewayT&& value) { SetRemoveAllowedPrefixesToDirectConnectGateway(std::forward<RemoveAllowedPrefixesToDirectConnectGatewayT>(value)); return *this;}
    template<typename RemoveAllowedPrefixesToDirectConnectGatewayT = RouteFilterPrefix>
    UpdateDirectConnectGatewayAssociationRequest& AddRemoveAllowedPrefixesToDirectConnectGateway(RemoveAllowedPrefixesToDirectConnectGatewayT&& value) { m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_removeAllowedPrefixesToDirectConnectGateway.emplace_back(std::forward<RemoveAllowedPrefixesToDirectConnectGatewayT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::Vector<RouteFilterPrefix> m_addAllowedPrefixesToDirectConnectGateway;
    bool m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = false;

    Aws::Vector<RouteFilterPrefix> m_removeAllowedPrefixesToDirectConnectGateway;
    bool m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
