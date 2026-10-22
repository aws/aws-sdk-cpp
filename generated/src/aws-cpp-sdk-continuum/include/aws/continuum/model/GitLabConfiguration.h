/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/GitLabTargetType.h>
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
 * <p>Configuration for a GitLab integration using a pasted access
 * token.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GitLabConfiguration">AWS
 * API Reference</a></p>
 */
class GitLabConfiguration {
 public:
  AWS_CONTINUUM_API GitLabConfiguration() = default;
  AWS_CONTINUUM_API GitLabConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API GitLabConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTPS base URL of the GitLab instance (gitlab.com or self-managed).</p>
   */
  inline const Aws::String& GetInstanceUrl() const { return m_instanceUrl; }
  inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }
  template <typename InstanceUrlT = Aws::String>
  void SetInstanceUrl(InstanceUrlT&& value) {
    m_instanceUrlHasBeenSet = true;
    m_instanceUrl = std::forward<InstanceUrlT>(value);
  }
  template <typename InstanceUrlT = Aws::String>
  GitLabConfiguration& WithInstanceUrl(InstanceUrlT&& value) {
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
  inline GitLabConfiguration& WithTargetType(GitLabTargetType value) {
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
  GitLabConfiguration& WithTargetPath(TargetPathT&& value) {
    SetTargetPath(std::forward<TargetPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The GitLab access token (personal, group or project). Write-only; not stored
   * or returned after creation. If the token carries the self-rotate scope, rotation
   * is opted in and Continuum manages the token thereafter.</p>
   */
  inline const Aws::String& GetAccessToken() const { return m_accessToken; }
  inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
  template <typename AccessTokenT = Aws::String>
  void SetAccessToken(AccessTokenT&& value) {
    m_accessTokenHasBeenSet = true;
    m_accessToken = std::forward<AccessTokenT>(value);
  }
  template <typename AccessTokenT = Aws::String>
  GitLabConfiguration& WithAccessToken(AccessTokenT&& value) {
    SetAccessToken(std::forward<AccessTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceUrl;

  GitLabTargetType m_targetType{GitLabTargetType::NOT_SET};

  Aws::String m_targetPath;

  Aws::String m_accessToken;
  bool m_instanceUrlHasBeenSet = false;
  bool m_targetTypeHasBeenSet = false;
  bool m_targetPathHasBeenSet = false;
  bool m_accessTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
