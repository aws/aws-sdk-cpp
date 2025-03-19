/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/S3Origin.h>
#include <aws/cloudfront/model/Aliases.h>
#include <aws/cloudfront/model/TrustedSigners.h>
#include <aws/cloudfront/model/PriceClass.h>
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
   * <p>A summary of the information for a CloudFront streaming
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/StreamingDistributionSummary">AWS
   * API Reference</a></p>
   */
  class StreamingDistributionSummary
  {
  public:
    AWS_CLOUDFRONT_API StreamingDistributionSummary() = default;
    AWS_CLOUDFRONT_API StreamingDistributionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API StreamingDistributionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The identifier for the distribution, for example,
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    StreamingDistributionSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) for the streaming distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:streaming-distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    StreamingDistributionSummary& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    StreamingDistributionSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the distribution was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    StreamingDistributionSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    StreamingDistributionSummary& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution.</p>
     */
    inline const S3Origin& GetS3Origin() const { return m_s3Origin; }
    inline bool S3OriginHasBeenSet() const { return m_s3OriginHasBeenSet; }
    template<typename S3OriginT = S3Origin>
    void SetS3Origin(S3OriginT&& value) { m_s3OriginHasBeenSet = true; m_s3Origin = std::forward<S3OriginT>(value); }
    template<typename S3OriginT = S3Origin>
    StreamingDistributionSummary& WithS3Origin(S3OriginT&& value) { SetS3Origin(std::forward<S3OriginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution.</p>
     */
    inline const Aliases& GetAliases() const { return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    template<typename AliasesT = Aliases>
    void SetAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases = std::forward<AliasesT>(value); }
    template<typename AliasesT = Aliases>
    StreamingDistributionSummary& WithAliases(AliasesT&& value) { SetAliases(std::forward<AliasesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that specifies the Amazon Web Services accounts, if any, that
     * you want to allow to create signed URLs for private content. If you want to
     * require signed URLs in requests for objects in the target origin that match the
     * <code>PathPattern</code> for this cache behavior, specify <code>true</code> for
     * <code>Enabled</code>, and specify the applicable values for
     * <code>Quantity</code> and <code>Items</code>.If you don't want to require signed
     * URLs in requests for objects that match <code>PathPattern</code>, specify
     * <code>false</code> for <code>Enabled</code> and <code>0</code> for
     * <code>Quantity</code>. Omit <code>Items</code>. To add, change, or remove one or
     * more trusted signers, change <code>Enabled</code> to <code>true</code> (if it's
     * currently <code>false</code>), change <code>Quantity</code> as applicable, and
     * specify all of the trusted signers that you want to include in the updated
     * distribution.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const TrustedSigners& GetTrustedSigners() const { return m_trustedSigners; }
    inline bool TrustedSignersHasBeenSet() const { return m_trustedSignersHasBeenSet; }
    template<typename TrustedSignersT = TrustedSigners>
    void SetTrustedSigners(TrustedSignersT&& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = std::forward<TrustedSignersT>(value); }
    template<typename TrustedSignersT = TrustedSigners>
    StreamingDistributionSummary& WithTrustedSigners(TrustedSignersT&& value) { SetTrustedSigners(std::forward<TrustedSignersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    StreamingDistributionSummary& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about price class for this streaming
     * distribution.</p>
     */
    inline PriceClass GetPriceClass() const { return m_priceClass; }
    inline bool PriceClassHasBeenSet() const { return m_priceClassHasBeenSet; }
    inline void SetPriceClass(PriceClass value) { m_priceClassHasBeenSet = true; m_priceClass = value; }
    inline StreamingDistributionSummary& WithPriceClass(PriceClass value) { SetPriceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the distribution is enabled to accept end user requests for
     * content.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline StreamingDistributionSummary& WithEnabled(bool value) { SetEnabled(value); return *this;}
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

    S3Origin m_s3Origin;
    bool m_s3OriginHasBeenSet = false;

    Aliases m_aliases;
    bool m_aliasesHasBeenSet = false;

    TrustedSigners m_trustedSigners;
    bool m_trustedSignersHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    PriceClass m_priceClass{PriceClass::NOT_SET};
    bool m_priceClassHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
