/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DirectConnectGatewayAttachment
  {
  public:
    AWS_DIRECTCONNECT_API DirectConnectGatewayAttachment() = default;
    AWS_DIRECTCONNECT_API DirectConnectGatewayAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API DirectConnectGatewayAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const { return m_directConnectGatewayId; }
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }
    template<typename DirectConnectGatewayIdT = Aws::String>
    void SetDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::forward<DirectConnectGatewayIdT>(value); }
    template<typename DirectConnectGatewayIdT = Aws::String>
    DirectConnectGatewayAttachment& WithDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { SetDirectConnectGatewayId(std::forward<DirectConnectGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const { return m_virtualInterfaceId; }
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }
    template<typename VirtualInterfaceIdT = Aws::String>
    void SetVirtualInterfaceId(VirtualInterfaceIdT&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::forward<VirtualInterfaceIdT>(value); }
    template<typename VirtualInterfaceIdT = Aws::String>
    DirectConnectGatewayAttachment& WithVirtualInterfaceId(VirtualInterfaceIdT&& value) { SetVirtualInterfaceId(std::forward<VirtualInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the virtual interface is located.</p>
     */
    inline const Aws::String& GetVirtualInterfaceRegion() const { return m_virtualInterfaceRegion; }
    inline bool VirtualInterfaceRegionHasBeenSet() const { return m_virtualInterfaceRegionHasBeenSet; }
    template<typename VirtualInterfaceRegionT = Aws::String>
    void SetVirtualInterfaceRegion(VirtualInterfaceRegionT&& value) { m_virtualInterfaceRegionHasBeenSet = true; m_virtualInterfaceRegion = std::forward<VirtualInterfaceRegionT>(value); }
    template<typename VirtualInterfaceRegionT = Aws::String>
    DirectConnectGatewayAttachment& WithVirtualInterfaceRegion(VirtualInterfaceRegionT&& value) { SetVirtualInterfaceRegion(std::forward<VirtualInterfaceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the virtual
     * interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceOwnerAccount() const { return m_virtualInterfaceOwnerAccount; }
    inline bool VirtualInterfaceOwnerAccountHasBeenSet() const { return m_virtualInterfaceOwnerAccountHasBeenSet; }
    template<typename VirtualInterfaceOwnerAccountT = Aws::String>
    void SetVirtualInterfaceOwnerAccount(VirtualInterfaceOwnerAccountT&& value) { m_virtualInterfaceOwnerAccountHasBeenSet = true; m_virtualInterfaceOwnerAccount = std::forward<VirtualInterfaceOwnerAccountT>(value); }
    template<typename VirtualInterfaceOwnerAccountT = Aws::String>
    DirectConnectGatewayAttachment& WithVirtualInterfaceOwnerAccount(VirtualInterfaceOwnerAccountT&& value) { SetVirtualInterfaceOwnerAccount(std::forward<VirtualInterfaceOwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
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
    inline DirectConnectGatewayAttachmentState GetAttachmentState() const { return m_attachmentState; }
    inline bool AttachmentStateHasBeenSet() const { return m_attachmentStateHasBeenSet; }
    inline void SetAttachmentState(DirectConnectGatewayAttachmentState value) { m_attachmentStateHasBeenSet = true; m_attachmentState = value; }
    inline DirectConnectGatewayAttachment& WithAttachmentState(DirectConnectGatewayAttachmentState value) { SetAttachmentState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of attachment.</p>
     */
    inline DirectConnectGatewayAttachmentType GetAttachmentType() const { return m_attachmentType; }
    inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }
    inline void SetAttachmentType(DirectConnectGatewayAttachmentType value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = value; }
    inline DirectConnectGatewayAttachment& WithAttachmentType(DirectConnectGatewayAttachmentType value) { SetAttachmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline const Aws::String& GetStateChangeError() const { return m_stateChangeError; }
    inline bool StateChangeErrorHasBeenSet() const { return m_stateChangeErrorHasBeenSet; }
    template<typename StateChangeErrorT = Aws::String>
    void SetStateChangeError(StateChangeErrorT&& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = std::forward<StateChangeErrorT>(value); }
    template<typename StateChangeErrorT = Aws::String>
    DirectConnectGatewayAttachment& WithStateChangeError(StateChangeErrorT&& value) { SetStateChangeError(std::forward<StateChangeErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    Aws::String m_virtualInterfaceRegion;
    bool m_virtualInterfaceRegionHasBeenSet = false;

    Aws::String m_virtualInterfaceOwnerAccount;
    bool m_virtualInterfaceOwnerAccountHasBeenSet = false;

    DirectConnectGatewayAttachmentState m_attachmentState{DirectConnectGatewayAttachmentState::NOT_SET};
    bool m_attachmentStateHasBeenSet = false;

    DirectConnectGatewayAttachmentType m_attachmentType{DirectConnectGatewayAttachmentType::NOT_SET};
    bool m_attachmentTypeHasBeenSet = false;

    Aws::String m_stateChangeError;
    bool m_stateChangeErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
