/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/StreamingDistribution">AWS
   * API Reference</a></p>
   */
  class StreamingDistribution
  {
  public:
    AWS_CLOUDFRONT_API StreamingDistribution();
    AWS_CLOUDFRONT_API StreamingDistribution(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API StreamingDistribution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The identifier for the RTMP distribution. For example:
     * <code>EGTXBD79EXAMPLE</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline StreamingDistribution& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline StreamingDistribution& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline StreamingDistribution& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline StreamingDistribution& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline StreamingDistribution& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline StreamingDistribution& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the RTMP distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline StreamingDistribution& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline StreamingDistribution& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline StreamingDistribution& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the distribution was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline StreamingDistribution& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline StreamingDistribution& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name that corresponds to the streaming distribution, for example,
     * <code>s5c39gqb8ow64r.cloudfront.net</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline StreamingDistribution& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline StreamingDistribution& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline StreamingDistribution& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that lists the Amazon Web Services accounts, if any, that you
     * included in the <code>TrustedSigners</code> complex type for this distribution.
     * These are the accounts that you want to allow to create signed URLs for private
     * content.</p> <p>The <code>Signer</code> complex type lists the Amazon Web
     * Services account number of the trusted signer or <code>self</code> if the signer
     * is the Amazon Web Services account that created the distribution. The
     * <code>Signer</code> element also includes the IDs of any active CloudFront key
     * pairs that are associated with the trusted signer's Amazon Web Services account.
     * If no <code>KeyPairId</code> element appears for a <code>Signer</code>, that
     * signer can't create signed URLs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const ActiveTrustedSigners& GetActiveTrustedSigners() const{ return m_activeTrustedSigners; }
    inline bool ActiveTrustedSignersHasBeenSet() const { return m_activeTrustedSignersHasBeenSet; }
    inline void SetActiveTrustedSigners(const ActiveTrustedSigners& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = value; }
    inline void SetActiveTrustedSigners(ActiveTrustedSigners&& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = std::move(value); }
    inline StreamingDistribution& WithActiveTrustedSigners(const ActiveTrustedSigners& value) { SetActiveTrustedSigners(value); return *this;}
    inline StreamingDistribution& WithActiveTrustedSigners(ActiveTrustedSigners&& value) { SetActiveTrustedSigners(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current configuration information for the RTMP distribution.</p>
     */
    inline const StreamingDistributionConfig& GetStreamingDistributionConfig() const{ return m_streamingDistributionConfig; }
    inline bool StreamingDistributionConfigHasBeenSet() const { return m_streamingDistributionConfigHasBeenSet; }
    inline void SetStreamingDistributionConfig(const StreamingDistributionConfig& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = value; }
    inline void SetStreamingDistributionConfig(StreamingDistributionConfig&& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = std::move(value); }
    inline StreamingDistribution& WithStreamingDistributionConfig(const StreamingDistributionConfig& value) { SetStreamingDistributionConfig(value); return *this;}
    inline StreamingDistribution& WithStreamingDistributionConfig(StreamingDistributionConfig&& value) { SetStreamingDistributionConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ActiveTrustedSigners m_activeTrustedSigners;
    bool m_activeTrustedSignersHasBeenSet = false;

    StreamingDistributionConfig m_streamingDistributionConfig;
    bool m_streamingDistributionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
