/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AttachmentStatus.h>

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
 * <p>Describes the attachment of a secondary interface to an
 * instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecondaryInterfaceAttachment">AWS
 * API Reference</a></p>
 */
class SecondaryInterfaceAttachment {
 public:
  AWS_EC2_API SecondaryInterfaceAttachment() = default;
  AWS_EC2_API SecondaryInterfaceAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API SecondaryInterfaceAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the attachment.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  SecondaryInterfaceAttachment& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the attachment was created.</p>
   */
  inline const Aws::Utils::DateTime& GetAttachTime() const { return m_attachTime; }
  inline bool AttachTimeHasBeenSet() const { return m_attachTimeHasBeenSet; }
  template <typename AttachTimeT = Aws::Utils::DateTime>
  void SetAttachTime(AttachTimeT&& value) {
    m_attachTimeHasBeenSet = true;
    m_attachTime = std::forward<AttachTimeT>(value);
  }
  template <typename AttachTimeT = Aws::Utils::DateTime>
  SecondaryInterfaceAttachment& WithAttachTime(AttachTimeT&& value) {
    SetAttachTime(std::forward<AttachTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the secondary interface is deleted when the instance is
   * terminated.</p> <p>The only supported value for this field is
   * <code>true</code>.</p>
   */
  inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
  inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
  inline void SetDeleteOnTermination(bool value) {
    m_deleteOnTerminationHasBeenSet = true;
    m_deleteOnTermination = value;
  }
  inline SecondaryInterfaceAttachment& WithDeleteOnTermination(bool value) {
    SetDeleteOnTermination(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The device index of the secondary interface.</p>
   */
  inline int GetDeviceIndex() const { return m_deviceIndex; }
  inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
  inline void SetDeviceIndex(int value) {
    m_deviceIndexHasBeenSet = true;
    m_deviceIndex = value;
  }
  inline SecondaryInterfaceAttachment& WithDeviceIndex(int value) {
    SetDeviceIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the instance to which the secondary interface is attached.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  SecondaryInterfaceAttachment& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the owner of the instance.</p>
   */
  inline const Aws::String& GetInstanceOwnerId() const { return m_instanceOwnerId; }
  inline bool InstanceOwnerIdHasBeenSet() const { return m_instanceOwnerIdHasBeenSet; }
  template <typename InstanceOwnerIdT = Aws::String>
  void SetInstanceOwnerId(InstanceOwnerIdT&& value) {
    m_instanceOwnerIdHasBeenSet = true;
    m_instanceOwnerId = std::forward<InstanceOwnerIdT>(value);
  }
  template <typename InstanceOwnerIdT = Aws::String>
  SecondaryInterfaceAttachment& WithInstanceOwnerId(InstanceOwnerIdT&& value) {
    SetInstanceOwnerId(std::forward<InstanceOwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index of the network card.</p>
   */
  inline int GetNetworkCardIndex() const { return m_networkCardIndex; }
  inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }
  inline void SetNetworkCardIndex(int value) {
    m_networkCardIndexHasBeenSet = true;
    m_networkCardIndex = value;
  }
  inline SecondaryInterfaceAttachment& WithNetworkCardIndex(int value) {
    SetNetworkCardIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attachment state.</p>
   */
  inline AttachmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AttachmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SecondaryInterfaceAttachment& WithStatus(AttachmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_attachmentId;

  Aws::Utils::DateTime m_attachTime{};

  bool m_deleteOnTermination{false};

  int m_deviceIndex{0};

  Aws::String m_instanceId;

  Aws::String m_instanceOwnerId;

  int m_networkCardIndex{0};

  AttachmentStatus m_status{AttachmentStatus::NOT_SET};
  bool m_attachmentIdHasBeenSet = false;
  bool m_attachTimeHasBeenSet = false;
  bool m_deleteOnTerminationHasBeenSet = false;
  bool m_deviceIndexHasBeenSet = false;
  bool m_instanceIdHasBeenSet = false;
  bool m_instanceOwnerIdHasBeenSet = false;
  bool m_networkCardIndexHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
