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


    /**
     * <p>The custom domain name as an API host name, for example,
     * <code>my-api.example.com</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The custom domain name as an API host name, for example,
     * <code>my-api.example.com</code>.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The custom domain name as an API host name, for example,
     * <code>my-api.example.com</code>.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The custom domain name as an API host name, for example,
     * <code>my-api.example.com</code>.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The custom domain name as an API host name, for example,
     * <code>my-api.example.com</code>.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The custom domain name as an API host name, for example,
     * <code>my-api.example.com</code>.</p>
     */
    inline DomainName& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The custom domain name as an API host name, for example,
     * <code>my-api.example.com</code>.</p>
     */
    inline DomainName& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The custom domain name as an API host name, for example,
     * <code>my-api.example.com</code>.</p>
     */
    inline DomainName& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The name of the certificate that will be used by edge-optimized endpoint for
     * this domain name.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The name of the certificate that will be used by edge-optimized endpoint for
     * this domain name.</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The name of the certificate that will be used by edge-optimized endpoint for
     * this domain name.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The name of the certificate that will be used by edge-optimized endpoint for
     * this domain name.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The name of the certificate that will be used by edge-optimized endpoint for
     * this domain name.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The name of the certificate that will be used by edge-optimized endpoint for
     * this domain name.</p>
     */
    inline DomainName& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name of the certificate that will be used by edge-optimized endpoint for
     * this domain name.</p>
     */
    inline DomainName& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate that will be used by edge-optimized endpoint for
     * this domain name.</p>
     */
    inline DomainName& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}


    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline DomainName& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline DomainName& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline DomainName& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for this domain name was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetCertificateUploadDate() const{ return m_certificateUploadDate; }

    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for this domain name was uploaded.</p>
     */
    inline bool CertificateUploadDateHasBeenSet() const { return m_certificateUploadDateHasBeenSet; }

    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for this domain name was uploaded.</p>
     */
    inline void SetCertificateUploadDate(const Aws::Utils::DateTime& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = value; }

    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for this domain name was uploaded.</p>
     */
    inline void SetCertificateUploadDate(Aws::Utils::DateTime&& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = std::move(value); }

    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for this domain name was uploaded.</p>
     */
    inline DomainName& WithCertificateUploadDate(const Aws::Utils::DateTime& value) { SetCertificateUploadDate(value); return *this;}

    /**
     * <p>The timestamp when the certificate that was used by edge-optimized endpoint
     * for this domain name was uploaded.</p>
     */
    inline DomainName& WithCertificateUploadDate(Aws::Utils::DateTime&& value) { SetCertificateUploadDate(std::move(value)); return *this;}


    /**
     * <p>The domain name associated with the regional endpoint for this custom domain
     * name. You set up this association by adding a DNS record that points the custom
     * domain name to this regional domain name. The regional domain name is returned
     * by API Gateway when you create a regional endpoint.</p>
     */
    inline const Aws::String& GetRegionalDomainName() const{ return m_regionalDomainName; }

    /**
     * <p>The domain name associated with the regional endpoint for this custom domain
     * name. You set up this association by adding a DNS record that points the custom
     * domain name to this regional domain name. The regional domain name is returned
     * by API Gateway when you create a regional endpoint.</p>
     */
    inline bool RegionalDomainNameHasBeenSet() const { return m_regionalDomainNameHasBeenSet; }

    /**
     * <p>The domain name associated with the regional endpoint for this custom domain
     * name. You set up this association by adding a DNS record that points the custom
     * domain name to this regional domain name. The regional domain name is returned
     * by API Gateway when you create a regional endpoint.</p>
     */
    inline void SetRegionalDomainName(const Aws::String& value) { m_regionalDomainNameHasBeenSet = true; m_regionalDomainName = value; }

    /**
     * <p>The domain name associated with the regional endpoint for this custom domain
     * name. You set up this association by adding a DNS record that points the custom
     * domain name to this regional domain name. The regional domain name is returned
     * by API Gateway when you create a regional endpoint.</p>
     */
    inline void SetRegionalDomainName(Aws::String&& value) { m_regionalDomainNameHasBeenSet = true; m_regionalDomainName = std::move(value); }

    /**
     * <p>The domain name associated with the regional endpoint for this custom domain
     * name. You set up this association by adding a DNS record that points the custom
     * domain name to this regional domain name. The regional domain name is returned
     * by API Gateway when you create a regional endpoint.</p>
     */
    inline void SetRegionalDomainName(const char* value) { m_regionalDomainNameHasBeenSet = true; m_regionalDomainName.assign(value); }

    /**
     * <p>The domain name associated with the regional endpoint for this custom domain
     * name. You set up this association by adding a DNS record that points the custom
     * domain name to this regional domain name. The regional domain name is returned
     * by API Gateway when you create a regional endpoint.</p>
     */
    inline DomainName& WithRegionalDomainName(const Aws::String& value) { SetRegionalDomainName(value); return *this;}

    /**
     * <p>The domain name associated with the regional endpoint for this custom domain
     * name. You set up this association by adding a DNS record that points the custom
     * domain name to this regional domain name. The regional domain name is returned
     * by API Gateway when you create a regional endpoint.</p>
     */
    inline DomainName& WithRegionalDomainName(Aws::String&& value) { SetRegionalDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name associated with the regional endpoint for this custom domain
     * name. You set up this association by adding a DNS record that points the custom
     * domain name to this regional domain name. The regional domain name is returned
     * by API Gateway when you create a regional endpoint.</p>
     */
    inline DomainName& WithRegionalDomainName(const char* value) { SetRegionalDomainName(value); return *this;}


    /**
     * <p>The region-specific Amazon Route 53 Hosted Zone ID of the regional endpoint.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline const Aws::String& GetRegionalHostedZoneId() const{ return m_regionalHostedZoneId; }

    /**
     * <p>The region-specific Amazon Route 53 Hosted Zone ID of the regional endpoint.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline bool RegionalHostedZoneIdHasBeenSet() const { return m_regionalHostedZoneIdHasBeenSet; }

    /**
     * <p>The region-specific Amazon Route 53 Hosted Zone ID of the regional endpoint.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline void SetRegionalHostedZoneId(const Aws::String& value) { m_regionalHostedZoneIdHasBeenSet = true; m_regionalHostedZoneId = value; }

    /**
     * <p>The region-specific Amazon Route 53 Hosted Zone ID of the regional endpoint.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline void SetRegionalHostedZoneId(Aws::String&& value) { m_regionalHostedZoneIdHasBeenSet = true; m_regionalHostedZoneId = std::move(value); }

    /**
     * <p>The region-specific Amazon Route 53 Hosted Zone ID of the regional endpoint.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline void SetRegionalHostedZoneId(const char* value) { m_regionalHostedZoneIdHasBeenSet = true; m_regionalHostedZoneId.assign(value); }

    /**
     * <p>The region-specific Amazon Route 53 Hosted Zone ID of the regional endpoint.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline DomainName& WithRegionalHostedZoneId(const Aws::String& value) { SetRegionalHostedZoneId(value); return *this;}

    /**
     * <p>The region-specific Amazon Route 53 Hosted Zone ID of the regional endpoint.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline DomainName& WithRegionalHostedZoneId(Aws::String&& value) { SetRegionalHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The region-specific Amazon Route 53 Hosted Zone ID of the regional endpoint.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline DomainName& WithRegionalHostedZoneId(const char* value) { SetRegionalHostedZoneId(value); return *this;}


    /**
     * <p>The name of the certificate that will be used for validating the regional
     * domain name.</p>
     */
    inline const Aws::String& GetRegionalCertificateName() const{ return m_regionalCertificateName; }

    /**
     * <p>The name of the certificate that will be used for validating the regional
     * domain name.</p>
     */
    inline bool RegionalCertificateNameHasBeenSet() const { return m_regionalCertificateNameHasBeenSet; }

    /**
     * <p>The name of the certificate that will be used for validating the regional
     * domain name.</p>
     */
    inline void SetRegionalCertificateName(const Aws::String& value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName = value; }

    /**
     * <p>The name of the certificate that will be used for validating the regional
     * domain name.</p>
     */
    inline void SetRegionalCertificateName(Aws::String&& value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName = std::move(value); }

    /**
     * <p>The name of the certificate that will be used for validating the regional
     * domain name.</p>
     */
    inline void SetRegionalCertificateName(const char* value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName.assign(value); }

    /**
     * <p>The name of the certificate that will be used for validating the regional
     * domain name.</p>
     */
    inline DomainName& WithRegionalCertificateName(const Aws::String& value) { SetRegionalCertificateName(value); return *this;}

    /**
     * <p>The name of the certificate that will be used for validating the regional
     * domain name.</p>
     */
    inline DomainName& WithRegionalCertificateName(Aws::String&& value) { SetRegionalCertificateName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate that will be used for validating the regional
     * domain name.</p>
     */
    inline DomainName& WithRegionalCertificateName(const char* value) { SetRegionalCertificateName(value); return *this;}


    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * for validating the regional domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline const Aws::String& GetRegionalCertificateArn() const{ return m_regionalCertificateArn; }

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * for validating the regional domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline bool RegionalCertificateArnHasBeenSet() const { return m_regionalCertificateArnHasBeenSet; }

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * for validating the regional domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline void SetRegionalCertificateArn(const Aws::String& value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn = value; }

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * for validating the regional domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline void SetRegionalCertificateArn(Aws::String&& value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn = std::move(value); }

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * for validating the regional domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline void SetRegionalCertificateArn(const char* value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn.assign(value); }

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * for validating the regional domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline DomainName& WithRegionalCertificateArn(const Aws::String& value) { SetRegionalCertificateArn(value); return *this;}

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * for validating the regional domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline DomainName& WithRegionalCertificateArn(Aws::String&& value) { SetRegionalCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * for validating the regional domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline DomainName& WithRegionalCertificateArn(const char* value) { SetRegionalCertificateArn(value); return *this;}


    /**
     * <p>The domain name of the Amazon CloudFront distribution associated with this
     * custom domain name for an edge-optimized endpoint. You set up this association
     * when adding a DNS record pointing the custom domain name to this distribution
     * name. For more information about CloudFront distributions, see the Amazon
     * CloudFront documentation.</p>
     */
    inline const Aws::String& GetDistributionDomainName() const{ return m_distributionDomainName; }

    /**
     * <p>The domain name of the Amazon CloudFront distribution associated with this
     * custom domain name for an edge-optimized endpoint. You set up this association
     * when adding a DNS record pointing the custom domain name to this distribution
     * name. For more information about CloudFront distributions, see the Amazon
     * CloudFront documentation.</p>
     */
    inline bool DistributionDomainNameHasBeenSet() const { return m_distributionDomainNameHasBeenSet; }

    /**
     * <p>The domain name of the Amazon CloudFront distribution associated with this
     * custom domain name for an edge-optimized endpoint. You set up this association
     * when adding a DNS record pointing the custom domain name to this distribution
     * name. For more information about CloudFront distributions, see the Amazon
     * CloudFront documentation.</p>
     */
    inline void SetDistributionDomainName(const Aws::String& value) { m_distributionDomainNameHasBeenSet = true; m_distributionDomainName = value; }

    /**
     * <p>The domain name of the Amazon CloudFront distribution associated with this
     * custom domain name for an edge-optimized endpoint. You set up this association
     * when adding a DNS record pointing the custom domain name to this distribution
     * name. For more information about CloudFront distributions, see the Amazon
     * CloudFront documentation.</p>
     */
    inline void SetDistributionDomainName(Aws::String&& value) { m_distributionDomainNameHasBeenSet = true; m_distributionDomainName = std::move(value); }

    /**
     * <p>The domain name of the Amazon CloudFront distribution associated with this
     * custom domain name for an edge-optimized endpoint. You set up this association
     * when adding a DNS record pointing the custom domain name to this distribution
     * name. For more information about CloudFront distributions, see the Amazon
     * CloudFront documentation.</p>
     */
    inline void SetDistributionDomainName(const char* value) { m_distributionDomainNameHasBeenSet = true; m_distributionDomainName.assign(value); }

    /**
     * <p>The domain name of the Amazon CloudFront distribution associated with this
     * custom domain name for an edge-optimized endpoint. You set up this association
     * when adding a DNS record pointing the custom domain name to this distribution
     * name. For more information about CloudFront distributions, see the Amazon
     * CloudFront documentation.</p>
     */
    inline DomainName& WithDistributionDomainName(const Aws::String& value) { SetDistributionDomainName(value); return *this;}

    /**
     * <p>The domain name of the Amazon CloudFront distribution associated with this
     * custom domain name for an edge-optimized endpoint. You set up this association
     * when adding a DNS record pointing the custom domain name to this distribution
     * name. For more information about CloudFront distributions, see the Amazon
     * CloudFront documentation.</p>
     */
    inline DomainName& WithDistributionDomainName(Aws::String&& value) { SetDistributionDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name of the Amazon CloudFront distribution associated with this
     * custom domain name for an edge-optimized endpoint. You set up this association
     * when adding a DNS record pointing the custom domain name to this distribution
     * name. For more information about CloudFront distributions, see the Amazon
     * CloudFront documentation.</p>
     */
    inline DomainName& WithDistributionDomainName(const char* value) { SetDistributionDomainName(value); return *this;}


    /**
     * <p>The region-agnostic Amazon Route 53 Hosted Zone ID of the edge-optimized
     * endpoint. The valid value is <code>Z2FDTNDATAQYW2</code> for all the regions.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline const Aws::String& GetDistributionHostedZoneId() const{ return m_distributionHostedZoneId; }

    /**
     * <p>The region-agnostic Amazon Route 53 Hosted Zone ID of the edge-optimized
     * endpoint. The valid value is <code>Z2FDTNDATAQYW2</code> for all the regions.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline bool DistributionHostedZoneIdHasBeenSet() const { return m_distributionHostedZoneIdHasBeenSet; }

    /**
     * <p>The region-agnostic Amazon Route 53 Hosted Zone ID of the edge-optimized
     * endpoint. The valid value is <code>Z2FDTNDATAQYW2</code> for all the regions.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline void SetDistributionHostedZoneId(const Aws::String& value) { m_distributionHostedZoneIdHasBeenSet = true; m_distributionHostedZoneId = value; }

    /**
     * <p>The region-agnostic Amazon Route 53 Hosted Zone ID of the edge-optimized
     * endpoint. The valid value is <code>Z2FDTNDATAQYW2</code> for all the regions.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline void SetDistributionHostedZoneId(Aws::String&& value) { m_distributionHostedZoneIdHasBeenSet = true; m_distributionHostedZoneId = std::move(value); }

    /**
     * <p>The region-agnostic Amazon Route 53 Hosted Zone ID of the edge-optimized
     * endpoint. The valid value is <code>Z2FDTNDATAQYW2</code> for all the regions.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline void SetDistributionHostedZoneId(const char* value) { m_distributionHostedZoneIdHasBeenSet = true; m_distributionHostedZoneId.assign(value); }

    /**
     * <p>The region-agnostic Amazon Route 53 Hosted Zone ID of the edge-optimized
     * endpoint. The valid value is <code>Z2FDTNDATAQYW2</code> for all the regions.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline DomainName& WithDistributionHostedZoneId(const Aws::String& value) { SetDistributionHostedZoneId(value); return *this;}

    /**
     * <p>The region-agnostic Amazon Route 53 Hosted Zone ID of the edge-optimized
     * endpoint. The valid value is <code>Z2FDTNDATAQYW2</code> for all the regions.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline DomainName& WithDistributionHostedZoneId(Aws::String&& value) { SetDistributionHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The region-agnostic Amazon Route 53 Hosted Zone ID of the edge-optimized
     * endpoint. The valid value is <code>Z2FDTNDATAQYW2</code> for all the regions.
     * For more information, see Set up a Regional Custom Domain Name and AWS Regions
     * and Endpoints for API Gateway. </p>
     */
    inline DomainName& WithDistributionHostedZoneId(const char* value) { SetDistributionHostedZoneId(value); return *this;}


    /**
     * <p>The endpoint configuration of this DomainName showing the endpoint types of
     * the domain name. </p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }

    /**
     * <p>The endpoint configuration of this DomainName showing the endpoint types of
     * the domain name. </p>
     */
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }

    /**
     * <p>The endpoint configuration of this DomainName showing the endpoint types of
     * the domain name. </p>
     */
    inline void SetEndpointConfiguration(const EndpointConfiguration& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }

    /**
     * <p>The endpoint configuration of this DomainName showing the endpoint types of
     * the domain name. </p>
     */
    inline void SetEndpointConfiguration(EndpointConfiguration&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }

    /**
     * <p>The endpoint configuration of this DomainName showing the endpoint types of
     * the domain name. </p>
     */
    inline DomainName& WithEndpointConfiguration(const EndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}

    /**
     * <p>The endpoint configuration of this DomainName showing the endpoint types of
     * the domain name. </p>
     */
    inline DomainName& WithEndpointConfiguration(EndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}


    /**
     * <p>The status of the DomainName migration. The valid values are
     * <code>AVAILABLE</code> and <code>UPDATING</code>. If the status is
     * <code>UPDATING</code>, the domain cannot be modified further until the existing
     * operation is complete. If it is <code>AVAILABLE</code>, the domain can be
     * updated.</p>
     */
    inline const DomainNameStatus& GetDomainNameStatus() const{ return m_domainNameStatus; }

    /**
     * <p>The status of the DomainName migration. The valid values are
     * <code>AVAILABLE</code> and <code>UPDATING</code>. If the status is
     * <code>UPDATING</code>, the domain cannot be modified further until the existing
     * operation is complete. If it is <code>AVAILABLE</code>, the domain can be
     * updated.</p>
     */
    inline bool DomainNameStatusHasBeenSet() const { return m_domainNameStatusHasBeenSet; }

    /**
     * <p>The status of the DomainName migration. The valid values are
     * <code>AVAILABLE</code> and <code>UPDATING</code>. If the status is
     * <code>UPDATING</code>, the domain cannot be modified further until the existing
     * operation is complete. If it is <code>AVAILABLE</code>, the domain can be
     * updated.</p>
     */
    inline void SetDomainNameStatus(const DomainNameStatus& value) { m_domainNameStatusHasBeenSet = true; m_domainNameStatus = value; }

    /**
     * <p>The status of the DomainName migration. The valid values are
     * <code>AVAILABLE</code> and <code>UPDATING</code>. If the status is
     * <code>UPDATING</code>, the domain cannot be modified further until the existing
     * operation is complete. If it is <code>AVAILABLE</code>, the domain can be
     * updated.</p>
     */
    inline void SetDomainNameStatus(DomainNameStatus&& value) { m_domainNameStatusHasBeenSet = true; m_domainNameStatus = std::move(value); }

    /**
     * <p>The status of the DomainName migration. The valid values are
     * <code>AVAILABLE</code> and <code>UPDATING</code>. If the status is
     * <code>UPDATING</code>, the domain cannot be modified further until the existing
     * operation is complete. If it is <code>AVAILABLE</code>, the domain can be
     * updated.</p>
     */
    inline DomainName& WithDomainNameStatus(const DomainNameStatus& value) { SetDomainNameStatus(value); return *this;}

    /**
     * <p>The status of the DomainName migration. The valid values are
     * <code>AVAILABLE</code> and <code>UPDATING</code>. If the status is
     * <code>UPDATING</code>, the domain cannot be modified further until the existing
     * operation is complete. If it is <code>AVAILABLE</code>, the domain can be
     * updated.</p>
     */
    inline DomainName& WithDomainNameStatus(DomainNameStatus&& value) { SetDomainNameStatus(std::move(value)); return *this;}


    /**
     * <p>An optional text message containing detailed information about status of the
     * DomainName migration.</p>
     */
    inline const Aws::String& GetDomainNameStatusMessage() const{ return m_domainNameStatusMessage; }

    /**
     * <p>An optional text message containing detailed information about status of the
     * DomainName migration.</p>
     */
    inline bool DomainNameStatusMessageHasBeenSet() const { return m_domainNameStatusMessageHasBeenSet; }

    /**
     * <p>An optional text message containing detailed information about status of the
     * DomainName migration.</p>
     */
    inline void SetDomainNameStatusMessage(const Aws::String& value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage = value; }

    /**
     * <p>An optional text message containing detailed information about status of the
     * DomainName migration.</p>
     */
    inline void SetDomainNameStatusMessage(Aws::String&& value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage = std::move(value); }

    /**
     * <p>An optional text message containing detailed information about status of the
     * DomainName migration.</p>
     */
    inline void SetDomainNameStatusMessage(const char* value) { m_domainNameStatusMessageHasBeenSet = true; m_domainNameStatusMessage.assign(value); }

    /**
     * <p>An optional text message containing detailed information about status of the
     * DomainName migration.</p>
     */
    inline DomainName& WithDomainNameStatusMessage(const Aws::String& value) { SetDomainNameStatusMessage(value); return *this;}

    /**
     * <p>An optional text message containing detailed information about status of the
     * DomainName migration.</p>
     */
    inline DomainName& WithDomainNameStatusMessage(Aws::String&& value) { SetDomainNameStatusMessage(std::move(value)); return *this;}

    /**
     * <p>An optional text message containing detailed information about status of the
     * DomainName migration.</p>
     */
    inline DomainName& WithDomainNameStatusMessage(const char* value) { SetDomainNameStatusMessage(value); return *this;}


    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * DomainName. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline const SecurityPolicy& GetSecurityPolicy() const{ return m_securityPolicy; }

    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * DomainName. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline bool SecurityPolicyHasBeenSet() const { return m_securityPolicyHasBeenSet; }

    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * DomainName. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline void SetSecurityPolicy(const SecurityPolicy& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = value; }

    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * DomainName. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline void SetSecurityPolicy(SecurityPolicy&& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = std::move(value); }

    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * DomainName. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline DomainName& WithSecurityPolicy(const SecurityPolicy& value) { SetSecurityPolicy(value); return *this;}

    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * DomainName. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline DomainName& WithSecurityPolicy(SecurityPolicy&& value) { SetSecurityPolicy(std::move(value)); return *this;}


    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline DomainName& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline DomainName& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline DomainName& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline DomainName& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline DomainName& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline DomainName& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline DomainName& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline DomainName& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline DomainName& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The mutual TLS authentication configuration for a custom domain name. If
     * specified, API Gateway performs two-way authentication between the client and
     * the server. Clients must present a trusted certificate to access your API.</p>
     */
    inline const MutualTlsAuthentication& GetMutualTlsAuthentication() const{ return m_mutualTlsAuthentication; }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name. If
     * specified, API Gateway performs two-way authentication between the client and
     * the server. Clients must present a trusted certificate to access your API.</p>
     */
    inline bool MutualTlsAuthenticationHasBeenSet() const { return m_mutualTlsAuthenticationHasBeenSet; }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name. If
     * specified, API Gateway performs two-way authentication between the client and
     * the server. Clients must present a trusted certificate to access your API.</p>
     */
    inline void SetMutualTlsAuthentication(const MutualTlsAuthentication& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = value; }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name. If
     * specified, API Gateway performs two-way authentication between the client and
     * the server. Clients must present a trusted certificate to access your API.</p>
     */
    inline void SetMutualTlsAuthentication(MutualTlsAuthentication&& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = std::move(value); }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name. If
     * specified, API Gateway performs two-way authentication between the client and
     * the server. Clients must present a trusted certificate to access your API.</p>
     */
    inline DomainName& WithMutualTlsAuthentication(const MutualTlsAuthentication& value) { SetMutualTlsAuthentication(value); return *this;}

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name. If
     * specified, API Gateway performs two-way authentication between the client and
     * the server. Clients must present a trusted certificate to access your API.</p>
     */
    inline DomainName& WithMutualTlsAuthentication(MutualTlsAuthentication&& value) { SetMutualTlsAuthentication(std::move(value)); return *this;}


    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline const Aws::String& GetOwnershipVerificationCertificateArn() const{ return m_ownershipVerificationCertificateArn; }

    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline bool OwnershipVerificationCertificateArnHasBeenSet() const { return m_ownershipVerificationCertificateArnHasBeenSet; }

    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline void SetOwnershipVerificationCertificateArn(const Aws::String& value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn = value; }

    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline void SetOwnershipVerificationCertificateArn(Aws::String&& value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn = std::move(value); }

    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline void SetOwnershipVerificationCertificateArn(const char* value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn.assign(value); }

    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline DomainName& WithOwnershipVerificationCertificateArn(const Aws::String& value) { SetOwnershipVerificationCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline DomainName& WithOwnershipVerificationCertificateArn(Aws::String&& value) { SetOwnershipVerificationCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline DomainName& WithOwnershipVerificationCertificateArn(const char* value) { SetOwnershipVerificationCertificateArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline DomainName& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DomainName& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DomainName& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
