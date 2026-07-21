/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/IAMConfiguration.h>
#include <aws/emr-containers/model/IdentityCenterConfiguration.h>

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
 * <p>Authentication configuration for the security configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/AuthenticationConfiguration">AWS
 * API Reference</a></p>
 */
class AuthenticationConfiguration {
 public:
  AWS_EMRCONTAINERS_API AuthenticationConfiguration() = default;
  AWS_EMRCONTAINERS_API AuthenticationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API AuthenticationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Identity Center configuration for authentication in the security
   * configuration.</p>
   */
  inline const IdentityCenterConfiguration& GetIdentityCenterConfiguration() const { return m_identityCenterConfiguration; }
  inline bool IdentityCenterConfigurationHasBeenSet() const { return m_identityCenterConfigurationHasBeenSet; }
  template <typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
  void SetIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) {
    m_identityCenterConfigurationHasBeenSet = true;
    m_identityCenterConfiguration = std::forward<IdentityCenterConfigurationT>(value);
  }
  template <typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
  AuthenticationConfiguration& WithIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) {
    SetIdentityCenterConfiguration(std::forward<IdentityCenterConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM configuration for authentication in the security configuration.</p>
   */
  inline const IAMConfiguration& GetIamConfiguration() const { return m_iamConfiguration; }
  inline bool IamConfigurationHasBeenSet() const { return m_iamConfigurationHasBeenSet; }
  template <typename IamConfigurationT = IAMConfiguration>
  void SetIamConfiguration(IamConfigurationT&& value) {
    m_iamConfigurationHasBeenSet = true;
    m_iamConfiguration = std::forward<IamConfigurationT>(value);
  }
  template <typename IamConfigurationT = IAMConfiguration>
  AuthenticationConfiguration& WithIamConfiguration(IamConfigurationT&& value) {
    SetIamConfiguration(std::forward<IamConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  IdentityCenterConfiguration m_identityCenterConfiguration;

  IAMConfiguration m_iamConfiguration;
  bool m_identityCenterConfigurationHasBeenSet = false;
  bool m_iamConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
