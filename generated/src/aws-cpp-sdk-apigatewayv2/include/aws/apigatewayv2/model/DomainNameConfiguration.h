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
    AWS_APIGATEWAYV2_API DomainNameConfiguration();
    AWS_APIGATEWAYV2_API DomainNameConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API DomainNameConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A domain name for the API.</p>
     */
    inline const Aws::String& GetApiGatewayDomainName() const{ return m_apiGatewayDomainName; }
    inline bool ApiGatewayDomainNameHasBeenSet() const { return m_apiGatewayDomainNameHasBeenSet; }
    inline void SetApiGatewayDomainName(const Aws::String& value) { m_apiGatewayDomainNameHasBeenSet = true; m_apiGatewayDomainName = value; }
    inline void SetApiGatewayDomainName(Aws::String&& value) { m_apiGatewayDomainNameHasBeenSet = true; m_apiGatewayDomainName = std::move(value); }
    inline void SetApiGatewayDomainName(const char* value) { m_apiGatewayDomainNameHasBeenSet = true; m_apiGatewayDomainName.assign(value); }
    inline DomainNameConfiguration& WithApiGatewayDomainName(const Aws::String& value) { SetApiGatewayDomainName(value); return *this;}
    inline DomainNameConfiguration& WithApiGatewayDomainName(Aws::String&& value) { SetApiGatewayDomainName(std::move(value)); return *this;}
    inline DomainNameConfiguration& WithApiGatewayDomainName(const char* value) { SetApiGatewayDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An AWS-managed certificate that will be used by the edge-optimized endpoint
     * for this domain name. AWS Certificate Manager is the only supported source.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline DomainNameConfiguration& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline DomainNameConfiguration& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline DomainNameConfiguration& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the certificate that will be used by the
     * edge-optimized endpoint for this domain name.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }
    inline DomainNameConfiguration& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}
    inline DomainNameConfiguration& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}
    inline DomainNameConfiguration& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for this domain name was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetCertificateUploadDate() const{ return m_certificateUploadDate; }
    inline bool CertificateUploadDateHasBeenSet() const { return m_certificateUploadDateHasBeenSet; }
    inline void SetCertificateUploadDate(const Aws::Utils::DateTime& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = value; }
    inline void SetCertificateUploadDate(Aws::Utils::DateTime&& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = std::move(value); }
    inline DomainNameConfiguration& WithCertificateUploadDate(const Aws::Utils::DateTime& value) { SetCertificateUploadDate(value); return *this;}
    inline DomainNameConfiguration& WithCertificateUploadDate(Aws::Utils::DateTime&& value) { SetCertificateUploadDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the domain name migration. The valid values are AVAILABLE,
     * UPDATING, PENDING_CERTIFICATE_REIMPORT, and PENDING_OWNERSHIP_VERIFICATION. If
     * the status is UPDATING, the domain cannot be modified further until the existing
     * operation is complete. If it is AVAILABLE, the domain can be updated.</p>
     */
    inline const DomainNameStatus& GetDomainNameStatus() const{ return m_domainNameStatus; }
    inline bool DomainNameStatusHasBeenSet() const { return m_domainNameStatusHasBeenSet; }
    inline void SetDomainNameStatus(const DomainNameStatus& value) { m_domainNameStatusHasBeenSet = true; m_domainNameStatus = value; }
    inline void SetDomainNameStatus(DomainNameStatus&& value) { m_domainNameStatusHasBeenSet = true; m_domainNameStatus = std::move(value); }
    inline DomainNameConfiguration& WithDomainNameStatus(const DomainNameStatus& value) { SetDomainNameStatus(value); return *this;}
    inline DomainNameConfiguration& WithDomainNameStatus(DomainNameStatus&& value) { SetDomainNameStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional text message containing detailed information about status of the
     * domain name migration.</p>
     */
    inline const Aws::String& GetDomainNameStatusMessage() const{ return m_domainNameStatusMessage; }
    inline bool DomainNameStatusMessageHasBeenSet() const { return m_domainNameStatusMessageHasBeenSet; }
    inline void SetDomainNameStatusMessage(const Aws::String& value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage = value; }
    inline void SetDomainNameStatusMessage(Aws::String&& value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage = std::move(value); }
    inline void SetDomainNameStatusMessage(const char* value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage.assign(value); }
    inline DomainNameConfiguration& WithDomainNameStatusMessage(const Aws::String& value) { SetDomainNameStatusMessage(value); return *this;}
    inline DomainNameConfiguration& WithDomainNameStatusMessage(Aws::String&& value) { SetDomainNameStatusMessage(std::move(value)); return *this;}
    inline DomainNameConfiguration& WithDomainNameStatusMessage(const char* value) { SetDomainNameStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint type.</p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }
    inline DomainNameConfiguration& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}
    inline DomainNameConfiguration& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Route 53 Hosted Zone ID of the endpoint.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }
    inline DomainNameConfiguration& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}
    inline DomainNameConfiguration& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}
    inline DomainNameConfiguration& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Transport Layer Security (TLS) version of the security policy for this
     * domain name. The valid values are TLS_1_0 and TLS_1_2.</p>
     */
    inline const SecurityPolicy& GetSecurityPolicy() const{ return m_securityPolicy; }
    inline bool SecurityPolicyHasBeenSet() const { return m_securityPolicyHasBeenSet; }
    inline void SetSecurityPolicy(const SecurityPolicy& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = value; }
    inline void SetSecurityPolicy(SecurityPolicy&& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = std::move(value); }
    inline DomainNameConfiguration& WithSecurityPolicy(const SecurityPolicy& value) { SetSecurityPolicy(value); return *this;}
    inline DomainNameConfiguration& WithSecurityPolicy(SecurityPolicy&& value) { SetSecurityPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn</p>
     */
    inline const Aws::String& GetOwnershipVerificationCertificateArn() const{ return m_ownershipVerificationCertificateArn; }
    inline bool OwnershipVerificationCertificateArnHasBeenSet() const { return m_ownershipVerificationCertificateArnHasBeenSet; }
    inline void SetOwnershipVerificationCertificateArn(const Aws::String& value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn = value; }
    inline void SetOwnershipVerificationCertificateArn(Aws::String&& value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn = std::move(value); }
    inline void SetOwnershipVerificationCertificateArn(const char* value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn.assign(value); }
    inline DomainNameConfiguration& WithOwnershipVerificationCertificateArn(const Aws::String& value) { SetOwnershipVerificationCertificateArn(value); return *this;}
    inline DomainNameConfiguration& WithOwnershipVerificationCertificateArn(Aws::String&& value) { SetOwnershipVerificationCertificateArn(std::move(value)); return *this;}
    inline DomainNameConfiguration& WithOwnershipVerificationCertificateArn(const char* value) { SetOwnershipVerificationCertificateArn(value); return *this;}
    ///@}
  private:

    Aws::String m_apiGatewayDomainName;
    bool m_apiGatewayDomainNameHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    Aws::Utils::DateTime m_certificateUploadDate;
    bool m_certificateUploadDateHasBeenSet = false;

    DomainNameStatus m_domainNameStatus;
    bool m_domainNameStatusHasBeenSet = false;

    Aws::String m_domainNameStatusMessage;
    bool m_domainNameStatusMessageHasBeenSet = false;

    EndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    SecurityPolicy m_securityPolicy;
    bool m_securityPolicyHasBeenSet = false;

    Aws::String m_ownershipVerificationCertificateArn;
    bool m_ownershipVerificationCertificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
