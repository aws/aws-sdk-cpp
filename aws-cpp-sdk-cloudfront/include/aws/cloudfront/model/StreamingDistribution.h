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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/ActiveTrustedSigners.h>
#include <aws/cloudfront/model/StreamingDistributionConfig.h>
#include <utility>

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
   * <p>A streaming distribution tells CloudFront where you want RTMP content to be
   * delivered from, and the details about how to track and manage content
   * delivery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/StreamingDistribution">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API StreamingDistribution
  {
  public:
    StreamingDistribution();
    StreamingDistribution(const Aws::Utils::Xml::XmlNode& xmlNode);
    StreamingDistribution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The identifier for the RTMP distribution. For example:
     * <code>EGTXBD79EXAMPLE</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the RTMP distribution. For example:
     * <code>EGTXBD79EXAMPLE</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the RTMP distribution. For example:
     * <code>EGTXBD79EXAMPLE</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the RTMP distribution. For example:
     * <code>EGTXBD79EXAMPLE</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the RTMP distribution. For example:
     * <code>EGTXBD79EXAMPLE</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the RTMP distribution. For example:
     * <code>EGTXBD79EXAMPLE</code>.</p>
     */
    inline StreamingDistribution& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the RTMP distribution. For example:
     * <code>EGTXBD79EXAMPLE</code>.</p>
     */
    inline StreamingDistribution& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the RTMP distribution. For example:
     * <code>EGTXBD79EXAMPLE</code>.</p>
     */
    inline StreamingDistribution& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline StreamingDistribution& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline StreamingDistribution& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline StreamingDistribution& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The current status of the RTMP distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the RTMP distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the RTMP distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the RTMP distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the RTMP distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of the RTMP distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline StreamingDistribution& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the RTMP distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline StreamingDistribution& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the RTMP distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline StreamingDistribution& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The date and time that the distribution was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the distribution was last modified. </p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time that the distribution was last modified. </p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the distribution was last modified. </p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the distribution was last modified. </p>
     */
    inline StreamingDistribution& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the distribution was last modified. </p>
     */
    inline StreamingDistribution& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The domain name that corresponds to the streaming distribution, for example,
     * <code>s5c39gqb8ow64r.cloudfront.net</code>. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name that corresponds to the streaming distribution, for example,
     * <code>s5c39gqb8ow64r.cloudfront.net</code>. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name that corresponds to the streaming distribution, for example,
     * <code>s5c39gqb8ow64r.cloudfront.net</code>. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name that corresponds to the streaming distribution, for example,
     * <code>s5c39gqb8ow64r.cloudfront.net</code>. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name that corresponds to the streaming distribution, for example,
     * <code>s5c39gqb8ow64r.cloudfront.net</code>. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name that corresponds to the streaming distribution, for example,
     * <code>s5c39gqb8ow64r.cloudfront.net</code>. </p>
     */
    inline StreamingDistribution& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name that corresponds to the streaming distribution, for example,
     * <code>s5c39gqb8ow64r.cloudfront.net</code>. </p>
     */
    inline StreamingDistribution& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name that corresponds to the streaming distribution, for example,
     * <code>s5c39gqb8ow64r.cloudfront.net</code>. </p>
     */
    inline StreamingDistribution& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A complex type that lists the AWS accounts, if any, that you included in the
     * <code>TrustedSigners</code> complex type for this distribution. These are the
     * accounts that you want to allow to create signed URLs for private content.</p>
     * <p>The <code>Signer</code> complex type lists the AWS account number of the
     * trusted signer or <code>self</code> if the signer is the AWS account that
     * created the distribution. The <code>Signer</code> element also includes the IDs
     * of any active CloudFront key pairs that are associated with the trusted signer's
     * AWS account. If no <code>KeyPairId</code> element appears for a
     * <code>Signer</code>, that signer can't create signed URLs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline const ActiveTrustedSigners& GetActiveTrustedSigners() const{ return m_activeTrustedSigners; }

    /**
     * <p>A complex type that lists the AWS accounts, if any, that you included in the
     * <code>TrustedSigners</code> complex type for this distribution. These are the
     * accounts that you want to allow to create signed URLs for private content.</p>
     * <p>The <code>Signer</code> complex type lists the AWS account number of the
     * trusted signer or <code>self</code> if the signer is the AWS account that
     * created the distribution. The <code>Signer</code> element also includes the IDs
     * of any active CloudFront key pairs that are associated with the trusted signer's
     * AWS account. If no <code>KeyPairId</code> element appears for a
     * <code>Signer</code>, that signer can't create signed URLs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline bool ActiveTrustedSignersHasBeenSet() const { return m_activeTrustedSignersHasBeenSet; }

    /**
     * <p>A complex type that lists the AWS accounts, if any, that you included in the
     * <code>TrustedSigners</code> complex type for this distribution. These are the
     * accounts that you want to allow to create signed URLs for private content.</p>
     * <p>The <code>Signer</code> complex type lists the AWS account number of the
     * trusted signer or <code>self</code> if the signer is the AWS account that
     * created the distribution. The <code>Signer</code> element also includes the IDs
     * of any active CloudFront key pairs that are associated with the trusted signer's
     * AWS account. If no <code>KeyPairId</code> element appears for a
     * <code>Signer</code>, that signer can't create signed URLs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline void SetActiveTrustedSigners(const ActiveTrustedSigners& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = value; }

    /**
     * <p>A complex type that lists the AWS accounts, if any, that you included in the
     * <code>TrustedSigners</code> complex type for this distribution. These are the
     * accounts that you want to allow to create signed URLs for private content.</p>
     * <p>The <code>Signer</code> complex type lists the AWS account number of the
     * trusted signer or <code>self</code> if the signer is the AWS account that
     * created the distribution. The <code>Signer</code> element also includes the IDs
     * of any active CloudFront key pairs that are associated with the trusted signer's
     * AWS account. If no <code>KeyPairId</code> element appears for a
     * <code>Signer</code>, that signer can't create signed URLs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline void SetActiveTrustedSigners(ActiveTrustedSigners&& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = std::move(value); }

    /**
     * <p>A complex type that lists the AWS accounts, if any, that you included in the
     * <code>TrustedSigners</code> complex type for this distribution. These are the
     * accounts that you want to allow to create signed URLs for private content.</p>
     * <p>The <code>Signer</code> complex type lists the AWS account number of the
     * trusted signer or <code>self</code> if the signer is the AWS account that
     * created the distribution. The <code>Signer</code> element also includes the IDs
     * of any active CloudFront key pairs that are associated with the trusted signer's
     * AWS account. If no <code>KeyPairId</code> element appears for a
     * <code>Signer</code>, that signer can't create signed URLs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline StreamingDistribution& WithActiveTrustedSigners(const ActiveTrustedSigners& value) { SetActiveTrustedSigners(value); return *this;}

    /**
     * <p>A complex type that lists the AWS accounts, if any, that you included in the
     * <code>TrustedSigners</code> complex type for this distribution. These are the
     * accounts that you want to allow to create signed URLs for private content.</p>
     * <p>The <code>Signer</code> complex type lists the AWS account number of the
     * trusted signer or <code>self</code> if the signer is the AWS account that
     * created the distribution. The <code>Signer</code> element also includes the IDs
     * of any active CloudFront key pairs that are associated with the trusted signer's
     * AWS account. If no <code>KeyPairId</code> element appears for a
     * <code>Signer</code>, that signer can't create signed URLs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline StreamingDistribution& WithActiveTrustedSigners(ActiveTrustedSigners&& value) { SetActiveTrustedSigners(std::move(value)); return *this;}


    /**
     * <p>The current configuration information for the RTMP distribution.</p>
     */
    inline const StreamingDistributionConfig& GetStreamingDistributionConfig() const{ return m_streamingDistributionConfig; }

    /**
     * <p>The current configuration information for the RTMP distribution.</p>
     */
    inline bool StreamingDistributionConfigHasBeenSet() const { return m_streamingDistributionConfigHasBeenSet; }

    /**
     * <p>The current configuration information for the RTMP distribution.</p>
     */
    inline void SetStreamingDistributionConfig(const StreamingDistributionConfig& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = value; }

    /**
     * <p>The current configuration information for the RTMP distribution.</p>
     */
    inline void SetStreamingDistributionConfig(StreamingDistributionConfig&& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = std::move(value); }

    /**
     * <p>The current configuration information for the RTMP distribution.</p>
     */
    inline StreamingDistribution& WithStreamingDistributionConfig(const StreamingDistributionConfig& value) { SetStreamingDistributionConfig(value); return *this;}

    /**
     * <p>The current configuration information for the RTMP distribution.</p>
     */
    inline StreamingDistribution& WithStreamingDistributionConfig(StreamingDistributionConfig&& value) { SetStreamingDistributionConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;

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
