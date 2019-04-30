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
#include <aws/directconnect/model/DirectConnectGatewayAssociationState.h>
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
   * <p>Information about an association between a Direct Connect gateway and a
   * virtual private gateway or transit gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DirectConnectGatewayAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DirectConnectGatewayAssociation
  {
  public:
    DirectConnectGatewayAssociation();
    DirectConnectGatewayAssociation(Aws::Utils::Json::JsonView jsonValue);
    DirectConnectGatewayAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    /**
     * <p>The ID of the AWS account that owns the associated gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayOwnerAccount() const{ return m_directConnectGatewayOwnerAccount; }

    /**
     * <p>The ID of the AWS account that owns the associated gateway.</p>
     */
    inline bool DirectConnectGatewayOwnerAccountHasBeenSet() const { return m_directConnectGatewayOwnerAccountHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the associated gateway.</p>
     */
    inline void SetDirectConnectGatewayOwnerAccount(const Aws::String& value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount = value; }

    /**
     * <p>The ID of the AWS account that owns the associated gateway.</p>
     */
    inline void SetDirectConnectGatewayOwnerAccount(Aws::String&& value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the associated gateway.</p>
     */
    inline void SetDirectConnectGatewayOwnerAccount(const char* value) { m_directConnectGatewayOwnerAccountHasBeenSet = true; m_directConnectGatewayOwnerAccount.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the associated gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayOwnerAccount(const Aws::String& value) { SetDirectConnectGatewayOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the associated gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayOwnerAccount(Aws::String&& value) { SetDirectConnectGatewayOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the associated gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayOwnerAccount(const char* value) { SetDirectConnectGatewayOwnerAccount(value); return *this;}


    /**
     * <p>The state of the association. The following are the possible values:</p> <ul>
     * <li> <p> <code>associating</code>: The initial state after calling
     * <a>CreateDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>associated</code>: The Direct Connect gateway and virtual private gateway
     * or transit gateway are successfully associated and ready to pass traffic.</p>
     * </li> <li> <p> <code>disassociating</code>: The initial state after calling
     * <a>DeleteDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>disassociated</code>: The virtual private gateway or transit gateway is
     * disassociated from the Direct Connect gateway. Traffic flow between the Direct
     * Connect gateway and virtual private gateway or transit gateway is stopped.</p>
     * </li> </ul>
     */
    inline const DirectConnectGatewayAssociationState& GetAssociationState() const{ return m_associationState; }

    /**
     * <p>The state of the association. The following are the possible values:</p> <ul>
     * <li> <p> <code>associating</code>: The initial state after calling
     * <a>CreateDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>associated</code>: The Direct Connect gateway and virtual private gateway
     * or transit gateway are successfully associated and ready to pass traffic.</p>
     * </li> <li> <p> <code>disassociating</code>: The initial state after calling
     * <a>DeleteDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>disassociated</code>: The virtual private gateway or transit gateway is
     * disassociated from the Direct Connect gateway. Traffic flow between the Direct
     * Connect gateway and virtual private gateway or transit gateway is stopped.</p>
     * </li> </ul>
     */
    inline bool AssociationStateHasBeenSet() const { return m_associationStateHasBeenSet; }

    /**
     * <p>The state of the association. The following are the possible values:</p> <ul>
     * <li> <p> <code>associating</code>: The initial state after calling
     * <a>CreateDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>associated</code>: The Direct Connect gateway and virtual private gateway
     * or transit gateway are successfully associated and ready to pass traffic.</p>
     * </li> <li> <p> <code>disassociating</code>: The initial state after calling
     * <a>DeleteDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>disassociated</code>: The virtual private gateway or transit gateway is
     * disassociated from the Direct Connect gateway. Traffic flow between the Direct
     * Connect gateway and virtual private gateway or transit gateway is stopped.</p>
     * </li> </ul>
     */
    inline void SetAssociationState(const DirectConnectGatewayAssociationState& value) { m_associationStateHasBeenSet = true; m_associationState = value; }

    /**
     * <p>The state of the association. The following are the possible values:</p> <ul>
     * <li> <p> <code>associating</code>: The initial state after calling
     * <a>CreateDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>associated</code>: The Direct Connect gateway and virtual private gateway
     * or transit gateway are successfully associated and ready to pass traffic.</p>
     * </li> <li> <p> <code>disassociating</code>: The initial state after calling
     * <a>DeleteDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>disassociated</code>: The virtual private gateway or transit gateway is
     * disassociated from the Direct Connect gateway. Traffic flow between the Direct
     * Connect gateway and virtual private gateway or transit gateway is stopped.</p>
     * </li> </ul>
     */
    inline void SetAssociationState(DirectConnectGatewayAssociationState&& value) { m_associationStateHasBeenSet = true; m_associationState = std::move(value); }

    /**
     * <p>The state of the association. The following are the possible values:</p> <ul>
     * <li> <p> <code>associating</code>: The initial state after calling
     * <a>CreateDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>associated</code>: The Direct Connect gateway and virtual private gateway
     * or transit gateway are successfully associated and ready to pass traffic.</p>
     * </li> <li> <p> <code>disassociating</code>: The initial state after calling
     * <a>DeleteDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>disassociated</code>: The virtual private gateway or transit gateway is
     * disassociated from the Direct Connect gateway. Traffic flow between the Direct
     * Connect gateway and virtual private gateway or transit gateway is stopped.</p>
     * </li> </ul>
     */
    inline DirectConnectGatewayAssociation& WithAssociationState(const DirectConnectGatewayAssociationState& value) { SetAssociationState(value); return *this;}

    /**
     * <p>The state of the association. The following are the possible values:</p> <ul>
     * <li> <p> <code>associating</code>: The initial state after calling
     * <a>CreateDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>associated</code>: The Direct Connect gateway and virtual private gateway
     * or transit gateway are successfully associated and ready to pass traffic.</p>
     * </li> <li> <p> <code>disassociating</code>: The initial state after calling
     * <a>DeleteDirectConnectGatewayAssociation</a>.</p> </li> <li> <p>
     * <code>disassociated</code>: The virtual private gateway or transit gateway is
     * disassociated from the Direct Connect gateway. Traffic flow between the Direct
     * Connect gateway and virtual private gateway or transit gateway is stopped.</p>
     * </li> </ul>
     */
    inline DirectConnectGatewayAssociation& WithAssociationState(DirectConnectGatewayAssociationState&& value) { SetAssociationState(std::move(value)); return *this;}


    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline const Aws::String& GetStateChangeError() const{ return m_stateChangeError; }

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline bool StateChangeErrorHasBeenSet() const { return m_stateChangeErrorHasBeenSet; }

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline void SetStateChangeError(const Aws::String& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = value; }

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline void SetStateChangeError(Aws::String&& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = std::move(value); }

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline void SetStateChangeError(const char* value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError.assign(value); }

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline DirectConnectGatewayAssociation& WithStateChangeError(const Aws::String& value) { SetStateChangeError(value); return *this;}

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline DirectConnectGatewayAssociation& WithStateChangeError(Aws::String&& value) { SetStateChangeError(std::move(value)); return *this;}

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline DirectConnectGatewayAssociation& WithStateChangeError(const char* value) { SetStateChangeError(value); return *this;}


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
    inline DirectConnectGatewayAssociation& WithAssociatedGateway(const AssociatedGateway& value) { SetAssociatedGateway(value); return *this;}

    /**
     * <p>Information about the associated gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithAssociatedGateway(AssociatedGateway&& value) { SetAssociatedGateway(std::move(value)); return *this;}


    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline DirectConnectGatewayAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline DirectConnectGatewayAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline DirectConnectGatewayAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetAllowedPrefixesToDirectConnectGateway() const{ return m_allowedPrefixesToDirectConnectGateway; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline bool AllowedPrefixesToDirectConnectGatewayHasBeenSet() const { return m_allowedPrefixesToDirectConnectGatewayHasBeenSet; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline void SetAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_allowedPrefixesToDirectConnectGateway = value; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline void SetAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_allowedPrefixesToDirectConnectGateway = std::move(value); }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithAllowedPrefixesToDirectConnectGateway(const Aws::Vector<RouteFilterPrefix>& value) { SetAllowedPrefixesToDirectConnectGateway(value); return *this;}

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithAllowedPrefixesToDirectConnectGateway(Aws::Vector<RouteFilterPrefix>&& value) { SetAllowedPrefixesToDirectConnectGateway(std::move(value)); return *this;}

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociation& AddAllowedPrefixesToDirectConnectGateway(const RouteFilterPrefix& value) { m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_allowedPrefixesToDirectConnectGateway.push_back(value); return *this; }

    /**
     * <p>The Amazon VPC prefixes to advertise to the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAssociation& AddAllowedPrefixesToDirectConnectGateway(RouteFilterPrefix&& value) { m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true; m_allowedPrefixesToDirectConnectGateway.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline bool VirtualGatewayIdHasBeenSet() const { return m_virtualGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}


    /**
     * <p>The AWS Region where the virtual private gateway is located.</p>
     */
    inline const Aws::String& GetVirtualGatewayRegion() const{ return m_virtualGatewayRegion; }

    /**
     * <p>The AWS Region where the virtual private gateway is located.</p>
     */
    inline bool VirtualGatewayRegionHasBeenSet() const { return m_virtualGatewayRegionHasBeenSet; }

    /**
     * <p>The AWS Region where the virtual private gateway is located.</p>
     */
    inline void SetVirtualGatewayRegion(const Aws::String& value) { m_virtualGatewayRegionHasBeenSet = true; m_virtualGatewayRegion = value; }

    /**
     * <p>The AWS Region where the virtual private gateway is located.</p>
     */
    inline void SetVirtualGatewayRegion(Aws::String&& value) { m_virtualGatewayRegionHasBeenSet = true; m_virtualGatewayRegion = std::move(value); }

    /**
     * <p>The AWS Region where the virtual private gateway is located.</p>
     */
    inline void SetVirtualGatewayRegion(const char* value) { m_virtualGatewayRegionHasBeenSet = true; m_virtualGatewayRegion.assign(value); }

    /**
     * <p>The AWS Region where the virtual private gateway is located.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayRegion(const Aws::String& value) { SetVirtualGatewayRegion(value); return *this;}

    /**
     * <p>The AWS Region where the virtual private gateway is located.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayRegion(Aws::String&& value) { SetVirtualGatewayRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region where the virtual private gateway is located.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayRegion(const char* value) { SetVirtualGatewayRegion(value); return *this;}


    /**
     * <p>The ID of the AWS account that owns the virtual private gateway.</p>
     */
    inline const Aws::String& GetVirtualGatewayOwnerAccount() const{ return m_virtualGatewayOwnerAccount; }

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway.</p>
     */
    inline bool VirtualGatewayOwnerAccountHasBeenSet() const { return m_virtualGatewayOwnerAccountHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayOwnerAccount(const Aws::String& value) { m_virtualGatewayOwnerAccountHasBeenSet = true; m_virtualGatewayOwnerAccount = value; }

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayOwnerAccount(Aws::String&& value) { m_virtualGatewayOwnerAccountHasBeenSet = true; m_virtualGatewayOwnerAccount = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayOwnerAccount(const char* value) { m_virtualGatewayOwnerAccountHasBeenSet = true; m_virtualGatewayOwnerAccount.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayOwnerAccount(const Aws::String& value) { SetVirtualGatewayOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayOwnerAccount(Aws::String&& value) { SetVirtualGatewayOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the virtual private gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayOwnerAccount(const char* value) { SetVirtualGatewayOwnerAccount(value); return *this;}

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    Aws::String m_directConnectGatewayOwnerAccount;
    bool m_directConnectGatewayOwnerAccountHasBeenSet;

    DirectConnectGatewayAssociationState m_associationState;
    bool m_associationStateHasBeenSet;

    Aws::String m_stateChangeError;
    bool m_stateChangeErrorHasBeenSet;

    AssociatedGateway m_associatedGateway;
    bool m_associatedGatewayHasBeenSet;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::Vector<RouteFilterPrefix> m_allowedPrefixesToDirectConnectGateway;
    bool m_allowedPrefixesToDirectConnectGatewayHasBeenSet;

    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet;

    Aws::String m_virtualGatewayRegion;
    bool m_virtualGatewayRegionHasBeenSet;

    Aws::String m_virtualGatewayOwnerAccount;
    bool m_virtualGatewayOwnerAccountHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
