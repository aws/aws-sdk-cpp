/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeModificationState.h>
#include <aws/ec2/model/VolumeType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes the modification status of an EBS volume.</p> <p>If the volume has
   * never been modified, some element values will be null.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeModification">AWS
   * API Reference</a></p>
   */
  class VolumeModification
  {
  public:
    AWS_EC2_API VolumeModification();
    AWS_EC2_API VolumeModification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeModification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume.</p>
     */
    inline VolumeModification& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume.</p>
     */
    inline VolumeModification& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume.</p>
     */
    inline VolumeModification& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The current modification state. The modification state is null for unmodified
     * volumes.</p>
     */
    inline const VolumeModificationState& GetModificationState() const{ return m_modificationState; }

    /**
     * <p>The current modification state. The modification state is null for unmodified
     * volumes.</p>
     */
    inline bool ModificationStateHasBeenSet() const { return m_modificationStateHasBeenSet; }

    /**
     * <p>The current modification state. The modification state is null for unmodified
     * volumes.</p>
     */
    inline void SetModificationState(const VolumeModificationState& value) { m_modificationStateHasBeenSet = true; m_modificationState = value; }

    /**
     * <p>The current modification state. The modification state is null for unmodified
     * volumes.</p>
     */
    inline void SetModificationState(VolumeModificationState&& value) { m_modificationStateHasBeenSet = true; m_modificationState = std::move(value); }

    /**
     * <p>The current modification state. The modification state is null for unmodified
     * volumes.</p>
     */
    inline VolumeModification& WithModificationState(const VolumeModificationState& value) { SetModificationState(value); return *this;}

    /**
     * <p>The current modification state. The modification state is null for unmodified
     * volumes.</p>
     */
    inline VolumeModification& WithModificationState(VolumeModificationState&& value) { SetModificationState(std::move(value)); return *this;}


    /**
     * <p>A status message about the modification progress or failure.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A status message about the modification progress or failure.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A status message about the modification progress or failure.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A status message about the modification progress or failure.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A status message about the modification progress or failure.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A status message about the modification progress or failure.</p>
     */
    inline VolumeModification& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A status message about the modification progress or failure.</p>
     */
    inline VolumeModification& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A status message about the modification progress or failure.</p>
     */
    inline VolumeModification& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The target size of the volume, in GiB.</p>
     */
    inline int GetTargetSize() const{ return m_targetSize; }

    /**
     * <p>The target size of the volume, in GiB.</p>
     */
    inline bool TargetSizeHasBeenSet() const { return m_targetSizeHasBeenSet; }

    /**
     * <p>The target size of the volume, in GiB.</p>
     */
    inline void SetTargetSize(int value) { m_targetSizeHasBeenSet = true; m_targetSize = value; }

    /**
     * <p>The target size of the volume, in GiB.</p>
     */
    inline VolumeModification& WithTargetSize(int value) { SetTargetSize(value); return *this;}


    /**
     * <p>The target IOPS rate of the volume.</p>
     */
    inline int GetTargetIops() const{ return m_targetIops; }

    /**
     * <p>The target IOPS rate of the volume.</p>
     */
    inline bool TargetIopsHasBeenSet() const { return m_targetIopsHasBeenSet; }

    /**
     * <p>The target IOPS rate of the volume.</p>
     */
    inline void SetTargetIops(int value) { m_targetIopsHasBeenSet = true; m_targetIops = value; }

    /**
     * <p>The target IOPS rate of the volume.</p>
     */
    inline VolumeModification& WithTargetIops(int value) { SetTargetIops(value); return *this;}


    /**
     * <p>The target EBS volume type of the volume.</p>
     */
    inline const VolumeType& GetTargetVolumeType() const{ return m_targetVolumeType; }

    /**
     * <p>The target EBS volume type of the volume.</p>
     */
    inline bool TargetVolumeTypeHasBeenSet() const { return m_targetVolumeTypeHasBeenSet; }

    /**
     * <p>The target EBS volume type of the volume.</p>
     */
    inline void SetTargetVolumeType(const VolumeType& value) { m_targetVolumeTypeHasBeenSet = true; m_targetVolumeType = value; }

    /**
     * <p>The target EBS volume type of the volume.</p>
     */
    inline void SetTargetVolumeType(VolumeType&& value) { m_targetVolumeTypeHasBeenSet = true; m_targetVolumeType = std::move(value); }

    /**
     * <p>The target EBS volume type of the volume.</p>
     */
    inline VolumeModification& WithTargetVolumeType(const VolumeType& value) { SetTargetVolumeType(value); return *this;}

    /**
     * <p>The target EBS volume type of the volume.</p>
     */
    inline VolumeModification& WithTargetVolumeType(VolumeType&& value) { SetTargetVolumeType(std::move(value)); return *this;}


    /**
     * <p>The target throughput of the volume, in MiB/s.</p>
     */
    inline int GetTargetThroughput() const{ return m_targetThroughput; }

    /**
     * <p>The target throughput of the volume, in MiB/s.</p>
     */
    inline bool TargetThroughputHasBeenSet() const { return m_targetThroughputHasBeenSet; }

    /**
     * <p>The target throughput of the volume, in MiB/s.</p>
     */
    inline void SetTargetThroughput(int value) { m_targetThroughputHasBeenSet = true; m_targetThroughput = value; }

    /**
     * <p>The target throughput of the volume, in MiB/s.</p>
     */
    inline VolumeModification& WithTargetThroughput(int value) { SetTargetThroughput(value); return *this;}


    /**
     * <p>The target setting for Amazon EBS Multi-Attach.</p>
     */
    inline bool GetTargetMultiAttachEnabled() const{ return m_targetMultiAttachEnabled; }

    /**
     * <p>The target setting for Amazon EBS Multi-Attach.</p>
     */
    inline bool TargetMultiAttachEnabledHasBeenSet() const { return m_targetMultiAttachEnabledHasBeenSet; }

    /**
     * <p>The target setting for Amazon EBS Multi-Attach.</p>
     */
    inline void SetTargetMultiAttachEnabled(bool value) { m_targetMultiAttachEnabledHasBeenSet = true; m_targetMultiAttachEnabled = value; }

    /**
     * <p>The target setting for Amazon EBS Multi-Attach.</p>
     */
    inline VolumeModification& WithTargetMultiAttachEnabled(bool value) { SetTargetMultiAttachEnabled(value); return *this;}


    /**
     * <p>The original size of the volume, in GiB.</p>
     */
    inline int GetOriginalSize() const{ return m_originalSize; }

    /**
     * <p>The original size of the volume, in GiB.</p>
     */
    inline bool OriginalSizeHasBeenSet() const { return m_originalSizeHasBeenSet; }

    /**
     * <p>The original size of the volume, in GiB.</p>
     */
    inline void SetOriginalSize(int value) { m_originalSizeHasBeenSet = true; m_originalSize = value; }

    /**
     * <p>The original size of the volume, in GiB.</p>
     */
    inline VolumeModification& WithOriginalSize(int value) { SetOriginalSize(value); return *this;}


    /**
     * <p>The original IOPS rate of the volume.</p>
     */
    inline int GetOriginalIops() const{ return m_originalIops; }

    /**
     * <p>The original IOPS rate of the volume.</p>
     */
    inline bool OriginalIopsHasBeenSet() const { return m_originalIopsHasBeenSet; }

    /**
     * <p>The original IOPS rate of the volume.</p>
     */
    inline void SetOriginalIops(int value) { m_originalIopsHasBeenSet = true; m_originalIops = value; }

    /**
     * <p>The original IOPS rate of the volume.</p>
     */
    inline VolumeModification& WithOriginalIops(int value) { SetOriginalIops(value); return *this;}


    /**
     * <p>The original EBS volume type of the volume.</p>
     */
    inline const VolumeType& GetOriginalVolumeType() const{ return m_originalVolumeType; }

    /**
     * <p>The original EBS volume type of the volume.</p>
     */
    inline bool OriginalVolumeTypeHasBeenSet() const { return m_originalVolumeTypeHasBeenSet; }

    /**
     * <p>The original EBS volume type of the volume.</p>
     */
    inline void SetOriginalVolumeType(const VolumeType& value) { m_originalVolumeTypeHasBeenSet = true; m_originalVolumeType = value; }

    /**
     * <p>The original EBS volume type of the volume.</p>
     */
    inline void SetOriginalVolumeType(VolumeType&& value) { m_originalVolumeTypeHasBeenSet = true; m_originalVolumeType = std::move(value); }

    /**
     * <p>The original EBS volume type of the volume.</p>
     */
    inline VolumeModification& WithOriginalVolumeType(const VolumeType& value) { SetOriginalVolumeType(value); return *this;}

    /**
     * <p>The original EBS volume type of the volume.</p>
     */
    inline VolumeModification& WithOriginalVolumeType(VolumeType&& value) { SetOriginalVolumeType(std::move(value)); return *this;}


    /**
     * <p>The original throughput of the volume, in MiB/s.</p>
     */
    inline int GetOriginalThroughput() const{ return m_originalThroughput; }

    /**
     * <p>The original throughput of the volume, in MiB/s.</p>
     */
    inline bool OriginalThroughputHasBeenSet() const { return m_originalThroughputHasBeenSet; }

    /**
     * <p>The original throughput of the volume, in MiB/s.</p>
     */
    inline void SetOriginalThroughput(int value) { m_originalThroughputHasBeenSet = true; m_originalThroughput = value; }

    /**
     * <p>The original throughput of the volume, in MiB/s.</p>
     */
    inline VolumeModification& WithOriginalThroughput(int value) { SetOriginalThroughput(value); return *this;}


    /**
     * <p>The original setting for Amazon EBS Multi-Attach.</p>
     */
    inline bool GetOriginalMultiAttachEnabled() const{ return m_originalMultiAttachEnabled; }

    /**
     * <p>The original setting for Amazon EBS Multi-Attach.</p>
     */
    inline bool OriginalMultiAttachEnabledHasBeenSet() const { return m_originalMultiAttachEnabledHasBeenSet; }

    /**
     * <p>The original setting for Amazon EBS Multi-Attach.</p>
     */
    inline void SetOriginalMultiAttachEnabled(bool value) { m_originalMultiAttachEnabledHasBeenSet = true; m_originalMultiAttachEnabled = value; }

    /**
     * <p>The original setting for Amazon EBS Multi-Attach.</p>
     */
    inline VolumeModification& WithOriginalMultiAttachEnabled(bool value) { SetOriginalMultiAttachEnabled(value); return *this;}


    /**
     * <p>The modification progress, from 0 to 100 percent complete.</p>
     */
    inline long long GetProgress() const{ return m_progress; }

    /**
     * <p>The modification progress, from 0 to 100 percent complete.</p>
     */
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }

    /**
     * <p>The modification progress, from 0 to 100 percent complete.</p>
     */
    inline void SetProgress(long long value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The modification progress, from 0 to 100 percent complete.</p>
     */
    inline VolumeModification& WithProgress(long long value) { SetProgress(value); return *this;}


    /**
     * <p>The modification start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The modification start time.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The modification start time.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The modification start time.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The modification start time.</p>
     */
    inline VolumeModification& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The modification start time.</p>
     */
    inline VolumeModification& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The modification completion or failure time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The modification completion or failure time.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The modification completion or failure time.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The modification completion or failure time.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The modification completion or failure time.</p>
     */
    inline VolumeModification& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The modification completion or failure time.</p>
     */
    inline VolumeModification& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    VolumeModificationState m_modificationState;
    bool m_modificationStateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    int m_targetSize;
    bool m_targetSizeHasBeenSet = false;

    int m_targetIops;
    bool m_targetIopsHasBeenSet = false;

    VolumeType m_targetVolumeType;
    bool m_targetVolumeTypeHasBeenSet = false;

    int m_targetThroughput;
    bool m_targetThroughputHasBeenSet = false;

    bool m_targetMultiAttachEnabled;
    bool m_targetMultiAttachEnabledHasBeenSet = false;

    int m_originalSize;
    bool m_originalSizeHasBeenSet = false;

    int m_originalIops;
    bool m_originalIopsHasBeenSet = false;

    VolumeType m_originalVolumeType;
    bool m_originalVolumeTypeHasBeenSet = false;

    int m_originalThroughput;
    bool m_originalThroughputHasBeenSet = false;

    bool m_originalMultiAttachEnabled;
    bool m_originalMultiAttachEnabledHasBeenSet = false;

    long long m_progress;
    bool m_progressHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
