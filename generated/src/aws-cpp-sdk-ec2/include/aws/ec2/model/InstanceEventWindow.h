/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceEventWindowAssociationTarget.h>
#include <aws/ec2/model/InstanceEventWindowState.h>
#include <aws/ec2/model/InstanceEventWindowTimeRange.h>
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
   * <p>The event window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceEventWindow">AWS
   * API Reference</a></p>
   */
  class InstanceEventWindow
  {
  public:
    AWS_EC2_API InstanceEventWindow() = default;
    AWS_EC2_API InstanceEventWindow(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceEventWindow& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the event window.</p>
     */
    inline const Aws::String& GetInstanceEventWindowId() const { return m_instanceEventWindowId; }
    inline bool InstanceEventWindowIdHasBeenSet() const { return m_instanceEventWindowIdHasBeenSet; }
    template<typename InstanceEventWindowIdT = Aws::String>
    void SetInstanceEventWindowId(InstanceEventWindowIdT&& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = std::forward<InstanceEventWindowIdT>(value); }
    template<typename InstanceEventWindowIdT = Aws::String>
    InstanceEventWindow& WithInstanceEventWindowId(InstanceEventWindowIdT&& value) { SetInstanceEventWindowId(std::forward<InstanceEventWindowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more time ranges defined for the event window.</p>
     */
    inline const Aws::Vector<InstanceEventWindowTimeRange>& GetTimeRanges() const { return m_timeRanges; }
    inline bool TimeRangesHasBeenSet() const { return m_timeRangesHasBeenSet; }
    template<typename TimeRangesT = Aws::Vector<InstanceEventWindowTimeRange>>
    void SetTimeRanges(TimeRangesT&& value) { m_timeRangesHasBeenSet = true; m_timeRanges = std::forward<TimeRangesT>(value); }
    template<typename TimeRangesT = Aws::Vector<InstanceEventWindowTimeRange>>
    InstanceEventWindow& WithTimeRanges(TimeRangesT&& value) { SetTimeRanges(std::forward<TimeRangesT>(value)); return *this;}
    template<typename TimeRangesT = InstanceEventWindowTimeRange>
    InstanceEventWindow& AddTimeRanges(TimeRangesT&& value) { m_timeRangesHasBeenSet = true; m_timeRanges.emplace_back(std::forward<TimeRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the event window.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InstanceEventWindow& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cron expression defined for the event window.</p>
     */
    inline const Aws::String& GetCronExpression() const { return m_cronExpression; }
    inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }
    template<typename CronExpressionT = Aws::String>
    void SetCronExpression(CronExpressionT&& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = std::forward<CronExpressionT>(value); }
    template<typename CronExpressionT = Aws::String>
    InstanceEventWindow& WithCronExpression(CronExpressionT&& value) { SetCronExpression(std::forward<CronExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more targets associated with the event window.</p>
     */
    inline const InstanceEventWindowAssociationTarget& GetAssociationTarget() const { return m_associationTarget; }
    inline bool AssociationTargetHasBeenSet() const { return m_associationTargetHasBeenSet; }
    template<typename AssociationTargetT = InstanceEventWindowAssociationTarget>
    void SetAssociationTarget(AssociationTargetT&& value) { m_associationTargetHasBeenSet = true; m_associationTarget = std::forward<AssociationTargetT>(value); }
    template<typename AssociationTargetT = InstanceEventWindowAssociationTarget>
    InstanceEventWindow& WithAssociationTarget(AssociationTargetT&& value) { SetAssociationTarget(std::forward<AssociationTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the event window.</p>
     */
    inline InstanceEventWindowState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(InstanceEventWindowState value) { m_stateHasBeenSet = true; m_state = value; }
    inline InstanceEventWindow& WithState(InstanceEventWindowState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance tags associated with the event window.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    InstanceEventWindow& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    InstanceEventWindow& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceEventWindowId;
    bool m_instanceEventWindowIdHasBeenSet = false;

    Aws::Vector<InstanceEventWindowTimeRange> m_timeRanges;
    bool m_timeRangesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_cronExpression;
    bool m_cronExpressionHasBeenSet = false;

    InstanceEventWindowAssociationTarget m_associationTarget;
    bool m_associationTargetHasBeenSet = false;

    InstanceEventWindowState m_state{InstanceEventWindowState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
