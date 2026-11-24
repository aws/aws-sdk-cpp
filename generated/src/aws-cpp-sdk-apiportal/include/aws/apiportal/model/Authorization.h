/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/AuthorizationConfig.h>
#include <aws/apiportal/model/FineGrainedAccessControl.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>How readers sign in to a portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/Authorization">AWS
 * API Reference</a></p>
 */
class Authorization {
 public:
  AWS_APIPORTAL_API Authorization() = default;
  AWS_APIPORTAL_API Authorization(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Authorization& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const AuthorizationConfig& GetAuthorizationConfig() const { return m_authorizationConfig; }
  inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }
  template <typename AuthorizationConfigT = AuthorizationConfig>
  void SetAuthorizationConfig(AuthorizationConfigT&& value) {
    m_authorizationConfigHasBeenSet = true;
    m_authorizationConfig = std::forward<AuthorizationConfigT>(value);
  }
  template <typename AuthorizationConfigT = AuthorizationConfig>
  Authorization& WithAuthorizationConfig(AuthorizationConfigT&& value) {
    SetAuthorizationConfig(std::forward<AuthorizationConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether access to individual products in the portal is controlled per
   * reader.</p>
   */
  inline FineGrainedAccessControl GetFineGrainedAccessControl() const { return m_fineGrainedAccessControl; }
  inline bool FineGrainedAccessControlHasBeenSet() const { return m_fineGrainedAccessControlHasBeenSet; }
  inline void SetFineGrainedAccessControl(FineGrainedAccessControl value) {
    m_fineGrainedAccessControlHasBeenSet = true;
    m_fineGrainedAccessControl = value;
  }
  inline Authorization& WithFineGrainedAccessControl(FineGrainedAccessControl value) {
    SetFineGrainedAccessControl(value);
    return *this;
  }
  ///@}
 private:
  AuthorizationConfig m_authorizationConfig;

  FineGrainedAccessControl m_fineGrainedAccessControl{FineGrainedAccessControl::NOT_SET};
  bool m_authorizationConfigHasBeenSet = false;
  bool m_fineGrainedAccessControlHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
