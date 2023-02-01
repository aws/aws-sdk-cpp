/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/SnapshotState.h>
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
  class RestoreSnapshotFromRecycleBinResponse
  {
  public:
    AWS_EC2_API RestoreSnapshotFromRecycleBinResponse();
    AWS_EC2_API RestoreSnapshotFromRecycleBinResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RestoreSnapshotFromRecycleBinResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArn = value; }

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArn = std::move(value); }

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArn.assign(value); }

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Outpost on which the snapshot is stored. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>The description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encrypted = value; }

    /**
     * <p>Indicates whether the snapshot is encrypted.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the EBS snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progress = value; }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progress = std::move(value); }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline void SetProgress(const char* value) { m_progress.assign(value); }

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}

    /**
     * <p>The progress of the snapshot, as a percentage.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithProgress(const char* value) { SetProgress(value); return *this;}


    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time stamp when the snapshot was initiated.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The state of the snapshot.</p>
     */
    inline const SnapshotState& GetState() const{ return m_state; }

    /**
     * <p>The state of the snapshot.</p>
     */
    inline void SetState(const SnapshotState& value) { m_state = value; }

    /**
     * <p>The state of the snapshot.</p>
     */
    inline void SetState(SnapshotState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithState(const SnapshotState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithState(SnapshotState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The ID of the volume that was used to create the snapshot.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume that was used to create the snapshot.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }

    /**
     * <p>The ID of the volume that was used to create the snapshot.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume that was used to create the snapshot.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume that was used to create the snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume that was used to create the snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume that was used to create the snapshot.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSize = value; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline RestoreSnapshotFromRecycleBinResponse& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RestoreSnapshotFromRecycleBinResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RestoreSnapshotFromRecycleBinResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotId;

    Aws::String m_outpostArn;

    Aws::String m_description;

    bool m_encrypted;

    Aws::String m_ownerId;

    Aws::String m_progress;

    Aws::Utils::DateTime m_startTime;

    SnapshotState m_state;

    Aws::String m_volumeId;

    int m_volumeSize;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
