/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMRContainers {
namespace Model {

/**
 * <p>IAM configuration for the security configuration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/IAMConfiguration">AWS
 * API Reference</a></p>
 */
class IAMConfiguration {
 public:
  AWS_EMRCONTAINERS_API IAMConfiguration() = default;
  AWS_EMRCONTAINERS_API IAMConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API IAMConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the system role used by the security configuration.</p>
   */
  inline const Aws::String& GetSystemRole() const { return m_systemRole; }
  inline bool SystemRoleHasBeenSet() const { return m_systemRoleHasBeenSet; }
  template <typename SystemRoleT = Aws::String>
  void SetSystemRole(SystemRoleT&& value) {
    m_systemRoleHasBeenSet = true;
    m_systemRole = std::forward<SystemRoleT>(value);
  }
  template <typename SystemRoleT = Aws::String>
  IAMConfiguration& WithSystemRole(SystemRoleT&& value) {
    SetSystemRole(std::forward<SystemRoleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_systemRole;
  bool m_systemRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
