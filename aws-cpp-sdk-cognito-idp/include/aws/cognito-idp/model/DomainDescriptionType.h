﻿/*
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
  class AWS_COGNITOIDENTITYPROVIDER_API DomainDescriptionType
  {
  public:
    DomainDescriptionType();
    DomainDescriptionType(Aws::Utils::Json::JsonView jsonValue);
    DomainDescriptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline DomainDescriptionType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline DomainDescriptionType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline DomainDescriptionType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The AWS account ID for the user pool owner.</p>
     */
    inline const Aws::String& GetAWSAccountId() const{ return m_aWSAccountId; }

    /**
     * <p>The AWS account ID for the user pool owner.</p>
     */
    inline void SetAWSAccountId(const Aws::String& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = value; }

    /**
     * <p>The AWS account ID for the user pool owner.</p>
     */
    inline void SetAWSAccountId(Aws::String&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::move(value); }

    /**
     * <p>The AWS account ID for the user pool owner.</p>
     */
    inline void SetAWSAccountId(const char* value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.assign(value); }

    /**
     * <p>The AWS account ID for the user pool owner.</p>
     */
    inline DomainDescriptionType& WithAWSAccountId(const Aws::String& value) { SetAWSAccountId(value); return *this;}

    /**
     * <p>The AWS account ID for the user pool owner.</p>
     */
    inline DomainDescriptionType& WithAWSAccountId(Aws::String&& value) { SetAWSAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID for the user pool owner.</p>
     */
    inline DomainDescriptionType& WithAWSAccountId(const char* value) { SetAWSAccountId(value); return *this;}


    /**
     * <p>The domain string.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain string.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain string.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain string.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain string.</p>
     */
    inline DomainDescriptionType& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain string.</p>
     */
    inline DomainDescriptionType& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain string.</p>
     */
    inline DomainDescriptionType& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The S3 bucket where the static files for this domain are stored.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The S3 bucket where the static files for this domain are stored.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The S3 bucket where the static files for this domain are stored.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The S3 bucket where the static files for this domain are stored.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The S3 bucket where the static files for this domain are stored.</p>
     */
    inline DomainDescriptionType& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The S3 bucket where the static files for this domain are stored.</p>
     */
    inline DomainDescriptionType& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket where the static files for this domain are stored.</p>
     */
    inline DomainDescriptionType& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The ARN of the CloudFront distribution.</p>
     */
    inline const Aws::String& GetCloudFrontDistribution() const{ return m_cloudFrontDistribution; }

    /**
     * <p>The ARN of the CloudFront distribution.</p>
     */
    inline void SetCloudFrontDistribution(const Aws::String& value) { m_cloudFrontDistributionHasBeenSet = true; m_cloudFrontDistribution = value; }

    /**
     * <p>The ARN of the CloudFront distribution.</p>
     */
    inline void SetCloudFrontDistribution(Aws::String&& value) { m_cloudFrontDistributionHasBeenSet = true; m_cloudFrontDistribution = std::move(value); }

    /**
     * <p>The ARN of the CloudFront distribution.</p>
     */
    inline void SetCloudFrontDistribution(const char* value) { m_cloudFrontDistributionHasBeenSet = true; m_cloudFrontDistribution.assign(value); }

    /**
     * <p>The ARN of the CloudFront distribution.</p>
     */
    inline DomainDescriptionType& WithCloudFrontDistribution(const Aws::String& value) { SetCloudFrontDistribution(value); return *this;}

    /**
     * <p>The ARN of the CloudFront distribution.</p>
     */
    inline DomainDescriptionType& WithCloudFrontDistribution(Aws::String&& value) { SetCloudFrontDistribution(std::move(value)); return *this;}

    /**
     * <p>The ARN of the CloudFront distribution.</p>
     */
    inline DomainDescriptionType& WithCloudFrontDistribution(const char* value) { SetCloudFrontDistribution(value); return *this;}


    /**
     * <p>The app version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The app version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The app version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The app version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The app version.</p>
     */
    inline DomainDescriptionType& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The app version.</p>
     */
    inline DomainDescriptionType& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The app version.</p>
     */
    inline DomainDescriptionType& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The domain status.</p>
     */
    inline const DomainStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The domain status.</p>
     */
    inline void SetStatus(const DomainStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The domain status.</p>
     */
    inline void SetStatus(DomainStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The domain status.</p>
     */
    inline DomainDescriptionType& WithStatus(const DomainStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The domain status.</p>
     */
    inline DomainDescriptionType& WithStatus(DomainStatusType&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const CustomDomainConfigType& GetCustomDomainConfig() const{ return m_customDomainConfig; }

    
    inline void SetCustomDomainConfig(const CustomDomainConfigType& value) { m_customDomainConfigHasBeenSet = true; m_customDomainConfig = value; }

    
    inline void SetCustomDomainConfig(CustomDomainConfigType&& value) { m_customDomainConfigHasBeenSet = true; m_customDomainConfig = std::move(value); }

    
    inline DomainDescriptionType& WithCustomDomainConfig(const CustomDomainConfigType& value) { SetCustomDomainConfig(value); return *this;}

    
    inline DomainDescriptionType& WithCustomDomainConfig(CustomDomainConfigType&& value) { SetCustomDomainConfig(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet;

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    Aws::String m_cloudFrontDistribution;
    bool m_cloudFrontDistributionHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    DomainStatusType m_status;
    bool m_statusHasBeenSet;

    CustomDomainConfigType m_customDomainConfig;
    bool m_customDomainConfigHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
