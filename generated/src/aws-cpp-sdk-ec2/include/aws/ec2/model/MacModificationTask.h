/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/MacSystemIntegrityProtectionConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/MacModificationTaskState.h>
#include <aws/ec2/model/MacModificationTaskType.h>
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
   * <p>Information about a System Integrity Protection (SIP) modification task or
   * volume ownership delegation task for an Amazon EC2 Mac instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MacModificationTask">AWS
   * API Reference</a></p>
   */
  class MacModificationTask
  {
  public:
    AWS_EC2_API MacModificationTask() = default;
    AWS_EC2_API MacModificationTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MacModificationTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon EC2 Mac instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    MacModificationTask& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of task.</p>
     */
    inline const Aws::String& GetMacModificationTaskId() const { return m_macModificationTaskId; }
    inline bool MacModificationTaskIdHasBeenSet() const { return m_macModificationTaskIdHasBeenSet; }
    template<typename MacModificationTaskIdT = Aws::String>
    void SetMacModificationTaskId(MacModificationTaskIdT&& value) { m_macModificationTaskIdHasBeenSet = true; m_macModificationTaskId = std::forward<MacModificationTaskIdT>(value); }
    template<typename MacModificationTaskIdT = Aws::String>
    MacModificationTask& WithMacModificationTaskId(MacModificationTaskIdT&& value) { SetMacModificationTaskId(std::forward<MacModificationTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[SIP modification tasks only] Information about the SIP configuration.</p>
     */
    inline const MacSystemIntegrityProtectionConfiguration& GetMacSystemIntegrityProtectionConfig() const { return m_macSystemIntegrityProtectionConfig; }
    inline bool MacSystemIntegrityProtectionConfigHasBeenSet() const { return m_macSystemIntegrityProtectionConfigHasBeenSet; }
    template<typename MacSystemIntegrityProtectionConfigT = MacSystemIntegrityProtectionConfiguration>
    void SetMacSystemIntegrityProtectionConfig(MacSystemIntegrityProtectionConfigT&& value) { m_macSystemIntegrityProtectionConfigHasBeenSet = true; m_macSystemIntegrityProtectionConfig = std::forward<MacSystemIntegrityProtectionConfigT>(value); }
    template<typename MacSystemIntegrityProtectionConfigT = MacSystemIntegrityProtectionConfiguration>
    MacModificationTask& WithMacSystemIntegrityProtectionConfig(MacSystemIntegrityProtectionConfigT&& value) { SetMacSystemIntegrityProtectionConfig(std::forward<MacSystemIntegrityProtectionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the task was created, in the UTC timezone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    MacModificationTask& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    MacModificationTask& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    MacModificationTask& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the task.</p>
     */
    inline MacModificationTaskState GetTaskState() const { return m_taskState; }
    inline bool TaskStateHasBeenSet() const { return m_taskStateHasBeenSet; }
    inline void SetTaskState(MacModificationTaskState value) { m_taskStateHasBeenSet = true; m_taskState = value; }
    inline MacModificationTask& WithTaskState(MacModificationTaskState value) { SetTaskState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of task.</p>
     */
    inline MacModificationTaskType GetTaskType() const { return m_taskType; }
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }
    inline void SetTaskType(MacModificationTaskType value) { m_taskTypeHasBeenSet = true; m_taskType = value; }
    inline MacModificationTask& WithTaskType(MacModificationTaskType value) { SetTaskType(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_macModificationTaskId;
    bool m_macModificationTaskIdHasBeenSet = false;

    MacSystemIntegrityProtectionConfiguration m_macSystemIntegrityProtectionConfig;
    bool m_macSystemIntegrityProtectionConfigHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    MacModificationTaskState m_taskState{MacModificationTaskState::NOT_SET};
    bool m_taskStateHasBeenSet = false;

    MacModificationTaskType m_taskType{MacModificationTaskType::NOT_SET};
    bool m_taskTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
