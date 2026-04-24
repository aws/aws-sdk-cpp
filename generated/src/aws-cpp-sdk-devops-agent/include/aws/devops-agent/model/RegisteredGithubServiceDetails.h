/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/GithubRepoOwnerType.h>

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
 * <p>Details specific to a registered GitHub service.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisteredGithubServiceDetails">AWS
 * API Reference</a></p>
 */
class RegisteredGithubServiceDetails {
 public:
  AWS_DEVOPSAGENT_API RegisteredGithubServiceDetails() = default;
  AWS_DEVOPSAGENT_API RegisteredGithubServiceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RegisteredGithubServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The GitHub repository owner name.</p>
   */
  inline const Aws::String& GetOwner() const { return m_owner; }
  inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
  template <typename OwnerT = Aws::String>
  void SetOwner(OwnerT&& value) {
    m_ownerHasBeenSet = true;
    m_owner = std::forward<OwnerT>(value);
  }
  template <typename OwnerT = Aws::String>
  RegisteredGithubServiceDetails& WithOwner(OwnerT&& value) {
    SetOwner(std::forward<OwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The GitHub repository owner type.</p>
   */
  inline GithubRepoOwnerType GetOwnerType() const { return m_ownerType; }
  inline bool OwnerTypeHasBeenSet() const { return m_ownerTypeHasBeenSet; }
  inline void SetOwnerType(GithubRepoOwnerType value) {
    m_ownerTypeHasBeenSet = true;
    m_ownerType = value;
  }
  inline RegisteredGithubServiceDetails& WithOwnerType(GithubRepoOwnerType value) {
    SetOwnerType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The GitHub Enterprise Server instance URL (absent for github.com).</p>
   */
  inline const Aws::String& GetTargetUrl() const { return m_targetUrl; }
  inline bool TargetUrlHasBeenSet() const { return m_targetUrlHasBeenSet; }
  template <typename TargetUrlT = Aws::String>
  void SetTargetUrl(TargetUrlT&& value) {
    m_targetUrlHasBeenSet = true;
    m_targetUrl = std::forward<TargetUrlT>(value);
  }
  template <typename TargetUrlT = Aws::String>
  RegisteredGithubServiceDetails& WithTargetUrl(TargetUrlT&& value) {
    SetTargetUrl(std::forward<TargetUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_owner;

  GithubRepoOwnerType m_ownerType{GithubRepoOwnerType::NOT_SET};

  Aws::String m_targetUrl;
  bool m_ownerHasBeenSet = false;
  bool m_ownerTypeHasBeenSet = false;
  bool m_targetUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
