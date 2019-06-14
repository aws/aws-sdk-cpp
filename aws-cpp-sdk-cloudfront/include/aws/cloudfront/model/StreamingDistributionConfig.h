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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/StreamingDistributionConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API StreamingDistributionConfig
  {
  public:
    StreamingDistributionConfig();
    StreamingDistributionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    StreamingDistributionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>StreamingDistributionConfig</code>
     * object), CloudFront creates a new distribution.</p> <p>If
     * <code>CallerReference</code> is a value that you already sent in a previous
     * request to create a distribution, CloudFront returns a
     * <code>DistributionAlreadyExists</code> error.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>StreamingDistributionConfig</code>
     * object), CloudFront creates a new distribution.</p> <p>If
     * <code>CallerReference</code> is a value that you already sent in a previous
     * request to create a distribution, CloudFront returns a
     * <code>DistributionAlreadyExists</code> error.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>StreamingDistributionConfig</code>
     * object), CloudFront creates a new distribution.</p> <p>If
     * <code>CallerReference</code> is a value that you already sent in a previous
     * request to create a distribution, CloudFront returns a
     * <code>DistributionAlreadyExists</code> error.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>StreamingDistributionConfig</code>
     * object), CloudFront creates a new distribution.</p> <p>If
     * <code>CallerReference</code> is a value that you already sent in a previous
     * request to create a distribution, CloudFront returns a
     * <code>DistributionAlreadyExists</code> error.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>StreamingDistributionConfig</code>
     * object), CloudFront creates a new distribution.</p> <p>If
     * <code>CallerReference</code> is a value that you already sent in a previous
     * request to create a distribution, CloudFront returns a
     * <code>DistributionAlreadyExists</code> error.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>StreamingDistributionConfig</code>
     * object), CloudFront creates a new distribution.</p> <p>If
     * <code>CallerReference</code> is a value that you already sent in a previous
     * request to create a distribution, CloudFront returns a
     * <code>DistributionAlreadyExists</code> error.</p>
     */
    inline StreamingDistributionConfig& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>StreamingDistributionConfig</code>
     * object), CloudFront creates a new distribution.</p> <p>If
     * <code>CallerReference</code> is a value that you already sent in a previous
     * request to create a distribution, CloudFront returns a
     * <code>DistributionAlreadyExists</code> error.</p>
     */
    inline StreamingDistributionConfig& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>StreamingDistributionConfig</code>
     * object), CloudFront creates a new distribution.</p> <p>If
     * <code>CallerReference</code> is a value that you already sent in a previous
     * request to create a distribution, CloudFront returns a
     * <code>DistributionAlreadyExists</code> error.</p>
     */
    inline StreamingDistributionConfig& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution. </p>
     */
    inline const S3Origin& GetS3Origin() const{ return m_s3Origin; }

    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution. </p>
     */
    inline bool S3OriginHasBeenSet() const { return m_s3OriginHasBeenSet; }

    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution. </p>
     */
    inline void SetS3Origin(const S3Origin& value) { m_s3OriginHasBeenSet = true; m_s3Origin = value; }

    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution. </p>
     */
    inline void SetS3Origin(S3Origin&& value) { m_s3OriginHasBeenSet = true; m_s3Origin = std::move(value); }

    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution. </p>
     */
    inline StreamingDistributionConfig& WithS3Origin(const S3Origin& value) { SetS3Origin(value); return *this;}

    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution. </p>
     */
    inline StreamingDistributionConfig& WithS3Origin(S3Origin&& value) { SetS3Origin(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution. </p>
     */
    inline const Aliases& GetAliases() const{ return m_aliases; }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution. </p>
     */
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution. </p>
     */
    inline void SetAliases(const Aliases& value) { m_aliasesHasBeenSet = true; m_aliases = value; }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution. </p>
     */
    inline void SetAliases(Aliases&& value) { m_aliasesHasBeenSet = true; m_aliases = std::move(value); }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution. </p>
     */
    inline StreamingDistributionConfig& WithAliases(const Aliases& value) { SetAliases(value); return *this;}

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution. </p>
     */
    inline StreamingDistributionConfig& WithAliases(Aliases&& value) { SetAliases(std::move(value)); return *this;}


    /**
     * <p>Any comments you want to include about the streaming distribution. </p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>Any comments you want to include about the streaming distribution. </p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>Any comments you want to include about the streaming distribution. </p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>Any comments you want to include about the streaming distribution. </p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>Any comments you want to include about the streaming distribution. </p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>Any comments you want to include about the streaming distribution. </p>
     */
    inline StreamingDistributionConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>Any comments you want to include about the streaming distribution. </p>
     */
    inline StreamingDistributionConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>Any comments you want to include about the streaming distribution. </p>
     */
    inline StreamingDistributionConfig& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>A complex type that controls whether access logs are written for the
     * streaming distribution. </p>
     */
    inline const StreamingLoggingConfig& GetLogging() const{ return m_logging; }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * streaming distribution. </p>
     */
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * streaming distribution. </p>
     */
    inline void SetLogging(const StreamingLoggingConfig& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * streaming distribution. </p>
     */
    inline void SetLogging(StreamingLoggingConfig&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * streaming distribution. </p>
     */
    inline StreamingDistributionConfig& WithLogging(const StreamingLoggingConfig& value) { SetLogging(value); return *this;}

    /**
     * <p>A complex type that controls whether access logs are written for the
     * streaming distribution. </p>
     */
    inline StreamingDistributionConfig& WithLogging(StreamingLoggingConfig&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>A complex type that specifies any AWS accounts that you want to permit to
     * create signed URLs for private content. If you want the distribution to use
     * signed URLs, include this element; if you want the distribution to use public
     * URLs, remove this element. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline const TrustedSigners& GetTrustedSigners() const{ return m_trustedSigners; }

    /**
     * <p>A complex type that specifies any AWS accounts that you want to permit to
     * create signed URLs for private content. If you want the distribution to use
     * signed URLs, include this element; if you want the distribution to use public
     * URLs, remove this element. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline bool TrustedSignersHasBeenSet() const { return m_trustedSignersHasBeenSet; }

    /**
     * <p>A complex type that specifies any AWS accounts that you want to permit to
     * create signed URLs for private content. If you want the distribution to use
     * signed URLs, include this element; if you want the distribution to use public
     * URLs, remove this element. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline void SetTrustedSigners(const TrustedSigners& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = value; }

    /**
     * <p>A complex type that specifies any AWS accounts that you want to permit to
     * create signed URLs for private content. If you want the distribution to use
     * signed URLs, include this element; if you want the distribution to use public
     * URLs, remove this element. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline void SetTrustedSigners(TrustedSigners&& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = std::move(value); }

    /**
     * <p>A complex type that specifies any AWS accounts that you want to permit to
     * create signed URLs for private content. If you want the distribution to use
     * signed URLs, include this element; if you want the distribution to use public
     * URLs, remove this element. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline StreamingDistributionConfig& WithTrustedSigners(const TrustedSigners& value) { SetTrustedSigners(value); return *this;}

    /**
     * <p>A complex type that specifies any AWS accounts that you want to permit to
     * create signed URLs for private content. If you want the distribution to use
     * signed URLs, include this element; if you want the distribution to use public
     * URLs, remove this element. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p>
     */
    inline StreamingDistributionConfig& WithTrustedSigners(TrustedSigners&& value) { SetTrustedSigners(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about price class for this streaming
     * distribution. </p>
     */
    inline const PriceClass& GetPriceClass() const{ return m_priceClass; }

    /**
     * <p>A complex type that contains information about price class for this streaming
     * distribution. </p>
     */
    inline bool PriceClassHasBeenSet() const { return m_priceClassHasBeenSet; }

    /**
     * <p>A complex type that contains information about price class for this streaming
     * distribution. </p>
     */
    inline void SetPriceClass(const PriceClass& value) { m_priceClassHasBeenSet = true; m_priceClass = value; }

    /**
     * <p>A complex type that contains information about price class for this streaming
     * distribution. </p>
     */
    inline void SetPriceClass(PriceClass&& value) { m_priceClassHasBeenSet = true; m_priceClass = std::move(value); }

    /**
     * <p>A complex type that contains information about price class for this streaming
     * distribution. </p>
     */
    inline StreamingDistributionConfig& WithPriceClass(const PriceClass& value) { SetPriceClass(value); return *this;}

    /**
     * <p>A complex type that contains information about price class for this streaming
     * distribution. </p>
     */
    inline StreamingDistributionConfig& WithPriceClass(PriceClass&& value) { SetPriceClass(std::move(value)); return *this;}


    /**
     * <p>Whether the streaming distribution is enabled to accept user requests for
     * content.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether the streaming distribution is enabled to accept user requests for
     * content.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether the streaming distribution is enabled to accept user requests for
     * content.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether the streaming distribution is enabled to accept user requests for
     * content.</p>
     */
    inline StreamingDistributionConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;

    S3Origin m_s3Origin;
    bool m_s3OriginHasBeenSet;

    Aliases m_aliases;
    bool m_aliasesHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;

    StreamingLoggingConfig m_logging;
    bool m_loggingHasBeenSet;

    TrustedSigners m_trustedSigners;
    bool m_trustedSignersHasBeenSet;

    PriceClass m_priceClass;
    bool m_priceClassHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
