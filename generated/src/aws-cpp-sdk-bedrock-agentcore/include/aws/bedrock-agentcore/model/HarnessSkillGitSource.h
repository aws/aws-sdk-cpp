/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessSkillGitAuth.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>A git repository source for a skill.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessSkillGitSource">AWS
 * API Reference</a></p>
 */
class HarnessSkillGitSource {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessSkillGitSource() = default;
  AWS_BEDROCKAGENTCORE_API HarnessSkillGitSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessSkillGitSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTPS URL of the git repository.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  HarnessSkillGitSource& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Subdirectory within the repository containing the skill.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  HarnessSkillGitSource& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Authentication configuration for private repositories.</p>
   */
  inline const HarnessSkillGitAuth& GetAuth() const { return m_auth; }
  inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }
  template <typename AuthT = HarnessSkillGitAuth>
  void SetAuth(AuthT&& value) {
    m_authHasBeenSet = true;
    m_auth = std::forward<AuthT>(value);
  }
  template <typename AuthT = HarnessSkillGitAuth>
  HarnessSkillGitSource& WithAuth(AuthT&& value) {
    SetAuth(std::forward<AuthT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_url;

  Aws::String m_path;

  HarnessSkillGitAuth m_auth;
  bool m_urlHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_authHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
