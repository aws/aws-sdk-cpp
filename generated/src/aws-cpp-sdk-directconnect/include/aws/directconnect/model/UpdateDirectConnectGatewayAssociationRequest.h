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
  class UpdateDirectConnectGatewayAssociationRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API UpdateDirectConnectGatewayAssociationRequest();

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
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline UpdateDirectConnectGatewayAssociationRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline UpdateDirectConnectGatewayAssociationRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline UpdateDirectConnectGatewayAssociationRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetAddAllowedPrefixesToDirectConnectGateway() const{ return m_addAllowedPrefixesToDirectConnectGateway; }
    inline bool AddAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet; }
    inline void SetAddAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway = value; }
    inline void SetAddAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway = std::move(value); }
    inline UpdateDirectConnectGatewayAssociationRequest& WithAddAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetAddAllowedPrefixesToDirectConnectGateway(value); return *this;}
    inline UpdateDirectConnectGatewayAssociationRequest& WithAddAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetAddAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}
    inline UpdateDirectConnectGatewayAssociationRequest& AddAddAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway.push_back(value); return *this; }
    inline UpdateDirectConnectGatewayAssociationRequest& AddAddAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon VPC prefixes to no longer advertise to the Direct Connect
     * gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetRemoveAllowedPrefixesToDirectConnectGateway() const{ return m_removeAllowedPrefixesToDirectConnectGateway; }
    inline bool RemoveAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet; }
    inline void SetRemoveAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_removeAllowedPrefixesToDirectConnectGateway = value; }
    inline void SetRemoveAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_removeAllowedPrefixesToDirectConnectGateway = std::move(value); }
    inline UpdateDirectConnectGatewayAssociationRequest& WithRemoveAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetRemoveAllowedPrefixesToDirectConnectGateway(value); return *this;}
    inline UpdateDirectConnectGatewayAssociationRequest& WithRemoveAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetRemoveAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}
    inline UpdateDirectConnectGatewayAssociationRequest& AddRemoveAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_removeAllowedPrefixesToDirectConnectGateway.push_back(value); return *this; }
    inline UpdateDirectConnectGatewayAssociationRequest& AddRemoveAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_removeAllowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }
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
