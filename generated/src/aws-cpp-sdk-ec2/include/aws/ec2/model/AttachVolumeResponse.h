﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeAttachmentState.h>
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
  class AttachVolumeResponse
  {
  public:
    AWS_EC2_API AttachVolumeResponse();
    AWS_EC2_API AttachVolumeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AttachVolumeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetAttachTime() const{ return m_attachTime; }
    inline void SetAttachTime(const Aws::Utils::DateTime& value) { m_attachTime = value; }
    inline void SetAttachTime(Aws::Utils::DateTime&& value) { m_attachTime = std::move(value); }
    inline AttachVolumeResponse& WithAttachTime(const Aws::Utils::DateTime& value) { SetAttachTime(value); return *this;}
    inline AttachVolumeResponse& WithAttachTime(Aws::Utils::DateTime&& value) { SetAttachTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name.</p> <p>If the volume is attached to a Fargate task, this
     * parameter returns <code>null</code>.</p>
     */
    inline const Aws::String& GetDevice() const{ return m_device; }
    inline void SetDevice(const Aws::String& value) { m_device = value; }
    inline void SetDevice(Aws::String&& value) { m_device = std::move(value); }
    inline void SetDevice(const char* value) { m_device.assign(value); }
    inline AttachVolumeResponse& WithDevice(const Aws::String& value) { SetDevice(value); return *this;}
    inline AttachVolumeResponse& WithDevice(Aws::String&& value) { SetDevice(std::move(value)); return *this;}
    inline AttachVolumeResponse& WithDevice(const char* value) { SetDevice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p> <p>If the volume is attached to a Fargate task,
     * this parameter returns <code>null</code>.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }
    inline AttachVolumeResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline AttachVolumeResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline AttachVolumeResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attachment state of the volume.</p>
     */
    inline const VolumeAttachmentState& GetState() const{ return m_state; }
    inline void SetState(const VolumeAttachmentState& value) { m_state = value; }
    inline void SetState(VolumeAttachmentState&& value) { m_state = std::move(value); }
    inline AttachVolumeResponse& WithState(const VolumeAttachmentState& value) { SetState(value); return *this;}
    inline AttachVolumeResponse& WithState(VolumeAttachmentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }
    inline AttachVolumeResponse& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline AttachVolumeResponse& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline AttachVolumeResponse& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTermination = value; }
    inline AttachVolumeResponse& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon ECS or Fargate task to which the volume is
     * attached.</p>
     */
    inline const Aws::String& GetAssociatedResource() const{ return m_associatedResource; }
    inline void SetAssociatedResource(const Aws::String& value) { m_associatedResource = value; }
    inline void SetAssociatedResource(Aws::String&& value) { m_associatedResource = std::move(value); }
    inline void SetAssociatedResource(const char* value) { m_associatedResource.assign(value); }
    inline AttachVolumeResponse& WithAssociatedResource(const Aws::String& value) { SetAssociatedResource(value); return *this;}
    inline AttachVolumeResponse& WithAssociatedResource(Aws::String&& value) { SetAssociatedResource(std::move(value)); return *this;}
    inline AttachVolumeResponse& WithAssociatedResource(const char* value) { SetAssociatedResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service principal of Amazon Web Services service that owns the underlying
     * instance to which the volume is attached.</p> <p>This parameter is returned only
     * for volumes that are attached to Fargate tasks.</p>
     */
    inline const Aws::String& GetInstanceOwningService() const{ return m_instanceOwningService; }
    inline void SetInstanceOwningService(const Aws::String& value) { m_instanceOwningService = value; }
    inline void SetInstanceOwningService(Aws::String&& value) { m_instanceOwningService = std::move(value); }
    inline void SetInstanceOwningService(const char* value) { m_instanceOwningService.assign(value); }
    inline AttachVolumeResponse& WithInstanceOwningService(const Aws::String& value) { SetInstanceOwningService(value); return *this;}
    inline AttachVolumeResponse& WithInstanceOwningService(Aws::String&& value) { SetInstanceOwningService(std::move(value)); return *this;}
    inline AttachVolumeResponse& WithInstanceOwningService(const char* value) { SetInstanceOwningService(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline AttachVolumeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline AttachVolumeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_attachTime;

    Aws::String m_device;

    Aws::String m_instanceId;

    VolumeAttachmentState m_state;

    Aws::String m_volumeId;

    bool m_deleteOnTermination;

    Aws::String m_associatedResource;

    Aws::String m_instanceOwningService;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
