/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/GitHubSynchronizedSource.h>
#include <aws/agent-registry-control/model/S3SynchronizedSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>The source that a skill record's content was last synchronized from. Exactly
 * one member is set, for the source's provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/RegistryRecordSynchronizedSource">AWS
 * API Reference</a></p>
 */
class RegistryRecordSynchronizedSource {
 public:
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordSynchronizedSource() = default;
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordSynchronizedSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordSynchronizedSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 source that the registry read.</p>
   */
  inline const S3SynchronizedSource& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = S3SynchronizedSource>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = S3SynchronizedSource>
  RegistryRecordSynchronizedSource& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The GitHub source that the registry read.</p>
   */
  inline const GitHubSynchronizedSource& GetGitHub() const { return m_gitHub; }
  inline bool GitHubHasBeenSet() const { return m_gitHubHasBeenSet; }
  template <typename GitHubT = GitHubSynchronizedSource>
  void SetGitHub(GitHubT&& value) {
    m_gitHubHasBeenSet = true;
    m_gitHub = std::forward<GitHubT>(value);
  }
  template <typename GitHubT = GitHubSynchronizedSource>
  RegistryRecordSynchronizedSource& WithGitHub(GitHubT&& value) {
    SetGitHub(std::forward<GitHubT>(value));
    return *this;
  }
  ///@}
 private:
  S3SynchronizedSource m_s3;

  GitHubSynchronizedSource m_gitHub;
  bool m_s3HasBeenSet = false;
  bool m_gitHubHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
