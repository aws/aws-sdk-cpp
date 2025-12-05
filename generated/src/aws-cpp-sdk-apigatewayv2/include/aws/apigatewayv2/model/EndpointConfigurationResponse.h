/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>Represents an endpoint configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/EndpointConfigurationResponse">AWS
 * API Reference</a></p>
 */
class EndpointConfigurationResponse {
 public:
  AWS_APIGATEWAYV2_API EndpointConfigurationResponse() = default;
  AWS_APIGATEWAYV2_API EndpointConfigurationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API EndpointConfigurationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the ACM certificate.</p>
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
   * <p>The domain name.</p>
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
   * <p>The portal default domain name. This domain name is generated and managed by
   * API Gateway.</p>
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

  ///@{
  /**
   * <p>The portal domain hosted zone identifier.</p>
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
 private:
  Aws::String m_certificateArn;

  Aws::String m_domainName;

  Aws::String m_portalDefaultDomainName;

  Aws::String m_portalDomainHostedZoneId;
  bool m_certificateArnHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_portalDefaultDomainNameHasBeenSet = false;
  bool m_portalDomainHostedZoneIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
