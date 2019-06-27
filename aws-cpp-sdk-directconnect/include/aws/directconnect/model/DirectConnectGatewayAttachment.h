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
#include <aws/directconnect/model/DirectConnectGatewayAttachmentType.h>
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
   * <p>Information about an attachment between a Direct Connect gateway and a
   * virtual interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DirectConnectGatewayAttachment">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DirectConnectGatewayAttachment
  {
  public:
    DirectConnectGatewayAttachment();
    DirectConnectGatewayAttachment(Aws::Utils::Json::JsonView jsonValue);
    DirectConnectGatewayAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline DirectConnectGatewayAttachment& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAttachment& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DirectConnectGatewayAttachment& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::move(value); }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}


    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline const Aws::String& GetVirtualInterfaceRegion() const{ return m_virtualInterfaceRegion; }

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline bool VirtualInterfaceRegionHasBeenSet() const { return m_virtualInterfaceRegionHasBeenSet; }

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline void SetVirtualInterfaceRegion(const Aws::String& value) { m_virtualInterfaceRegionHasBeenSet = true; m_virtualInterfaceRegion = value; }

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline void SetVirtualInterfaceRegion(Aws::String&& value) { m_virtualInterfaceRegionHasBeenSet = true; m_virtualInterfaceRegion = std::move(value); }

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline void SetVirtualInterfaceRegion(const char* value) { m_virtualInterfaceRegionHasBeenSet = true; m_virtualInterfaceRegion.assign(value); }

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceRegion(const Aws::String& value) { SetVirtualInterfaceRegion(value); return *this;}

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceRegion(Aws::String&& value) { SetVirtualInterfaceRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceRegion(const char* value) { SetVirtualInterfaceRegion(value); return *this;}


    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceOwnerAccount() const{ return m_virtualInterfaceOwnerAccount; }

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline bool VirtualInterfaceOwnerAccountHasBeenSet() const { return m_virtualInterfaceOwnerAccountHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline void SetVirtualInterfaceOwnerAccount(const Aws::String& value) { m_virtualInterfaceOwnerAccountHasBeenSet = true; m_virtualInterfaceOwnerAccount = value; }

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline void SetVirtualInterfaceOwnerAccount(Aws::String&& value) { m_virtualInterfaceOwnerAccountHasBeenSet = true; m_virtualInterfaceOwnerAccount = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline void SetVirtualInterfaceOwnerAccount(const char* value) { m_virtualInterfaceOwnerAccountHasBeenSet = true; m_virtualInterfaceOwnerAccount.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceOwnerAccount(const Aws::String& value) { SetVirtualInterfaceOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceOwnerAccount(Aws::String&& value) { SetVirtualInterfaceOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline DirectConnectGatewayAttachment& WithVirtualInterfaceOwnerAccount(const char* value) { SetVirtualInterfaceOwnerAccount(value); return *this;}


    /**
     * <p>The state of the attachment. The following are the possible values:</p> <ul>
     * <li> <p> <code>attaching</code>: The initial state after a virtual interface is
     * created using the Direct Connect gateway.</p> </li> <li> <p>
     * <code>attached</code>: The Direct Connect gateway and virtual interface are
     * attached and ready to pass traffic.</p> </li> <li> <p> <code>detaching</code>:
     * The initial state after calling <a>DeleteVirtualInterface</a>.</p> </li> <li>
     * <p> <code>detached</code>: The virtual interface is detached from the Direct
     * Connect gateway. Traffic flow between the Direct Connect gateway and virtual
     * interface is stopped.</p> </li> </ul>
     */
    inline const DirectConnectGatewayAttachmentState& GetAttachmentState() const{ return m_attachmentState; }

    /**
     * <p>The state of the attachment. The following are the possible values:</p> <ul>
     * <li> <p> <code>attaching</code>: The initial state after a virtual interface is
     * created using the Direct Connect gateway.</p> </li> <li> <p>
     * <code>attached</code>: The Direct Connect gateway and virtual interface are
     * attached and ready to pass traffic.</p> </li> <li> <p> <code>detaching</code>:
     * The initial state after calling <a>DeleteVirtualInterface</a>.</p> </li> <li>
     * <p> <code>detached</code>: The virtual interface is detached from the Direct
     * Connect gateway. Traffic flow between the Direct Connect gateway and virtual
     * interface is stopped.</p> </li> </ul>
     */
    inline bool AttachmentStateHasBeenSet() const { return m_attachmentStateHasBeenSet; }

    /**
     * <p>The state of the attachment. The following are the possible values:</p> <ul>
     * <li> <p> <code>attaching</code>: The initial state after a virtual interface is
     * created using the Direct Connect gateway.</p> </li> <li> <p>
     * <code>attached</code>: The Direct Connect gateway and virtual interface are
     * attached and ready to pass traffic.</p> </li> <li> <p> <code>detaching</code>:
     * The initial state after calling <a>DeleteVirtualInterface</a>.</p> </li> <li>
     * <p> <code>detached</code>: The virtual interface is detached from the Direct
     * Connect gateway. Traffic flow between the Direct Connect gateway and virtual
     * interface is stopped.</p> </li> </ul>
     */
    inline void SetAttachmentState(const DirectConnectGatewayAttachmentState& value) { m_attachmentStateHasBeenSet = true; m_attachmentState = value; }

    /**
     * <p>The state of the attachment. The following are the possible values:</p> <ul>
     * <li> <p> <code>attaching</code>: The initial state after a virtual interface is
     * created using the Direct Connect gateway.</p> </li> <li> <p>
     * <code>attached</code>: The Direct Connect gateway and virtual interface are
     * attached and ready to pass traffic.</p> </li> <li> <p> <code>detaching</code>:
     * The initial state after calling <a>DeleteVirtualInterface</a>.</p> </li> <li>
     * <p> <code>detached</code>: The virtual interface is detached from the Direct
     * Connect gateway. Traffic flow between the Direct Connect gateway and virtual
     * interface is stopped.</p> </li> </ul>
     */
    inline void SetAttachmentState(DirectConnectGatewayAttachmentState&& value) { m_attachmentStateHasBeenSet = true; m_attachmentState = std::move(value); }

    /**
     * <p>The state of the attachment. The following are the possible values:</p> <ul>
     * <li> <p> <code>attaching</code>: The initial state after a virtual interface is
     * created using the Direct Connect gateway.</p> </li> <li> <p>
     * <code>attached</code>: The Direct Connect gateway and virtual interface are
     * attached and ready to pass traffic.</p> </li> <li> <p> <code>detaching</code>:
     * The initial state after calling <a>DeleteVirtualInterface</a>.</p> </li> <li>
     * <p> <code>detached</code>: The virtual interface is detached from the Direct
     * Connect gateway. Traffic flow between the Direct Connect gateway and virtual
     * interface is stopped.</p> </li> </ul>
     */
    inline DirectConnectGatewayAttachment& WithAttachmentState(const DirectConnectGatewayAttachmentState& value) { SetAttachmentState(value); return *this;}

    /**
     * <p>The state of the attachment. The following are the possible values:</p> <ul>
     * <li> <p> <code>attaching</code>: The initial state after a virtual interface is
     * created using the Direct Connect gateway.</p> </li> <li> <p>
     * <code>attached</code>: The Direct Connect gateway and virtual interface are
     * attached and ready to pass traffic.</p> </li> <li> <p> <code>detaching</code>:
     * The initial state after calling <a>DeleteVirtualInterface</a>.</p> </li> <li>
     * <p> <code>detached</code>: The virtual interface is detached from the Direct
     * Connect gateway. Traffic flow between the Direct Connect gateway and virtual
     * interface is stopped.</p> </li> </ul>
     */
    inline DirectConnectGatewayAttachment& WithAttachmentState(DirectConnectGatewayAttachmentState&& value) { SetAttachmentState(std::move(value)); return *this;}


    /**
     * <p>The interface type.</p>
     */
    inline const DirectConnectGatewayAttachmentType& GetAttachmentType() const{ return m_attachmentType; }

    /**
     * <p>The interface type.</p>
     */
    inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }

    /**
     * <p>The interface type.</p>
     */
    inline void SetAttachmentType(const DirectConnectGatewayAttachmentType& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = value; }

    /**
     * <p>The interface type.</p>
     */
    inline void SetAttachmentType(DirectConnectGatewayAttachmentType&& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = std::move(value); }

    /**
     * <p>The interface type.</p>
     */
    inline DirectConnectGatewayAttachment& WithAttachmentType(const DirectConnectGatewayAttachmentType& value) { SetAttachmentType(value); return *this;}

    /**
     * <p>The interface type.</p>
     */
    inline DirectConnectGatewayAttachment& WithAttachmentType(DirectConnectGatewayAttachmentType&& value) { SetAttachmentType(std::move(value)); return *this;}


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
    inline DirectConnectGatewayAttachment& WithStateChangeError(const Aws::String& value) { SetStateChangeError(value); return *this;}

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline DirectConnectGatewayAttachment& WithStateChangeError(Aws::String&& value) { SetStateChangeError(std::move(value)); return *this;}

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
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

    DirectConnectGatewayAttachmentType m_attachmentType;
    bool m_attachmentTypeHasBeenSet;

    Aws::String m_stateChangeError;
    bool m_stateChangeErrorHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
