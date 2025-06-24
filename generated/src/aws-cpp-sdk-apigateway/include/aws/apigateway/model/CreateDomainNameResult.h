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
#include <aws/apigateway/model/RoutingMode.h>
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
  class CreateDomainNameResult
  {
  public:
    AWS_APIGATEWAY_API CreateDomainNameResult() = default;
    AWS_APIGATEWAY_API CreateDomainNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API CreateDomainNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The custom domain name as an API host name, for example,
     * <code>my-api.example.com</code>.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateDomainNameResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the domain name resource. Supported only for private
     * custom domain names.</p>
     */
    inline const Aws::String& GetDomainNameId() const { return m_domainNameId; }
    template<typename DomainNameIdT = Aws::String>
    void SetDomainNameId(DomainNameIdT&& value) { m_domainNameIdHasBeenSet = true; m_domainNameId = std::forward<DomainNameIdT>(value); }
    template<typename DomainNameIdT = Aws::String>
    CreateDomainNameResult& WithDomainNameId(DomainNameIdT&& value) { SetDomainNameId(std::forward<DomainNameIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the domain name. </p>
     */
    inline const Aws::String& GetDomainNameArn() const { return m_domainNameArn; }
    template<typename DomainNameArnT = Aws::String>
    void SetDomainNameArn(DomainNameArnT&& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = std::forward<DomainNameArnT>(value); }
    template<typename DomainNameArnT = Aws::String>
    CreateDomainNameResult& WithDomainNameArn(DomainNameArnT&& value) { SetDomainNameArn(std::forward<DomainNameArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate that will be used by edge-optimized endpoint or
     * private endpoint for this domain name.</p>
     */
    inline const Aws::String& GetCertificateName() const { return m_certificateName; }
    template<typename CertificateNameT = Aws::String>
    void SetCertificateName(CertificateNameT&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::forward<CertificateNameT>(value); }
    template<typename CertificateNameT = Aws::String>
    CreateDomainNameResult& WithCertificateName(CertificateNameT&& value) { SetCertificateName(std::forward<CertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint or private endpoint for this domain name. Certificate
     * Manager is the only supported source.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    CreateDomainNameResult& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * or private endpoint for this domain name was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetCertificateUploadDate() const { return m_certificateUploadDate; }
    template<typename CertificateUploadDateT = Aws::Utils::DateTime>
    void SetCertificateUploadDate(CertificateUploadDateT&& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = std::forward<CertificateUploadDateT>(value); }
    template<typename CertificateUploadDateT = Aws::Utils::DateTime>
    CreateDomainNameResult& WithCertificateUploadDate(CertificateUploadDateT&& value) { SetCertificateUploadDate(std::forward<CertificateUploadDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name associated with the regional endpoint for this custom domain
     * name. You set up this association by adding a DNS record that points the custom
     * domain name to this regional domain name. The regional domain name is returned
     * by API Gateway when you create a regional endpoint.</p>
     */
    inline const Aws::String& GetRegionalDomainName() const { return m_regionalDomainName; }
    template<typename RegionalDomainNameT = Aws::String>
    void SetRegionalDomainName(RegionalDomainNameT&& value) { m_regionalDomainNameHasBeenSet = true; m_regionalDomainName = std::forward<RegionalDomainNameT>(value); }
    template<typename RegionalDomainNameT = Aws::String>
    CreateDomainNameResult& WithRegionalDomainName(RegionalDomainNameT&& value) { SetRegionalDomainName(std::forward<RegionalDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region-specific Amazon Route 53 Hosted Zone ID of the regional endpoint.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline const Aws::String& GetRegionalHostedZoneId() const { return m_regionalHostedZoneId; }
    template<typename RegionalHostedZoneIdT = Aws::String>
    void SetRegionalHostedZoneId(RegionalHostedZoneIdT&& value) { m_regionalHostedZoneIdHasBeenSet = true; m_regionalHostedZoneId = std::forward<RegionalHostedZoneIdT>(value); }
    template<typename RegionalHostedZoneIdT = Aws::String>
    CreateDomainNameResult& WithRegionalHostedZoneId(RegionalHostedZoneIdT&& value) { SetRegionalHostedZoneId(std::forward<RegionalHostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate that will be used for validating the regional
     * domain name.</p>
     */
    inline const Aws::String& GetRegionalCertificateName() const { return m_regionalCertificateName; }
    template<typename RegionalCertificateNameT = Aws::String>
    void SetRegionalCertificateName(RegionalCertificateNameT&& value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName = std::forward<RegionalCertificateNameT>(value); }
    template<typename RegionalCertificateNameT = Aws::String>
    CreateDomainNameResult& WithRegionalCertificateName(RegionalCertificateNameT&& value) { SetRegionalCertificateName(std::forward<RegionalCertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * for validating the regional domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline const Aws::String& GetRegionalCertificateArn() const { return m_regionalCertificateArn; }
    template<typename RegionalCertificateArnT = Aws::String>
    void SetRegionalCertificateArn(RegionalCertificateArnT&& value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn = std::forward<RegionalCertificateArnT>(value); }
    template<typename RegionalCertificateArnT = Aws::String>
    CreateDomainNameResult& WithRegionalCertificateArn(RegionalCertificateArnT&& value) { SetRegionalCertificateArn(std::forward<RegionalCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the Amazon CloudFront distribution associated with this
     * custom domain name for an edge-optimized endpoint. You set up this association
     * when adding a DNS record pointing the custom domain name to this distribution
     * name. For more information about CloudFront distributions, see the Amazon
     * CloudFront documentation.</p>
     */
    inline const Aws::String& GetDistributionDomainName() const { return m_distributionDomainName; }
    template<typename DistributionDomainNameT = Aws::String>
    void SetDistributionDomainName(DistributionDomainNameT&& value) { m_distributionDomainNameHasBeenSet = true; m_distributionDomainName = std::forward<DistributionDomainNameT>(value); }
    template<typename DistributionDomainNameT = Aws::String>
    CreateDomainNameResult& WithDistributionDomainName(DistributionDomainNameT&& value) { SetDistributionDomainName(std::forward<DistributionDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region-agnostic Amazon Route 53 Hosted Zone ID of the edge-optimized
     * endpoint. The valid value is <code>Z2FDTNDATAQYW2</code> for all the regions.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline const Aws::String& GetDistributionHostedZoneId() const { return m_distributionHostedZoneId; }
    template<typename DistributionHostedZoneIdT = Aws::String>
    void SetDistributionHostedZoneId(DistributionHostedZoneIdT&& value) { m_distributionHostedZoneIdHasBeenSet = true; m_distributionHostedZoneId = std::forward<DistributionHostedZoneIdT>(value); }
    template<typename DistributionHostedZoneIdT = Aws::String>
    CreateDomainNameResult& WithDistributionHostedZoneId(DistributionHostedZoneIdT&& value) { SetDistributionHostedZoneId(std::forward<DistributionHostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration of this DomainName showing the endpoint types and
     * IP address types of the domain name. </p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const { return m_endpointConfiguration; }
    template<typename EndpointConfigurationT = EndpointConfiguration>
    void SetEndpointConfiguration(EndpointConfigurationT&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::forward<EndpointConfigurationT>(value); }
    template<typename EndpointConfigurationT = EndpointConfiguration>
    CreateDomainNameResult& WithEndpointConfiguration(EndpointConfigurationT&& value) { SetEndpointConfiguration(std::forward<EndpointConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DomainName migration. The valid values are
     * <code>AVAILABLE</code> and <code>UPDATING</code>. If the status is
     * <code>UPDATING</code>, the domain cannot be modified further until the existing
     * operation is complete. If it is <code>AVAILABLE</code>, the domain can be
     * updated.</p>
     */
    inline DomainNameStatus GetDomainNameStatus() const { return m_domainNameStatus; }
    inline void SetDomainNameStatus(DomainNameStatus value) { m_domainNameStatusHasBeenSet = true; m_domainNameStatus = value; }
    inline CreateDomainNameResult& WithDomainNameStatus(DomainNameStatus value) { SetDomainNameStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional text message containing detailed information about status of the
     * DomainName migration.</p>
     */
    inline const Aws::String& GetDomainNameStatusMessage() const { return m_domainNameStatusMessage; }
    template<typename DomainNameStatusMessageT = Aws::String>
    void SetDomainNameStatusMessage(DomainNameStatusMessageT&& value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage = std::forward<DomainNameStatusMessageT>(value); }
    template<typename DomainNameStatusMessageT = Aws::String>
    CreateDomainNameResult& WithDomainNameStatusMessage(DomainNameStatusMessageT&& value) { SetDomainNameStatusMessage(std::forward<DomainNameStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * DomainName. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline SecurityPolicy GetSecurityPolicy() const { return m_securityPolicy; }
    inline void SetSecurityPolicy(SecurityPolicy value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = value; }
    inline CreateDomainNameResult& WithSecurityPolicy(SecurityPolicy value) { SetSecurityPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDomainNameResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDomainNameResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The mutual TLS authentication configuration for a custom domain name. If
     * specified, API Gateway performs two-way authentication between the client and
     * the server. Clients must present a trusted certificate to access your API.</p>
     */
    inline const MutualTlsAuthentication& GetMutualTlsAuthentication() const { return m_mutualTlsAuthentication; }
    template<typename MutualTlsAuthenticationT = MutualTlsAuthentication>
    void SetMutualTlsAuthentication(MutualTlsAuthenticationT&& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = std::forward<MutualTlsAuthenticationT>(value); }
    template<typename MutualTlsAuthenticationT = MutualTlsAuthentication>
    CreateDomainNameResult& WithMutualTlsAuthentication(MutualTlsAuthenticationT&& value) { SetMutualTlsAuthentication(std::forward<MutualTlsAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline const Aws::String& GetOwnershipVerificationCertificateArn() const { return m_ownershipVerificationCertificateArn; }
    template<typename OwnershipVerificationCertificateArnT = Aws::String>
    void SetOwnershipVerificationCertificateArn(OwnershipVerificationCertificateArnT&& value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn = std::forward<OwnershipVerificationCertificateArnT>(value); }
    template<typename OwnershipVerificationCertificateArnT = Aws::String>
    CreateDomainNameResult& WithOwnershipVerificationCertificateArn(OwnershipVerificationCertificateArnT&& value) { SetOwnershipVerificationCertificateArn(std::forward<OwnershipVerificationCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A stringified JSON policy document that applies to the API Gateway Management
     * service for this DomainName. This policy document controls access for access
     * association sources to create domain name access associations with this
     * DomainName. Supported only for private custom domain names.</p>
     */
    inline const Aws::String& GetManagementPolicy() const { return m_managementPolicy; }
    template<typename ManagementPolicyT = Aws::String>
    void SetManagementPolicy(ManagementPolicyT&& value) { m_managementPolicyHasBeenSet = true; m_managementPolicy = std::forward<ManagementPolicyT>(value); }
    template<typename ManagementPolicyT = Aws::String>
    CreateDomainNameResult& WithManagementPolicy(ManagementPolicyT&& value) { SetManagementPolicy(std::forward<ManagementPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A stringified JSON policy document that applies to the
     * <code>execute-api</code> service for this DomainName regardless of the caller
     * and Method configuration. Supported only for private custom domain names.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    CreateDomainNameResult& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing mode for this domain name. The routing mode determines how API
     * Gateway sends traffic from your custom domain name to your private APIs.</p>
     */
    inline RoutingMode GetRoutingMode() const { return m_routingMode; }
    inline void SetRoutingMode(RoutingMode value) { m_routingModeHasBeenSet = true; m_routingMode = value; }
    inline CreateDomainNameResult& WithRoutingMode(RoutingMode value) { SetRoutingMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDomainNameResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_domainNameId;
    bool m_domainNameIdHasBeenSet = false;

    Aws::String m_domainNameArn;
    bool m_domainNameArnHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::Utils::DateTime m_certificateUploadDate{};
    bool m_certificateUploadDateHasBeenSet = false;

    Aws::String m_regionalDomainName;
    bool m_regionalDomainNameHasBeenSet = false;

    Aws::String m_regionalHostedZoneId;
    bool m_regionalHostedZoneIdHasBeenSet = false;

    Aws::String m_regionalCertificateName;
    bool m_regionalCertificateNameHasBeenSet = false;

    Aws::String m_regionalCertificateArn;
    bool m_regionalCertificateArnHasBeenSet = false;

    Aws::String m_distributionDomainName;
    bool m_distributionDomainNameHasBeenSet = false;

    Aws::String m_distributionHostedZoneId;
    bool m_distributionHostedZoneIdHasBeenSet = false;

    EndpointConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet = false;

    DomainNameStatus m_domainNameStatus{DomainNameStatus::NOT_SET};
    bool m_domainNameStatusHasBeenSet = false;

    Aws::String m_domainNameStatusMessage;
    bool m_domainNameStatusMessageHasBeenSet = false;

    SecurityPolicy m_securityPolicy{SecurityPolicy::NOT_SET};
    bool m_securityPolicyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    MutualTlsAuthentication m_mutualTlsAuthentication;
    bool m_mutualTlsAuthenticationHasBeenSet = false;

    Aws::String m_ownershipVerificationCertificateArn;
    bool m_ownershipVerificationCertificateArnHasBeenSet = false;

    Aws::String m_managementPolicy;
    bool m_managementPolicyHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    RoutingMode m_routingMode{RoutingMode::NOT_SET};
    bool m_routingModeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
