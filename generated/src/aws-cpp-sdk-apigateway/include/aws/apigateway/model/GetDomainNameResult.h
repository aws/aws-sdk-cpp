/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apigateway/model/EndpointConfiguration.h>
#include <aws/apigateway/model/DomainNameStatus.h>
#include <aws/apigateway/model/SecurityPolicy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/MutualTlsAuthentication.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents a custom domain name as a user-friendly host name of an API
   * (RestApi).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DomainName">AWS
   * API Reference</a></p>
   */
  class GetDomainNameResult
  {
  public:
    AWS_APIGATEWAY_API GetDomainNameResult();
    AWS_APIGATEWAY_API GetDomainNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetDomainNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The custom domain name as an API host name, for example,
     * <code>my-api.example.com</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline GetDomainNameResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetDomainNameResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetDomainNameResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate that will be used by edge-optimized endpoint for
     * this domain name.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }
    inline void SetCertificateName(const Aws::String& value) { m_certificateName = value; }
    inline void SetCertificateName(Aws::String&& value) { m_certificateName = std::move(value); }
    inline void SetCertificateName(const char* value) { m_certificateName.assign(value); }
    inline GetDomainNameResult& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}
    inline GetDomainNameResult& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}
    inline GetDomainNameResult& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArn.assign(value); }
    inline GetDomainNameResult& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline GetDomainNameResult& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline GetDomainNameResult& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for this domain name was uploaded. API Gateway doesn't change this value if you
     * update the certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetCertificateUploadDate() const{ return m_certificateUploadDate; }
    inline void SetCertificateUploadDate(const Aws::Utils::DateTime& value) { m_certificateUploadDate = value; }
    inline void SetCertificateUploadDate(Aws::Utils::DateTime&& value) { m_certificateUploadDate = std::move(value); }
    inline GetDomainNameResult& WithCertificateUploadDate(const Aws::Utils::DateTime& value) { SetCertificateUploadDate(value); return *this;}
    inline GetDomainNameResult& WithCertificateUploadDate(Aws::Utils::DateTime&& value) { SetCertificateUploadDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name associated with the regional endpoint for this custom domain
     * name. You set up this association by adding a DNS record that points the custom
     * domain name to this regional domain name. The regional domain name is returned
     * by API Gateway when you create a regional endpoint.</p>
     */
    inline const Aws::String& GetRegionalDomainName() const{ return m_regionalDomainName; }
    inline void SetRegionalDomainName(const Aws::String& value) { m_regionalDomainName = value; }
    inline void SetRegionalDomainName(Aws::String&& value) { m_regionalDomainName = std::move(value); }
    inline void SetRegionalDomainName(const char* value) { m_regionalDomainName.assign(value); }
    inline GetDomainNameResult& WithRegionalDomainName(const Aws::String& value) { SetRegionalDomainName(value); return *this;}
    inline GetDomainNameResult& WithRegionalDomainName(Aws::String&& value) { SetRegionalDomainName(std::move(value)); return *this;}
    inline GetDomainNameResult& WithRegionalDomainName(const char* value) { SetRegionalDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region-specific Amazon Route 53 Hosted Zone ID of the regional endpoint.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline const Aws::String& GetRegionalHostedZoneId() const{ return m_regionalHostedZoneId; }
    inline void SetRegionalHostedZoneId(const Aws::String& value) { m_regionalHostedZoneId = value; }
    inline void SetRegionalHostedZoneId(Aws::String&& value) { m_regionalHostedZoneId = std::move(value); }
    inline void SetRegionalHostedZoneId(const char* value) { m_regionalHostedZoneId.assign(value); }
    inline GetDomainNameResult& WithRegionalHostedZoneId(const Aws::String& value) { SetRegionalHostedZoneId(value); return *this;}
    inline GetDomainNameResult& WithRegionalHostedZoneId(Aws::String&& value) { SetRegionalHostedZoneId(std::move(value)); return *this;}
    inline GetDomainNameResult& WithRegionalHostedZoneId(const char* value) { SetRegionalHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate that will be used for validating the regional
     * domain name.</p>
     */
    inline const Aws::String& GetRegionalCertificateName() const{ return m_regionalCertificateName; }
    inline void SetRegionalCertificateName(const Aws::String& value) { m_regionalCertificateName = value; }
    inline void SetRegionalCertificateName(Aws::String&& value) { m_regionalCertificateName = std::move(value); }
    inline void SetRegionalCertificateName(const char* value) { m_regionalCertificateName.assign(value); }
    inline GetDomainNameResult& WithRegionalCertificateName(const Aws::String& value) { SetRegionalCertificateName(value); return *this;}
    inline GetDomainNameResult& WithRegionalCertificateName(Aws::String&& value) { SetRegionalCertificateName(std::move(value)); return *this;}
    inline GetDomainNameResult& WithRegionalCertificateName(const char* value) { SetRegionalCertificateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * for validating the regional domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline const Aws::String& GetRegionalCertificateArn() const{ return m_regionalCertificateArn; }
    inline void SetRegionalCertificateArn(const Aws::String& value) { m_regionalCertificateArn = value; }
    inline void SetRegionalCertificateArn(Aws::String&& value) { m_regionalCertificateArn = std::move(value); }
    inline void SetRegionalCertificateArn(const char* value) { m_regionalCertificateArn.assign(value); }
    inline GetDomainNameResult& WithRegionalCertificateArn(const Aws::String& value) { SetRegionalCertificateArn(value); return *this;}
    inline GetDomainNameResult& WithRegionalCertificateArn(Aws::String&& value) { SetRegionalCertificateArn(std::move(value)); return *this;}
    inline GetDomainNameResult& WithRegionalCertificateArn(const char* value) { SetRegionalCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the Amazon CloudFront distribution associated with this
     * custom domain name for an edge-optimized endpoint. You set up this association
     * when adding a DNS record pointing the custom domain name to this distribution
     * name. For more information about CloudFront distributions, see the Amazon
     * CloudFront documentation.</p>
     */
    inline const Aws::String& GetDistributionDomainName() const{ return m_distributionDomainName; }
    inline void SetDistributionDomainName(const Aws::String& value) { m_distributionDomainName = value; }
    inline void SetDistributionDomainName(Aws::String&& value) { m_distributionDomainName = std::move(value); }
    inline void SetDistributionDomainName(const char* value) { m_distributionDomainName.assign(value); }
    inline GetDomainNameResult& WithDistributionDomainName(const Aws::String& value) { SetDistributionDomainName(value); return *this;}
    inline GetDomainNameResult& WithDistributionDomainName(Aws::String&& value) { SetDistributionDomainName(std::move(value)); return *this;}
    inline GetDomainNameResult& WithDistributionDomainName(const char* value) { SetDistributionDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region-agnostic Amazon Route 53 Hosted Zone ID of the edge-optimized
     * endpoint. The valid value is <code>Z2FDTNDATAQYW2</code> for all the regions.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline const Aws::String& GetDistributionHostedZoneId() const{ return m_distributionHostedZoneId; }
    inline void SetDistributionHostedZoneId(const Aws::String& value) { m_distributionHostedZoneId = value; }
    inline void SetDistributionHostedZoneId(Aws::String&& value) { m_distributionHostedZoneId = std::move(value); }
    inline void SetDistributionHostedZoneId(const char* value) { m_distributionHostedZoneId.assign(value); }
    inline GetDomainNameResult& WithDistributionHostedZoneId(const Aws::String& value) { SetDistributionHostedZoneId(value); return *this;}
    inline GetDomainNameResult& WithDistributionHostedZoneId(Aws::String&& value) { SetDistributionHostedZoneId(std::move(value)); return *this;}
    inline GetDomainNameResult& WithDistributionHostedZoneId(const char* value) { SetDistributionHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration of this DomainName showing the endpoint types of
     * the domain name. </p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }
    inline void SetEndpointConfiguration(const EndpointConfiguration& value) { m_endpointConfiguration = value; }
    inline void SetEndpointConfiguration(EndpointConfiguration&& value) { m_endpointConfiguration = std::move(value); }
    inline GetDomainNameResult& WithEndpointConfiguration(const EndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}
    inline GetDomainNameResult& WithEndpointConfiguration(EndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DomainName migration. The valid values are
     * <code>AVAILABLE</code> and <code>UPDATING</code>. If the status is
     * <code>UPDATING</code>, the domain cannot be modified further until the existing
     * operation is complete. If it is <code>AVAILABLE</code>, the domain can be
     * updated.</p>
     */
    inline const DomainNameStatus& GetDomainNameStatus() const{ return m_domainNameStatus; }
    inline void SetDomainNameStatus(const DomainNameStatus& value) { m_domainNameStatus = value; }
    inline void SetDomainNameStatus(DomainNameStatus&& value) { m_domainNameStatus = std::move(value); }
    inline GetDomainNameResult& WithDomainNameStatus(const DomainNameStatus& value) { SetDomainNameStatus(value); return *this;}
    inline GetDomainNameResult& WithDomainNameStatus(DomainNameStatus&& value) { SetDomainNameStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional text message containing detailed information about status of the
     * DomainName migration.</p>
     */
    inline const Aws::String& GetDomainNameStatusMessage() const{ return m_domainNameStatusMessage; }
    inline void SetDomainNameStatusMessage(const Aws::String& value) { m_domainNameStatusMessage = value; }
    inline void SetDomainNameStatusMessage(Aws::String&& value) { m_domainNameStatusMessage = std::move(value); }
    inline void SetDomainNameStatusMessage(const char* value) { m_domainNameStatusMessage.assign(value); }
    inline GetDomainNameResult& WithDomainNameStatusMessage(const Aws::String& value) { SetDomainNameStatusMessage(value); return *this;}
    inline GetDomainNameResult& WithDomainNameStatusMessage(Aws::String&& value) { SetDomainNameStatusMessage(std::move(value)); return *this;}
    inline GetDomainNameResult& WithDomainNameStatusMessage(const char* value) { SetDomainNameStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * DomainName. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline const SecurityPolicy& GetSecurityPolicy() const{ return m_securityPolicy; }
    inline void SetSecurityPolicy(const SecurityPolicy& value) { m_securityPolicy = value; }
    inline void SetSecurityPolicy(SecurityPolicy&& value) { m_securityPolicy = std::move(value); }
    inline GetDomainNameResult& WithSecurityPolicy(const SecurityPolicy& value) { SetSecurityPolicy(value); return *this;}
    inline GetDomainNameResult& WithSecurityPolicy(SecurityPolicy&& value) { SetSecurityPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetDomainNameResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetDomainNameResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetDomainNameResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetDomainNameResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDomainNameResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDomainNameResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetDomainNameResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDomainNameResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDomainNameResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mutual TLS authentication configuration for a custom domain name. If
     * specified, API Gateway performs two-way authentication between the client and
     * the server. Clients must present a trusted certificate to access your API.</p>
     */
    inline const MutualTlsAuthentication& GetMutualTlsAuthentication() const{ return m_mutualTlsAuthentication; }
    inline void SetMutualTlsAuthentication(const MutualTlsAuthentication& value) { m_mutualTlsAuthentication = value; }
    inline void SetMutualTlsAuthentication(MutualTlsAuthentication&& value) { m_mutualTlsAuthentication = std::move(value); }
    inline GetDomainNameResult& WithMutualTlsAuthentication(const MutualTlsAuthentication& value) { SetMutualTlsAuthentication(value); return *this;}
    inline GetDomainNameResult& WithMutualTlsAuthentication(MutualTlsAuthentication&& value) { SetMutualTlsAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline const Aws::String& GetOwnershipVerificationCertificateArn() const{ return m_ownershipVerificationCertificateArn; }
    inline void SetOwnershipVerificationCertificateArn(const Aws::String& value) { m_ownershipVerificationCertificateArn = value; }
    inline void SetOwnershipVerificationCertificateArn(Aws::String&& value) { m_ownershipVerificationCertificateArn = std::move(value); }
    inline void SetOwnershipVerificationCertificateArn(const char* value) { m_ownershipVerificationCertificateArn.assign(value); }
    inline GetDomainNameResult& WithOwnershipVerificationCertificateArn(const Aws::String& value) { SetOwnershipVerificationCertificateArn(value); return *this;}
    inline GetDomainNameResult& WithOwnershipVerificationCertificateArn(Aws::String&& value) { SetOwnershipVerificationCertificateArn(std::move(value)); return *this;}
    inline GetDomainNameResult& WithOwnershipVerificationCertificateArn(const char* value) { SetOwnershipVerificationCertificateArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDomainNameResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDomainNameResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDomainNameResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;

    Aws::String m_certificateName;

    Aws::String m_certificateArn;

    Aws::Utils::DateTime m_certificateUploadDate;

    Aws::String m_regionalDomainName;

    Aws::String m_regionalHostedZoneId;

    Aws::String m_regionalCertificateName;

    Aws::String m_regionalCertificateArn;

    Aws::String m_distributionDomainName;

    Aws::String m_distributionHostedZoneId;

    EndpointConfiguration m_endpointConfiguration;

    DomainNameStatus m_domainNameStatus;

    Aws::String m_domainNameStatusMessage;

    SecurityPolicy m_securityPolicy;

    Aws::Map<Aws::String, Aws::String> m_tags;

    MutualTlsAuthentication m_mutualTlsAuthentication;

    Aws::String m_ownershipVerificationCertificateArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
