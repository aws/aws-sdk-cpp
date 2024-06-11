/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttachmentStatus.h>
#include <aws/ec2/model/AttachmentEnaSrdSpecification.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a network interface attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInterfaceAttachment">AWS
   * API Reference</a></p>
   */
  class NetworkInterfaceAttachment
  {
  public:
    AWS_EC2_API NetworkInterfaceAttachment();
    AWS_EC2_API NetworkInterfaceAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInterfaceAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The timestamp indicating when the attachment initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetAttachTime() const{ return m_attachTime; }
    inline bool AttachTimeHasBeenSet() const { return m_attachTimeHasBeenSet; }
    inline void SetAttachTime(const Aws::Utils::DateTime& value) { m_attachTimeHasBeenSet = true; m_attachTime = value; }
    inline void SetAttachTime(Aws::Utils::DateTime&& value) { m_attachTimeHasBeenSet = true; m_attachTime = std::move(value); }
    inline NetworkInterfaceAttachment& WithAttachTime(const Aws::Utils::DateTime& value) { SetAttachTime(value); return *this;}
    inline NetworkInterfaceAttachment& WithAttachTime(Aws::Utils::DateTime&& value) { SetAttachTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline NetworkInterfaceAttachment& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline NetworkInterfaceAttachment& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline NetworkInterfaceAttachment& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline NetworkInterfaceAttachment& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device index of the network interface attachment on the instance.</p>
     */
    inline int GetDeviceIndex() const{ return m_deviceIndex; }
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }
    inline NetworkInterfaceAttachment& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the network card.</p>
     */
    inline int GetNetworkCardIndex() const{ return m_networkCardIndex; }
    inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }
    inline void SetNetworkCardIndex(int value) { m_networkCardIndexHasBeenSet = true; m_networkCardIndex = value; }
    inline NetworkInterfaceAttachment& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline NetworkInterfaceAttachment& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline NetworkInterfaceAttachment& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline NetworkInterfaceAttachment& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the instance.</p>
     */
    inline const Aws::String& GetInstanceOwnerId() const{ return m_instanceOwnerId; }
    inline bool InstanceOwnerIdHasBeenSet() const { return m_instanceOwnerIdHasBeenSet; }
    inline void SetInstanceOwnerId(const Aws::String& value) { m_instanceOwnerIdHasBeenSet = true; m_instanceOwnerId = value; }
    inline void SetInstanceOwnerId(Aws::String&& value) { m_instanceOwnerIdHasBeenSet = true; m_instanceOwnerId = std::move(value); }
    inline void SetInstanceOwnerId(const char* value) { m_instanceOwnerIdHasBeenSet = true; m_instanceOwnerId.assign(value); }
    inline NetworkInterfaceAttachment& WithInstanceOwnerId(const Aws::String& value) { SetInstanceOwnerId(value); return *this;}
    inline NetworkInterfaceAttachment& WithInstanceOwnerId(Aws::String&& value) { SetInstanceOwnerId(std::move(value)); return *this;}
    inline NetworkInterfaceAttachment& WithInstanceOwnerId(const char* value) { SetInstanceOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attachment state.</p>
     */
    inline const AttachmentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AttachmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AttachmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline NetworkInterfaceAttachment& WithStatus(const AttachmentStatus& value) { SetStatus(value); return *this;}
    inline NetworkInterfaceAttachment& WithStatus(AttachmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures ENA Express for the network interface that this action attaches to
     * the instance.</p>
     */
    inline const AttachmentEnaSrdSpecification& GetEnaSrdSpecification() const{ return m_enaSrdSpecification; }
    inline bool EnaSrdSpecificationHasBeenSet() const { return m_enaSrdSpecificationHasBeenSet; }
    inline void SetEnaSrdSpecification(const AttachmentEnaSrdSpecification& value) { m_enaSrdSpecificationHasBeenSet = true; m_enaSrdSpecification = value; }
    inline void SetEnaSrdSpecification(AttachmentEnaSrdSpecification&& value) { m_enaSrdSpecificationHasBeenSet = true; m_enaSrdSpecification = std::move(value); }
    inline NetworkInterfaceAttachment& WithEnaSrdSpecification(const AttachmentEnaSrdSpecification& value) { SetEnaSrdSpecification(value); return *this;}
    inline NetworkInterfaceAttachment& WithEnaSrdSpecification(AttachmentEnaSrdSpecification&& value) { SetEnaSrdSpecification(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_attachTime;
    bool m_attachTimeHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    int m_deviceIndex;
    bool m_deviceIndexHasBeenSet = false;

    int m_networkCardIndex;
    bool m_networkCardIndexHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceOwnerId;
    bool m_instanceOwnerIdHasBeenSet = false;

    AttachmentStatus m_status;
    bool m_statusHasBeenSet = false;

    AttachmentEnaSrdSpecification m_enaSrdSpecification;
    bool m_enaSrdSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
