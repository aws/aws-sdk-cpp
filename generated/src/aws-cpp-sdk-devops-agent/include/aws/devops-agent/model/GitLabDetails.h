/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/GitLabTokenType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Service details for GitLab integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GitLabDetails">AWS
 * API Reference</a></p>
 */
class GitLabDetails {
 public:
  AWS_DEVOPSAGENT_API GitLabDetails() = default;
  AWS_DEVOPSAGENT_API GitLabDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API GitLabDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>GitLab instance URL (e.g., https://gitlab.com or self-hosted instance).</p>
   */
  inline const Aws::String& GetTargetUrl() const { return m_targetUrl; }
  inline bool TargetUrlHasBeenSet() const { return m_targetUrlHasBeenSet; }
  template <typename TargetUrlT = Aws::String>
  void SetTargetUrl(TargetUrlT&& value) {
    m_targetUrlHasBeenSet = true;
    m_targetUrl = std::forward<TargetUrlT>(value);
  }
  template <typename TargetUrlT = Aws::String>
  GitLabDetails& WithTargetUrl(TargetUrlT&& value) {
    SetTargetUrl(std::forward<TargetUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of GitLab access token</p>
   */
  inline GitLabTokenType GetTokenType() const { return m_tokenType; }
  inline bool TokenTypeHasBeenSet() const { return m_tokenTypeHasBeenSet; }
  inline void SetTokenType(GitLabTokenType value) {
    m_tokenTypeHasBeenSet = true;
    m_tokenType = value;
  }
  inline GitLabDetails& WithTokenType(GitLabTokenType value) {
    SetTokenType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>GitLab access token value</p>
   */
  inline const Aws::String& GetTokenValue() const { return m_tokenValue; }
  inline bool TokenValueHasBeenSet() const { return m_tokenValueHasBeenSet; }
  template <typename TokenValueT = Aws::String>
  void SetTokenValue(TokenValueT&& value) {
    m_tokenValueHasBeenSet = true;
    m_tokenValue = std::forward<TokenValueT>(value);
  }
  template <typename TokenValueT = Aws::String>
  GitLabDetails& WithTokenValue(TokenValueT&& value) {
    SetTokenValue(std::forward<TokenValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional GitLab group ID for group-level access tokens</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  GitLabDetails& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetUrl;

  GitLabTokenType m_tokenType{GitLabTokenType::NOT_SET};

  Aws::String m_tokenValue;

  Aws::String m_groupId;
  bool m_targetUrlHasBeenSet = false;
  bool m_tokenTypeHasBeenSet = false;
  bool m_tokenValueHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
