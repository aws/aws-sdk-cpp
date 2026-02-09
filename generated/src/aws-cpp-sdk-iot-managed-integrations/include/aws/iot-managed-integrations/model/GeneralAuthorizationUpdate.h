/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/AuthMaterial.h>

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
 * <p>The General Authorization update information containing authorization
 * materials to add or update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GeneralAuthorizationUpdate">AWS
 * API Reference</a></p>
 */
class GeneralAuthorizationUpdate {
 public:
  AWS_IOTMANAGEDINTEGRATIONS_API GeneralAuthorizationUpdate() = default;
  AWS_IOTMANAGEDINTEGRATIONS_API GeneralAuthorizationUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API GeneralAuthorizationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The authorization materials to add.</p>
   */
  inline const Aws::Vector<AuthMaterial>& GetAuthMaterialsToAdd() const { return m_authMaterialsToAdd; }
  inline bool AuthMaterialsToAddHasBeenSet() const { return m_authMaterialsToAddHasBeenSet; }
  template <typename AuthMaterialsToAddT = Aws::Vector<AuthMaterial>>
  void SetAuthMaterialsToAdd(AuthMaterialsToAddT&& value) {
    m_authMaterialsToAddHasBeenSet = true;
    m_authMaterialsToAdd = std::forward<AuthMaterialsToAddT>(value);
  }
  template <typename AuthMaterialsToAddT = Aws::Vector<AuthMaterial>>
  GeneralAuthorizationUpdate& WithAuthMaterialsToAdd(AuthMaterialsToAddT&& value) {
    SetAuthMaterialsToAdd(std::forward<AuthMaterialsToAddT>(value));
    return *this;
  }
  template <typename AuthMaterialsToAddT = AuthMaterial>
  GeneralAuthorizationUpdate& AddAuthMaterialsToAdd(AuthMaterialsToAddT&& value) {
    m_authMaterialsToAddHasBeenSet = true;
    m_authMaterialsToAdd.emplace_back(std::forward<AuthMaterialsToAddT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization materials to update.</p>
   */
  inline const Aws::Vector<AuthMaterial>& GetAuthMaterialsToUpdate() const { return m_authMaterialsToUpdate; }
  inline bool AuthMaterialsToUpdateHasBeenSet() const { return m_authMaterialsToUpdateHasBeenSet; }
  template <typename AuthMaterialsToUpdateT = Aws::Vector<AuthMaterial>>
  void SetAuthMaterialsToUpdate(AuthMaterialsToUpdateT&& value) {
    m_authMaterialsToUpdateHasBeenSet = true;
    m_authMaterialsToUpdate = std::forward<AuthMaterialsToUpdateT>(value);
  }
  template <typename AuthMaterialsToUpdateT = Aws::Vector<AuthMaterial>>
  GeneralAuthorizationUpdate& WithAuthMaterialsToUpdate(AuthMaterialsToUpdateT&& value) {
    SetAuthMaterialsToUpdate(std::forward<AuthMaterialsToUpdateT>(value));
    return *this;
  }
  template <typename AuthMaterialsToUpdateT = AuthMaterial>
  GeneralAuthorizationUpdate& AddAuthMaterialsToUpdate(AuthMaterialsToUpdateT&& value) {
    m_authMaterialsToUpdateHasBeenSet = true;
    m_authMaterialsToUpdate.emplace_back(std::forward<AuthMaterialsToUpdateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AuthMaterial> m_authMaterialsToAdd;

  Aws::Vector<AuthMaterial> m_authMaterialsToUpdate;
  bool m_authMaterialsToAddHasBeenSet = false;
  bool m_authMaterialsToUpdateHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
