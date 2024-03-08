/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/AttachmentStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a parameter used to set up an EBS volume in a block device
   * mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EbsInstanceBlockDevice">AWS
   * API Reference</a></p>
   */
  class EbsInstanceBlockDevice
  {
  public:
    AWS_EC2_API EbsInstanceBlockDevice();
    AWS_EC2_API EbsInstanceBlockDevice(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EbsInstanceBlockDevice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline EbsInstanceBlockDevice& WithAttachTime(const Aws::Utils::DateTime& value) { SetAttachTime(value); return *this;}

    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline EbsInstanceBlockDevice& WithAttachTime(Aws::Utils::DateTime&& value) { SetAttachTime(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline EbsInstanceBlockDevice& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


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
    inline EbsInstanceBlockDevice& WithStatus(const AttachmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The attachment state.</p>
     */
    inline EbsInstanceBlockDevice& WithStatus(AttachmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the EBS volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the EBS volume.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the EBS volume.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the EBS volume.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the EBS volume.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the EBS volume.</p>
     */
    inline EbsInstanceBlockDevice& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the EBS volume.</p>
     */
    inline EbsInstanceBlockDevice& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EBS volume.</p>
     */
    inline EbsInstanceBlockDevice& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The ARN of the Amazon ECS or Fargate task to which the volume is
     * attached.</p>
     */
    inline const Aws::String& GetAssociatedResource() const{ return m_associatedResource; }

    /**
     * <p>The ARN of the Amazon ECS or Fargate task to which the volume is
     * attached.</p>
     */
    inline bool AssociatedResourceHasBeenSet() const { return m_associatedResourceHasBeenSet; }

    /**
     * <p>The ARN of the Amazon ECS or Fargate task to which the volume is
     * attached.</p>
     */
    inline void SetAssociatedResource(const Aws::String& value) { m_associatedResourceHasBeenSet = true; m_associatedResource = value; }

    /**
     * <p>The ARN of the Amazon ECS or Fargate task to which the volume is
     * attached.</p>
     */
    inline void SetAssociatedResource(Aws::String&& value) { m_associatedResourceHasBeenSet = true; m_associatedResource = std::move(value); }

    /**
     * <p>The ARN of the Amazon ECS or Fargate task to which the volume is
     * attached.</p>
     */
    inline void SetAssociatedResource(const char* value) { m_associatedResourceHasBeenSet = true; m_associatedResource.assign(value); }

    /**
     * <p>The ARN of the Amazon ECS or Fargate task to which the volume is
     * attached.</p>
     */
    inline EbsInstanceBlockDevice& WithAssociatedResource(const Aws::String& value) { SetAssociatedResource(value); return *this;}

    /**
     * <p>The ARN of the Amazon ECS or Fargate task to which the volume is
     * attached.</p>
     */
    inline EbsInstanceBlockDevice& WithAssociatedResource(Aws::String&& value) { SetAssociatedResource(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon ECS or Fargate task to which the volume is
     * attached.</p>
     */
    inline EbsInstanceBlockDevice& WithAssociatedResource(const char* value) { SetAssociatedResource(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the volume.</p> <p>This
     * parameter is returned only for volumes that are attached to Fargate tasks.</p>
     */
    inline const Aws::String& GetVolumeOwnerId() const{ return m_volumeOwnerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the volume.</p> <p>This
     * parameter is returned only for volumes that are attached to Fargate tasks.</p>
     */
    inline bool VolumeOwnerIdHasBeenSet() const { return m_volumeOwnerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the volume.</p> <p>This
     * parameter is returned only for volumes that are attached to Fargate tasks.</p>
     */
    inline void SetVolumeOwnerId(const Aws::String& value) { m_volumeOwnerIdHasBeenSet = true; m_volumeOwnerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the volume.</p> <p>This
     * parameter is returned only for volumes that are attached to Fargate tasks.</p>
     */
    inline void SetVolumeOwnerId(Aws::String&& value) { m_volumeOwnerIdHasBeenSet = true; m_volumeOwnerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the volume.</p> <p>This
     * parameter is returned only for volumes that are attached to Fargate tasks.</p>
     */
    inline void SetVolumeOwnerId(const char* value) { m_volumeOwnerIdHasBeenSet = true; m_volumeOwnerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the volume.</p> <p>This
     * parameter is returned only for volumes that are attached to Fargate tasks.</p>
     */
    inline EbsInstanceBlockDevice& WithVolumeOwnerId(const Aws::String& value) { SetVolumeOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the volume.</p> <p>This
     * parameter is returned only for volumes that are attached to Fargate tasks.</p>
     */
    inline EbsInstanceBlockDevice& WithVolumeOwnerId(Aws::String&& value) { SetVolumeOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the volume.</p> <p>This
     * parameter is returned only for volumes that are attached to Fargate tasks.</p>
     */
    inline EbsInstanceBlockDevice& WithVolumeOwnerId(const char* value) { SetVolumeOwnerId(value); return *this;}

  private:

    Aws::Utils::DateTime m_attachTime;
    bool m_attachTimeHasBeenSet = false;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    AttachmentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::String m_associatedResource;
    bool m_associatedResourceHasBeenSet = false;

    Aws::String m_volumeOwnerId;
    bool m_volumeOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
