/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/S3Origin.h>
#include <aws/cloudfront/model/Aliases.h>
#include <aws/cloudfront/model/StreamingLoggingConfig.h>
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
   * <p>The RTMP distribution's configuration information.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/StreamingDistributionConfig">AWS
   * API Reference</a></p>
   */
  class StreamingDistributionConfig
  {
  public:
    AWS_CLOUDFRONT_API StreamingDistributionConfig() = default;
    AWS_CLOUDFRONT_API StreamingDistributionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API StreamingDistributionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>StreamingDistributionConfig</code>
     * object), CloudFront creates a new distribution.</p> <p>If
     * <code>CallerReference</code> is a value that you already sent in a previous
     * request to create a distribution, CloudFront returns a
     * <code>DistributionAlreadyExists</code> error.</p>
     */
    inline const Aws::String& GetCallerReference() const { return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    template<typename CallerReferenceT = Aws::String>
    void SetCallerReference(CallerReferenceT&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::forward<CallerReferenceT>(value); }
    template<typename CallerReferenceT = Aws::String>
    StreamingDistributionConfig& WithCallerReference(CallerReferenceT&& value) { SetCallerReference(std::forward<CallerReferenceT>(value)); return *this;}
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
    StreamingDistributionConfig& WithS3Origin(S3OriginT&& value) { SetS3Origin(std::forward<S3OriginT>(value)); return *this;}
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
    StreamingDistributionConfig& WithAliases(AliasesT&& value) { SetAliases(std::forward<AliasesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any comments you want to include about the streaming distribution.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    StreamingDistributionConfig& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that controls whether access logs are written for the
     * streaming distribution.</p>
     */
    inline const StreamingLoggingConfig& GetLogging() const { return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    template<typename LoggingT = StreamingLoggingConfig>
    void SetLogging(LoggingT&& value) { m_loggingHasBeenSet = true; m_logging = std::forward<LoggingT>(value); }
    template<typename LoggingT = StreamingLoggingConfig>
    StreamingDistributionConfig& WithLogging(LoggingT&& value) { SetLogging(std::forward<LoggingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that specifies any Amazon Web Services accounts that you want
     * to permit to create signed URLs for private content. If you want the
     * distribution to use signed URLs, include this element; if you want the
     * distribution to use public URLs, remove this element. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const TrustedSigners& GetTrustedSigners() const { return m_trustedSigners; }
    inline bool TrustedSignersHasBeenSet() const { return m_trustedSignersHasBeenSet; }
    template<typename TrustedSignersT = TrustedSigners>
    void SetTrustedSigners(TrustedSignersT&& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = std::forward<TrustedSignersT>(value); }
    template<typename TrustedSignersT = TrustedSigners>
    StreamingDistributionConfig& WithTrustedSigners(TrustedSignersT&& value) { SetTrustedSigners(std::forward<TrustedSignersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about price class for this streaming
     * distribution.</p>
     */
    inline PriceClass GetPriceClass() const { return m_priceClass; }
    inline bool PriceClassHasBeenSet() const { return m_priceClassHasBeenSet; }
    inline void SetPriceClass(PriceClass value) { m_priceClassHasBeenSet = true; m_priceClass = value; }
    inline StreamingDistributionConfig& WithPriceClass(PriceClass value) { SetPriceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the streaming distribution is enabled to accept user requests for
     * content.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline StreamingDistributionConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    S3Origin m_s3Origin;
    bool m_s3OriginHasBeenSet = false;

    Aliases m_aliases;
    bool m_aliasesHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    StreamingLoggingConfig m_logging;
    bool m_loggingHasBeenSet = false;

    TrustedSigners m_trustedSigners;
    bool m_trustedSignersHasBeenSet = false;

    PriceClass m_priceClass{PriceClass::NOT_SET};
    bool m_priceClassHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
