/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Basic authentication configuration that defines the username and password
 * properties for HTTP Basic authentication.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BasicAuthenticationProperties">AWS
 * API Reference</a></p>
 */
class BasicAuthenticationProperties {
 public:
  AWS_GLUE_API BasicAuthenticationProperties() = default;
  AWS_GLUE_API BasicAuthenticationProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API BasicAuthenticationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The username property name to use for Basic authentication credentials.</p>
   */
  inline const ConnectorProperty& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = ConnectorProperty>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = ConnectorProperty>
  BasicAuthenticationProperties& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The password property name to use for Basic authentication credentials.</p>
   */
  inline const ConnectorProperty& GetPassword() const { return m_password; }
  inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
  template <typename PasswordT = ConnectorProperty>
  void SetPassword(PasswordT&& value) {
    m_passwordHasBeenSet = true;
    m_password = std::forward<PasswordT>(value);
  }
  template <typename PasswordT = ConnectorProperty>
  BasicAuthenticationProperties& WithPassword(PasswordT&& value) {
    SetPassword(std::forward<PasswordT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorProperty m_username;

  ConnectorProperty m_password;
  bool m_usernameHasBeenSet = false;
  bool m_passwordHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
