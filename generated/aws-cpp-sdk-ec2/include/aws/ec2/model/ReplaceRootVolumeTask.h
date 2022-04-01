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
  class AWS_EC2_API ReplaceRootVolumeTask
  {
  public:
    ReplaceRootVolumeTask();
    ReplaceRootVolumeTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReplaceRootVolumeTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the root volume replacement task.</p>
     */
    inline const Aws::String& GetReplaceRootVolumeTaskId() const{ return m_replaceRootVolumeTaskId; }

    /**
     * <p>The ID of the root volume replacement task.</p>
     */
    inline bool ReplaceRootVolumeTaskIdHasBeenSet() const { return m_replaceRootVolumeTaskIdHasBeenSet; }

    /**
     * <p>The ID of the root volume replacement task.</p>
     */
    inline void SetReplaceRootVolumeTaskId(const Aws::String& value) { m_replaceRootVolumeTaskIdHasBeenSet = true; m_replaceRootVolumeTaskId = value; }

    /**
     * <p>The ID of the root volume replacement task.</p>
     */
    inline void SetReplaceRootVolumeTaskId(Aws::String&& value) { m_replaceRootVolumeTaskIdHasBeenSet = true; m_replaceRootVolumeTaskId = std::move(value); }

    /**
     * <p>The ID of the root volume replacement task.</p>
     */
    inline void SetReplaceRootVolumeTaskId(const char* value) { m_replaceRootVolumeTaskIdHasBeenSet = true; m_replaceRootVolumeTaskId.assign(value); }

    /**
     * <p>The ID of the root volume replacement task.</p>
     */
    inline ReplaceRootVolumeTask& WithReplaceRootVolumeTaskId(const Aws::String& value) { SetReplaceRootVolumeTaskId(value); return *this;}

    /**
     * <p>The ID of the root volume replacement task.</p>
     */
    inline ReplaceRootVolumeTask& WithReplaceRootVolumeTaskId(Aws::String&& value) { SetReplaceRootVolumeTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the root volume replacement task.</p>
     */
    inline ReplaceRootVolumeTask& WithReplaceRootVolumeTaskId(const char* value) { SetReplaceRootVolumeTaskId(value); return *this;}


    /**
     * <p>The ID of the instance for which the root volume replacement task was
     * created.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance for which the root volume replacement task was
     * created.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance for which the root volume replacement task was
     * created.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance for which the root volume replacement task was
     * created.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance for which the root volume replacement task was
     * created.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance for which the root volume replacement task was
     * created.</p>
     */
    inline ReplaceRootVolumeTask& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance for which the root volume replacement task was
     * created.</p>
     */
    inline ReplaceRootVolumeTask& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance for which the root volume replacement task was
     * created.</p>
     */
    inline ReplaceRootVolumeTask& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


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
    inline const ReplaceRootVolumeTaskState& GetTaskState() const{ return m_taskState; }

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
    inline bool TaskStateHasBeenSet() const { return m_taskStateHasBeenSet; }

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
    inline void SetTaskState(const ReplaceRootVolumeTaskState& value) { m_taskStateHasBeenSet = true; m_taskState = value; }

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
    inline void SetTaskState(ReplaceRootVolumeTaskState&& value) { m_taskStateHasBeenSet = true; m_taskState = std::move(value); }

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
    inline ReplaceRootVolumeTask& WithTaskState(const ReplaceRootVolumeTaskState& value) { SetTaskState(value); return *this;}

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
    inline ReplaceRootVolumeTask& WithTaskState(ReplaceRootVolumeTaskState&& value) { SetTaskState(std::move(value)); return *this;}


    /**
     * <p>The time the task was started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the task was started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time the task was started.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the task was started.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time the task was started.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>The time the task was started.</p>
     */
    inline ReplaceRootVolumeTask& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the task was started.</p>
     */
    inline ReplaceRootVolumeTask& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The time the task was started.</p>
     */
    inline ReplaceRootVolumeTask& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>The time the task completed.</p>
     */
    inline const Aws::String& GetCompleteTime() const{ return m_completeTime; }

    /**
     * <p>The time the task completed.</p>
     */
    inline bool CompleteTimeHasBeenSet() const { return m_completeTimeHasBeenSet; }

    /**
     * <p>The time the task completed.</p>
     */
    inline void SetCompleteTime(const Aws::String& value) { m_completeTimeHasBeenSet = true; m_completeTime = value; }

    /**
     * <p>The time the task completed.</p>
     */
    inline void SetCompleteTime(Aws::String&& value) { m_completeTimeHasBeenSet = true; m_completeTime = std::move(value); }

    /**
     * <p>The time the task completed.</p>
     */
    inline void SetCompleteTime(const char* value) { m_completeTimeHasBeenSet = true; m_completeTime.assign(value); }

    /**
     * <p>The time the task completed.</p>
     */
    inline ReplaceRootVolumeTask& WithCompleteTime(const Aws::String& value) { SetCompleteTime(value); return *this;}

    /**
     * <p>The time the task completed.</p>
     */
    inline ReplaceRootVolumeTask& WithCompleteTime(Aws::String&& value) { SetCompleteTime(std::move(value)); return *this;}

    /**
     * <p>The time the task completed.</p>
     */
    inline ReplaceRootVolumeTask& WithCompleteTime(const char* value) { SetCompleteTime(value); return *this;}


    /**
     * <p>The tags assigned to the task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the task.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the task.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the task.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the task.</p>
     */
    inline ReplaceRootVolumeTask& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the task.</p>
     */
    inline ReplaceRootVolumeTask& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the task.</p>
     */
    inline ReplaceRootVolumeTask& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the task.</p>
     */
    inline ReplaceRootVolumeTask& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_replaceRootVolumeTaskId;
    bool m_replaceRootVolumeTaskIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    ReplaceRootVolumeTaskState m_taskState;
    bool m_taskStateHasBeenSet;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::String m_completeTime;
    bool m_completeTimeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
