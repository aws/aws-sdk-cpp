/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apigatewayv2/model/DomainNameStatus.h>
#include <aws/apigatewayv2/model/EndpointType.h>
#include <aws/apigatewayv2/model/IpAddressType.h>
#include <aws/apigatewayv2/model/SecurityPolicy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>The domain name configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DomainNameConfiguration">AWS
   * API Reference</a></p>
   */
  class DomainNameConfiguration
  {
  public:
    AWS_APIGATEWAYV2_API DomainNameConfiguration() = default;
    AWS_APIGATEWAYV2_API DomainNameConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API DomainNameConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A domain name for the API.</p>
     */
    inline const Aws::String& GetApiGatewayDomainName() const { return m_apiGatewayDomainName; }
    inline bool ApiGatewayDomainNameHasBeenSet() const { return m_apiGatewayDomainNameHasBeenSet; }
    template<typename ApiGatewayDomainNameT = Aws::String>
    void SetApiGatewayDomainName(ApiGatewayDomainNameT&& value) { m_apiGatewayDomainNameHasBeenSet = true; m_apiGatewayDomainName = std::forward<ApiGatewayDomainNameT>(value); }
    template<typename ApiGatewayDomainNameT = Aws::String>
    DomainNameConfiguration& WithApiGatewayDomainName(ApiGatewayDomainNameT&& value) { SetApiGatewayDomainName(std::forward<ApiGatewayDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An AWS-managed certificate that will be used by the edge-optimized endpoint
     * for this domain name. AWS Certificate Manager is the only supported source.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    DomainNameConfiguration& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the certificate that will be used by the
     * edge-optimized endpoint for this domain name.</p>
     */
    inline const Aws::String& GetCertificateName() const { return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    template<typename CertificateNameT = Aws::String>
    void SetCertificateName(CertificateNameT&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::forward<CertificateNameT>(value); }
    template<typename CertificateNameT = Aws::String>
    DomainNameConfiguration& WithCertificateName(CertificateNameT&& value) { SetCertificateName(std::forward<CertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for this domain name was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetCertificateUploadDate() const { return m_certificateUploadDate; }
    inline bool CertificateUploadDateHasBeenSet() const { return m_certificateUploadDateHasBeenSet; }
    template<typename CertificateUploadDateT = Aws::Utils::DateTime>
    void SetCertificateUploadDate(CertificateUploadDateT&& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = std::forward<CertificateUploadDateT>(value); }
    template<typename CertificateUploadDateT = Aws::Utils::DateTime>
    DomainNameConfiguration& WithCertificateUploadDate(CertificateUploadDateT&& value) { SetCertificateUploadDate(std::forward<CertificateUploadDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the domain name migration. The valid values are AVAILABLE,
     * UPDATING, PENDING_CERTIFICATE_REIMPORT, and PENDING_OWNERSHIP_VERIFICATION. If
     * the status is UPDATING, the domain cannot be modified further until the existing
     * operation is complete. If it is AVAILABLE, the domain can be updated.</p>
     */
    inline DomainNameStatus GetDomainNameStatus() const { return m_domainNameStatus; }
    inline bool DomainNameStatusHasBeenSet() const { return m_domainNameStatusHasBeenSet; }
    inline void SetDomainNameStatus(DomainNameStatus value) { m_domainNameStatusHasBeenSet = true; m_domainNameStatus = value; }
    inline DomainNameConfiguration& WithDomainNameStatus(DomainNameStatus value) { SetDomainNameStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional text message containing detailed information about status of the
     * domain name migration.</p>
     */
    inline const Aws::String& GetDomainNameStatusMessage() const { return m_domainNameStatusMessage; }
    inline bool DomainNameStatusMessageHasBeenSet() const { return m_domainNameStatusMessageHasBeenSet; }
    template<typename DomainNameStatusMessageT = Aws::String>
    void SetDomainNameStatusMessage(DomainNameStatusMessageT&& value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage = std::forward<DomainNameStatusMessageT>(value); }
    template<typename DomainNameStatusMessageT = Aws::String>
    DomainNameConfiguration& WithDomainNameStatusMessage(DomainNameStatusMessageT&& value) { SetDomainNameStatusMessage(std::forward<DomainNameStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint type.</p>
     */
    inline EndpointType GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(EndpointType value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline DomainNameConfiguration& WithEndpointType(EndpointType value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Route 53 Hosted Zone ID of the endpoint.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    DomainNameConfiguration& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address types that can invoke the domain name. Use ipv4 to allow only
     * IPv4 addresses to invoke your domain name, or use dualstack to allow both IPv4
     * and IPv6 addresses to invoke your domain name.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline DomainNameConfiguration& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Transport Layer Security (TLS) version of the security policy for this
     * domain name. The valid values are TLS_1_0 and TLS_1_2.</p>
     */
    inline SecurityPolicy GetSecurityPolicy() const { return m_securityPolicy; }
    inline bool SecurityPolicyHasBeenSet() const { return m_securityPolicyHasBeenSet; }
    inline void SetSecurityPolicy(SecurityPolicy value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = value; }
    inline DomainNameConfiguration& WithSecurityPolicy(SecurityPolicy value) { SetSecurityPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn</p>
     */
    inline const Aws::String& GetOwnershipVerificationCertificateArn() const { return m_ownershipVerificationCertificateArn; }
    inline bool OwnershipVerificationCertificateArnHasBeenSet() const { return m_ownershipVerificationCertificateArnHasBeenSet; }
    template<typename OwnershipVerificationCertificateArnT = Aws::String>
    void SetOwnershipVerificationCertificateArn(OwnershipVerificationCertificateArnT&& value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn = std::forward<OwnershipVerificationCertificateArnT>(value); }
    template<typename OwnershipVerificationCertificateArnT = Aws::String>
    DomainNameConfiguration& WithOwnershipVerificationCertificateArn(OwnershipVerificationCertificateArnT&& value) { SetOwnershipVerificationCertificateArn(std::forward<OwnershipVerificationCertificateArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiGatewayDomainName;
    bool m_apiGatewayDomainNameHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    Aws::Utils::DateTime m_certificateUploadDate{};
    bool m_certificateUploadDateHasBeenSet = false;

    DomainNameStatus m_domainNameStatus{DomainNameStatus::NOT_SET};
    bool m_domainNameStatusHasBeenSet = false;

    Aws::String m_domainNameStatusMessage;
    bool m_domainNameStatusMessageHasBeenSet = false;

    EndpointType m_endpointType{EndpointType::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    SecurityPolicy m_securityPolicy{SecurityPolicy::NOT_SET};
    bool m_securityPolicyHasBeenSet = false;

    Aws::String m_ownershipVerificationCertificateArn;
    bool m_ownershipVerificationCertificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
