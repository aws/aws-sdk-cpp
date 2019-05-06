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
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/OrganizationConfiguration.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class AWS_LICENSEMANAGER_API UpdateServiceSettingsRequest : public LicenseManagerRequest
  {
  public:
    UpdateServiceSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceSettings"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ARN of the Amazon S3 bucket where License Manager information is stored.</p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }

    /**
     * <p>ARN of the Amazon S3 bucket where License Manager information is stored.</p>
     */
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }

    /**
     * <p>ARN of the Amazon S3 bucket where License Manager information is stored.</p>
     */
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = value; }

    /**
     * <p>ARN of the Amazon S3 bucket where License Manager information is stored.</p>
     */
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::move(value); }

    /**
     * <p>ARN of the Amazon S3 bucket where License Manager information is stored.</p>
     */
    inline void SetS3BucketArn(const char* value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn.assign(value); }

    /**
     * <p>ARN of the Amazon S3 bucket where License Manager information is stored.</p>
     */
    inline UpdateServiceSettingsRequest& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}

    /**
     * <p>ARN of the Amazon S3 bucket where License Manager information is stored.</p>
     */
    inline UpdateServiceSettingsRequest& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the Amazon S3 bucket where License Manager information is stored.</p>
     */
    inline UpdateServiceSettingsRequest& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}


    /**
     * <p>ARN of the Amazon SNS topic used for License Manager alerts.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>ARN of the Amazon SNS topic used for License Manager alerts.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>ARN of the Amazon SNS topic used for License Manager alerts.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>ARN of the Amazon SNS topic used for License Manager alerts.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>ARN of the Amazon SNS topic used for License Manager alerts.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>ARN of the Amazon SNS topic used for License Manager alerts.</p>
     */
    inline UpdateServiceSettingsRequest& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>ARN of the Amazon SNS topic used for License Manager alerts.</p>
     */
    inline UpdateServiceSettingsRequest& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the Amazon SNS topic used for License Manager alerts.</p>
     */
    inline UpdateServiceSettingsRequest& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>Integrates AWS Organizations with License Manager for cross-account
     * discovery.</p>
     */
    inline const OrganizationConfiguration& GetOrganizationConfiguration() const{ return m_organizationConfiguration; }

    /**
     * <p>Integrates AWS Organizations with License Manager for cross-account
     * discovery.</p>
     */
    inline bool OrganizationConfigurationHasBeenSet() const { return m_organizationConfigurationHasBeenSet; }

    /**
     * <p>Integrates AWS Organizations with License Manager for cross-account
     * discovery.</p>
     */
    inline void SetOrganizationConfiguration(const OrganizationConfiguration& value) { m_organizationConfigurationHasBeenSet = true; m_organizationConfiguration = value; }

    /**
     * <p>Integrates AWS Organizations with License Manager for cross-account
     * discovery.</p>
     */
    inline void SetOrganizationConfiguration(OrganizationConfiguration&& value) { m_organizationConfigurationHasBeenSet = true; m_organizationConfiguration = std::move(value); }

    /**
     * <p>Integrates AWS Organizations with License Manager for cross-account
     * discovery.</p>
     */
    inline UpdateServiceSettingsRequest& WithOrganizationConfiguration(const OrganizationConfiguration& value) { SetOrganizationConfiguration(value); return *this;}

    /**
     * <p>Integrates AWS Organizations with License Manager for cross-account
     * discovery.</p>
     */
    inline UpdateServiceSettingsRequest& WithOrganizationConfiguration(OrganizationConfiguration&& value) { SetOrganizationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Activates cross-account discovery.</p>
     */
    inline bool GetEnableCrossAccountsDiscovery() const{ return m_enableCrossAccountsDiscovery; }

    /**
     * <p>Activates cross-account discovery.</p>
     */
    inline bool EnableCrossAccountsDiscoveryHasBeenSet() const { return m_enableCrossAccountsDiscoveryHasBeenSet; }

    /**
     * <p>Activates cross-account discovery.</p>
     */
    inline void SetEnableCrossAccountsDiscovery(bool value) { m_enableCrossAccountsDiscoveryHasBeenSet = true; m_enableCrossAccountsDiscovery = value; }

    /**
     * <p>Activates cross-account discovery.</p>
     */
    inline UpdateServiceSettingsRequest& WithEnableCrossAccountsDiscovery(bool value) { SetEnableCrossAccountsDiscovery(value); return *this;}

  private:

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet;

    OrganizationConfiguration m_organizationConfiguration;
    bool m_organizationConfigurationHasBeenSet;

    bool m_enableCrossAccountsDiscovery;
    bool m_enableCrossAccountsDiscoveryHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
