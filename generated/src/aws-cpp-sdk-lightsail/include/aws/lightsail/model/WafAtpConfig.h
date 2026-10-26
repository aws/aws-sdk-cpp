/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/WafPayloadTypeEnum.h>
#include <aws/lightsail/model/WafResponseInspection.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {

/**
 * <p>Describes the configuration of the account takeover prevention Web
 * Application Firewall (WAF) rule group. The rule group inspects login requests to
 * the login path of your application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/WafAtpConfig">AWS
 * API Reference</a></p>
 */
class WafAtpConfig {
 public:
  AWS_LIGHTSAIL_API WafAtpConfig() = default;
  AWS_LIGHTSAIL_API WafAtpConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API WafAtpConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The path of the login endpoint of your application (for example,
   * <code>/login</code>). Login paths that start with the path that you specify are
   * a match.</p> <p>Constraints:</p> <ul> <li> <p>Must start with a forward slash
   * (<code>/</code>).</p> </li> <li> <p>Must contain from 1 to 256 characters.</p>
   * </li> </ul>
   */
  inline const Aws::String& GetLoginPath() const { return m_loginPath; }
  inline bool LoginPathHasBeenSet() const { return m_loginPathHasBeenSet; }
  template <typename LoginPathT = Aws::String>
  void SetLoginPath(LoginPathT&& value) {
    m_loginPathHasBeenSet = true;
    m_loginPath = std::forward<LoginPathT>(value);
  }
  template <typename LoginPathT = Aws::String>
  WafAtpConfig& WithLoginPath(LoginPathT&& value) {
    SetLoginPath(std::forward<LoginPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content type of the request body of login requests.</p> <p>The following
   * content types are possible:</p> <ul> <li> <p> <code>JSON</code> – The request
   * body is in JSON format.</p> </li> <li> <p> <code>FORM_ENCODED</code> – The
   * request body is form encoded.</p> </li> </ul>
   */
  inline WafPayloadTypeEnum GetPayloadType() const { return m_payloadType; }
  inline bool PayloadTypeHasBeenSet() const { return m_payloadTypeHasBeenSet; }
  inline void SetPayloadType(WafPayloadTypeEnum value) {
    m_payloadTypeHasBeenSet = true;
    m_payloadType = value;
  }
  inline WafAtpConfig& WithPayloadType(WafPayloadTypeEnum value) {
    SetPayloadType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the field in the request body that contains the username (for
   * example, <code>/username</code> for <code>JSON</code> or <code>username</code>
   * for <code>FORM_ENCODED</code>).</p> <p>Constraints:</p> <ul> <li> <p>For a
   * <code>JSON</code> payload, must be a JSON pointer that starts with a forward
   * slash (<code>/</code>).</p> </li> <li> <p>Must contain from 1 to 512
   * characters.</p> </li> </ul>
   */
  inline const Aws::String& GetUsernameField() const { return m_usernameField; }
  inline bool UsernameFieldHasBeenSet() const { return m_usernameFieldHasBeenSet; }
  template <typename UsernameFieldT = Aws::String>
  void SetUsernameField(UsernameFieldT&& value) {
    m_usernameFieldHasBeenSet = true;
    m_usernameField = std::forward<UsernameFieldT>(value);
  }
  template <typename UsernameFieldT = Aws::String>
  WafAtpConfig& WithUsernameField(UsernameFieldT&& value) {
    SetUsernameField(std::forward<UsernameFieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the field in the request body that contains the password (for
   * example, <code>/password</code> for <code>JSON</code> or <code>password</code>
   * for <code>FORM_ENCODED</code>).</p> <p>Constraints:</p> <ul> <li> <p>For a
   * <code>JSON</code> payload, must be a JSON pointer that starts with a forward
   * slash (<code>/</code>).</p> </li> <li> <p>Must contain from 1 to 512
   * characters.</p> </li> </ul>
   */
  inline const Aws::String& GetPasswordField() const { return m_passwordField; }
  inline bool PasswordFieldHasBeenSet() const { return m_passwordFieldHasBeenSet; }
  template <typename PasswordFieldT = Aws::String>
  void SetPasswordField(PasswordFieldT&& value) {
    m_passwordFieldHasBeenSet = true;
    m_passwordField = std::forward<PasswordFieldT>(value);
  }
  template <typename PasswordFieldT = Aws::String>
  WafAtpConfig& WithPasswordField(PasswordFieldT&& value) {
    SetPasswordField(std::forward<PasswordFieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that describes the HTTP status codes that your application returns
   * for successful and failed login attempts.</p>
   */
  inline const WafResponseInspection& GetResponseInspection() const { return m_responseInspection; }
  inline bool ResponseInspectionHasBeenSet() const { return m_responseInspectionHasBeenSet; }
  template <typename ResponseInspectionT = WafResponseInspection>
  void SetResponseInspection(ResponseInspectionT&& value) {
    m_responseInspectionHasBeenSet = true;
    m_responseInspection = std::forward<ResponseInspectionT>(value);
  }
  template <typename ResponseInspectionT = WafResponseInspection>
  WafAtpConfig& WithResponseInspection(ResponseInspectionT&& value) {
    SetResponseInspection(std::forward<ResponseInspectionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_loginPath;

  WafPayloadTypeEnum m_payloadType{WafPayloadTypeEnum::NOT_SET};

  Aws::String m_usernameField;

  Aws::String m_passwordField;

  WafResponseInspection m_responseInspection;
  bool m_loginPathHasBeenSet = false;
  bool m_payloadTypeHasBeenSet = false;
  bool m_usernameFieldHasBeenSet = false;
  bool m_passwordFieldHasBeenSet = false;
  bool m_responseInspectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
