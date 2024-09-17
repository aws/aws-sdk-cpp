/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/OrganizationConfiguration.h>
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
namespace LicenseManager
{
namespace Model
{
  class GetServiceSettingsResult
  {
  public:
    AWS_LICENSEMANAGER_API GetServiceSettingsResult();
    AWS_LICENSEMANAGER_API GetServiceSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetServiceSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Regional S3 bucket path for storing reports, license trail event data,
     * discovery data, and so on.</p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArn = value; }
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArn = std::move(value); }
    inline void SetS3BucketArn(const char* value) { m_s3BucketArn.assign(value); }
    inline GetServiceSettingsResult& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}
    inline GetServiceSettingsResult& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}
    inline GetServiceSettingsResult& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>SNS topic configured to receive notifications from License Manager.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArn = value; }
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArn = std::move(value); }
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArn.assign(value); }
    inline GetServiceSettingsResult& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}
    inline GetServiceSettingsResult& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}
    inline GetServiceSettingsResult& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Organizations is integrated with License Manager for
     * cross-account discovery.</p>
     */
    inline const OrganizationConfiguration& GetOrganizationConfiguration() const{ return m_organizationConfiguration; }
    inline void SetOrganizationConfiguration(const OrganizationConfiguration& value) { m_organizationConfiguration = value; }
    inline void SetOrganizationConfiguration(OrganizationConfiguration&& value) { m_organizationConfiguration = std::move(value); }
    inline GetServiceSettingsResult& WithOrganizationConfiguration(const OrganizationConfiguration& value) { SetOrganizationConfiguration(value); return *this;}
    inline GetServiceSettingsResult& WithOrganizationConfiguration(OrganizationConfiguration&& value) { SetOrganizationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether cross-account discovery is enabled.</p>
     */
    inline bool GetEnableCrossAccountsDiscovery() const{ return m_enableCrossAccountsDiscovery; }
    inline void SetEnableCrossAccountsDiscovery(bool value) { m_enableCrossAccountsDiscovery = value; }
    inline GetServiceSettingsResult& WithEnableCrossAccountsDiscovery(bool value) { SetEnableCrossAccountsDiscovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the resource share. The License Manager
     * management account provides member accounts with access to this share.</p>
     */
    inline const Aws::String& GetLicenseManagerResourceShareArn() const{ return m_licenseManagerResourceShareArn; }
    inline void SetLicenseManagerResourceShareArn(const Aws::String& value) { m_licenseManagerResourceShareArn = value; }
    inline void SetLicenseManagerResourceShareArn(Aws::String&& value) { m_licenseManagerResourceShareArn = std::move(value); }
    inline void SetLicenseManagerResourceShareArn(const char* value) { m_licenseManagerResourceShareArn.assign(value); }
    inline GetServiceSettingsResult& WithLicenseManagerResourceShareArn(const Aws::String& value) { SetLicenseManagerResourceShareArn(value); return *this;}
    inline GetServiceSettingsResult& WithLicenseManagerResourceShareArn(Aws::String&& value) { SetLicenseManagerResourceShareArn(std::move(value)); return *this;}
    inline GetServiceSettingsResult& WithLicenseManagerResourceShareArn(const char* value) { SetLicenseManagerResourceShareArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServiceSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServiceSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServiceSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_s3BucketArn;

    Aws::String m_snsTopicArn;

    OrganizationConfiguration m_organizationConfiguration;

    bool m_enableCrossAccountsDiscovery;

    Aws::String m_licenseManagerResourceShareArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
