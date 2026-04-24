/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ConnectorProperty.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Custom authentication configuration that allows for flexible authentication
 * mechanisms beyond standard Basic and OAuth2 flows.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CustomAuthenticationProperties">AWS
 * API Reference</a></p>
 */
class CustomAuthenticationProperties {
 public:
  AWS_GLUE_API CustomAuthenticationProperties() = default;
  AWS_GLUE_API CustomAuthenticationProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API CustomAuthenticationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of custom authentication parameters that define the specific
   * authentication mechanism and required properties.</p>
   */
  inline const Aws::Vector<ConnectorProperty>& GetAuthenticationParameters() const { return m_authenticationParameters; }
  inline bool AuthenticationParametersHasBeenSet() const { return m_authenticationParametersHasBeenSet; }
  template <typename AuthenticationParametersT = Aws::Vector<ConnectorProperty>>
  void SetAuthenticationParameters(AuthenticationParametersT&& value) {
    m_authenticationParametersHasBeenSet = true;
    m_authenticationParameters = std::forward<AuthenticationParametersT>(value);
  }
  template <typename AuthenticationParametersT = Aws::Vector<ConnectorProperty>>
  CustomAuthenticationProperties& WithAuthenticationParameters(AuthenticationParametersT&& value) {
    SetAuthenticationParameters(std::forward<AuthenticationParametersT>(value));
    return *this;
  }
  template <typename AuthenticationParametersT = ConnectorProperty>
  CustomAuthenticationProperties& AddAuthenticationParameters(AuthenticationParametersT&& value) {
    m_authenticationParametersHasBeenSet = true;
    m_authenticationParameters.emplace_back(std::forward<AuthenticationParametersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ConnectorProperty> m_authenticationParameters;
  bool m_authenticationParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
