/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/GitLabTargetType.h>
#include <aws/continuum/model/GitLabTokenRotation.h>
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
namespace Continuum {
namespace Model {

/**
 * <p>Details for a GitLab integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GitLabDetails">AWS
 * API Reference</a></p>
 */
class GitLabDetails {
 public:
  AWS_CONTINUUM_API GitLabDetails() = default;
  AWS_CONTINUUM_API GitLabDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API GitLabDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTPS base URL of the GitLab instance.</p>
   */
  inline const Aws::String& GetInstanceUrl() const { return m_instanceUrl; }
  inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }
  template <typename InstanceUrlT = Aws::String>
  void SetInstanceUrl(InstanceUrlT&& value) {
    m_instanceUrlHasBeenSet = true;
    m_instanceUrl = std::forward<InstanceUrlT>(value);
  }
  template <typename InstanceUrlT = Aws::String>
  GitLabDetails& WithInstanceUrl(InstanceUrlT&& value) {
    SetInstanceUrl(std::forward<InstanceUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the integration targets a group or a single project.</p>
   */
  inline GitLabTargetType GetTargetType() const { return m_targetType; }
  inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
  inline void SetTargetType(GitLabTargetType value) {
    m_targetTypeHasBeenSet = true;
    m_targetType = value;
  }
  inline GitLabDetails& WithTargetType(GitLabTargetType value) {
    SetTargetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The group or project path the integration targets.</p>
   */
  inline const Aws::String& GetTargetPath() const { return m_targetPath; }
  inline bool TargetPathHasBeenSet() const { return m_targetPathHasBeenSet; }
  template <typename TargetPathT = Aws::String>
  void SetTargetPath(TargetPathT&& value) {
    m_targetPathHasBeenSet = true;
    m_targetPath = std::forward<TargetPathT>(value);
  }
  template <typename TargetPathT = Aws::String>
  GitLabDetails& WithTargetPath(TargetPathT&& value) {
    SetTargetPath(std::forward<TargetPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the integration's access token is rotated. AUTOMATIC only when the pasted
   * token had the self-rotate scope and rotation was opted in at installation
   * time.</p>
   */
  inline GitLabTokenRotation GetTokenRotation() const { return m_tokenRotation; }
  inline bool TokenRotationHasBeenSet() const { return m_tokenRotationHasBeenSet; }
  inline void SetTokenRotation(GitLabTokenRotation value) {
    m_tokenRotationHasBeenSet = true;
    m_tokenRotation = value;
  }
  inline GitLabDetails& WithTokenRotation(GitLabTokenRotation value) {
    SetTokenRotation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expiry of the stored access token, for non-rotating tokens only. A
   * rotated token's original expiry is stale, so this is omitted when tokenRotation
   * is AUTOMATIC.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  GitLabDetails& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceUrl;

  GitLabTargetType m_targetType{GitLabTargetType::NOT_SET};

  Aws::String m_targetPath;

  GitLabTokenRotation m_tokenRotation{GitLabTokenRotation::NOT_SET};

  Aws::Utils::DateTime m_expiresAt{};
  bool m_instanceUrlHasBeenSet = false;
  bool m_targetTypeHasBeenSet = false;
  bool m_targetPathHasBeenSet = false;
  bool m_tokenRotationHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
