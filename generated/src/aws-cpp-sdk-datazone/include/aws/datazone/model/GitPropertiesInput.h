/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Contains the Git connection properties that you specify when creating a Git
 * connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GitPropertiesInput">AWS
 * API Reference</a></p>
 */
class GitPropertiesInput {
 public:
  AWS_DATAZONE_API GitPropertiesInput() = default;
  AWS_DATAZONE_API GitPropertiesInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API GitPropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the CodeConnections connection used to connect to the Git
   * repository.</p>
   */
  inline const Aws::String& GetCodeConnectionArn() const { return m_codeConnectionArn; }
  inline bool CodeConnectionArnHasBeenSet() const { return m_codeConnectionArnHasBeenSet; }
  template <typename CodeConnectionArnT = Aws::String>
  void SetCodeConnectionArn(CodeConnectionArnT&& value) {
    m_codeConnectionArnHasBeenSet = true;
    m_codeConnectionArn = std::forward<CodeConnectionArnT>(value);
  }
  template <typename CodeConnectionArnT = Aws::String>
  GitPropertiesInput& WithCodeConnectionArn(CodeConnectionArnT&& value) {
    SetCodeConnectionArn(std::forward<CodeConnectionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Git repository. This is the owner and repository name, for
   * example, owner/repo-name.</p>
   */
  inline const Aws::String& GetRepositoryId() const { return m_repositoryId; }
  inline bool RepositoryIdHasBeenSet() const { return m_repositoryIdHasBeenSet; }
  template <typename RepositoryIdT = Aws::String>
  void SetRepositoryId(RepositoryIdT&& value) {
    m_repositoryIdHasBeenSet = true;
    m_repositoryId = std::forward<RepositoryIdT>(value);
  }
  template <typename RepositoryIdT = Aws::String>
  GitPropertiesInput& WithRepositoryId(RepositoryIdT&& value) {
    SetRepositoryId(std::forward<RepositoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default branch of the Git repository.</p>
   */
  inline const Aws::String& GetDefaultBranch() const { return m_defaultBranch; }
  inline bool DefaultBranchHasBeenSet() const { return m_defaultBranchHasBeenSet; }
  template <typename DefaultBranchT = Aws::String>
  void SetDefaultBranch(DefaultBranchT&& value) {
    m_defaultBranchHasBeenSet = true;
    m_defaultBranch = std::forward<DefaultBranchT>(value);
  }
  template <typename DefaultBranchT = Aws::String>
  GitPropertiesInput& WithDefaultBranch(DefaultBranchT&& value) {
    SetDefaultBranch(std::forward<DefaultBranchT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_codeConnectionArn;

  Aws::String m_repositoryId;

  Aws::String m_defaultBranch;
  bool m_codeConnectionArnHasBeenSet = false;
  bool m_repositoryIdHasBeenSet = false;
  bool m_defaultBranchHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
