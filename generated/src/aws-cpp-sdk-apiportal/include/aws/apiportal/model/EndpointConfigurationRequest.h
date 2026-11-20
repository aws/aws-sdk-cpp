/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ACMManaged.h>
#include <aws/apiportal/model/None.h>

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
 * <p>Exactly one of the members is set: <code>none</code> for no custom domain, or
 * <code>acmManaged</code> to bring a domain + ACM certificate. Modeled as a union
 * so the &quot;exactly one&quot; choice is enforced by type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/EndpointConfigurationRequest">AWS
 * API Reference</a></p>
 */
class EndpointConfigurationRequest {
 public:
  AWS_APIPORTAL_API EndpointConfigurationRequest() = default;
  AWS_APIPORTAL_API EndpointConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API EndpointConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Serve the portal only on its default domain.</p>
   */
  inline const None& GetNone() const { return m_none; }
  inline bool NoneHasBeenSet() const { return m_noneHasBeenSet; }
  template <typename NoneT = None>
  void SetNone(NoneT&& value) {
    m_noneHasBeenSet = true;
    m_none = std::forward<NoneT>(value);
  }
  template <typename NoneT = None>
  EndpointConfigurationRequest& WithNone(NoneT&& value) {
    SetNone(std::forward<NoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Serve the portal on your own domain, using a certificate from AWS Certificate
   * Manager.</p>
   */
  inline const ACMManaged& GetAcmManaged() const { return m_acmManaged; }
  inline bool AcmManagedHasBeenSet() const { return m_acmManagedHasBeenSet; }
  template <typename AcmManagedT = ACMManaged>
  void SetAcmManaged(AcmManagedT&& value) {
    m_acmManagedHasBeenSet = true;
    m_acmManaged = std::forward<AcmManagedT>(value);
  }
  template <typename AcmManagedT = ACMManaged>
  EndpointConfigurationRequest& WithAcmManaged(AcmManagedT&& value) {
    SetAcmManaged(std::forward<AcmManagedT>(value));
    return *this;
  }
  ///@}
 private:
  None m_none;

  ACMManaged m_acmManaged;
  bool m_noneHasBeenSet = false;
  bool m_acmManagedHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
