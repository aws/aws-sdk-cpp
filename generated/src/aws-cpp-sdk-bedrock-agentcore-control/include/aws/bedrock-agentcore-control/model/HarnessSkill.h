/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessSkillGitSource.h>
#include <aws/bedrock-agentcore-control/model/HarnessSkillS3Source.h>
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
 * <p>A skill available to the agent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessSkill">AWS
 * API Reference</a></p>
 */
class HarnessSkill {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkill() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkill(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkill& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filesystem path to the skill definition.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  HarnessSkill& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An S3 source containing the skill.</p>
   */
  inline const HarnessSkillS3Source& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = HarnessSkillS3Source>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = HarnessSkillS3Source>
  HarnessSkill& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A git repository containing the skill.</p>
   */
  inline const HarnessSkillGitSource& GetGit() const { return m_git; }
  inline bool GitHasBeenSet() const { return m_gitHasBeenSet; }
  template <typename GitT = HarnessSkillGitSource>
  void SetGit(GitT&& value) {
    m_gitHasBeenSet = true;
    m_git = std::forward<GitT>(value);
  }
  template <typename GitT = HarnessSkillGitSource>
  HarnessSkill& WithGit(GitT&& value) {
    SetGit(std::forward<GitT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_path;

  HarnessSkillS3Source m_s3;

  HarnessSkillGitSource m_git;
  bool m_pathHasBeenSet = false;
  bool m_s3HasBeenSet = false;
  bool m_gitHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
