/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayAttachmentStatusType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a Transit Gateway attachment for a Client VPN
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayClientVpnAttachment">AWS
 * API Reference</a></p>
 */
class TransitGatewayClientVpnAttachment {
 public:
  AWS_EC2_API TransitGatewayClientVpnAttachment() = default;
  AWS_EC2_API TransitGatewayClientVpnAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API TransitGatewayClientVpnAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the Transit Gateway attachment.</p>
   */
  inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
  inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    m_transitGatewayAttachmentIdHasBeenSet = true;
    m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value);
  }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  TransitGatewayClientVpnAttachment& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Transit Gateway.</p>
   */
  inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
  inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
  template <typename TransitGatewayIdT = Aws::String>
  void SetTransitGatewayId(TransitGatewayIdT&& value) {
    m_transitGatewayIdHasBeenSet = true;
    m_transitGatewayId = std::forward<TransitGatewayIdT>(value);
  }
  template <typename TransitGatewayIdT = Aws::String>
  TransitGatewayClientVpnAttachment& WithTransitGatewayId(TransitGatewayIdT&& value) {
    SetTransitGatewayId(std::forward<TransitGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Client VPN endpoint.</p>
   */
  inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
  inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
  template <typename ClientVpnEndpointIdT = Aws::String>
  void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) {
    m_clientVpnEndpointIdHasBeenSet = true;
    m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value);
  }
  template <typename ClientVpnEndpointIdT = Aws::String>
  TransitGatewayClientVpnAttachment& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) {
    SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the Client VPN
   * endpoint.</p>
   */
  inline const Aws::String& GetClientVpnOwnerId() const { return m_clientVpnOwnerId; }
  inline bool ClientVpnOwnerIdHasBeenSet() const { return m_clientVpnOwnerIdHasBeenSet; }
  template <typename ClientVpnOwnerIdT = Aws::String>
  void SetClientVpnOwnerId(ClientVpnOwnerIdT&& value) {
    m_clientVpnOwnerIdHasBeenSet = true;
    m_clientVpnOwnerId = std::forward<ClientVpnOwnerIdT>(value);
  }
  template <typename ClientVpnOwnerIdT = Aws::String>
  TransitGatewayClientVpnAttachment& WithClientVpnOwnerId(ClientVpnOwnerIdT&& value) {
    SetClientVpnOwnerId(std::forward<ClientVpnOwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the Transit Gateway attachment.</p>
   */
  inline TransitGatewayAttachmentStatusType GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(TransitGatewayAttachmentStatusType value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline TransitGatewayClientVpnAttachment& WithState(TransitGatewayAttachmentStatusType value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the Transit Gateway attachment was created.</p>
   */
  inline const Aws::String& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::String>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::String>
  TransitGatewayClientVpnAttachment& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayAttachmentId;

  Aws::String m_transitGatewayId;

  Aws::String m_clientVpnEndpointId;

  Aws::String m_clientVpnOwnerId;

  TransitGatewayAttachmentStatusType m_state{TransitGatewayAttachmentStatusType::NOT_SET};

  Aws::String m_creationTime;
  bool m_transitGatewayAttachmentIdHasBeenSet = false;
  bool m_transitGatewayIdHasBeenSet = false;
  bool m_clientVpnEndpointIdHasBeenSet = false;
  bool m_clientVpnOwnerIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
