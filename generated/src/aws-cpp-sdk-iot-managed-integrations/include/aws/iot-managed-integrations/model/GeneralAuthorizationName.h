/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

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
 * <p>The General Authorization reference by authorization material
 * name.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GeneralAuthorizationName">AWS
 * API Reference</a></p>
 */
class GeneralAuthorizationName {
 public:
  AWS_IOTMANAGEDINTEGRATIONS_API GeneralAuthorizationName() = default;
  AWS_IOTMANAGEDINTEGRATIONS_API GeneralAuthorizationName(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API GeneralAuthorizationName& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  GeneralAuthorizationName& WithAuthMaterialName(AuthMaterialNameT&& value) {
    SetAuthMaterialName(std::forward<AuthMaterialNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_authMaterialName;
  bool m_authMaterialNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
