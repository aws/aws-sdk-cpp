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
 * <p>Describes the configuration of the account creation fraud prevention Web
 * Application Firewall (WAF) rule group. The rule group inspects account creation
 * requests to your application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/WafAcfpConfig">AWS
 * API Reference</a></p>
 */
class WafAcfpConfig {
 public:
  AWS_LIGHTSAIL_API WafAcfpConfig() = default;
  AWS_LIGHTSAIL_API WafAcfpConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API WafAcfpConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content type of the request body of account creation requests.</p> <p>The
   * following content types are possible:</p> <ul> <li> <p> <code>JSON</code> – The
   * request body is in JSON format.</p> </li> <li> <p> <code>FORM_ENCODED</code> –
   * The request body is form encoded.</p> </li> </ul>
   */
  inline WafPayloadTypeEnum GetPayloadType() const { return m_payloadType; }
  inline bool PayloadTypeHasBeenSet() const { return m_payloadTypeHasBeenSet; }
  inline void SetPayloadType(WafPayloadTypeEnum value) {
    m_payloadTypeHasBeenSet = true;
    m_payloadType = value;
  }
  inline WafAcfpConfig& WithPayloadType(WafPayloadTypeEnum value) {
    SetPayloadType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the endpoint that accepts completed account creation forms (for
   * example, <code>/signup/submit</code>). This endpoint must accept
   * <code>POST</code> requests.</p> <p>Constraints:</p> <ul> <li> <p>Must start with
   * a forward slash (<code>/</code>).</p> </li> <li> <p>Must contain from 1 to 256
   * characters.</p> </li> </ul>
   */
  inline const Aws::String& GetCreationPath() const { return m_creationPath; }
  inline bool CreationPathHasBeenSet() const { return m_creationPathHasBeenSet; }
  template <typename CreationPathT = Aws::String>
  void SetCreationPath(CreationPathT&& value) {
    m_creationPathHasBeenSet = true;
    m_creationPath = std::forward<CreationPathT>(value);
  }
  template <typename CreationPathT = Aws::String>
  WafAcfpConfig& WithCreationPath(CreationPathT&& value) {
    SetCreationPath(std::forward<CreationPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the page that displays the account creation form (for example,
   * <code>/signup</code>).</p> <p>Constraints:</p> <ul> <li> <p>Must start with a
   * forward slash (<code>/</code>).</p> </li> <li> <p>Must contain from 1 to 256
   * characters.</p> </li> </ul>
   */
  inline const Aws::String& GetRegistrationPagePath() const { return m_registrationPagePath; }
  inline bool RegistrationPagePathHasBeenSet() const { return m_registrationPagePathHasBeenSet; }
  template <typename RegistrationPagePathT = Aws::String>
  void SetRegistrationPagePath(RegistrationPagePathT&& value) {
    m_registrationPagePathHasBeenSet = true;
    m_registrationPagePath = std::forward<RegistrationPagePathT>(value);
  }
  template <typename RegistrationPagePathT = Aws::String>
  WafAcfpConfig& WithRegistrationPagePath(RegistrationPagePathT&& value) {
    SetRegistrationPagePath(std::forward<RegistrationPagePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that describes the HTTP status codes that your application returns
   * for successful and failed account creation attempts.</p>
   */
  inline const WafResponseInspection& GetResponseInspection() const { return m_responseInspection; }
  inline bool ResponseInspectionHasBeenSet() const { return m_responseInspectionHasBeenSet; }
  template <typename ResponseInspectionT = WafResponseInspection>
  void SetResponseInspection(ResponseInspectionT&& value) {
    m_responseInspectionHasBeenSet = true;
    m_responseInspection = std::forward<ResponseInspectionT>(value);
  }
  template <typename ResponseInspectionT = WafResponseInspection>
  WafAcfpConfig& WithResponseInspection(ResponseInspectionT&& value) {
    SetResponseInspection(std::forward<ResponseInspectionT>(value));
    return *this;
  }
  ///@}
 private:
  WafPayloadTypeEnum m_payloadType{WafPayloadTypeEnum::NOT_SET};

  Aws::String m_creationPath;

  Aws::String m_registrationPagePath;

  WafResponseInspection m_responseInspection;
  bool m_payloadTypeHasBeenSet = false;
  bool m_creationPathHasBeenSet = false;
  bool m_registrationPagePathHasBeenSet = false;
  bool m_responseInspectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
