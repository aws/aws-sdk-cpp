/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ConnectionStatus.h>

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
 * <p>The properties of a Git connection returned by get and list operations,
 * including connection status and any error details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GitPropertiesOutput">AWS
 * API Reference</a></p>
 */
class GitPropertiesOutput {
 public:
  AWS_DATAZONE_API GitPropertiesOutput() = default;
  AWS_DATAZONE_API GitPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API GitPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  GitPropertiesOutput& WithCodeConnectionArn(CodeConnectionArnT&& value) {
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
  GitPropertiesOutput& WithRepositoryId(RepositoryIdT&& value) {
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
  GitPropertiesOutput& WithDefaultBranch(DefaultBranchT&& value) {
    SetDefaultBranch(std::forward<DefaultBranchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Git connection.</p>
   */
  inline ConnectionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ConnectionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GitPropertiesOutput& WithStatus(ConnectionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message that describes why the Git connection failed. This member
   * is populated when the connection status is CREATE_FAILED or UPDATE_FAILED.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  GitPropertiesOutput& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_codeConnectionArn;

  Aws::String m_repositoryId;

  Aws::String m_defaultBranch;

  ConnectionStatus m_status{ConnectionStatus::NOT_SET};

  Aws::String m_errorMessage;
  bool m_codeConnectionArnHasBeenSet = false;
  bool m_repositoryIdHasBeenSet = false;
  bool m_defaultBranchHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
