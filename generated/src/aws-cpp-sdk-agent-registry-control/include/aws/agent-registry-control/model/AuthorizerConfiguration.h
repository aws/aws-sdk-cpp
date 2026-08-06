/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/CustomJWTAuthorizerConfiguration.h>

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
 * <p>The authorizer configuration for a registry. Exactly one member is
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AuthorizerConfiguration">AWS
 * API Reference</a></p>
 */
class AuthorizerConfiguration {
 public:
  AWS_AGENTREGISTRYCONTROL_API AuthorizerConfiguration() = default;
  AWS_AGENTREGISTRYCONTROL_API AuthorizerConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API AuthorizerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for a custom JWT authorizer.</p>
   */
  inline const CustomJWTAuthorizerConfiguration& GetCustomJWTAuthorizer() const { return m_customJWTAuthorizer; }
  inline bool CustomJWTAuthorizerHasBeenSet() const { return m_customJWTAuthorizerHasBeenSet; }
  template <typename CustomJWTAuthorizerT = CustomJWTAuthorizerConfiguration>
  void SetCustomJWTAuthorizer(CustomJWTAuthorizerT&& value) {
    m_customJWTAuthorizerHasBeenSet = true;
    m_customJWTAuthorizer = std::forward<CustomJWTAuthorizerT>(value);
  }
  template <typename CustomJWTAuthorizerT = CustomJWTAuthorizerConfiguration>
  AuthorizerConfiguration& WithCustomJWTAuthorizer(CustomJWTAuthorizerT&& value) {
    SetCustomJWTAuthorizer(std::forward<CustomJWTAuthorizerT>(value));
    return *this;
  }
  ///@}
 private:
  CustomJWTAuthorizerConfiguration m_customJWTAuthorizer;
  bool m_customJWTAuthorizerHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
