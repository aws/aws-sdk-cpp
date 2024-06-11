/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/DomainStatusType.h>
#include <aws/cognito-idp/model/CustomDomainConfigType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>A container for information about a domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DomainDescriptionType">AWS
   * API Reference</a></p>
   */
  class DomainDescriptionType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DomainDescriptionType();
    AWS_COGNITOIDENTITYPROVIDER_API DomainDescriptionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API DomainDescriptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline DomainDescriptionType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline DomainDescriptionType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline DomainDescriptionType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services ID for the user pool owner.</p>
     */
    inline const Aws::String& GetAWSAccountId() const{ return m_aWSAccountId; }
    inline bool AWSAccountIdHasBeenSet() const { return m_aWSAccountIdHasBeenSet; }
    inline void SetAWSAccountId(const Aws::String& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = value; }
    inline void SetAWSAccountId(Aws::String&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::move(value); }
    inline void SetAWSAccountId(const char* value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.assign(value); }
    inline DomainDescriptionType& WithAWSAccountId(const Aws::String& value) { SetAWSAccountId(value); return *this;}
    inline DomainDescriptionType& WithAWSAccountId(Aws::String&& value) { SetAWSAccountId(std::move(value)); return *this;}
    inline DomainDescriptionType& WithAWSAccountId(const char* value) { SetAWSAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain string. For custom domains, this is the fully-qualified domain
     * name, such as <code>auth.example.com</code>. For Amazon Cognito prefix domains,
     * this is the prefix alone, such as <code>auth</code>.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline DomainDescriptionType& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DomainDescriptionType& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DomainDescriptionType& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket where the static files for this domain are stored.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }
    inline DomainDescriptionType& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}
    inline DomainDescriptionType& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}
    inline DomainDescriptionType& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudFront endpoint that you use as the target of the alias that
     * you set up with your Domain Name Service (DNS) provider.</p>
     */
    inline const Aws::String& GetCloudFrontDistribution() const{ return m_cloudFrontDistribution; }
    inline bool CloudFrontDistributionHasBeenSet() const { return m_cloudFrontDistributionHasBeenSet; }
    inline void SetCloudFrontDistribution(const Aws::String& value) { m_cloudFrontDistributionHasBeenSet = true; m_cloudFrontDistribution = value; }
    inline void SetCloudFrontDistribution(Aws::String&& value) { m_cloudFrontDistributionHasBeenSet = true; m_cloudFrontDistribution = std::move(value); }
    inline void SetCloudFrontDistribution(const char* value) { m_cloudFrontDistributionHasBeenSet = true; m_cloudFrontDistribution.assign(value); }
    inline DomainDescriptionType& WithCloudFrontDistribution(const Aws::String& value) { SetCloudFrontDistribution(value); return *this;}
    inline DomainDescriptionType& WithCloudFrontDistribution(Aws::String&& value) { SetCloudFrontDistribution(std::move(value)); return *this;}
    inline DomainDescriptionType& WithCloudFrontDistribution(const char* value) { SetCloudFrontDistribution(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline DomainDescriptionType& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline DomainDescriptionType& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline DomainDescriptionType& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain status.</p>
     */
    inline const DomainStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DomainStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DomainStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DomainDescriptionType& WithStatus(const DomainStatusType& value) { SetStatus(value); return *this;}
    inline DomainDescriptionType& WithStatus(DomainStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * webpages for your application.</p>
     */
    inline const CustomDomainConfigType& GetCustomDomainConfig() const{ return m_customDomainConfig; }
    inline bool CustomDomainConfigHasBeenSet() const { return m_customDomainConfigHasBeenSet; }
    inline void SetCustomDomainConfig(const CustomDomainConfigType& value) { m_customDomainConfigHasBeenSet = true; m_customDomainConfig = value; }
    inline void SetCustomDomainConfig(CustomDomainConfigType&& value) { m_customDomainConfigHasBeenSet = true; m_customDomainConfig = std::move(value); }
    inline DomainDescriptionType& WithCustomDomainConfig(const CustomDomainConfigType& value) { SetCustomDomainConfig(value); return *this;}
    inline DomainDescriptionType& WithCustomDomainConfig(CustomDomainConfigType&& value) { SetCustomDomainConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_cloudFrontDistribution;
    bool m_cloudFrontDistributionHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    DomainStatusType m_status;
    bool m_statusHasBeenSet = false;

    CustomDomainConfigType m_customDomainConfig;
    bool m_customDomainConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
