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


    /**
     * <p>The ID of the event window.</p>
     */
    inline const Aws::String& GetInstanceEventWindowId() const{ return m_instanceEventWindowId; }

    /**
     * <p>The ID of the event window.</p>
     */
    inline bool InstanceEventWindowIdHasBeenSet() const { return m_instanceEventWindowIdHasBeenSet; }

    /**
     * <p>The ID of the event window.</p>
     */
    inline void SetInstanceEventWindowId(const Aws::String& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = value; }

    /**
     * <p>The ID of the event window.</p>
     */
    inline void SetInstanceEventWindowId(Aws::String&& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = std::move(value); }

    /**
     * <p>The ID of the event window.</p>
     */
    inline void SetInstanceEventWindowId(const char* value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId.assign(value); }

    /**
     * <p>The ID of the event window.</p>
     */
    inline InstanceEventWindow& WithInstanceEventWindowId(const Aws::String& value) { SetInstanceEventWindowId(value); return *this;}

    /**
     * <p>The ID of the event window.</p>
     */
    inline InstanceEventWindow& WithInstanceEventWindowId(Aws::String&& value) { SetInstanceEventWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event window.</p>
     */
    inline InstanceEventWindow& WithInstanceEventWindowId(const char* value) { SetInstanceEventWindowId(value); return *this;}


    /**
     * <p>One or more time ranges defined for the event window.</p>
     */
    inline const Aws::Vector<InstanceEventWindowTimeRange>& GetTimeRanges() const{ return m_timeRanges; }

    /**
     * <p>One or more time ranges defined for the event window.</p>
     */
    inline bool TimeRangesHasBeenSet() const { return m_timeRangesHasBeenSet; }

    /**
     * <p>One or more time ranges defined for the event window.</p>
     */
    inline void SetTimeRanges(const Aws::Vector<InstanceEventWindowTimeRange>& value) { m_timeRangesHasBeenSet = true; m_timeRanges = value; }

    /**
     * <p>One or more time ranges defined for the event window.</p>
     */
    inline void SetTimeRanges(Aws::Vector<InstanceEventWindowTimeRange>&& value) { m_timeRangesHasBeenSet = true; m_timeRanges = std::move(value); }

    /**
     * <p>One or more time ranges defined for the event window.</p>
     */
    inline InstanceEventWindow& WithTimeRanges(const Aws::Vector<InstanceEventWindowTimeRange>& value) { SetTimeRanges(value); return *this;}

    /**
     * <p>One or more time ranges defined for the event window.</p>
     */
    inline InstanceEventWindow& WithTimeRanges(Aws::Vector<InstanceEventWindowTimeRange>&& value) { SetTimeRanges(std::move(value)); return *this;}

    /**
     * <p>One or more time ranges defined for the event window.</p>
     */
    inline InstanceEventWindow& AddTimeRanges(const InstanceEventWindowTimeRange& value) { m_timeRangesHasBeenSet = true; m_timeRanges.push_back(value); return *this; }

    /**
     * <p>One or more time ranges defined for the event window.</p>
     */
    inline InstanceEventWindow& AddTimeRanges(InstanceEventWindowTimeRange&& value) { m_timeRangesHasBeenSet = true; m_timeRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the event window.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event window.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the event window.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the event window.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the event window.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the event window.</p>
     */
    inline InstanceEventWindow& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event window.</p>
     */
    inline InstanceEventWindow& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event window.</p>
     */
    inline InstanceEventWindow& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The cron expression defined for the event window.</p>
     */
    inline const Aws::String& GetCronExpression() const{ return m_cronExpression; }

    /**
     * <p>The cron expression defined for the event window.</p>
     */
    inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }

    /**
     * <p>The cron expression defined for the event window.</p>
     */
    inline void SetCronExpression(const Aws::String& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = value; }

    /**
     * <p>The cron expression defined for the event window.</p>
     */
    inline void SetCronExpression(Aws::String&& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = std::move(value); }

    /**
     * <p>The cron expression defined for the event window.</p>
     */
    inline void SetCronExpression(const char* value) { m_cronExpressionHasBeenSet = true; m_cronExpression.assign(value); }

    /**
     * <p>The cron expression defined for the event window.</p>
     */
    inline InstanceEventWindow& WithCronExpression(const Aws::String& value) { SetCronExpression(value); return *this;}

    /**
     * <p>The cron expression defined for the event window.</p>
     */
    inline InstanceEventWindow& WithCronExpression(Aws::String&& value) { SetCronExpression(std::move(value)); return *this;}

    /**
     * <p>The cron expression defined for the event window.</p>
     */
    inline InstanceEventWindow& WithCronExpression(const char* value) { SetCronExpression(value); return *this;}


    /**
     * <p>One or more targets associated with the event window.</p>
     */
    inline const InstanceEventWindowAssociationTarget& GetAssociationTarget() const{ return m_associationTarget; }

    /**
     * <p>One or more targets associated with the event window.</p>
     */
    inline bool AssociationTargetHasBeenSet() const { return m_associationTargetHasBeenSet; }

    /**
     * <p>One or more targets associated with the event window.</p>
     */
    inline void SetAssociationTarget(const InstanceEventWindowAssociationTarget& value) { m_associationTargetHasBeenSet = true; m_associationTarget = value; }

    /**
     * <p>One or more targets associated with the event window.</p>
     */
    inline void SetAssociationTarget(InstanceEventWindowAssociationTarget&& value) { m_associationTargetHasBeenSet = true; m_associationTarget = std::move(value); }

    /**
     * <p>One or more targets associated with the event window.</p>
     */
    inline InstanceEventWindow& WithAssociationTarget(const InstanceEventWindowAssociationTarget& value) { SetAssociationTarget(value); return *this;}

    /**
     * <p>One or more targets associated with the event window.</p>
     */
    inline InstanceEventWindow& WithAssociationTarget(InstanceEventWindowAssociationTarget&& value) { SetAssociationTarget(std::move(value)); return *this;}


    /**
     * <p>The current state of the event window.</p>
     */
    inline const InstanceEventWindowState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the event window.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the event window.</p>
     */
    inline void SetState(const InstanceEventWindowState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the event window.</p>
     */
    inline void SetState(InstanceEventWindowState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the event window.</p>
     */
    inline InstanceEventWindow& WithState(const InstanceEventWindowState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the event window.</p>
     */
    inline InstanceEventWindow& WithState(InstanceEventWindowState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The instance tags associated with the event window.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The instance tags associated with the event window.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The instance tags associated with the event window.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The instance tags associated with the event window.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The instance tags associated with the event window.</p>
     */
    inline InstanceEventWindow& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The instance tags associated with the event window.</p>
     */
    inline InstanceEventWindow& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The instance tags associated with the event window.</p>
     */
    inline InstanceEventWindow& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The instance tags associated with the event window.</p>
     */
    inline InstanceEventWindow& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
