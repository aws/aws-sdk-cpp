/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeAttachmentState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
   * <p>Describes volume attachment details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeAttachment">AWS
   * API Reference</a></p>
   */
  class VolumeAttachment
  {
  public:
    AWS_EC2_API VolumeAttachment();
    AWS_EC2_API VolumeAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline VolumeAttachment& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon ECS or Fargate task to which the volume is
     * attached.</p>
     */
    inline const Aws::String& GetAssociatedResource() const{ return m_associatedResource; }
    inline bool AssociatedResourceHasBeenSet() const { return m_associatedResourceHasBeenSet; }
    inline void SetAssociatedResource(const Aws::String& value) { m_associatedResourceHasBeenSet = true; m_associatedResource = value; }
    inline void SetAssociatedResource(Aws::String&& value) { m_associatedResourceHasBeenSet = true; m_associatedResource = std::move(value); }
    inline void SetAssociatedResource(const char* value) { m_associatedResourceHasBeenSet = true; m_associatedResource.assign(value); }
    inline VolumeAttachment& WithAssociatedResource(const Aws::String& value) { SetAssociatedResource(value); return *this;}
    inline VolumeAttachment& WithAssociatedResource(Aws::String&& value) { SetAssociatedResource(std::move(value)); return *this;}
    inline VolumeAttachment& WithAssociatedResource(const char* value) { SetAssociatedResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service principal of Amazon Web Services service that owns the underlying
     * instance to which the volume is attached.</p> <p>This parameter is returned only
     * for volumes that are attached to Fargate tasks.</p>
     */
    inline const Aws::String& GetInstanceOwningService() const{ return m_instanceOwningService; }
    inline bool InstanceOwningServiceHasBeenSet() const { return m_instanceOwningServiceHasBeenSet; }
    inline void SetInstanceOwningService(const Aws::String& value) { m_instanceOwningServiceHasBeenSet = true; m_instanceOwningService = value; }
    inline void SetInstanceOwningService(Aws::String&& value) { m_instanceOwningServiceHasBeenSet = true; m_instanceOwningService = std::move(value); }
    inline void SetInstanceOwningService(const char* value) { m_instanceOwningServiceHasBeenSet = true; m_instanceOwningService.assign(value); }
    inline VolumeAttachment& WithInstanceOwningService(const Aws::String& value) { SetInstanceOwningService(value); return *this;}
    inline VolumeAttachment& WithInstanceOwningService(Aws::String&& value) { SetInstanceOwningService(std::move(value)); return *this;}
    inline VolumeAttachment& WithInstanceOwningService(const char* value) { SetInstanceOwningService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }
    inline VolumeAttachment& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline VolumeAttachment& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline VolumeAttachment& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p> <p>If the volume is attached to a Fargate task,
     * this parameter returns <code>null</code>.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline VolumeAttachment& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline VolumeAttachment& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline VolumeAttachment& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name.</p> <p>If the volume is attached to a Fargate task, this
     * parameter returns <code>null</code>.</p>
     */
    inline const Aws::String& GetDevice() const{ return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    inline void SetDevice(const Aws::String& value) { m_deviceHasBeenSet = true; m_device = value; }
    inline void SetDevice(Aws::String&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }
    inline void SetDevice(const char* value) { m_deviceHasBeenSet = true; m_device.assign(value); }
    inline VolumeAttachment& WithDevice(const Aws::String& value) { SetDevice(value); return *this;}
    inline VolumeAttachment& WithDevice(Aws::String&& value) { SetDevice(std::move(value)); return *this;}
    inline VolumeAttachment& WithDevice(const char* value) { SetDevice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attachment state of the volume.</p>
     */
    inline const VolumeAttachmentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const VolumeAttachmentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(VolumeAttachmentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline VolumeAttachment& WithState(const VolumeAttachmentState& value) { SetState(value); return *this;}
    inline VolumeAttachment& WithState(VolumeAttachmentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetAttachTime() const{ return m_attachTime; }
    inline bool AttachTimeHasBeenSet() const { return m_attachTimeHasBeenSet; }
    inline void SetAttachTime(const Aws::Utils::DateTime& value) { m_attachTimeHasBeenSet = true; m_attachTime = value; }
    inline void SetAttachTime(Aws::Utils::DateTime&& value) { m_attachTimeHasBeenSet = true; m_attachTime = std::move(value); }
    inline VolumeAttachment& WithAttachTime(const Aws::Utils::DateTime& value) { SetAttachTime(value); return *this;}
    inline VolumeAttachment& WithAttachTime(Aws::Utils::DateTime&& value) { SetAttachTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline VolumeAttachment& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline VolumeAttachment& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    Aws::String m_associatedResource;
    bool m_associatedResourceHasBeenSet = false;

    Aws::String m_instanceOwningService;
    bool m_instanceOwningServiceHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_device;
    bool m_deviceHasBeenSet = false;

    VolumeAttachmentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_attachTime;
    bool m_attachTimeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
