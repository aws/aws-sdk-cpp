/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/OperatorRequest.h>
#include <aws/ec2/model/PlacementStrategy.h>
#include <aws/ec2/model/SpreadLevel.h>
#include <aws/ec2/model/TagSpecification.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreatePlacementGroupRequest : public EC2Request {
 public:
  AWS_EC2_API CreatePlacementGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePlacementGroup"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The number of partitions. Valid only when <b>Strategy</b> is set to
   * <code>partition</code>.</p>
   */
  inline int GetPartitionCount() const { return m_partitionCount; }
  inline bool PartitionCountHasBeenSet() const { return m_partitionCountHasBeenSet; }
  inline void SetPartitionCount(int value) {
    m_partitionCountHasBeenSet = true;
    m_partitionCount = value;
  }
  inline CreatePlacementGroupRequest& WithPartitionCount(int value) {
    SetPartitionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the new placement group.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreatePlacementGroupRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreatePlacementGroupRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines how placement groups spread instances. </p> <ul> <li> <p>Host –
   * You can use <code>host</code> only with Outpost placement groups.</p> </li> <li>
   * <p>Rack – No usage restrictions.</p> </li> </ul>
   */
  inline SpreadLevel GetSpreadLevel() const { return m_spreadLevel; }
  inline bool SpreadLevelHasBeenSet() const { return m_spreadLevelHasBeenSet; }
  inline void SetSpreadLevel(SpreadLevel value) {
    m_spreadLevelHasBeenSet = true;
    m_spreadLevel = value;
  }
  inline CreatePlacementGroupRequest& WithSpreadLevel(SpreadLevel value) {
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
  CreatePlacementGroupRequest& WithLinkedGroupId(LinkedGroupIdT&& value) {
    SetLinkedGroupId(std::forward<LinkedGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved for internal use.</p>
   */
  inline const OperatorRequest& GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  template <typename OperatorT = OperatorRequest>
  void SetOperator(OperatorT&& value) {
    m_operatorHasBeenSet = true;
    m_operator = std::forward<OperatorT>(value);
  }
  template <typename OperatorT = OperatorRequest>
  CreatePlacementGroupRequest& WithOperator(OperatorT&& value) {
    SetOperator(std::forward<OperatorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the operation, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CreatePlacementGroupRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name for the placement group. Must be unique within the scope of your
   * account for the Region.</p> <p>Constraints: Up to 255 ASCII characters</p>
   */
  inline const Aws::String& GetGroupName() const { return m_groupName; }
  inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
  template <typename GroupNameT = Aws::String>
  void SetGroupName(GroupNameT&& value) {
    m_groupNameHasBeenSet = true;
    m_groupName = std::forward<GroupNameT>(value);
  }
  template <typename GroupNameT = Aws::String>
  CreatePlacementGroupRequest& WithGroupName(GroupNameT&& value) {
    SetGroupName(std::forward<GroupNameT>(value));
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
  inline CreatePlacementGroupRequest& WithStrategy(PlacementStrategy value) {
    SetStrategy(value);
    return *this;
  }
  ///@}
 private:
  int m_partitionCount{0};

  Aws::Vector<TagSpecification> m_tagSpecifications;

  SpreadLevel m_spreadLevel{SpreadLevel::NOT_SET};

  Aws::String m_linkedGroupId;

  OperatorRequest m_operator;

  bool m_dryRun{false};

  Aws::String m_groupName;

  PlacementStrategy m_strategy{PlacementStrategy::NOT_SET};
  bool m_partitionCountHasBeenSet = false;
  bool m_tagSpecificationsHasBeenSet = false;
  bool m_spreadLevelHasBeenSet = false;
  bool m_linkedGroupIdHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_groupNameHasBeenSet = false;
  bool m_strategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
