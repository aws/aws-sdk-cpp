/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/AuthMaterial.h>
#include <aws/iot-managed-integrations/model/OAuthConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTManagedIntegrations {
namespace Model {

/**
 * <p>The authentication configuration details for a connector destination,
 * including OAuth settings and other authentication parameters.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/AuthConfig">AWS
 * API Reference</a></p>
 */
class AuthConfig {
 public:
  AWS_IOTMANAGEDINTEGRATIONS_API AuthConfig() = default;
  AWS_IOTMANAGEDINTEGRATIONS_API AuthConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API AuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth configuration settings used for authentication with the third-party
   * service.</p>
   */
  inline const OAuthConfig& GetOAuth() const { return m_oAuth; }
  inline bool OAuthHasBeenSet() const { return m_oAuthHasBeenSet; }
  template <typename OAuthT = OAuthConfig>
  void SetOAuth(OAuthT&& value) {
    m_oAuthHasBeenSet = true;
    m_oAuth = std::forward<OAuthT>(value);
  }
  template <typename OAuthT = OAuthConfig>
  AuthConfig& WithOAuth(OAuthT&& value) {
    SetOAuth(std::forward<OAuthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization materials for General Authorization.</p>
   */
  inline const Aws::Vector<AuthMaterial>& GetGeneralAuthorization() const { return m_generalAuthorization; }
  inline bool GeneralAuthorizationHasBeenSet() const { return m_generalAuthorizationHasBeenSet; }
  template <typename GeneralAuthorizationT = Aws::Vector<AuthMaterial>>
  void SetGeneralAuthorization(GeneralAuthorizationT&& value) {
    m_generalAuthorizationHasBeenSet = true;
    m_generalAuthorization = std::forward<GeneralAuthorizationT>(value);
  }
  template <typename GeneralAuthorizationT = Aws::Vector<AuthMaterial>>
  AuthConfig& WithGeneralAuthorization(GeneralAuthorizationT&& value) {
    SetGeneralAuthorization(std::forward<GeneralAuthorizationT>(value));
    return *this;
  }
  template <typename GeneralAuthorizationT = AuthMaterial>
  AuthConfig& AddGeneralAuthorization(GeneralAuthorizationT&& value) {
    m_generalAuthorizationHasBeenSet = true;
    m_generalAuthorization.emplace_back(std::forward<GeneralAuthorizationT>(value));
    return *this;
  }
  ///@}
 private:
  OAuthConfig m_oAuth;

  Aws::Vector<AuthMaterial> m_generalAuthorization;
  bool m_oAuthHasBeenSet = false;
  bool m_generalAuthorizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
