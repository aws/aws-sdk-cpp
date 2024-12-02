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
    AWS_EC2_API CreateVolumeResponse();
    AWS_EC2_API CreateVolumeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateVolumeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArn.assign(value); }
    inline CreateVolumeResponse& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline CreateVolumeResponse& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline CreateVolumeResponse& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline void SetIops(int value) { m_iops = value; }
    inline CreateVolumeResponse& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the volume.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreateVolumeResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateVolumeResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateVolumeResponse& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreateVolumeResponse& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The volume type.</p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }
    inline void SetVolumeType(const VolumeType& value) { m_volumeType = value; }
    inline void SetVolumeType(VolumeType&& value) { m_volumeType = std::move(value); }
    inline CreateVolumeResponse& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}
    inline CreateVolumeResponse& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This parameter is not returned by CreateVolume.</p> 
     * <p>Indicates whether the volume was created using fast snapshot restore.</p>
     */
    inline bool GetFastRestored() const{ return m_fastRestored; }
    inline void SetFastRestored(bool value) { m_fastRestored = value; }
    inline CreateVolumeResponse& WithFastRestored(bool value) { SetFastRestored(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon EBS Multi-Attach is enabled.</p>
     */
    inline bool GetMultiAttachEnabled() const{ return m_multiAttachEnabled; }
    inline void SetMultiAttachEnabled(bool value) { m_multiAttachEnabled = value; }
    inline CreateVolumeResponse& WithMultiAttachEnabled(bool value) { SetMultiAttachEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput that the volume supports, in MiB/s.</p>
     */
    inline int GetThroughput() const{ return m_throughput; }
    inline void SetThroughput(int value) { m_throughput = value; }
    inline CreateVolumeResponse& WithThroughput(int value) { SetThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This parameter is not returned by CreateVolume.</p> 
     * <p>Reserved for future use.</p>
     */
    inline const SSEType& GetSseType() const{ return m_sseType; }
    inline void SetSseType(const SSEType& value) { m_sseType = value; }
    inline void SetSseType(SSEType&& value) { m_sseType = std::move(value); }
    inline CreateVolumeResponse& WithSseType(const SSEType& value) { SetSseType(value); return *this;}
    inline CreateVolumeResponse& WithSseType(SSEType&& value) { SetSseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service provider that manages the volume.</p>
     */
    inline const OperatorResponse& GetOperator() const{ return m_operator; }
    inline void SetOperator(const OperatorResponse& value) { m_operator = value; }
    inline void SetOperator(OperatorResponse&& value) { m_operator = std::move(value); }
    inline CreateVolumeResponse& WithOperator(const OperatorResponse& value) { SetOperator(value); return *this;}
    inline CreateVolumeResponse& WithOperator(OperatorResponse&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }
    inline CreateVolumeResponse& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline CreateVolumeResponse& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline CreateVolumeResponse& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiBs.</p>
     */
    inline int GetSize() const{ return m_size; }
    inline void SetSize(int value) { m_size = value; }
    inline CreateVolumeResponse& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot from which the volume was created, if applicable.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }
    inline CreateVolumeResponse& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline CreateVolumeResponse& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline CreateVolumeResponse& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the volume.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZone.assign(value); }
    inline CreateVolumeResponse& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CreateVolumeResponse& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CreateVolumeResponse& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume state.</p>
     */
    inline const VolumeState& GetState() const{ return m_state; }
    inline void SetState(const VolumeState& value) { m_state = value; }
    inline void SetState(VolumeState&& value) { m_state = std::move(value); }
    inline CreateVolumeResponse& WithState(const VolumeState& value) { SetState(value); return *this;}
    inline CreateVolumeResponse& WithState(VolumeState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when volume creation was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline CreateVolumeResponse& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CreateVolumeResponse& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This parameter is not returned by CreateVolume.</p> 
     * <p>Information about the volume attachments.</p>
     */
    inline const Aws::Vector<VolumeAttachment>& GetAttachments() const{ return m_attachments; }
    inline void SetAttachments(const Aws::Vector<VolumeAttachment>& value) { m_attachments = value; }
    inline void SetAttachments(Aws::Vector<VolumeAttachment>&& value) { m_attachments = std::move(value); }
    inline CreateVolumeResponse& WithAttachments(const Aws::Vector<VolumeAttachment>& value) { SetAttachments(value); return *this;}
    inline CreateVolumeResponse& WithAttachments(Aws::Vector<VolumeAttachment>&& value) { SetAttachments(std::move(value)); return *this;}
    inline CreateVolumeResponse& AddAttachments(const VolumeAttachment& value) { m_attachments.push_back(value); return *this; }
    inline CreateVolumeResponse& AddAttachments(VolumeAttachment&& value) { m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the volume is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline void SetEncrypted(bool value) { m_encrypted = value; }
    inline CreateVolumeResponse& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that was used to protect the
     * volume encryption key for the volume.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline CreateVolumeResponse& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateVolumeResponse& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateVolumeResponse& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateVolumeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateVolumeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_outpostArn;

    int m_iops;

    Aws::Vector<Tag> m_tags;

    VolumeType m_volumeType;

    bool m_fastRestored;

    bool m_multiAttachEnabled;

    int m_throughput;

    SSEType m_sseType;

    OperatorResponse m_operator;

    Aws::String m_volumeId;

    int m_size;

    Aws::String m_snapshotId;

    Aws::String m_availabilityZone;

    VolumeState m_state;

    Aws::Utils::DateTime m_createTime;

    Aws::Vector<VolumeAttachment> m_attachments;

    bool m_encrypted;

    Aws::String m_kmsKeyId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
