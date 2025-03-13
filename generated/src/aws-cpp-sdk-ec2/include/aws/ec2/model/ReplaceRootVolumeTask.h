/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ReplaceRootVolumeTaskState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Information about a root volume replacement task.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceRootVolumeTask">AWS
   * API Reference</a></p>
   */
  class ReplaceRootVolumeTask
  {
  public:
    AWS_EC2_API ReplaceRootVolumeTask() = default;
    AWS_EC2_API ReplaceRootVolumeTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReplaceRootVolumeTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the root volume replacement task.</p>
     */
    inline const Aws::String& GetReplaceRootVolumeTaskId() const { return m_replaceRootVolumeTaskId; }
    inline bool ReplaceRootVolumeTaskIdHasBeenSet() const { return m_replaceRootVolumeTaskIdHasBeenSet; }
    template<typename ReplaceRootVolumeTaskIdT = Aws::String>
    void SetReplaceRootVolumeTaskId(ReplaceRootVolumeTaskIdT&& value) { m_replaceRootVolumeTaskIdHasBeenSet = true; m_replaceRootVolumeTaskId = std::forward<ReplaceRootVolumeTaskIdT>(value); }
    template<typename ReplaceRootVolumeTaskIdT = Aws::String>
    ReplaceRootVolumeTask& WithReplaceRootVolumeTaskId(ReplaceRootVolumeTaskIdT&& value) { SetReplaceRootVolumeTaskId(std::forward<ReplaceRootVolumeTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance for which the root volume replacement task was
     * created.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ReplaceRootVolumeTask& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the task. The task can be in one of the following states:</p>
     * <ul> <li> <p> <code>pending</code> - the replacement volume is being
     * created.</p> </li> <li> <p> <code>in-progress</code> - the original volume is
     * being detached and the replacement volume is being attached.</p> </li> <li> <p>
     * <code>succeeded</code> - the replacement volume has been successfully attached
     * to the instance and the instance is available.</p> </li> <li> <p>
     * <code>failing</code> - the replacement task is in the process of failing.</p>
     * </li> <li> <p> <code>failed</code> - the replacement task has failed but the
     * original root volume is still attached.</p> </li> <li> <p>
     * <code>failing-detached</code> - the replacement task is in the process of
     * failing. The instance might have no root volume attached.</p> </li> <li> <p>
     * <code>failed-detached</code> - the replacement task has failed and the instance
     * has no root volume attached.</p> </li> </ul>
     */
    inline ReplaceRootVolumeTaskState GetTaskState() const { return m_taskState; }
    inline bool TaskStateHasBeenSet() const { return m_taskStateHasBeenSet; }
    inline void SetTaskState(ReplaceRootVolumeTaskState value) { m_taskStateHasBeenSet = true; m_taskState = value; }
    inline ReplaceRootVolumeTask& WithTaskState(ReplaceRootVolumeTaskState value) { SetTaskState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the task was started.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    ReplaceRootVolumeTask& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the task completed.</p>
     */
    inline const Aws::String& GetCompleteTime() const { return m_completeTime; }
    inline bool CompleteTimeHasBeenSet() const { return m_completeTimeHasBeenSet; }
    template<typename CompleteTimeT = Aws::String>
    void SetCompleteTime(CompleteTimeT&& value) { m_completeTimeHasBeenSet = true; m_completeTime = std::forward<CompleteTimeT>(value); }
    template<typename CompleteTimeT = Aws::String>
    ReplaceRootVolumeTask& WithCompleteTime(CompleteTimeT&& value) { SetCompleteTime(std::forward<CompleteTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ReplaceRootVolumeTask& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ReplaceRootVolumeTask& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI used to create the replacement root volume.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ReplaceRootVolumeTask& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot used to create the replacement root volume.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    ReplaceRootVolumeTask& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the original root volume is to be deleted after the root
     * volume replacement task completes.</p>
     */
    inline bool GetDeleteReplacedRootVolume() const { return m_deleteReplacedRootVolume; }
    inline bool DeleteReplacedRootVolumeHasBeenSet() const { return m_deleteReplacedRootVolumeHasBeenSet; }
    inline void SetDeleteReplacedRootVolume(bool value) { m_deleteReplacedRootVolumeHasBeenSet = true; m_deleteReplacedRootVolume = value; }
    inline ReplaceRootVolumeTask& WithDeleteReplacedRootVolume(bool value) { SetDeleteReplacedRootVolume(value); return *this;}
    ///@}
  private:

    Aws::String m_replaceRootVolumeTaskId;
    bool m_replaceRootVolumeTaskIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    ReplaceRootVolumeTaskState m_taskState{ReplaceRootVolumeTaskState::NOT_SET};
    bool m_taskStateHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_completeTime;
    bool m_completeTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    bool m_deleteReplacedRootVolume{false};
    bool m_deleteReplacedRootVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
