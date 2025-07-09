/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeAttachmentState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
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
  class DetachVolumeResponse
  {
  public:
    AWS_EC2_API DetachVolumeResponse() = default;
    AWS_EC2_API DetachVolumeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DetachVolumeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline DetachVolumeResponse& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Web Services-managed resource to which the volume is
     * attached.</p>
     */
    inline const Aws::String& GetAssociatedResource() const { return m_associatedResource; }
    template<typename AssociatedResourceT = Aws::String>
    void SetAssociatedResource(AssociatedResourceT&& value) { m_associatedResourceHasBeenSet = true; m_associatedResource = std::forward<AssociatedResourceT>(value); }
    template<typename AssociatedResourceT = Aws::String>
    DetachVolumeResponse& WithAssociatedResource(AssociatedResourceT&& value) { SetAssociatedResource(std::forward<AssociatedResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service principal of the Amazon Web Services service that owns the
     * underlying resource to which the volume is attached.</p> <p>This parameter is
     * returned only for volumes that are attached to Amazon Web Services-managed
     * resources.</p>
     */
    inline const Aws::String& GetInstanceOwningService() const { return m_instanceOwningService; }
    template<typename InstanceOwningServiceT = Aws::String>
    void SetInstanceOwningService(InstanceOwningServiceT&& value) { m_instanceOwningServiceHasBeenSet = true; m_instanceOwningService = std::forward<InstanceOwningServiceT>(value); }
    template<typename InstanceOwningServiceT = Aws::String>
    DetachVolumeResponse& WithInstanceOwningService(InstanceOwningServiceT&& value) { SetInstanceOwningService(std::forward<InstanceOwningServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    DetachVolumeResponse& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p> <p>If the volume is attached to an Amazon Web
     * Services-managed resource, this parameter returns <code>null</code>.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DetachVolumeResponse& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name.</p> <p>If the volume is attached to an Amazon Web
     * Services-managed resource, this parameter returns <code>null</code>.</p>
     */
    inline const Aws::String& GetDevice() const { return m_device; }
    template<typename DeviceT = Aws::String>
    void SetDevice(DeviceT&& value) { m_deviceHasBeenSet = true; m_device = std::forward<DeviceT>(value); }
    template<typename DeviceT = Aws::String>
    DetachVolumeResponse& WithDevice(DeviceT&& value) { SetDevice(std::forward<DeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attachment state of the volume.</p>
     */
    inline VolumeAttachmentState GetState() const { return m_state; }
    inline void SetState(VolumeAttachmentState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DetachVolumeResponse& WithState(VolumeAttachmentState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetAttachTime() const { return m_attachTime; }
    template<typename AttachTimeT = Aws::Utils::DateTime>
    void SetAttachTime(AttachTimeT&& value) { m_attachTimeHasBeenSet = true; m_attachTime = std::forward<AttachTimeT>(value); }
    template<typename AttachTimeT = Aws::Utils::DateTime>
    DetachVolumeResponse& WithAttachTime(AttachTimeT&& value) { SetAttachTime(std::forward<AttachTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DetachVolumeResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_deleteOnTermination{false};
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

    VolumeAttachmentState m_state{VolumeAttachmentState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_attachTime{};
    bool m_attachTimeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
