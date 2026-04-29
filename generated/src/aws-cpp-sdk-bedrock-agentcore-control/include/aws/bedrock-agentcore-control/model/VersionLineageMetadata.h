/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/VersionCreatedBySource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>The version lineage metadata that tracks parent versions and creation source.
 * Supports git-like two-parent merges for branch management.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/VersionLineageMetadata">AWS
 * API Reference</a></p>
 */
class VersionLineageMetadata {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API VersionLineageMetadata() = default;
  AWS_BEDROCKAGENTCORECONTROL_API VersionLineageMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API VersionLineageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of parent version identifiers. Regular commits have 0-1 parents. Merge
   * commits have 2 parents: the target branch parent and the source branch parent.
   * The first parent represents the primary lineage.</p>
   */
  inline const Aws::Vector<Aws::String>& GetParentVersionIds() const { return m_parentVersionIds; }
  inline bool ParentVersionIdsHasBeenSet() const { return m_parentVersionIdsHasBeenSet; }
  template <typename ParentVersionIdsT = Aws::Vector<Aws::String>>
  void SetParentVersionIds(ParentVersionIdsT&& value) {
    m_parentVersionIdsHasBeenSet = true;
    m_parentVersionIds = std::forward<ParentVersionIdsT>(value);
  }
  template <typename ParentVersionIdsT = Aws::Vector<Aws::String>>
  VersionLineageMetadata& WithParentVersionIds(ParentVersionIdsT&& value) {
    SetParentVersionIds(std::forward<ParentVersionIdsT>(value));
    return *this;
  }
  template <typename ParentVersionIdsT = Aws::String>
  VersionLineageMetadata& AddParentVersionIds(ParentVersionIdsT&& value) {
    m_parentVersionIdsHasBeenSet = true;
    m_parentVersionIds.emplace_back(std::forward<ParentVersionIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The branch name for this version. If not specified, inherits the parent's
   * branch or defaults to <code>mainline</code>.</p>
   */
  inline const Aws::String& GetBranchName() const { return m_branchName; }
  inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
  template <typename BranchNameT = Aws::String>
  void SetBranchName(BranchNameT&& value) {
    m_branchNameHasBeenSet = true;
    m_branchName = std::forward<BranchNameT>(value);
  }
  template <typename BranchNameT = Aws::String>
  VersionLineageMetadata& WithBranchName(BranchNameT&& value) {
    SetBranchName(std::forward<BranchNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source that created this version.</p>
   */
  inline const VersionCreatedBySource& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = VersionCreatedBySource>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = VersionCreatedBySource>
  VersionLineageMetadata& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A commit message describing the changes in this version.</p>
   */
  inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
  inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
  template <typename CommitMessageT = Aws::String>
  void SetCommitMessage(CommitMessageT&& value) {
    m_commitMessageHasBeenSet = true;
    m_commitMessage = std::forward<CommitMessageT>(value);
  }
  template <typename CommitMessageT = Aws::String>
  VersionLineageMetadata& WithCommitMessage(CommitMessageT&& value) {
    SetCommitMessage(std::forward<CommitMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_parentVersionIds;

  Aws::String m_branchName;

  VersionCreatedBySource m_createdBy;

  Aws::String m_commitMessage;
  bool m_parentVersionIdsHasBeenSet = false;
  bool m_branchNameHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_commitMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
