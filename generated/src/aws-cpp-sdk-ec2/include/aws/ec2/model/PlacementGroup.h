/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/OperatorResponse.h>
#include <aws/ec2/model/PlacementGroupState.h>
#include <aws/ec2/model/PlacementStrategy.h>
#include <aws/ec2/model/SpreadLevel.h>
#include <aws/ec2/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a placement group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PlacementGroup">AWS
 * API Reference</a></p>
 */
class PlacementGroup {
 public:
  AWS_EC2_API PlacementGroup() = default;
  AWS_EC2_API PlacementGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API PlacementGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The name of the placement group.</p>
   */
  inline const Aws::String& GetGroupName() const { return m_groupName; }
  inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
  template <typename GroupNameT = Aws::String>
  void SetGroupName(GroupNameT&& value) {
    m_groupNameHasBeenSet = true;
    m_groupName = std::forward<GroupNameT>(value);
  }
  template <typename GroupNameT = Aws::String>
  PlacementGroup& WithGroupName(GroupNameT&& value) {
    SetGroupName(std::forward<GroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the placement group.</p>
   */
  inline PlacementGroupState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(PlacementGroupState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline PlacementGroup& WithState(PlacementGroupState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The placement strategy.</p>
   */
  inline PlacementStrategy GetStrategy() const { return m_strategy; }
  inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
  inline void SetStrategy(PlacementStrategy value) {
    m_strategyHasBeenSet = true;
    m_strategy = value;
  }
  inline PlacementGroup& WithStrategy(PlacementStrategy value) {
    SetStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of partitions. Valid only if <b>strategy</b> is set to
   * <code>partition</code>.</p>
   */
  inline int GetPartitionCount() const { return m_partitionCount; }
  inline bool PartitionCountHasBeenSet() const { return m_partitionCountHasBeenSet; }
  inline void SetPartitionCount(int value) {
    m_partitionCountHasBeenSet = true;
    m_partitionCount = value;
  }
  inline PlacementGroup& WithPartitionCount(int value) {
    SetPartitionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the placement group.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  PlacementGroup& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any tags applied to the placement group.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  PlacementGroup& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  PlacementGroup& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the placement group.</p>
   */
  inline const Aws::String& GetGroupArn() const { return m_groupArn; }
  inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }
  template <typename GroupArnT = Aws::String>
  void SetGroupArn(GroupArnT&& value) {
    m_groupArnHasBeenSet = true;
    m_groupArn = std::forward<GroupArnT>(value);
  }
  template <typename GroupArnT = Aws::String>
  PlacementGroup& WithGroupArn(GroupArnT&& value) {
    SetGroupArn(std::forward<GroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The spread level for the placement group. <i>Only</i> Outpost placement
   * groups can be spread across hosts.</p>
   */
  inline SpreadLevel GetSpreadLevel() const { return m_spreadLevel; }
  inline bool SpreadLevelHasBeenSet() const { return m_spreadLevelHasBeenSet; }
  inline void SetSpreadLevel(SpreadLevel value) {
    m_spreadLevelHasBeenSet = true;
    m_spreadLevel = value;
  }
  inline PlacementGroup& WithSpreadLevel(SpreadLevel value) {
    SetSpreadLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved for future use.</p>
   */
  inline const Aws::String& GetLinkedGroupId() const { return m_linkedGroupId; }
  inline bool LinkedGroupIdHasBeenSet() const { return m_linkedGroupIdHasBeenSet; }
  template <typename LinkedGroupIdT = Aws::String>
  void SetLinkedGroupId(LinkedGroupIdT&& value) {
    m_linkedGroupIdHasBeenSet = true;
    m_linkedGroupId = std::forward<LinkedGroupIdT>(value);
  }
  template <typename LinkedGroupIdT = Aws::String>
  PlacementGroup& WithLinkedGroupId(LinkedGroupIdT&& value) {
    SetLinkedGroupId(std::forward<LinkedGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service provider that manages the Placement Group.</p>
   */
  inline const OperatorResponse& GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  template <typename OperatorT = OperatorResponse>
  void SetOperator(OperatorT&& value) {
    m_operatorHasBeenSet = true;
    m_operator = std::forward<OperatorT>(value);
  }
  template <typename OperatorT = OperatorResponse>
  PlacementGroup& WithOperator(OperatorT&& value) {
    SetOperator(std::forward<OperatorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_groupName;

  PlacementGroupState m_state{PlacementGroupState::NOT_SET};

  PlacementStrategy m_strategy{PlacementStrategy::NOT_SET};

  int m_partitionCount{0};

  Aws::String m_groupId;

  Aws::Vector<Tag> m_tags;

  Aws::String m_groupArn;

  SpreadLevel m_spreadLevel{SpreadLevel::NOT_SET};

  Aws::String m_linkedGroupId;

  OperatorResponse m_operator;
  bool m_groupNameHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_strategyHasBeenSet = false;
  bool m_partitionCountHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_groupArnHasBeenSet = false;
  bool m_spreadLevelHasBeenSet = false;
  bool m_linkedGroupIdHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
