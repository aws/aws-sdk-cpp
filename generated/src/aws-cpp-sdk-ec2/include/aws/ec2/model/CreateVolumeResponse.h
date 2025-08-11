/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VolumeType.h>
#include <aws/ec2/model/SSEType.h>
#include <aws/ec2/model/OperatorResponse.h>
#include <aws/ec2/model/VolumeState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/VolumeAttachment.h>
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
   * <p>Describes a volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Volume">AWS API
   * Reference</a></p>
   */
  class CreateVolumeResponse
  {
  public:
    AWS_EC2_API CreateVolumeResponse() = default;
    AWS_EC2_API CreateVolumeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateVolumeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the Availability Zone for the volume.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CreateVolumeResponse& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    CreateVolumeResponse& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline CreateVolumeResponse& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the volume.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateVolumeResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateVolumeResponse& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The volume type.</p>
     */
    inline VolumeType GetVolumeType() const { return m_volumeType; }
    inline void SetVolumeType(VolumeType value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline CreateVolumeResponse& WithVolumeType(VolumeType value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This parameter is not returned by CreateVolume.</p> 
     * <p>Indicates whether the volume was created using fast snapshot restore.</p>
     */
    inline bool GetFastRestored() const { return m_fastRestored; }
    inline void SetFastRestored(bool value) { m_fastRestoredHasBeenSet = true; m_fastRestored = value; }
    inline CreateVolumeResponse& WithFastRestored(bool value) { SetFastRestored(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon EBS Multi-Attach is enabled.</p>
     */
    inline bool GetMultiAttachEnabled() const { return m_multiAttachEnabled; }
    inline void SetMultiAttachEnabled(bool value) { m_multiAttachEnabledHasBeenSet = true; m_multiAttachEnabled = value; }
    inline CreateVolumeResponse& WithMultiAttachEnabled(bool value) { SetMultiAttachEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput that the volume supports, in MiB/s.</p>
     */
    inline int GetThroughput() const { return m_throughput; }
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline CreateVolumeResponse& WithThroughput(int value) { SetThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This parameter is not returned by CreateVolume.</p> 
     * <p>Reserved for future use.</p>
     */
    inline SSEType GetSseType() const { return m_sseType; }
    inline void SetSseType(SSEType value) { m_sseTypeHasBeenSet = true; m_sseType = value; }
    inline CreateVolumeResponse& WithSseType(SSEType value) { SetSseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service provider that manages the volume.</p>
     */
    inline const OperatorResponse& GetOperator() const { return m_operator; }
    template<typename OperatorT = OperatorResponse>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = OperatorResponse>
    CreateVolumeResponse& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EBS Provisioned Rate for Volume Initialization (volume
     * initialization rate) specified for the volume during creation, in MiB/s. If no
     * volume initialization rate was specified, the value is <code>null</code>.</p>
     */
    inline int GetVolumeInitializationRate() const { return m_volumeInitializationRate; }
    inline void SetVolumeInitializationRate(int value) { m_volumeInitializationRateHasBeenSet = true; m_volumeInitializationRate = value; }
    inline CreateVolumeResponse& WithVolumeInitializationRate(int value) { SetVolumeInitializationRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    CreateVolumeResponse& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiBs.</p>
     */
    inline int GetSize() const { return m_size; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline CreateVolumeResponse& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot from which the volume was created, if applicable.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    CreateVolumeResponse& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the volume.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateVolumeResponse& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume state.</p>
     */
    inline VolumeState GetState() const { return m_state; }
    inline void SetState(VolumeState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateVolumeResponse& WithState(VolumeState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when volume creation was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CreateVolumeResponse& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This parameter is not returned by CreateVolume.</p> 
     * <p>Information about the volume attachments.</p>
     */
    inline const Aws::Vector<VolumeAttachment>& GetAttachments() const { return m_attachments; }
    template<typename AttachmentsT = Aws::Vector<VolumeAttachment>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<VolumeAttachment>>
    CreateVolumeResponse& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = VolumeAttachment>
    CreateVolumeResponse& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the volume is encrypted.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline CreateVolumeResponse& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that was used to protect the
     * volume encryption key for the volume.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateVolumeResponse& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateVolumeResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    VolumeType m_volumeType{VolumeType::NOT_SET};
    bool m_volumeTypeHasBeenSet = false;

    bool m_fastRestored{false};
    bool m_fastRestoredHasBeenSet = false;

    bool m_multiAttachEnabled{false};
    bool m_multiAttachEnabledHasBeenSet = false;

    int m_throughput{0};
    bool m_throughputHasBeenSet = false;

    SSEType m_sseType{SSEType::NOT_SET};
    bool m_sseTypeHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;

    int m_volumeInitializationRate{0};
    bool m_volumeInitializationRateHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    int m_size{0};
    bool m_sizeHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    VolumeState m_state{VolumeState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Vector<VolumeAttachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
