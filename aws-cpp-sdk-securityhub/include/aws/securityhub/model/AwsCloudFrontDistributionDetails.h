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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionLogging.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionOrigins.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A distribution configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsCloudFrontDistributionDetails
  {
  public:
    AwsCloudFrontDistributionDetails();
    AwsCloudFrontDistributionDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsCloudFrontDistributionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain name corresponding to the distribution.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name corresponding to the distribution.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name corresponding to the distribution.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name corresponding to the distribution.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name corresponding to the distribution.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name corresponding to the distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name corresponding to the distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name corresponding to the distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The entity tag is a hash of the object.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The entity tag is a hash of the object.</p>
     */
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }

    /**
     * <p>The entity tag is a hash of the object.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /**
     * <p>The entity tag is a hash of the object.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }

    /**
     * <p>The entity tag is a hash of the object.</p>
     */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /**
     * <p>The entity tag is a hash of the object.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The entity tag is a hash of the object.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The entity tag is a hash of the object.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>The date and time that the distribution was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the distribution was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time that the distribution was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::String& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the distribution was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::String&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the distribution was last modified.</p>
     */
    inline void SetLastModifiedTime(const char* value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime.assign(value); }

    /**
     * <p>The date and time that the distribution was last modified.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithLastModifiedTime(const Aws::String& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the distribution was last modified.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithLastModifiedTime(Aws::String&& value) { SetLastModifiedTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the distribution was last modified.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithLastModifiedTime(const char* value) { SetLastModifiedTime(value); return *this;}


    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p>
     */
    inline const AwsCloudFrontDistributionLogging& GetLogging() const{ return m_logging; }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p>
     */
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p>
     */
    inline void SetLogging(const AwsCloudFrontDistributionLogging& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p>
     */
    inline void SetLogging(AwsCloudFrontDistributionLogging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithLogging(const AwsCloudFrontDistributionLogging& value) { SetLogging(value); return *this;}

    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithLogging(AwsCloudFrontDistributionLogging&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline const AwsCloudFrontDistributionOrigins& GetOrigins() const{ return m_origins; }

    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline bool OriginsHasBeenSet() const { return m_originsHasBeenSet; }

    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline void SetOrigins(const AwsCloudFrontDistributionOrigins& value) { m_originsHasBeenSet = true; m_origins = value; }

    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline void SetOrigins(AwsCloudFrontDistributionOrigins&& value) { m_originsHasBeenSet = true; m_origins = std::move(value); }

    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithOrigins(const AwsCloudFrontDistributionOrigins& value) { SetOrigins(value); return *this;}

    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithOrigins(AwsCloudFrontDistributionOrigins&& value) { SetOrigins(std::move(value)); return *this;}


    /**
     * <p>Indicates the current status of the distribution.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the current status of the distribution.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates the current status of the distribution.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates the current status of the distribution.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates the current status of the distribution.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Indicates the current status of the distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the current status of the distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Indicates the current status of the distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>A unique identifier that specifies the AWS WAF web ACL, if any, to associate
     * with this distribution.</p>
     */
    inline const Aws::String& GetWebAclId() const{ return m_webAclId; }

    /**
     * <p>A unique identifier that specifies the AWS WAF web ACL, if any, to associate
     * with this distribution.</p>
     */
    inline bool WebAclIdHasBeenSet() const { return m_webAclIdHasBeenSet; }

    /**
     * <p>A unique identifier that specifies the AWS WAF web ACL, if any, to associate
     * with this distribution.</p>
     */
    inline void SetWebAclId(const Aws::String& value) { m_webAclIdHasBeenSet = true; m_webAclId = value; }

    /**
     * <p>A unique identifier that specifies the AWS WAF web ACL, if any, to associate
     * with this distribution.</p>
     */
    inline void SetWebAclId(Aws::String&& value) { m_webAclIdHasBeenSet = true; m_webAclId = std::move(value); }

    /**
     * <p>A unique identifier that specifies the AWS WAF web ACL, if any, to associate
     * with this distribution.</p>
     */
    inline void SetWebAclId(const char* value) { m_webAclIdHasBeenSet = true; m_webAclId.assign(value); }

    /**
     * <p>A unique identifier that specifies the AWS WAF web ACL, if any, to associate
     * with this distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithWebAclId(const Aws::String& value) { SetWebAclId(value); return *this;}

    /**
     * <p>A unique identifier that specifies the AWS WAF web ACL, if any, to associate
     * with this distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithWebAclId(Aws::String&& value) { SetWebAclId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that specifies the AWS WAF web ACL, if any, to associate
     * with this distribution.</p>
     */
    inline AwsCloudFrontDistributionDetails& WithWebAclId(const char* value) { SetWebAclId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet;

    Aws::String m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    AwsCloudFrontDistributionLogging m_logging;
    bool m_loggingHasBeenSet;

    AwsCloudFrontDistributionOrigins m_origins;
    bool m_originsHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_webAclId;
    bool m_webAclIdHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
