/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PlacementGroupState.h>
#include <aws/ec2/model/PlacementStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SpreadLevel.h>
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
   * <p>Describes a placement group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PlacementGroup">AWS
   * API Reference</a></p>
   */
  class PlacementGroup
  {
  public:
    AWS_EC2_API PlacementGroup();
    AWS_EC2_API PlacementGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PlacementGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the placement group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline PlacementGroup& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline PlacementGroup& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline PlacementGroup& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the placement group.</p>
     */
    inline const PlacementGroupState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const PlacementGroupState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(PlacementGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline PlacementGroup& WithState(const PlacementGroupState& value) { SetState(value); return *this;}
    inline PlacementGroup& WithState(PlacementGroupState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement strategy.</p>
     */
    inline const PlacementStrategy& GetStrategy() const{ return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(const PlacementStrategy& value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline void SetStrategy(PlacementStrategy&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }
    inline PlacementGroup& WithStrategy(const PlacementStrategy& value) { SetStrategy(value); return *this;}
    inline PlacementGroup& WithStrategy(PlacementStrategy&& value) { SetStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of partitions. Valid only if <b>strategy</b> is set to
     * <code>partition</code>.</p>
     */
    inline int GetPartitionCount() const{ return m_partitionCount; }
    inline bool PartitionCountHasBeenSet() const { return m_partitionCountHasBeenSet; }
    inline void SetPartitionCount(int value) { m_partitionCountHasBeenSet = true; m_partitionCount = value; }
    inline PlacementGroup& WithPartitionCount(int value) { SetPartitionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the placement group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline PlacementGroup& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline PlacementGroup& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline PlacementGroup& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags applied to the placement group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PlacementGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PlacementGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PlacementGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PlacementGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the placement group.</p>
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }
    inline void SetGroupArn(const Aws::String& value) { m_groupArnHasBeenSet = true; m_groupArn = value; }
    inline void SetGroupArn(Aws::String&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::move(value); }
    inline void SetGroupArn(const char* value) { m_groupArnHasBeenSet = true; m_groupArn.assign(value); }
    inline PlacementGroup& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}
    inline PlacementGroup& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}
    inline PlacementGroup& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The spread level for the placement group. <i>Only</i> Outpost placement
     * groups can be spread across hosts.</p>
     */
    inline const SpreadLevel& GetSpreadLevel() const{ return m_spreadLevel; }
    inline bool SpreadLevelHasBeenSet() const { return m_spreadLevelHasBeenSet; }
    inline void SetSpreadLevel(const SpreadLevel& value) { m_spreadLevelHasBeenSet = true; m_spreadLevel = value; }
    inline void SetSpreadLevel(SpreadLevel&& value) { m_spreadLevelHasBeenSet = true; m_spreadLevel = std::move(value); }
    inline PlacementGroup& WithSpreadLevel(const SpreadLevel& value) { SetSpreadLevel(value); return *this;}
    inline PlacementGroup& WithSpreadLevel(SpreadLevel&& value) { SetSpreadLevel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    PlacementGroupState m_state;
    bool m_stateHasBeenSet = false;

    PlacementStrategy m_strategy;
    bool m_strategyHasBeenSet = false;

    int m_partitionCount;
    bool m_partitionCountHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet = false;

    SpreadLevel m_spreadLevel;
    bool m_spreadLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
