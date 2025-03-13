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
   * <p>Describes the modification status of an EBS volume.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeModification">AWS
   * API Reference</a></p>
   */
  class VolumeModification
  {
  public:
    AWS_EC2_API VolumeModification() = default;
    AWS_EC2_API VolumeModification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeModification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    VolumeModification& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current modification state.</p>
     */
    inline VolumeModificationState GetModificationState() const { return m_modificationState; }
    inline bool ModificationStateHasBeenSet() const { return m_modificationStateHasBeenSet; }
    inline void SetModificationState(VolumeModificationState value) { m_modificationStateHasBeenSet = true; m_modificationState = value; }
    inline VolumeModification& WithModificationState(VolumeModificationState value) { SetModificationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message about the modification progress or failure.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    VolumeModification& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target size of the volume, in GiB.</p>
     */
    inline int GetTargetSize() const { return m_targetSize; }
    inline bool TargetSizeHasBeenSet() const { return m_targetSizeHasBeenSet; }
    inline void SetTargetSize(int value) { m_targetSizeHasBeenSet = true; m_targetSize = value; }
    inline VolumeModification& WithTargetSize(int value) { SetTargetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target IOPS rate of the volume.</p>
     */
    inline int GetTargetIops() const { return m_targetIops; }
    inline bool TargetIopsHasBeenSet() const { return m_targetIopsHasBeenSet; }
    inline void SetTargetIops(int value) { m_targetIopsHasBeenSet = true; m_targetIops = value; }
    inline VolumeModification& WithTargetIops(int value) { SetTargetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target EBS volume type of the volume.</p>
     */
    inline VolumeType GetTargetVolumeType() const { return m_targetVolumeType; }
    inline bool TargetVolumeTypeHasBeenSet() const { return m_targetVolumeTypeHasBeenSet; }
    inline void SetTargetVolumeType(VolumeType value) { m_targetVolumeTypeHasBeenSet = true; m_targetVolumeType = value; }
    inline VolumeModification& WithTargetVolumeType(VolumeType value) { SetTargetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target throughput of the volume, in MiB/s.</p>
     */
    inline int GetTargetThroughput() const { return m_targetThroughput; }
    inline bool TargetThroughputHasBeenSet() const { return m_targetThroughputHasBeenSet; }
    inline void SetTargetThroughput(int value) { m_targetThroughputHasBeenSet = true; m_targetThroughput = value; }
    inline VolumeModification& WithTargetThroughput(int value) { SetTargetThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target setting for Amazon EBS Multi-Attach.</p>
     */
    inline bool GetTargetMultiAttachEnabled() const { return m_targetMultiAttachEnabled; }
    inline bool TargetMultiAttachEnabledHasBeenSet() const { return m_targetMultiAttachEnabledHasBeenSet; }
    inline void SetTargetMultiAttachEnabled(bool value) { m_targetMultiAttachEnabledHasBeenSet = true; m_targetMultiAttachEnabled = value; }
    inline VolumeModification& WithTargetMultiAttachEnabled(bool value) { SetTargetMultiAttachEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original size of the volume, in GiB.</p>
     */
    inline int GetOriginalSize() const { return m_originalSize; }
    inline bool OriginalSizeHasBeenSet() const { return m_originalSizeHasBeenSet; }
    inline void SetOriginalSize(int value) { m_originalSizeHasBeenSet = true; m_originalSize = value; }
    inline VolumeModification& WithOriginalSize(int value) { SetOriginalSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original IOPS rate of the volume.</p>
     */
    inline int GetOriginalIops() const { return m_originalIops; }
    inline bool OriginalIopsHasBeenSet() const { return m_originalIopsHasBeenSet; }
    inline void SetOriginalIops(int value) { m_originalIopsHasBeenSet = true; m_originalIops = value; }
    inline VolumeModification& WithOriginalIops(int value) { SetOriginalIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original EBS volume type of the volume.</p>
     */
    inline VolumeType GetOriginalVolumeType() const { return m_originalVolumeType; }
    inline bool OriginalVolumeTypeHasBeenSet() const { return m_originalVolumeTypeHasBeenSet; }
    inline void SetOriginalVolumeType(VolumeType value) { m_originalVolumeTypeHasBeenSet = true; m_originalVolumeType = value; }
    inline VolumeModification& WithOriginalVolumeType(VolumeType value) { SetOriginalVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original throughput of the volume, in MiB/s.</p>
     */
    inline int GetOriginalThroughput() const { return m_originalThroughput; }
    inline bool OriginalThroughputHasBeenSet() const { return m_originalThroughputHasBeenSet; }
    inline void SetOriginalThroughput(int value) { m_originalThroughputHasBeenSet = true; m_originalThroughput = value; }
    inline VolumeModification& WithOriginalThroughput(int value) { SetOriginalThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original setting for Amazon EBS Multi-Attach.</p>
     */
    inline bool GetOriginalMultiAttachEnabled() const { return m_originalMultiAttachEnabled; }
    inline bool OriginalMultiAttachEnabledHasBeenSet() const { return m_originalMultiAttachEnabledHasBeenSet; }
    inline void SetOriginalMultiAttachEnabled(bool value) { m_originalMultiAttachEnabledHasBeenSet = true; m_originalMultiAttachEnabled = value; }
    inline VolumeModification& WithOriginalMultiAttachEnabled(bool value) { SetOriginalMultiAttachEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The modification progress, from 0 to 100 percent complete.</p>
     */
    inline long long GetProgress() const { return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(long long value) { m_progressHasBeenSet = true; m_progress = value; }
    inline VolumeModification& WithProgress(long long value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The modification start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    VolumeModification& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The modification completion or failure time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    VolumeModification& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    VolumeModificationState m_modificationState{VolumeModificationState::NOT_SET};
    bool m_modificationStateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    int m_targetSize{0};
    bool m_targetSizeHasBeenSet = false;

    int m_targetIops{0};
    bool m_targetIopsHasBeenSet = false;

    VolumeType m_targetVolumeType{VolumeType::NOT_SET};
    bool m_targetVolumeTypeHasBeenSet = false;

    int m_targetThroughput{0};
    bool m_targetThroughputHasBeenSet = false;

    bool m_targetMultiAttachEnabled{false};
    bool m_targetMultiAttachEnabledHasBeenSet = false;

    int m_originalSize{0};
    bool m_originalSizeHasBeenSet = false;

    int m_originalIops{0};
    bool m_originalIopsHasBeenSet = false;

    VolumeType m_originalVolumeType{VolumeType::NOT_SET};
    bool m_originalVolumeTypeHasBeenSet = false;

    int m_originalThroughput{0};
    bool m_originalThroughputHasBeenSet = false;

    bool m_originalMultiAttachEnabled{false};
    bool m_originalMultiAttachEnabledHasBeenSet = false;

    long long m_progress{0};
    bool m_progressHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
