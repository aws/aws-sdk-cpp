/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The domains a portal is served on.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/EndpointConfigurationResponse">AWS
 * API Reference</a></p>
 */
class EndpointConfigurationResponse {
 public:
  AWS_APIPORTAL_API EndpointConfigurationResponse() = default;
  AWS_APIPORTAL_API EndpointConfigurationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API EndpointConfigurationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The custom domain name of the portal. Absent if the portal has no custom
   * domain.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  EndpointConfigurationResponse& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the ACM certificate for the custom domain. Absent if the portal
   * has no custom domain.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  EndpointConfigurationResponse& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the hosted zone for the portal's distribution. Use it to create an
   * alias record for a custom domain.</p>
   */
  inline const Aws::String& GetPortalDomainHostedZoneId() const { return m_portalDomainHostedZoneId; }
  inline bool PortalDomainHostedZoneIdHasBeenSet() const { return m_portalDomainHostedZoneIdHasBeenSet; }
  template <typename PortalDomainHostedZoneIdT = Aws::String>
  void SetPortalDomainHostedZoneId(PortalDomainHostedZoneIdT&& value) {
    m_portalDomainHostedZoneIdHasBeenSet = true;
    m_portalDomainHostedZoneId = std::forward<PortalDomainHostedZoneIdT>(value);
  }
  template <typename PortalDomainHostedZoneIdT = Aws::String>
  EndpointConfigurationResponse& WithPortalDomainHostedZoneId(PortalDomainHostedZoneIdT&& value) {
    SetPortalDomainHostedZoneId(std::forward<PortalDomainHostedZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default domain name assigned to the portal.</p>
   */
  inline const Aws::String& GetPortalDefaultDomainName() const { return m_portalDefaultDomainName; }
  inline bool PortalDefaultDomainNameHasBeenSet() const { return m_portalDefaultDomainNameHasBeenSet; }
  template <typename PortalDefaultDomainNameT = Aws::String>
  void SetPortalDefaultDomainName(PortalDefaultDomainNameT&& value) {
    m_portalDefaultDomainNameHasBeenSet = true;
    m_portalDefaultDomainName = std::forward<PortalDefaultDomainNameT>(value);
  }
  template <typename PortalDefaultDomainNameT = Aws::String>
  EndpointConfigurationResponse& WithPortalDefaultDomainName(PortalDefaultDomainNameT&& value) {
    SetPortalDefaultDomainName(std::forward<PortalDefaultDomainNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_certificateArn;

  Aws::String m_portalDomainHostedZoneId;

  Aws::String m_portalDefaultDomainName;
  bool m_domainNameHasBeenSet = false;
  bool m_certificateArnHasBeenSet = false;
  bool m_portalDomainHostedZoneIdHasBeenSet = false;
  bool m_portalDefaultDomainNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
