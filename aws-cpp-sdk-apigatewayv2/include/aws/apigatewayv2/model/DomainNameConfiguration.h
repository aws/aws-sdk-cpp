/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apigatewayv2/model/EndpointType.h>
#include <aws/apigatewayv2/model/SecurityPolicy.h>
#include <aws/apigatewayv2/model/DomainNameStatus.h>
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
  class AWS_APIGATEWAYV2_API DomainNameConfiguration
  {
  public:
    DomainNameConfiguration();
    DomainNameConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DomainNameConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A domain name for the WebSocket API.</p>
     */
    inline const Aws::String& GetApiGatewayDomainName() const{ return m_apiGatewayDomainName; }

    /**
     * <p>A domain name for the WebSocket API.</p>
     */
    inline bool ApiGatewayDomainNameHasBeenSet() const { return m_apiGatewayDomainNameHasBeenSet; }

    /**
     * <p>A domain name for the WebSocket API.</p>
     */
    inline void SetApiGatewayDomainName(const Aws::String& value) { m_apiGatewayDomainNameHasBeenSet = true; m_apiGatewayDomainName = value; }

    /**
     * <p>A domain name for the WebSocket API.</p>
     */
    inline void SetApiGatewayDomainName(Aws::String&& value) { m_apiGatewayDomainNameHasBeenSet = true; m_apiGatewayDomainName = std::move(value); }

    /**
     * <p>A domain name for the WebSocket API.</p>
     */
    inline void SetApiGatewayDomainName(const char* value) { m_apiGatewayDomainNameHasBeenSet = true; m_apiGatewayDomainName.assign(value); }

    /**
     * <p>A domain name for the WebSocket API.</p>
     */
    inline DomainNameConfiguration& WithApiGatewayDomainName(const Aws::String& value) { SetApiGatewayDomainName(value); return *this;}

    /**
     * <p>A domain name for the WebSocket API.</p>
     */
    inline DomainNameConfiguration& WithApiGatewayDomainName(Aws::String&& value) { SetApiGatewayDomainName(std::move(value)); return *this;}

    /**
     * <p>A domain name for the WebSocket API.</p>
     */
    inline DomainNameConfiguration& WithApiGatewayDomainName(const char* value) { SetApiGatewayDomainName(value); return *this;}


    /**
     * <p>An AWS-managed certificate that will be used by the edge-optimized endpoint
     * for
 this domain name. AWS Certificate Manager is the only supported source.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>An AWS-managed certificate that will be used by the edge-optimized endpoint
     * for
 this domain name. AWS Certificate Manager is the only supported source.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>An AWS-managed certificate that will be used by the edge-optimized endpoint
     * for
 this domain name. AWS Certificate Manager is the only supported source.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>An AWS-managed certificate that will be used by the edge-optimized endpoint
     * for
 this domain name. AWS Certificate Manager is the only supported source.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>An AWS-managed certificate that will be used by the edge-optimized endpoint
     * for
 this domain name. AWS Certificate Manager is the only supported source.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>An AWS-managed certificate that will be used by the edge-optimized endpoint
     * for
 this domain name. AWS Certificate Manager is the only supported source.</p>
     */
    inline DomainNameConfiguration& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>An AWS-managed certificate that will be used by the edge-optimized endpoint
     * for
 this domain name. AWS Certificate Manager is the only supported source.</p>
     */
    inline DomainNameConfiguration& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>An AWS-managed certificate that will be used by the edge-optimized endpoint
     * for
 this domain name. AWS Certificate Manager is the only supported source.</p>
     */
    inline DomainNameConfiguration& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The user-friendly name of the certificate that will be used by the
     * edge-optimized
 endpoint for this domain name.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The user-friendly name of the certificate that will be used by the
     * edge-optimized
 endpoint for this domain name.</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The user-friendly name of the certificate that will be used by the
     * edge-optimized
 endpoint for this domain name.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The user-friendly name of the certificate that will be used by the
     * edge-optimized
 endpoint for this domain name.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The user-friendly name of the certificate that will be used by the
     * edge-optimized
 endpoint for this domain name.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The user-friendly name of the certificate that will be used by the
     * edge-optimized
 endpoint for this domain name.</p>
     */
    inline DomainNameConfiguration& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The user-friendly name of the certificate that will be used by the
     * edge-optimized
 endpoint for this domain name.</p>
     */
    inline DomainNameConfiguration& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of the certificate that will be used by the
     * edge-optimized
 endpoint for this domain name.</p>
     */
    inline DomainNameConfiguration& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}


    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for
 this domain name was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetCertificateUploadDate() const{ return m_certificateUploadDate; }

    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for
 this domain name was uploaded.</p>
     */
    inline bool CertificateUploadDateHasBeenSet() const { return m_certificateUploadDateHasBeenSet; }

    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for
 this domain name was uploaded.</p>
     */
    inline void SetCertificateUploadDate(const Aws::Utils::DateTime& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = value; }

    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for
 this domain name was uploaded.</p>
     */
    inline void SetCertificateUploadDate(Aws::Utils::DateTime&& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = std::move(value); }

    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for
 this domain name was uploaded.</p>
     */
    inline DomainNameConfiguration& WithCertificateUploadDate(const Aws::Utils::DateTime& value) { SetCertificateUploadDate(value); return *this;}

    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for
 this domain name was uploaded.</p>
     */
    inline DomainNameConfiguration& WithCertificateUploadDate(Aws::Utils::DateTime&& value) { SetCertificateUploadDate(std::move(value)); return *this;}


    /**
     * <p>The endpoint type.</p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The endpoint type.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The endpoint type.</p>
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The endpoint type.</p>
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The endpoint type.</p>
     */
    inline DomainNameConfiguration& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The endpoint type.</p>
     */
    inline DomainNameConfiguration& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Route 53 Hosted Zone ID of the endpoint.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The Amazon Route 53 Hosted Zone ID of the endpoint.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>The Amazon Route 53 Hosted Zone ID of the endpoint.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The Amazon Route 53 Hosted Zone ID of the endpoint.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>The Amazon Route 53 Hosted Zone ID of the endpoint.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The Amazon Route 53 Hosted Zone ID of the endpoint.</p>
     */
    inline DomainNameConfiguration& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The Amazon Route 53 Hosted Zone ID of the endpoint.</p>
     */
    inline DomainNameConfiguration& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Route 53 Hosted Zone ID of the endpoint.</p>
     */
    inline DomainNameConfiguration& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>The Transport Layer Security (TLS) version of the security policy for this
     * domain name. The valid values are TLS_1_0 and TLS_1_2.</p>
     */
    inline const SecurityPolicy& GetSecurityPolicy() const{ return m_securityPolicy; }

    /**
     * <p>The Transport Layer Security (TLS) version of the security policy for this
     * domain name. The valid values are TLS_1_0 and TLS_1_2.</p>
     */
    inline bool SecurityPolicyHasBeenSet() const { return m_securityPolicyHasBeenSet; }

    /**
     * <p>The Transport Layer Security (TLS) version of the security policy for this
     * domain name. The valid values are TLS_1_0 and TLS_1_2.</p>
     */
    inline void SetSecurityPolicy(const SecurityPolicy& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = value; }

    /**
     * <p>The Transport Layer Security (TLS) version of the security policy for this
     * domain name. The valid values are TLS_1_0 and TLS_1_2.</p>
     */
    inline void SetSecurityPolicy(SecurityPolicy&& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = std::move(value); }

    /**
     * <p>The Transport Layer Security (TLS) version of the security policy for this
     * domain name. The valid values are TLS_1_0 and TLS_1_2.</p>
     */
    inline DomainNameConfiguration& WithSecurityPolicy(const SecurityPolicy& value) { SetSecurityPolicy(value); return *this;}

    /**
     * <p>The Transport Layer Security (TLS) version of the security policy for this
     * domain name. The valid values are TLS_1_0 and TLS_1_2.</p>
     */
    inline DomainNameConfiguration& WithSecurityPolicy(SecurityPolicy&& value) { SetSecurityPolicy(std::move(value)); return *this;}


    /**
     * <p>The status of the domain name migration. The valid values are AVAILABLE and
     * UPDATING. If the status is UPDATING, the domain cannot be modified further until
     * the existing operation is complete. If it is AVAILABLE, the domain can be
     * updated.</p>
     */
    inline const DomainNameStatus& GetDomainNameStatus() const{ return m_domainNameStatus; }

    /**
     * <p>The status of the domain name migration. The valid values are AVAILABLE and
     * UPDATING. If the status is UPDATING, the domain cannot be modified further until
     * the existing operation is complete. If it is AVAILABLE, the domain can be
     * updated.</p>
     */
    inline bool DomainNameStatusHasBeenSet() const { return m_domainNameStatusHasBeenSet; }

    /**
     * <p>The status of the domain name migration. The valid values are AVAILABLE and
     * UPDATING. If the status is UPDATING, the domain cannot be modified further until
     * the existing operation is complete. If it is AVAILABLE, the domain can be
     * updated.</p>
     */
    inline void SetDomainNameStatus(const DomainNameStatus& value) { m_domainNameStatusHasBeenSet = true; m_domainNameStatus = value; }

    /**
     * <p>The status of the domain name migration. The valid values are AVAILABLE and
     * UPDATING. If the status is UPDATING, the domain cannot be modified further until
     * the existing operation is complete. If it is AVAILABLE, the domain can be
     * updated.</p>
     */
    inline void SetDomainNameStatus(DomainNameStatus&& value) { m_domainNameStatusHasBeenSet = true; m_domainNameStatus = std::move(value); }

    /**
     * <p>The status of the domain name migration. The valid values are AVAILABLE and
     * UPDATING. If the status is UPDATING, the domain cannot be modified further until
     * the existing operation is complete. If it is AVAILABLE, the domain can be
     * updated.</p>
     */
    inline DomainNameConfiguration& WithDomainNameStatus(const DomainNameStatus& value) { SetDomainNameStatus(value); return *this;}

    /**
     * <p>The status of the domain name migration. The valid values are AVAILABLE and
     * UPDATING. If the status is UPDATING, the domain cannot be modified further until
     * the existing operation is complete. If it is AVAILABLE, the domain can be
     * updated.</p>
     */
    inline DomainNameConfiguration& WithDomainNameStatus(DomainNameStatus&& value) { SetDomainNameStatus(std::move(value)); return *this;}


    /**
     * <p>An optional text message containing detailed information about status of the
     * domain name migration.</p>
     */
    inline const Aws::String& GetDomainNameStatusMessage() const{ return m_domainNameStatusMessage; }

    /**
     * <p>An optional text message containing detailed information about status of the
     * domain name migration.</p>
     */
    inline bool DomainNameStatusMessageHasBeenSet() const { return m_domainNameStatusMessageHasBeenSet; }

    /**
     * <p>An optional text message containing detailed information about status of the
     * domain name migration.</p>
     */
    inline void SetDomainNameStatusMessage(const Aws::String& value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage = value; }

    /**
     * <p>An optional text message containing detailed information about status of the
     * domain name migration.</p>
     */
    inline void SetDomainNameStatusMessage(Aws::String&& value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage = std::move(value); }

    /**
     * <p>An optional text message containing detailed information about status of the
     * domain name migration.</p>
     */
    inline void SetDomainNameStatusMessage(const char* value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage.assign(value); }

    /**
     * <p>An optional text message containing detailed information about status of the
     * domain name migration.</p>
     */
    inline DomainNameConfiguration& WithDomainNameStatusMessage(const Aws::String& value) { SetDomainNameStatusMessage(value); return *this;}

    /**
     * <p>An optional text message containing detailed information about status of the
     * domain name migration.</p>
     */
    inline DomainNameConfiguration& WithDomainNameStatusMessage(Aws::String&& value) { SetDomainNameStatusMessage(std::move(value)); return *this;}

    /**
     * <p>An optional text message containing detailed information about status of the
     * domain name migration.</p>
     */
    inline DomainNameConfiguration& WithDomainNameStatusMessage(const char* value) { SetDomainNameStatusMessage(value); return *this;}

  private:

    Aws::String m_apiGatewayDomainName;
    bool m_apiGatewayDomainNameHasBeenSet;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet;

    Aws::Utils::DateTime m_certificateUploadDate;
    bool m_certificateUploadDateHasBeenSet;

    EndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;

    SecurityPolicy m_securityPolicy;
    bool m_securityPolicyHasBeenSet;

    DomainNameStatus m_domainNameStatus;
    bool m_domainNameStatusHasBeenSet;

    Aws::String m_domainNameStatusMessage;
    bool m_domainNameStatusMessageHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
