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
  class AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationProposalRequest : public DirectConnectRequest
  {
  public:
    CreateDirectConnectGatewayAssociationProposalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDirectConnectGatewayAssociationProposal"; }

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
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


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
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayOwnerAccount(const Aws::String& value) { SetDirectConnectGatewayOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayOwnerAccount(Aws::String&& value) { SetDirectConnectGatewayOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithDirectConnectGatewayOwnerAccount(const char* value) { SetDirectConnectGatewayOwnerAccount(value); return *this;}


    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetAddAllowedPrefixesToDirectConnectGateway() const{ return m_addAllowedPrefixesToDirectConnectGateway; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline bool AddAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline void SetAddAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway = value; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline void SetAddAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway = std::move(value); }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithAddAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetAddAllowedPrefixesToDirectConnectGateway(value); return *this;}

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithAddAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetAddAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& AddAddAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway.push_back(value); return *this; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& AddAddAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_addAllowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon VPC prefixes to no longer advertise to the Direct Connect
     * gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetRemoveAllowedPrefixesToDirectConnectGateway() const{ return m_removeAllowedPrefixesToDirectConnectGateway; }

    /**
     * <p>The Amazon VPC prefixes to no longer advertise to the Direct Connect
     * gateway.</p>
     */
    inline bool RemoveAllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet; }

    /**
     * <p>The Amazon VPC prefixes to no longer advertise to the Direct Connect
     * gateway.</p>
     */
    inline void SetRemoveAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_removeAllowedPrefixesToDirectConnectGateway = value; }

    /**
     * <p>The Amazon VPC prefixes to no longer advertise to the Direct Connect
     * gateway.</p>
     */
    inline void SetRemoveAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_removeAllowedPrefixesToDirectConnectGateway = std::move(value); }

    /**
     * <p>The Amazon VPC prefixes to no longer advertise to the Direct Connect
     * gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithRemoveAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetRemoveAllowedPrefixesToDirectConnectGateway(value); return *this;}

    /**
     * <p>The Amazon VPC prefixes to no longer advertise to the Direct Connect
     * gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& WithRemoveAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetRemoveAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}

    /**
     * <p>The Amazon VPC prefixes to no longer advertise to the Direct Connect
     * gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& AddRemoveAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_removeAllowedPrefixesToDirectConnectGateway.push_back(value); return *this; }

    /**
     * <p>The Amazon VPC prefixes to no longer advertise to the Direct Connect
     * gateway.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalRequest& AddRemoveAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_removeAllowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    Aws::String m_directConnectGatewayOwnerAccount;
    bool m_directConnectGatewayOwnerAccountHasBeenSet;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet;

    Aws::Vector<RouteFilterPrefix> m_addAllowedPrefixesToDirectConnectGateway;
    bool m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet;

    Aws::Vector<RouteFilterPrefix> m_removeAllowedPrefixesToDirectConnectGateway;
    bool m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
