/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>A filter for listing configuration bundle versions.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/VersionFilter">AWS
 * API Reference</a></p>
 */
class VersionFilter {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API VersionFilter() = default;
  AWS_BEDROCKAGENTCORECONTROL_API VersionFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API VersionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by branch name.</p>
   */
  inline const Aws::String& GetBranchName() const { return m_branchName; }
  inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
  template <typename BranchNameT = Aws::String>
  void SetBranchName(BranchNameT&& value) {
    m_branchNameHasBeenSet = true;
    m_branchName = std::forward<BranchNameT>(value);
  }
  template <typename BranchNameT = Aws::String>
  VersionFilter& WithBranchName(BranchNameT&& value) {
    SetBranchName(std::forward<BranchNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by creation source name.</p>
   */
  inline const Aws::String& GetCreatedByName() const { return m_createdByName; }
  inline bool CreatedByNameHasBeenSet() const { return m_createdByNameHasBeenSet; }
  template <typename CreatedByNameT = Aws::String>
  void SetCreatedByName(CreatedByNameT&& value) {
    m_createdByNameHasBeenSet = true;
    m_createdByName = std::forward<CreatedByNameT>(value);
  }
  template <typename CreatedByNameT = Aws::String>
  VersionFilter& WithCreatedByName(CreatedByNameT&& value) {
    SetCreatedByName(std::forward<CreatedByNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When true, returns only the latest version for each branch. When false or not
   * specified, returns all versions. Can be combined with <code>branchName</code> to
   * get the latest version for a specific branch.</p>
   */
  inline bool GetLatestPerBranch() const { return m_latestPerBranch; }
  inline bool LatestPerBranchHasBeenSet() const { return m_latestPerBranchHasBeenSet; }
  inline void SetLatestPerBranch(bool value) {
    m_latestPerBranchHasBeenSet = true;
    m_latestPerBranch = value;
  }
  inline VersionFilter& WithLatestPerBranch(bool value) {
    SetLatestPerBranch(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_branchName;

  Aws::String m_createdByName;

  bool m_latestPerBranch{false};
  bool m_branchNameHasBeenSet = false;
  bool m_createdByNameHasBeenSet = false;
  bool m_latestPerBranchHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
