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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>The association between a direct connect gateway and virtual private
   * gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DirectConnectGatewayAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DirectConnectGatewayAssociation
  {
  public:
    DirectConnectGatewayAssociation();
    DirectConnectGatewayAssociation(const Aws::Utils::Json::JsonValue& jsonValue);
    DirectConnectGatewayAssociation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }

    
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }

    
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }

    
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }

    
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    
    inline DirectConnectGatewayAssociation& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::move(value); }

    
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }

    
    inline DirectConnectGatewayAssociation& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    
    inline DirectConnectGatewayAssociation& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}

    
    inline DirectConnectGatewayAssociation& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}


    
    inline const Aws::String& GetVirtualGatewayRegion() const{ return m_virtualGatewayRegion; }

    
    inline void SetVirtualGatewayRegion(const Aws::String& value) { m_virtualGatewayRegionHasBeenSet = true; m_virtualGatewayRegion = value; }

    
    inline void SetVirtualGatewayRegion(Aws::String&& value) { m_virtualGatewayRegionHasBeenSet = true; m_virtualGatewayRegion = std::move(value); }

    
    inline void SetVirtualGatewayRegion(const char* value) { m_virtualGatewayRegionHasBeenSet = true; m_virtualGatewayRegion.assign(value); }

    
    inline DirectConnectGatewayAssociation& WithVirtualGatewayRegion(const Aws::String& value) { SetVirtualGatewayRegion(value); return *this;}

    
    inline DirectConnectGatewayAssociation& WithVirtualGatewayRegion(Aws::String&& value) { SetVirtualGatewayRegion(std::move(value)); return *this;}

    
    inline DirectConnectGatewayAssociation& WithVirtualGatewayRegion(const char* value) { SetVirtualGatewayRegion(value); return *this;}


    /**
     * <p>The AWS account ID of the owner of the virtual private gateway.</p>
     */
    inline const Aws::String& GetVirtualGatewayOwnerAccount() const{ return m_virtualGatewayOwnerAccount; }

    /**
     * <p>The AWS account ID of the owner of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayOwnerAccount(const Aws::String& value) { m_virtualGatewayOwnerAccountHasBeenSet = true; m_virtualGatewayOwnerAccount = value; }

    /**
     * <p>The AWS account ID of the owner of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayOwnerAccount(Aws::String&& value) { m_virtualGatewayOwnerAccountHasBeenSet = true; m_virtualGatewayOwnerAccount = std::move(value); }

    /**
     * <p>The AWS account ID of the owner of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayOwnerAccount(const char* value) { m_virtualGatewayOwnerAccountHasBeenSet = true; m_virtualGatewayOwnerAccount.assign(value); }

    /**
     * <p>The AWS account ID of the owner of the virtual private gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayOwnerAccount(const Aws::String& value) { SetVirtualGatewayOwnerAccount(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the virtual private gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayOwnerAccount(Aws::String&& value) { SetVirtualGatewayOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the owner of the virtual private gateway.</p>
     */
    inline DirectConnectGatewayAssociation& WithVirtualGatewayOwnerAccount(const char* value) { SetVirtualGatewayOwnerAccount(value); return *this;}


    
    inline const DirectConnectGatewayAssociationState& GetAssociationState() const{ return m_associationState; }

    
    inline void SetAssociationState(const DirectConnectGatewayAssociationState& value) { m_associationStateHasBeenSet = true; m_associationState = value; }

    
    inline void SetAssociationState(DirectConnectGatewayAssociationState&& value) { m_associationStateHasBeenSet = true; m_associationState = std::move(value); }

    
    inline DirectConnectGatewayAssociation& WithAssociationState(const DirectConnectGatewayAssociationState& value) { SetAssociationState(value); return *this;}

    
    inline DirectConnectGatewayAssociation& WithAssociationState(DirectConnectGatewayAssociationState&& value) { SetAssociationState(std::move(value)); return *this;}


    
    inline const Aws::String& GetStateChangeError() const{ return m_stateChangeError; }

    
    inline void SetStateChangeError(const Aws::String& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = value; }

    
    inline void SetStateChangeError(Aws::String&& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = std::move(value); }

    
    inline void SetStateChangeError(const char* value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError.assign(value); }

    
    inline DirectConnectGatewayAssociation& WithStateChangeError(const Aws::String& value) { SetStateChangeError(value); return *this;}

    
    inline DirectConnectGatewayAssociation& WithStateChangeError(Aws::String&& value) { SetStateChangeError(std::move(value)); return *this;}

    
    inline DirectConnectGatewayAssociation& WithStateChangeError(const char* value) { SetStateChangeError(value); return *this;}

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet;

    Aws::String m_virtualGatewayRegion;
    bool m_virtualGatewayRegionHasBeenSet;

    Aws::String m_virtualGatewayOwnerAccount;
    bool m_virtualGatewayOwnerAccountHasBeenSet;

    DirectConnectGatewayAssociationState m_associationState;
    bool m_associationStateHasBeenSet;

    Aws::String m_stateChangeError;
    bool m_stateChangeErrorHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
