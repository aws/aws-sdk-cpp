﻿/**
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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
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
  class DomainName
  {
  public:
    AWS_APIGATEWAY_API DomainName();
    AWS_APIGATEWAY_API DomainName(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API DomainName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom domain name as an API host name, for example,
     * <code>my-api.example.com</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DomainName& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DomainName& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DomainName& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the domain name resource. Supported only for private
     * custom domain names.</p>
     */
    inline const Aws::String& GetDomainNameId() const{ return m_domainNameId; }
    inline bool DomainNameIdHasBeenSet() const { return m_domainNameIdHasBeenSet; }
    inline void SetDomainNameId(const Aws::String& value) { m_domainNameIdHasBeenSet = true; m_domainNameId = value; }
    inline void SetDomainNameId(Aws::String&& value) { m_domainNameIdHasBeenSet = true; m_domainNameId = std::move(value); }
    inline void SetDomainNameId(const char* value) { m_domainNameIdHasBeenSet = true; m_domainNameId.assign(value); }
    inline DomainName& WithDomainNameId(const Aws::String& value) { SetDomainNameId(value); return *this;}
    inline DomainName& WithDomainNameId(Aws::String&& value) { SetDomainNameId(std::move(value)); return *this;}
    inline DomainName& WithDomainNameId(const char* value) { SetDomainNameId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the domain name. Supported only for private custom domain names.
     * </p>
     */
    inline const Aws::String& GetDomainNameArn() const{ return m_domainNameArn; }
    inline bool DomainNameArnHasBeenSet() const { return m_domainNameArnHasBeenSet; }
    inline void SetDomainNameArn(const Aws::String& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = value; }
    inline void SetDomainNameArn(Aws::String&& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = std::move(value); }
    inline void SetDomainNameArn(const char* value) { m_domainNameArnHasBeenSet = true; m_domainNameArn.assign(value); }
    inline DomainName& WithDomainNameArn(const Aws::String& value) { SetDomainNameArn(value); return *this;}
    inline DomainName& WithDomainNameArn(Aws::String&& value) { SetDomainNameArn(std::move(value)); return *this;}
    inline DomainName& WithDomainNameArn(const char* value) { SetDomainNameArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate that will be used by edge-optimized endpoint or
     * private endpoint for this domain name.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }
    inline DomainName& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}
    inline DomainName& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}
    inline DomainName& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint or private endpoint for this domain name. Certificate
     * Manager is the only supported source.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline DomainName& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline DomainName& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline DomainName& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * or private endpoint for this domain name was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetCertificateUploadDate() const{ return m_certificateUploadDate; }
    inline bool CertificateUploadDateHasBeenSet() const { return m_certificateUploadDateHasBeenSet; }
    inline void SetCertificateUploadDate(const Aws::Utils::DateTime& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = value; }
    inline void SetCertificateUploadDate(Aws::Utils::DateTime&& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = std::move(value); }
    inline DomainName& WithCertificateUploadDate(const Aws::Utils::DateTime& value) { SetCertificateUploadDate(value); return *this;}
    inline DomainName& WithCertificateUploadDate(Aws::Utils::DateTime&& value) { SetCertificateUploadDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name associated with the regional endpoint for this custom domain
     * name. You set up this association by adding a DNS record that points the custom
     * domain name to this regional domain name. The regional domain name is returned
     * by API Gateway when you create a regional endpoint.</p>
     */
    inline const Aws::String& GetRegionalDomainName() const{ return m_regionalDomainName; }
    inline bool RegionalDomainNameHasBeenSet() const { return m_regionalDomainNameHasBeenSet; }
    inline void SetRegionalDomainName(const Aws::String& value) { m_regionalDomainNameHasBeenSet = true; m_regionalDomainName = value; }
    inline void SetRegionalDomainName(Aws::String&& value) { m_regionalDomainNameHasBeenSet = true; m_regionalDomainName = std::move(value); }
    inline void SetRegionalDomainName(const char* value) { m_regionalDomainNameHasBeenSet = true; m_regionalDomainName.assign(value); }
    inline DomainName& WithRegionalDomainName(const Aws::String& value) { SetRegionalDomainName(value); return *this;}
    inline DomainName& WithRegionalDomainName(Aws::String&& value) { SetRegionalDomainName(std::move(value)); return *this;}
    inline DomainName& WithRegionalDomainName(const char* value) { SetRegionalDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region-specific Amazon Route 53 Hosted Zone ID of the regional endpoint.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline const Aws::String& GetRegionalHostedZoneId() const{ return m_regionalHostedZoneId; }
    inline bool RegionalHostedZoneIdHasBeenSet() const { return m_regionalHostedZoneIdHasBeenSet; }
    inline void SetRegionalHostedZoneId(const Aws::String& value) { m_regionalHostedZoneIdHasBeenSet = true; m_regionalHostedZoneId = value; }
    inline void SetRegionalHostedZoneId(Aws::String&& value) { m_regionalHostedZoneIdHasBeenSet = true; m_regionalHostedZoneId = std::move(value); }
    inline void SetRegionalHostedZoneId(const char* value) { m_regionalHostedZoneIdHasBeenSet = true; m_regionalHostedZoneId.assign(value); }
    inline DomainName& WithRegionalHostedZoneId(const Aws::String& value) { SetRegionalHostedZoneId(value); return *this;}
    inline DomainName& WithRegionalHostedZoneId(Aws::String&& value) { SetRegionalHostedZoneId(std::move(value)); return *this;}
    inline DomainName& WithRegionalHostedZoneId(const char* value) { SetRegionalHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate that will be used for validating the regional
     * domain name.</p>
     */
    inline const Aws::String& GetRegionalCertificateName() const{ return m_regionalCertificateName; }
    inline bool RegionalCertificateNameHasBeenSet() const { return m_regionalCertificateNameHasBeenSet; }
    inline void SetRegionalCertificateName(const Aws::String& value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName = value; }
    inline void SetRegionalCertificateName(Aws::String&& value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName = std::move(value); }
    inline void SetRegionalCertificateName(const char* value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName.assign(value); }
    inline DomainName& WithRegionalCertificateName(const Aws::String& value) { SetRegionalCertificateName(value); return *this;}
    inline DomainName& WithRegionalCertificateName(Aws::String&& value) { SetRegionalCertificateName(std::move(value)); return *this;}
    inline DomainName& WithRegionalCertificateName(const char* value) { SetRegionalCertificateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * for validating the regional domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline const Aws::String& GetRegionalCertificateArn() const{ return m_regionalCertificateArn; }
    inline bool RegionalCertificateArnHasBeenSet() const { return m_regionalCertificateArnHasBeenSet; }
    inline void SetRegionalCertificateArn(const Aws::String& value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn = value; }
    inline void SetRegionalCertificateArn(Aws::String&& value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn = std::move(value); }
    inline void SetRegionalCertificateArn(const char* value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn.assign(value); }
    inline DomainName& WithRegionalCertificateArn(const Aws::String& value) { SetRegionalCertificateArn(value); return *this;}
    inline DomainName& WithRegionalCertificateArn(Aws::String&& value) { SetRegionalCertificateArn(std::move(value)); return *this;}
    inline DomainName& WithRegionalCertificateArn(const char* value) { SetRegionalCertificateArn(value); return *this;}
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
    inline bool DistributionDomainNameHasBeenSet() const { return m_distributionDomainNameHasBeenSet; }
    inline void SetDistributionDomainName(const Aws::String& value) { m_distributionDomainNameHasBeenSet = true; m_distributionDomainName = value; }
    inline void SetDistributionDomainName(Aws::String&& value) { m_distributionDomainNameHasBeenSet = true; m_distributionDomainName = std::move(value); }
    inline void SetDistributionDomainName(const char* value) { m_distributionDomainNameHasBeenSet = true; m_distributionDomainName.assign(value); }
    inline DomainName& WithDistributionDomainName(const Aws::String& value) { SetDistributionDomainName(value); return *this;}
    inline DomainName& WithDistributionDomainName(Aws::String&& value) { SetDistributionDomainName(std::move(value)); return *this;}
    inline DomainName& WithDistributionDomainName(const char* value) { SetDistributionDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region-agnostic Amazon Route 53 Hosted Zone ID of the edge-optimized
     * endpoint. The valid value is <code>Z2FDTNDATAQYW2</code> for all the regions.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline const Aws::String& GetDistributionHostedZoneId() const{ return m_distributionHostedZoneId; }
    inline bool DistributionHostedZoneIdHasBeenSet() const { return m_distributionHostedZoneIdHasBeenSet; }
    inline void SetDistributionHostedZoneId(const Aws::String& value) { m_distributionHostedZoneIdHasBeenSet = true; m_distributionHostedZoneId = value; }
    inline void SetDistributionHostedZoneId(Aws::String&& value) { m_distributionHostedZoneIdHasBeenSet = true; m_distributionHostedZoneId = std::move(value); }
    inline void SetDistributionHostedZoneId(const char* value) { m_distributionHostedZoneIdHasBeenSet = true; m_distributionHostedZoneId.assign(value); }
    inline DomainName& WithDistributionHostedZoneId(const Aws::String& value) { SetDistributionHostedZoneId(value); return *this;}
    inline DomainName& WithDistributionHostedZoneId(Aws::String&& value) { SetDistributionHostedZoneId(std::move(value)); return *this;}
    inline DomainName& WithDistributionHostedZoneId(const char* value) { SetDistributionHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration of this DomainName showing the endpoint types of
     * the domain name. </p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    inline void SetEndpointConfiguration(const EndpointConfiguration& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }
    inline void SetEndpointConfiguration(EndpointConfiguration&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }
    inline DomainName& WithEndpointConfiguration(const EndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}
    inline DomainName& WithEndpointConfiguration(EndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}
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
    inline bool DomainNameStatusHasBeenSet() const { return m_domainNameStatusHasBeenSet; }
    inline void SetDomainNameStatus(const DomainNameStatus& value) { m_domainNameStatusHasBeenSet = true; m_domainNameStatus = value; }
    inline void SetDomainNameStatus(DomainNameStatus&& value) { m_domainNameStatusHasBeenSet = true; m_domainNameStatus = std::move(value); }
    inline DomainName& WithDomainNameStatus(const DomainNameStatus& value) { SetDomainNameStatus(value); return *this;}
    inline DomainName& WithDomainNameStatus(DomainNameStatus&& value) { SetDomainNameStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional text message containing detailed information about status of the
     * DomainName migration.</p>
     */
    inline const Aws::String& GetDomainNameStatusMessage() const{ return m_domainNameStatusMessage; }
    inline bool DomainNameStatusMessageHasBeenSet() const { return m_domainNameStatusMessageHasBeenSet; }
    inline void SetDomainNameStatusMessage(const Aws::String& value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage = value; }
    inline void SetDomainNameStatusMessage(Aws::String&& value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage = std::move(value); }
    inline void SetDomainNameStatusMessage(const char* value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage.assign(value); }
    inline DomainName& WithDomainNameStatusMessage(const Aws::String& value) { SetDomainNameStatusMessage(value); return *this;}
    inline DomainName& WithDomainNameStatusMessage(Aws::String&& value) { SetDomainNameStatusMessage(std::move(value)); return *this;}
    inline DomainName& WithDomainNameStatusMessage(const char* value) { SetDomainNameStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * DomainName. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline const SecurityPolicy& GetSecurityPolicy() const{ return m_securityPolicy; }
    inline bool SecurityPolicyHasBeenSet() const { return m_securityPolicyHasBeenSet; }
    inline void SetSecurityPolicy(const SecurityPolicy& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = value; }
    inline void SetSecurityPolicy(SecurityPolicy&& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = std::move(value); }
    inline DomainName& WithSecurityPolicy(const SecurityPolicy& value) { SetSecurityPolicy(value); return *this;}
    inline DomainName& WithSecurityPolicy(SecurityPolicy&& value) { SetSecurityPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DomainName& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DomainName& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DomainName& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline DomainName& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline DomainName& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline DomainName& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DomainName& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline DomainName& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline DomainName& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mutual TLS authentication configuration for a custom domain name. If
     * specified, API Gateway performs two-way authentication between the client and
     * the server. Clients must present a trusted certificate to access your API.</p>
     */
    inline const MutualTlsAuthentication& GetMutualTlsAuthentication() const{ return m_mutualTlsAuthentication; }
    inline bool MutualTlsAuthenticationHasBeenSet() const { return m_mutualTlsAuthenticationHasBeenSet; }
    inline void SetMutualTlsAuthentication(const MutualTlsAuthentication& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = value; }
    inline void SetMutualTlsAuthentication(MutualTlsAuthentication&& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = std::move(value); }
    inline DomainName& WithMutualTlsAuthentication(const MutualTlsAuthentication& value) { SetMutualTlsAuthentication(value); return *this;}
    inline DomainName& WithMutualTlsAuthentication(MutualTlsAuthentication&& value) { SetMutualTlsAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline const Aws::String& GetOwnershipVerificationCertificateArn() const{ return m_ownershipVerificationCertificateArn; }
    inline bool OwnershipVerificationCertificateArnHasBeenSet() const { return m_ownershipVerificationCertificateArnHasBeenSet; }
    inline void SetOwnershipVerificationCertificateArn(const Aws::String& value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn = value; }
    inline void SetOwnershipVerificationCertificateArn(Aws::String&& value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn = std::move(value); }
    inline void SetOwnershipVerificationCertificateArn(const char* value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn.assign(value); }
    inline DomainName& WithOwnershipVerificationCertificateArn(const Aws::String& value) { SetOwnershipVerificationCertificateArn(value); return *this;}
    inline DomainName& WithOwnershipVerificationCertificateArn(Aws::String&& value) { SetOwnershipVerificationCertificateArn(std::move(value)); return *this;}
    inline DomainName& WithOwnershipVerificationCertificateArn(const char* value) { SetOwnershipVerificationCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A stringified JSON policy document that applies to the API Gateway Management
     * service for this DomainName. This policy document controls access for access
     * association sources to create domain name access associations with this
     * DomainName. Supported only for private custom domain names.</p>
     */
    inline const Aws::String& GetManagementPolicy() const{ return m_managementPolicy; }
    inline bool ManagementPolicyHasBeenSet() const { return m_managementPolicyHasBeenSet; }
    inline void SetManagementPolicy(const Aws::String& value) { m_managementPolicyHasBeenSet = true; m_managementPolicy = value; }
    inline void SetManagementPolicy(Aws::String&& value) { m_managementPolicyHasBeenSet = true; m_managementPolicy = std::move(value); }
    inline void SetManagementPolicy(const char* value) { m_managementPolicyHasBeenSet = true; m_managementPolicy.assign(value); }
    inline DomainName& WithManagementPolicy(const Aws::String& value) { SetManagementPolicy(value); return *this;}
    inline DomainName& WithManagementPolicy(Aws::String&& value) { SetManagementPolicy(std::move(value)); return *this;}
    inline DomainName& WithManagementPolicy(const char* value) { SetManagementPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A stringified JSON policy document that applies to the
     * <code>execute-api</code> service for this DomainName regardless of the caller
     * and Method configuration. Supported only for private custom domain names.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }
    inline DomainName& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline DomainName& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline DomainName& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline DomainName& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DomainName& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DomainName& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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

    Aws::Utils::DateTime m_certificateUploadDate;
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

    DomainNameStatus m_domainNameStatus;
    bool m_domainNameStatusHasBeenSet = false;

    Aws::String m_domainNameStatusMessage;
    bool m_domainNameStatusMessageHasBeenSet = false;

    SecurityPolicy m_securityPolicy;
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
