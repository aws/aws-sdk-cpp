/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/SecretsManager.h>

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
 * <p>The authorization material containing the Secrets Manager arn and
 * version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/AuthMaterial">AWS
 * API Reference</a></p>
 */
class AuthMaterial {
 public:
  AWS_IOTMANAGEDINTEGRATIONS_API AuthMaterial() = default;
  AWS_IOTMANAGEDINTEGRATIONS_API AuthMaterial(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API AuthMaterial& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const SecretsManager& GetSecretsManager() const { return m_secretsManager; }
  inline bool SecretsManagerHasBeenSet() const { return m_secretsManagerHasBeenSet; }
  template <typename SecretsManagerT = SecretsManager>
  void SetSecretsManager(SecretsManagerT&& value) {
    m_secretsManagerHasBeenSet = true;
    m_secretsManager = std::forward<SecretsManagerT>(value);
  }
  template <typename SecretsManagerT = SecretsManager>
  AuthMaterial& WithSecretsManager(SecretsManagerT&& value) {
    SetSecretsManager(std::forward<SecretsManagerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the authorization material.</p>
   */
  inline const Aws::String& GetAuthMaterialName() const { return m_authMaterialName; }
  inline bool AuthMaterialNameHasBeenSet() const { return m_authMaterialNameHasBeenSet; }
  template <typename AuthMaterialNameT = Aws::String>
  void SetAuthMaterialName(AuthMaterialNameT&& value) {
    m_authMaterialNameHasBeenSet = true;
    m_authMaterialName = std::forward<AuthMaterialNameT>(value);
  }
  template <typename AuthMaterialNameT = Aws::String>
  AuthMaterial& WithAuthMaterialName(AuthMaterialNameT&& value) {
    SetAuthMaterialName(std::forward<AuthMaterialNameT>(value));
    return *this;
  }
  ///@}
 private:
  SecretsManager m_secretsManager;

  Aws::String m_authMaterialName;
  bool m_secretsManagerHasBeenSet = false;
  bool m_authMaterialNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
