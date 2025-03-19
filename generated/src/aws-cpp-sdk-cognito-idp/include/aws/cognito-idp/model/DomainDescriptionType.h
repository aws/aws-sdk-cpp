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
   * <p>A container for information about the user pool domain associated with the
   * hosted UI and OAuth endpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DomainDescriptionType">AWS
   * API Reference</a></p>
   */
  class DomainDescriptionType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DomainDescriptionType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API DomainDescriptionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API DomainDescriptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the user pool that the domain is attached to.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    DomainDescriptionType& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that you created the user pool in.</p>
     */
    inline const Aws::String& GetAWSAccountId() const { return m_aWSAccountId; }
    inline bool AWSAccountIdHasBeenSet() const { return m_aWSAccountIdHasBeenSet; }
    template<typename AWSAccountIdT = Aws::String>
    void SetAWSAccountId(AWSAccountIdT&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::forward<AWSAccountIdT>(value); }
    template<typename AWSAccountIdT = Aws::String>
    DomainDescriptionType& WithAWSAccountId(AWSAccountIdT&& value) { SetAWSAccountId(std::forward<AWSAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain string. For custom domains, this is the fully-qualified domain
     * name, such as <code>auth.example.com</code>. For Amazon Cognito prefix domains,
     * this is the prefix alone, such as <code>auth</code>.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    DomainDescriptionType& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket where the static files for this domain are stored.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    DomainDescriptionType& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudFront endpoint that hosts your custom domain.</p>
     */
    inline const Aws::String& GetCloudFrontDistribution() const { return m_cloudFrontDistribution; }
    inline bool CloudFrontDistributionHasBeenSet() const { return m_cloudFrontDistributionHasBeenSet; }
    template<typename CloudFrontDistributionT = Aws::String>
    void SetCloudFrontDistribution(CloudFrontDistributionT&& value) { m_cloudFrontDistributionHasBeenSet = true; m_cloudFrontDistribution = std::forward<CloudFrontDistributionT>(value); }
    template<typename CloudFrontDistributionT = Aws::String>
    DomainDescriptionType& WithCloudFrontDistribution(CloudFrontDistributionT&& value) { SetCloudFrontDistribution(std::forward<CloudFrontDistributionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    DomainDescriptionType& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain status.</p>
     */
    inline DomainStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DomainStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline DomainDescriptionType& WithStatus(DomainStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * webpages for your application.</p>
     */
    inline const CustomDomainConfigType& GetCustomDomainConfig() const { return m_customDomainConfig; }
    inline bool CustomDomainConfigHasBeenSet() const { return m_customDomainConfigHasBeenSet; }
    template<typename CustomDomainConfigT = CustomDomainConfigType>
    void SetCustomDomainConfig(CustomDomainConfigT&& value) { m_customDomainConfigHasBeenSet = true; m_customDomainConfig = std::forward<CustomDomainConfigT>(value); }
    template<typename CustomDomainConfigT = CustomDomainConfigType>
    DomainDescriptionType& WithCustomDomainConfig(CustomDomainConfigT&& value) { SetCustomDomainConfig(std::forward<CustomDomainConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of managed login branding that you want to apply to your domain.
     * A value of <code>1</code> indicates hosted UI (classic) branding and a version
     * of <code>2</code> indicates managed login branding.</p> <p>Managed login
     * requires that your user pool be configured for any <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-sign-in-feature-plans.html">feature
     * plan</a> other than <code>Lite</code>.</p>
     */
    inline int GetManagedLoginVersion() const { return m_managedLoginVersion; }
    inline bool ManagedLoginVersionHasBeenSet() const { return m_managedLoginVersionHasBeenSet; }
    inline void SetManagedLoginVersion(int value) { m_managedLoginVersionHasBeenSet = true; m_managedLoginVersion = value; }
    inline DomainDescriptionType& WithManagedLoginVersion(int value) { SetManagedLoginVersion(value); return *this;}
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

    DomainStatusType m_status{DomainStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    CustomDomainConfigType m_customDomainConfig;
    bool m_customDomainConfigHasBeenSet = false;

    int m_managedLoginVersion{0};
    bool m_managedLoginVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
