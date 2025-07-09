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
#include <aws/ec2/model/OperatorResponse.h>
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
    AWS_EC2_API EbsInstanceBlockDevice() = default;
    AWS_EC2_API EbsInstanceBlockDevice(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EbsInstanceBlockDevice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetAttachTime() const { return m_attachTime; }
    inline bool AttachTimeHasBeenSet() const { return m_attachTimeHasBeenSet; }
    template<typename AttachTimeT = Aws::Utils::DateTime>
    void SetAttachTime(AttachTimeT&& value) { m_attachTimeHasBeenSet = true; m_attachTime = std::forward<AttachTimeT>(value); }
    template<typename AttachTimeT = Aws::Utils::DateTime>
    EbsInstanceBlockDevice& WithAttachTime(AttachTimeT&& value) { SetAttachTime(std::forward<AttachTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline EbsInstanceBlockDevice& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attachment state.</p>
     */
    inline AttachmentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AttachmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EbsInstanceBlockDevice& WithStatus(AttachmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EBS volume.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    EbsInstanceBlockDevice& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Web Services-managed resource to which the volume is
     * attached.</p>
     */
    inline const Aws::String& GetAssociatedResource() const { return m_associatedResource; }
    inline bool AssociatedResourceHasBeenSet() const { return m_associatedResourceHasBeenSet; }
    template<typename AssociatedResourceT = Aws::String>
    void SetAssociatedResource(AssociatedResourceT&& value) { m_associatedResourceHasBeenSet = true; m_associatedResource = std::forward<AssociatedResourceT>(value); }
    template<typename AssociatedResourceT = Aws::String>
    EbsInstanceBlockDevice& WithAssociatedResource(AssociatedResourceT&& value) { SetAssociatedResource(std::forward<AssociatedResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the volume.</p> <p>This
     * parameter is returned only for volumes that are attached to Amazon Web
     * Services-managed resources.</p>
     */
    inline const Aws::String& GetVolumeOwnerId() const { return m_volumeOwnerId; }
    inline bool VolumeOwnerIdHasBeenSet() const { return m_volumeOwnerIdHasBeenSet; }
    template<typename VolumeOwnerIdT = Aws::String>
    void SetVolumeOwnerId(VolumeOwnerIdT&& value) { m_volumeOwnerIdHasBeenSet = true; m_volumeOwnerId = std::forward<VolumeOwnerIdT>(value); }
    template<typename VolumeOwnerIdT = Aws::String>
    EbsInstanceBlockDevice& WithVolumeOwnerId(VolumeOwnerIdT&& value) { SetVolumeOwnerId(std::forward<VolumeOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service provider that manages the EBS volume.</p>
     */
    inline const OperatorResponse& GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    template<typename OperatorT = OperatorResponse>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = OperatorResponse>
    EbsInstanceBlockDevice& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_attachTime{};
    bool m_attachTimeHasBeenSet = false;

    bool m_deleteOnTermination{false};
    bool m_deleteOnTerminationHasBeenSet = false;

    AttachmentStatus m_status{AttachmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::String m_associatedResource;
    bool m_associatedResourceHasBeenSet = false;

    Aws::String m_volumeOwnerId;
    bool m_volumeOwnerIdHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
