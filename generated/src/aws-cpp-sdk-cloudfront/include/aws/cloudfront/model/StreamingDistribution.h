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
    AWS_CLOUDFRONT_API StreamingDistribution() = default;
    AWS_CLOUDFRONT_API StreamingDistribution(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API StreamingDistribution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The identifier for the RTMP distribution. For example:
     * <code>EGTXBD79EXAMPLE</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    StreamingDistribution& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    StreamingDistribution& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the RTMP distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    StreamingDistribution& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the distribution was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    StreamingDistribution& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name that corresponds to the streaming distribution, for example,
     * <code>s5c39gqb8ow64r.cloudfront.net</code>.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    StreamingDistribution& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
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
    inline const ActiveTrustedSigners& GetActiveTrustedSigners() const { return m_activeTrustedSigners; }
    inline bool ActiveTrustedSignersHasBeenSet() const { return m_activeTrustedSignersHasBeenSet; }
    template<typename ActiveTrustedSignersT = ActiveTrustedSigners>
    void SetActiveTrustedSigners(ActiveTrustedSignersT&& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = std::forward<ActiveTrustedSignersT>(value); }
    template<typename ActiveTrustedSignersT = ActiveTrustedSigners>
    StreamingDistribution& WithActiveTrustedSigners(ActiveTrustedSignersT&& value) { SetActiveTrustedSigners(std::forward<ActiveTrustedSignersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current configuration information for the RTMP distribution.</p>
     */
    inline const StreamingDistributionConfig& GetStreamingDistributionConfig() const { return m_streamingDistributionConfig; }
    inline bool StreamingDistributionConfigHasBeenSet() const { return m_streamingDistributionConfigHasBeenSet; }
    template<typename StreamingDistributionConfigT = StreamingDistributionConfig>
    void SetStreamingDistributionConfig(StreamingDistributionConfigT&& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = std::forward<StreamingDistributionConfigT>(value); }
    template<typename StreamingDistributionConfigT = StreamingDistributionConfig>
    StreamingDistribution& WithStreamingDistributionConfig(StreamingDistributionConfigT&& value) { SetStreamingDistributionConfig(std::forward<StreamingDistributionConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
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
