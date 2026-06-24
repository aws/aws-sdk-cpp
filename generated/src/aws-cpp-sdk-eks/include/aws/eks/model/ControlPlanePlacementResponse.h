/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/SpreadLevel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>The placement configuration for all the control plane instances of your local
 * Amazon EKS cluster on an Amazon Web Services Outpost. For more information, see
 * <a
 * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
 * considerations</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ControlPlanePlacementResponse">AWS
 * API Reference</a></p>
 */
class ControlPlanePlacementResponse {
 public:
  AWS_EKS_API ControlPlanePlacementResponse() = default;
  AWS_EKS_API ControlPlanePlacementResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ControlPlanePlacementResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the placement group for the Kubernetes control plane
   * instances.</p>
   */
  inline const Aws::String& GetGroupName() const { return m_groupName; }
  inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
  template <typename GroupNameT = Aws::String>
  void SetGroupName(GroupNameT&& value) {
    m_groupNameHasBeenSet = true;
    m_groupName = std::forward<GroupNameT>(value);
  }
  template <typename GroupNameT = Aws::String>
  ControlPlanePlacementResponse& WithGroupName(GroupNameT&& value) {
    SetGroupName(std::forward<GroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The spread level used with the placement group for control plane instances on
   * your local Amazon EKS cluster on Amazon Web Services Outposts.</p>
   */
  inline SpreadLevel GetSpreadLevel() const { return m_spreadLevel; }
  inline bool SpreadLevelHasBeenSet() const { return m_spreadLevelHasBeenSet; }
  inline void SetSpreadLevel(SpreadLevel value) {
    m_spreadLevelHasBeenSet = true;
    m_spreadLevel = value;
  }
  inline ControlPlanePlacementResponse& WithSpreadLevel(SpreadLevel value) {
    SetSpreadLevel(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_groupName;

  SpreadLevel m_spreadLevel{SpreadLevel::NOT_SET};
  bool m_groupNameHasBeenSet = false;
  bool m_spreadLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
