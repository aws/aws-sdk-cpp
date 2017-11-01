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
#include <aws/directconnect/model/DirectConnectGatewayAttachmentState.h>
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
   * <p>The association between a direct connect gateway and virtual
   * interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DirectConnectGatewayAttachment">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DirectConnectGatewayAttachment
  {
  public:
    DirectConnectGatewayAttachment();
    DirectConnectGatewayAttachment(const Aws::Utils::Json::JsonValue& jsonValue);
    DirectConnectGatewayAttachment& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }

    
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }

    
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }

    
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }

    
    inline DirectConnectGatewayAttachment& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    
    inline DirectConnectGatewayAttachment& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    
    inline DirectConnectGatewayAttachment& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::move(value); }

    
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }

    
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}

    
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}


    
    inline const Aws::String& GetVirtualInterfaceRegion() const{ return m_virtualInterfaceRegion; }

    
    inline void SetVirtualInterfaceRegion(const Aws::String& value) { m_virtualInterfaceRegionHasBeenSet = true; m_virtualInterfaceRegion = value; }

    
    inline void SetVirtualInterfaceRegion(Aws::String&& value) { m_virtualInterfaceRegionHasBeenSet = true; m_virtualInterfaceRegion = std::move(value); }

    
    inline void SetVirtualInterfaceRegion(const char* value) { m_virtualInterfaceRegionHasBeenSet = true; m_virtualInterfaceRegion.assign(value); }

    
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceRegion(const Aws::String& value) { SetVirtualInterfaceRegion(value); return *this;}

    
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceRegion(Aws::String&& value) { SetVirtualInterfaceRegion(std::move(value)); return *this;}

    
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceRegion(const char* value) { SetVirtualInterfaceRegion(value); return *this;}


    /**
     * <p>The AWS account ID of the owner of the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceOwnerAccount() const{ return m_virtualInterfaceOwnerAccount; }

    /**
     * <p>The AWS account ID of the owner of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceOwnerAccount(const Aws::String& value) { m_virtualInterfaceOwnerAccountHasBeenSet = true; m_virtualInterfaceOwnerAccount = value; }

    /**
     * <p>The AWS account ID of the owner of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceOwnerAccount(Aws::String&& value) { m_virtualInterfaceOwnerAccountHasBeenSet = true; m_virtualInterfaceOwnerAccount = std::move(value); }

    /**
     * <p>The AWS account ID of the owner of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceOwnerAccount(const char* value) { m_virtualInterfaceOwnerAccountHasBeenSet = true; m_virtualInterfaceOwnerAccount.assign(value); }

    /**
     * <p>The AWS account ID of the owner of the virtual interface.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceOwnerAccount(const Aws::String& value) { SetVirtualInterfaceOwnerAccount(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the virtual interface.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceOwnerAccount(Aws::String&& value) { SetVirtualInterfaceOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the owner of the virtual interface.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceOwnerAccount(const char* value) { SetVirtualInterfaceOwnerAccount(value); return *this;}


    
    inline const DirectConnectGatewayAttachmentState& GetAttachmentState() const{ return m_attachmentState; }

    
    inline void SetAttachmentState(const DirectConnectGatewayAttachmentState& value) { m_attachmentStateHasBeenSet = true; m_attachmentState = value; }

    
    inline void SetAttachmentState(DirectConnectGatewayAttachmentState&& value) { m_attachmentStateHasBeenSet = true; m_attachmentState = std::move(value); }

    
    inline DirectConnectGatewayAttachment& WithAttachmentState(const DirectConnectGatewayAttachmentState& value) { SetAttachmentState(value); return *this;}

    
    inline DirectConnectGatewayAttachment& WithAttachmentState(DirectConnectGatewayAttachmentState&& value) { SetAttachmentState(std::move(value)); return *this;}


    
    inline const Aws::String& GetStateChangeError() const{ return m_stateChangeError; }

    
    inline void SetStateChangeError(const Aws::String& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = value; }

    
    inline void SetStateChangeError(Aws::String&& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = std::move(value); }

    
    inline void SetStateChangeError(const char* value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError.assign(value); }

    
    inline DirectConnectGatewayAttachment& WithStateChangeError(const Aws::String& value) { SetStateChangeError(value); return *this;}

    
    inline DirectConnectGatewayAttachment& WithStateChangeError(Aws::String&& value) { SetStateChangeError(std::move(value)); return *this;}

    
    inline DirectConnectGatewayAttachment& WithStateChangeError(const char* value) { SetStateChangeError(value); return *this;}

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet;

    Aws::String m_virtualInterfaceRegion;
    bool m_virtualInterfaceRegionHasBeenSet;

    Aws::String m_virtualInterfaceOwnerAccount;
    bool m_virtualInterfaceOwnerAccountHasBeenSet;

    DirectConnectGatewayAttachmentState m_attachmentState;
    bool m_attachmentStateHasBeenSet;

    Aws::String m_stateChangeError;
    bool m_stateChangeErrorHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
