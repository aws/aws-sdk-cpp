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
    AWS_EC2_API InstanceEventWindow();
    AWS_EC2_API InstanceEventWindow(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceEventWindow& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the event window.</p>
     */
    inline const Aws::String& GetInstanceEventWindowId() const{ return m_instanceEventWindowId; }
    inline bool InstanceEventWindowIdHasBeenSet() const { return m_instanceEventWindowIdHasBeenSet; }
    inline void SetInstanceEventWindowId(const Aws::String& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = value; }
    inline void SetInstanceEventWindowId(Aws::String&& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = std::move(value); }
    inline void SetInstanceEventWindowId(const char* value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId.assign(value); }
    inline InstanceEventWindow& WithInstanceEventWindowId(const Aws::String& value) { SetInstanceEventWindowId(value); return *this;}
    inline InstanceEventWindow& WithInstanceEventWindowId(Aws::String&& value) { SetInstanceEventWindowId(std::move(value)); return *this;}
    inline InstanceEventWindow& WithInstanceEventWindowId(const char* value) { SetInstanceEventWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more time ranges defined for the event window.</p>
     */
    inline const Aws::Vector<InstanceEventWindowTimeRange>& GetTimeRanges() const{ return m_timeRanges; }
    inline bool TimeRangesHasBeenSet() const { return m_timeRangesHasBeenSet; }
    inline void SetTimeRanges(const Aws::Vector<InstanceEventWindowTimeRange>& value) { m_timeRangesHasBeenSet = true; m_timeRanges = value; }
    inline void SetTimeRanges(Aws::Vector<InstanceEventWindowTimeRange>&& value) { m_timeRangesHasBeenSet = true; m_timeRanges = std::move(value); }
    inline InstanceEventWindow& WithTimeRanges(const Aws::Vector<InstanceEventWindowTimeRange>& value) { SetTimeRanges(value); return *this;}
    inline InstanceEventWindow& WithTimeRanges(Aws::Vector<InstanceEventWindowTimeRange>&& value) { SetTimeRanges(std::move(value)); return *this;}
    inline InstanceEventWindow& AddTimeRanges(const InstanceEventWindowTimeRange& value) { m_timeRangesHasBeenSet = true; m_timeRanges.push_back(value); return *this; }
    inline InstanceEventWindow& AddTimeRanges(InstanceEventWindowTimeRange&& value) { m_timeRangesHasBeenSet = true; m_timeRanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the event window.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InstanceEventWindow& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InstanceEventWindow& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InstanceEventWindow& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cron expression defined for the event window.</p>
     */
    inline const Aws::String& GetCronExpression() const{ return m_cronExpression; }
    inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }
    inline void SetCronExpression(const Aws::String& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = value; }
    inline void SetCronExpression(Aws::String&& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = std::move(value); }
    inline void SetCronExpression(const char* value) { m_cronExpressionHasBeenSet = true; m_cronExpression.assign(value); }
    inline InstanceEventWindow& WithCronExpression(const Aws::String& value) { SetCronExpression(value); return *this;}
    inline InstanceEventWindow& WithCronExpression(Aws::String&& value) { SetCronExpression(std::move(value)); return *this;}
    inline InstanceEventWindow& WithCronExpression(const char* value) { SetCronExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more targets associated with the event window.</p>
     */
    inline const InstanceEventWindowAssociationTarget& GetAssociationTarget() const{ return m_associationTarget; }
    inline bool AssociationTargetHasBeenSet() const { return m_associationTargetHasBeenSet; }
    inline void SetAssociationTarget(const InstanceEventWindowAssociationTarget& value) { m_associationTargetHasBeenSet = true; m_associationTarget = value; }
    inline void SetAssociationTarget(InstanceEventWindowAssociationTarget&& value) { m_associationTargetHasBeenSet = true; m_associationTarget = std::move(value); }
    inline InstanceEventWindow& WithAssociationTarget(const InstanceEventWindowAssociationTarget& value) { SetAssociationTarget(value); return *this;}
    inline InstanceEventWindow& WithAssociationTarget(InstanceEventWindowAssociationTarget&& value) { SetAssociationTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the event window.</p>
     */
    inline const InstanceEventWindowState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const InstanceEventWindowState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(InstanceEventWindowState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline InstanceEventWindow& WithState(const InstanceEventWindowState& value) { SetState(value); return *this;}
    inline InstanceEventWindow& WithState(InstanceEventWindowState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance tags associated with the event window.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline InstanceEventWindow& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline InstanceEventWindow& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline InstanceEventWindow& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline InstanceEventWindow& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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

    InstanceEventWindowState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
