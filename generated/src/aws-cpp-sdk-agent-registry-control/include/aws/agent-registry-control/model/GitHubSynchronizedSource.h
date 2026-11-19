/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A GitHub source that a skill record's content was synchronized from, and the
 * commit that the registry read.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/GitHubSynchronizedSource">AWS
 * API Reference</a></p>
 */
class GitHubSynchronizedSource {
 public:
  AWS_AGENTREGISTRYCONTROL_API GitHubSynchronizedSource() = default;
  AWS_AGENTREGISTRYCONTROL_API GitHubSynchronizedSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API GitHubSynchronizedSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source URL that the registry read.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  GitHubSynchronizedSource& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the registry read the source.</p>
   */
  inline const Aws::Utils::DateTime& GetSynchronizedAt() const { return m_synchronizedAt; }
  inline bool SynchronizedAtHasBeenSet() const { return m_synchronizedAtHasBeenSet; }
  template <typename SynchronizedAtT = Aws::Utils::DateTime>
  void SetSynchronizedAt(SynchronizedAtT&& value) {
    m_synchronizedAtHasBeenSet = true;
    m_synchronizedAt = std::forward<SynchronizedAtT>(value);
  }
  template <typename SynchronizedAtT = Aws::Utils::DateTime>
  GitHubSynchronizedSource& WithSynchronizedAt(SynchronizedAtT&& value) {
    SetSynchronizedAt(std::forward<SynchronizedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The commit that the source's branch or tag pointed to when the registry read
   * it.</p>
   */
  inline const Aws::String& GetCommitId() const { return m_commitId; }
  inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
  template <typename CommitIdT = Aws::String>
  void SetCommitId(CommitIdT&& value) {
    m_commitIdHasBeenSet = true;
    m_commitId = std::forward<CommitIdT>(value);
  }
  template <typename CommitIdT = Aws::String>
  GitHubSynchronizedSource& WithCommitId(CommitIdT&& value) {
    SetCommitId(std::forward<CommitIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_url;

  Aws::Utils::DateTime m_synchronizedAt{};

  Aws::String m_commitId;
  bool m_urlHasBeenSet = false;
  bool m_synchronizedAtHasBeenSet = false;
  bool m_commitIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
