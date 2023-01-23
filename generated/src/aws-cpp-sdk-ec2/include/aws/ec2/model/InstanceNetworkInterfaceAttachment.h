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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceNetworkInterfaceAttachment">AWS
   * API Reference</a></p>
   */
  class InstanceNetworkInterfaceAttachment
  {
  public:
    AWS_EC2_API InstanceNetworkInterfaceAttachment();
    AWS_EC2_API InstanceNetworkInterfaceAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceNetworkInterfaceAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetAttachTime() const{ return m_attachTime; }

    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline bool AttachTimeHasBeenSet() const { return m_attachTimeHasBeenSet; }

    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline void SetAttachTime(const Aws::Utils::DateTime& value) { m_attachTimeHasBeenSet = true; m_attachTime = value; }

    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline void SetAttachTime(Aws::Utils::DateTime&& value) { m_attachTimeHasBeenSet = true; m_attachTime = std::move(value); }

    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline InstanceNetworkInterfaceAttachment& WithAttachTime(const Aws::Utils::DateTime& value) { SetAttachTime(value); return *this;}

    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline InstanceNetworkInterfaceAttachment& WithAttachTime(Aws::Utils::DateTime&& value) { SetAttachTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline InstanceNetworkInterfaceAttachment& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline InstanceNetworkInterfaceAttachment& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline InstanceNetworkInterfaceAttachment& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}


    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline InstanceNetworkInterfaceAttachment& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>The index of the device on the instance for the network interface
     * attachment.</p>
     */
    inline int GetDeviceIndex() const{ return m_deviceIndex; }

    /**
     * <p>The index of the device on the instance for the network interface
     * attachment.</p>
     */
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }

    /**
     * <p>The index of the device on the instance for the network interface
     * attachment.</p>
     */
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }

    /**
     * <p>The index of the device on the instance for the network interface
     * attachment.</p>
     */
    inline InstanceNetworkInterfaceAttachment& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}


    /**
     * <p>The attachment state.</p>
     */
    inline const AttachmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The attachment state.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The attachment state.</p>
     */
    inline void SetStatus(const AttachmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The attachment state.</p>
     */
    inline void SetStatus(AttachmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The attachment state.</p>
     */
    inline InstanceNetworkInterfaceAttachment& WithStatus(const AttachmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The attachment state.</p>
     */
    inline InstanceNetworkInterfaceAttachment& WithStatus(AttachmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The index of the network card.</p>
     */
    inline int GetNetworkCardIndex() const{ return m_networkCardIndex; }

    /**
     * <p>The index of the network card.</p>
     */
    inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }

    /**
     * <p>The index of the network card.</p>
     */
    inline void SetNetworkCardIndex(int value) { m_networkCardIndexHasBeenSet = true; m_networkCardIndex = value; }

    /**
     * <p>The index of the network card.</p>
     */
    inline InstanceNetworkInterfaceAttachment& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}

  private:

    Aws::Utils::DateTime m_attachTime;
    bool m_attachTimeHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    int m_deviceIndex;
    bool m_deviceIndexHasBeenSet = false;

    AttachmentStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_networkCardIndex;
    bool m_networkCardIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
