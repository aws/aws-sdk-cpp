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
#include <aws/cloudfront/model/StreamingDistributionConfig.h>

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
   * A streaming distribution.
   */
  class AWS_CLOUDFRONT_API StreamingDistribution
  {
  public:
    StreamingDistribution();
    StreamingDistribution(const Aws::Utils::Xml::XmlNode& xmlNode);
    StreamingDistribution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The identifier for the streaming distribution. For example: EGTXBD79H29TRA8.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The identifier for the streaming distribution. For example: EGTXBD79H29TRA8.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The identifier for the streaming distribution. For example: EGTXBD79H29TRA8.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The identifier for the streaming distribution. For example: EGTXBD79H29TRA8.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The identifier for the streaming distribution. For example: EGTXBD79H29TRA8.
     */
    inline StreamingDistribution& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The identifier for the streaming distribution. For example: EGTXBD79H29TRA8.
     */
    inline StreamingDistribution& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * The identifier for the streaming distribution. For example: EGTXBD79H29TRA8.
     */
    inline StreamingDistribution& WithId(const char* value) { SetId(value); return *this;}

    /**
     * The current status of the streaming distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * The current status of the streaming distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The current status of the streaming distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The current status of the streaming distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * The current status of the streaming distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline StreamingDistribution& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * The current status of the streaming distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline StreamingDistribution& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * The current status of the streaming distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline StreamingDistribution& WithStatus(const char* value) { SetStatus(value); return *this;}

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
    inline StreamingDistribution& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * The date and time the distribution was last modified.
     */
    inline StreamingDistribution& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(value); return *this;}

    /**
     * The domain name corresponding to the streaming distribution. For example:
     * s5c39gqb8ow64r.cloudfront.net.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The domain name corresponding to the streaming distribution. For example:
     * s5c39gqb8ow64r.cloudfront.net.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The domain name corresponding to the streaming distribution. For example:
     * s5c39gqb8ow64r.cloudfront.net.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The domain name corresponding to the streaming distribution. For example:
     * s5c39gqb8ow64r.cloudfront.net.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The domain name corresponding to the streaming distribution. For example:
     * s5c39gqb8ow64r.cloudfront.net.
     */
    inline StreamingDistribution& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The domain name corresponding to the streaming distribution. For example:
     * s5c39gqb8ow64r.cloudfront.net.
     */
    inline StreamingDistribution& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * The domain name corresponding to the streaming distribution. For example:
     * s5c39gqb8ow64r.cloudfront.net.
     */
    inline StreamingDistribution& WithDomainName(const char* value) { SetDomainName(value); return *this;}

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
    inline StreamingDistribution& WithActiveTrustedSigners(const ActiveTrustedSigners& value) { SetActiveTrustedSigners(value); return *this;}

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
    inline StreamingDistribution& WithActiveTrustedSigners(ActiveTrustedSigners&& value) { SetActiveTrustedSigners(value); return *this;}

    /**
     * The current configuration information for the streaming distribution.
     */
    inline const StreamingDistributionConfig& GetStreamingDistributionConfig() const{ return m_streamingDistributionConfig; }

    /**
     * The current configuration information for the streaming distribution.
     */
    inline void SetStreamingDistributionConfig(const StreamingDistributionConfig& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = value; }

    /**
     * The current configuration information for the streaming distribution.
     */
    inline void SetStreamingDistributionConfig(StreamingDistributionConfig&& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = value; }

    /**
     * The current configuration information for the streaming distribution.
     */
    inline StreamingDistribution& WithStreamingDistributionConfig(const StreamingDistributionConfig& value) { SetStreamingDistributionConfig(value); return *this;}

    /**
     * The current configuration information for the streaming distribution.
     */
    inline StreamingDistribution& WithStreamingDistributionConfig(StreamingDistributionConfig&& value) { SetStreamingDistributionConfig(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    ActiveTrustedSigners m_activeTrustedSigners;
    bool m_activeTrustedSignersHasBeenSet;
    StreamingDistributionConfig m_streamingDistributionConfig;
    bool m_streamingDistributionConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
