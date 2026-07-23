/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The Git metadata for a notebook sync operation in Amazon SageMaker Unified
 * Studio. Contains information about the Git repository, branch, and commit
 * associated with the notebook.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GitMetadata">AWS
 * API Reference</a></p>
 */
class GitMetadata {
 public:
  AWS_DATAZONE_API GitMetadata() = default;
  AWS_DATAZONE_API GitMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API GitMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the Git connection.</p>
   */
  inline const Aws::String& GetConnectionId() const { return m_connectionId; }
  inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
  template <typename ConnectionIdT = Aws::String>
  void SetConnectionId(ConnectionIdT&& value) {
    m_connectionIdHasBeenSet = true;
    m_connectionId = std::forward<ConnectionIdT>(value);
  }
  template <typename ConnectionIdT = Aws::String>
  GitMetadata& WithConnectionId(ConnectionIdT&& value) {
    SetConnectionId(std::forward<ConnectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Git repository.</p>
   */
  inline const Aws::String& GetRepository() const { return m_repository; }
  inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
  template <typename RepositoryT = Aws::String>
  void SetRepository(RepositoryT&& value) {
    m_repositoryHasBeenSet = true;
    m_repository = std::forward<RepositoryT>(value);
  }
  template <typename RepositoryT = Aws::String>
  GitMetadata& WithRepository(RepositoryT&& value) {
    SetRepository(std::forward<RepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Git branch.</p>
   */
  inline const Aws::String& GetBranch() const { return m_branch; }
  inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
  template <typename BranchT = Aws::String>
  void SetBranch(BranchT&& value) {
    m_branchHasBeenSet = true;
    m_branch = std::forward<BranchT>(value);
  }
  template <typename BranchT = Aws::String>
  GitMetadata& WithBranch(BranchT&& value) {
    SetBranch(std::forward<BranchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The commit hash in the Git repository.</p>
   */
  inline const Aws::String& GetCommitHash() const { return m_commitHash; }
  inline bool CommitHashHasBeenSet() const { return m_commitHashHasBeenSet; }
  template <typename CommitHashT = Aws::String>
  void SetCommitHash(CommitHashT&& value) {
    m_commitHashHasBeenSet = true;
    m_commitHash = std::forward<CommitHashT>(value);
  }
  template <typename CommitHashT = Aws::String>
  GitMetadata& WithCommitHash(CommitHashT&& value) {
    SetCommitHash(std::forward<CommitHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the file in the Git repository.</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  GitMetadata& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the commit was made.</p>
   */
  inline const Aws::Utils::DateTime& GetCommittedAt() const { return m_committedAt; }
  inline bool CommittedAtHasBeenSet() const { return m_committedAtHasBeenSet; }
  template <typename CommittedAtT = Aws::Utils::DateTime>
  void SetCommittedAt(CommittedAtT&& value) {
    m_committedAtHasBeenSet = true;
    m_committedAt = std::forward<CommittedAtT>(value);
  }
  template <typename CommittedAtT = Aws::Utils::DateTime>
  GitMetadata& WithCommittedAt(CommittedAtT&& value) {
    SetCommittedAt(std::forward<CommittedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The commit message associated with the Git commit.</p>
   */
  inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
  inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
  template <typename CommitMessageT = Aws::String>
  void SetCommitMessage(CommitMessageT&& value) {
    m_commitMessageHasBeenSet = true;
    m_commitMessage = std::forward<CommitMessageT>(value);
  }
  template <typename CommitMessageT = Aws::String>
  GitMetadata& WithCommitMessage(CommitMessageT&& value) {
    SetCommitMessage(std::forward<CommitMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectionId;

  Aws::String m_repository;

  Aws::String m_branch;

  Aws::String m_commitHash;

  Aws::String m_fileName;

  Aws::Utils::DateTime m_committedAt{};

  Aws::String m_commitMessage;
  bool m_connectionIdHasBeenSet = false;
  bool m_repositoryHasBeenSet = false;
  bool m_branchHasBeenSet = false;
  bool m_commitHashHasBeenSet = false;
  bool m_fileNameHasBeenSet = false;
  bool m_committedAtHasBeenSet = false;
  bool m_commitMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
