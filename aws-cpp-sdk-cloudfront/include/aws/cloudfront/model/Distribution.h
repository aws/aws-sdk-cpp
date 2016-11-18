/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/ActiveTrustedSigners.h>
#include <aws/cloudfront/model/DistributionConfig.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * A distribution.
   */
  class AWS_CLOUDFRONT_API Distribution
  {
  public:
    Distribution();
    Distribution(const Aws::Utils::Xml::XmlNode& xmlNode);
    Distribution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The identifier for the distribution. For example: EDFDVBD632BHDS5.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The identifier for the distribution. For example: EDFDVBD632BHDS5.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The identifier for the distribution. For example: EDFDVBD632BHDS5.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The identifier for the distribution. For example: EDFDVBD632BHDS5.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The identifier for the distribution. For example: EDFDVBD632BHDS5.
     */
    inline Distribution& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The identifier for the distribution. For example: EDFDVBD632BHDS5.
     */
    inline Distribution& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * The identifier for the distribution. For example: EDFDVBD632BHDS5.
     */
    inline Distribution& WithId(const char* value) { SetId(value); return *this;}

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline Distribution& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline Distribution& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline Distribution& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * The date and time the distribution was last modified.
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * The date and time the distribution was last modified.
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * The date and time the distribution was last modified.
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * The date and time the distribution was last modified.
     */
    inline Distribution& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * The date and time the distribution was last modified.
     */
    inline Distribution& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(value); return *this;}

    /**
     * The number of invalidation batches currently in progress.
     */
    inline int GetInProgressInvalidationBatches() const{ return m_inProgressInvalidationBatches; }

    /**
     * The number of invalidation batches currently in progress.
     */
    inline void SetInProgressInvalidationBatches(int value) { m_inProgressInvalidationBatchesHasBeenSet = true; m_inProgressInvalidationBatches = value; }

    /**
     * The number of invalidation batches currently in progress.
     */
    inline Distribution& WithInProgressInvalidationBatches(int value) { SetInProgressInvalidationBatches(value); return *this;}

    /**
     * The domain name corresponding to the distribution. For example:
     * d604721fxaaqy9.cloudfront.net.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The domain name corresponding to the distribution. For example:
     * d604721fxaaqy9.cloudfront.net.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The domain name corresponding to the distribution. For example:
     * d604721fxaaqy9.cloudfront.net.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The domain name corresponding to the distribution. For example:
     * d604721fxaaqy9.cloudfront.net.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The domain name corresponding to the distribution. For example:
     * d604721fxaaqy9.cloudfront.net.
     */
    inline Distribution& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The domain name corresponding to the distribution. For example:
     * d604721fxaaqy9.cloudfront.net.
     */
    inline Distribution& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * The domain name corresponding to the distribution. For example:
     * d604721fxaaqy9.cloudfront.net.
     */
    inline Distribution& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * CloudFront automatically adds this element to the response only if you've set up
     * the distribution to serve private content with signed URLs. The element lists
     * the key pair IDs that CloudFront is aware of for each trusted signer. The Signer
     * child element lists the AWS account number of the trusted signer (or an empty
     * Self element if the signer is you). The Signer element also includes the IDs of
     * any active key pairs associated with the trusted signer's AWS account. If no
     * KeyPairId element appears for a Signer, that signer can't create working signed
     * URLs.
     */
    inline const ActiveTrustedSigners& GetActiveTrustedSigners() const{ return m_activeTrustedSigners; }

    /**
     * CloudFront automatically adds this element to the response only if you've set up
     * the distribution to serve private content with signed URLs. The element lists
     * the key pair IDs that CloudFront is aware of for each trusted signer. The Signer
     * child element lists the AWS account number of the trusted signer (or an empty
     * Self element if the signer is you). The Signer element also includes the IDs of
     * any active key pairs associated with the trusted signer's AWS account. If no
     * KeyPairId element appears for a Signer, that signer can't create working signed
     * URLs.
     */
    inline void SetActiveTrustedSigners(const ActiveTrustedSigners& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = value; }

    /**
     * CloudFront automatically adds this element to the response only if you've set up
     * the distribution to serve private content with signed URLs. The element lists
     * the key pair IDs that CloudFront is aware of for each trusted signer. The Signer
     * child element lists the AWS account number of the trusted signer (or an empty
     * Self element if the signer is you). The Signer element also includes the IDs of
     * any active key pairs associated with the trusted signer's AWS account. If no
     * KeyPairId element appears for a Signer, that signer can't create working signed
     * URLs.
     */
    inline void SetActiveTrustedSigners(ActiveTrustedSigners&& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = value; }

    /**
     * CloudFront automatically adds this element to the response only if you've set up
     * the distribution to serve private content with signed URLs. The element lists
     * the key pair IDs that CloudFront is aware of for each trusted signer. The Signer
     * child element lists the AWS account number of the trusted signer (or an empty
     * Self element if the signer is you). The Signer element also includes the IDs of
     * any active key pairs associated with the trusted signer's AWS account. If no
     * KeyPairId element appears for a Signer, that signer can't create working signed
     * URLs.
     */
    inline Distribution& WithActiveTrustedSigners(const ActiveTrustedSigners& value) { SetActiveTrustedSigners(value); return *this;}

    /**
     * CloudFront automatically adds this element to the response only if you've set up
     * the distribution to serve private content with signed URLs. The element lists
     * the key pair IDs that CloudFront is aware of for each trusted signer. The Signer
     * child element lists the AWS account number of the trusted signer (or an empty
     * Self element if the signer is you). The Signer element also includes the IDs of
     * any active key pairs associated with the trusted signer's AWS account. If no
     * KeyPairId element appears for a Signer, that signer can't create working signed
     * URLs.
     */
    inline Distribution& WithActiveTrustedSigners(ActiveTrustedSigners&& value) { SetActiveTrustedSigners(value); return *this;}

    /**
     * The current configuration information for the distribution.
     */
    inline const DistributionConfig& GetDistributionConfig() const{ return m_distributionConfig; }

    /**
     * The current configuration information for the distribution.
     */
    inline void SetDistributionConfig(const DistributionConfig& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = value; }

    /**
     * The current configuration information for the distribution.
     */
    inline void SetDistributionConfig(DistributionConfig&& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = value; }

    /**
     * The current configuration information for the distribution.
     */
    inline Distribution& WithDistributionConfig(const DistributionConfig& value) { SetDistributionConfig(value); return *this;}

    /**
     * The current configuration information for the distribution.
     */
    inline Distribution& WithDistributionConfig(DistributionConfig&& value) { SetDistributionConfig(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;
    int m_inProgressInvalidationBatches;
    bool m_inProgressInvalidationBatchesHasBeenSet;
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    ActiveTrustedSigners m_activeTrustedSigners;
    bool m_activeTrustedSignersHasBeenSet;
    DistributionConfig m_distributionConfig;
    bool m_distributionConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
