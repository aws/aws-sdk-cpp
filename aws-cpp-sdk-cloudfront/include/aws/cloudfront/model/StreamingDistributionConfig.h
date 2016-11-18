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
#include <aws/cloudfront/model/S3Origin.h>
#include <aws/cloudfront/model/Aliases.h>
#include <aws/cloudfront/model/StreamingLoggingConfig.h>
#include <aws/cloudfront/model/TrustedSigners.h>
#include <aws/cloudfront/model/PriceClass.h>

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
   * The configuration for the streaming distribution.
   */
  class AWS_CLOUDFRONT_API StreamingDistributionConfig
  {
  public:
    StreamingDistributionConfig();
    StreamingDistributionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    StreamingDistributionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the StreamingDistributionConfig
     * object), a new streaming distribution is created. If the CallerReference is a
     * value you already sent in a previous request to create a streaming distribution,
     * and the content of the StreamingDistributionConfig is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a streaming distribution but the content of
     * the StreamingDistributionConfig is different from the original request,
     * CloudFront returns a DistributionAlreadyExists error.
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the StreamingDistributionConfig
     * object), a new streaming distribution is created. If the CallerReference is a
     * value you already sent in a previous request to create a streaming distribution,
     * and the content of the StreamingDistributionConfig is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a streaming distribution but the content of
     * the StreamingDistributionConfig is different from the original request,
     * CloudFront returns a DistributionAlreadyExists error.
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the StreamingDistributionConfig
     * object), a new streaming distribution is created. If the CallerReference is a
     * value you already sent in a previous request to create a streaming distribution,
     * and the content of the StreamingDistributionConfig is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a streaming distribution but the content of
     * the StreamingDistributionConfig is different from the original request,
     * CloudFront returns a DistributionAlreadyExists error.
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the StreamingDistributionConfig
     * object), a new streaming distribution is created. If the CallerReference is a
     * value you already sent in a previous request to create a streaming distribution,
     * and the content of the StreamingDistributionConfig is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a streaming distribution but the content of
     * the StreamingDistributionConfig is different from the original request,
     * CloudFront returns a DistributionAlreadyExists error.
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the StreamingDistributionConfig
     * object), a new streaming distribution is created. If the CallerReference is a
     * value you already sent in a previous request to create a streaming distribution,
     * and the content of the StreamingDistributionConfig is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a streaming distribution but the content of
     * the StreamingDistributionConfig is different from the original request,
     * CloudFront returns a DistributionAlreadyExists error.
     */
    inline StreamingDistributionConfig& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the StreamingDistributionConfig
     * object), a new streaming distribution is created. If the CallerReference is a
     * value you already sent in a previous request to create a streaming distribution,
     * and the content of the StreamingDistributionConfig is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a streaming distribution but the content of
     * the StreamingDistributionConfig is different from the original request,
     * CloudFront returns a DistributionAlreadyExists error.
     */
    inline StreamingDistributionConfig& WithCallerReference(Aws::String&& value) { SetCallerReference(value); return *this;}

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the StreamingDistributionConfig
     * object), a new streaming distribution is created. If the CallerReference is a
     * value you already sent in a previous request to create a streaming distribution,
     * and the content of the StreamingDistributionConfig is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. If the CallerReference is a value you already
     * sent in a previous request to create a streaming distribution but the content of
     * the StreamingDistributionConfig is different from the original request,
     * CloudFront returns a DistributionAlreadyExists error.
     */
    inline StreamingDistributionConfig& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

    /**
     * A complex type that contains information about the Amazon S3 bucket from which
     * you want CloudFront to get your media files for distribution.
     */
    inline const S3Origin& GetS3Origin() const{ return m_s3Origin; }

    /**
     * A complex type that contains information about the Amazon S3 bucket from which
     * you want CloudFront to get your media files for distribution.
     */
    inline void SetS3Origin(const S3Origin& value) { m_s3OriginHasBeenSet = true; m_s3Origin = value; }

    /**
     * A complex type that contains information about the Amazon S3 bucket from which
     * you want CloudFront to get your media files for distribution.
     */
    inline void SetS3Origin(S3Origin&& value) { m_s3OriginHasBeenSet = true; m_s3Origin = value; }

    /**
     * A complex type that contains information about the Amazon S3 bucket from which
     * you want CloudFront to get your media files for distribution.
     */
    inline StreamingDistributionConfig& WithS3Origin(const S3Origin& value) { SetS3Origin(value); return *this;}

    /**
     * A complex type that contains information about the Amazon S3 bucket from which
     * you want CloudFront to get your media files for distribution.
     */
    inline StreamingDistributionConfig& WithS3Origin(S3Origin&& value) { SetS3Origin(value); return *this;}

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this streaming distribution.
     */
    inline const Aliases& GetAliases() const{ return m_aliases; }

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this streaming distribution.
     */
    inline void SetAliases(const Aliases& value) { m_aliasesHasBeenSet = true; m_aliases = value; }

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this streaming distribution.
     */
    inline void SetAliases(Aliases&& value) { m_aliasesHasBeenSet = true; m_aliases = value; }

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this streaming distribution.
     */
    inline StreamingDistributionConfig& WithAliases(const Aliases& value) { SetAliases(value); return *this;}

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this streaming distribution.
     */
    inline StreamingDistributionConfig& WithAliases(Aliases&& value) { SetAliases(value); return *this;}

    /**
     * Any comments you want to include about the streaming distribution.
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * Any comments you want to include about the streaming distribution.
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * Any comments you want to include about the streaming distribution.
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * Any comments you want to include about the streaming distribution.
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * Any comments you want to include about the streaming distribution.
     */
    inline StreamingDistributionConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * Any comments you want to include about the streaming distribution.
     */
    inline StreamingDistributionConfig& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * Any comments you want to include about the streaming distribution.
     */
    inline StreamingDistributionConfig& WithComment(const char* value) { SetComment(value); return *this;}

    /**
     * A complex type that controls whether access logs are written for the streaming
     * distribution.
     */
    inline const StreamingLoggingConfig& GetLogging() const{ return m_logging; }

    /**
     * A complex type that controls whether access logs are written for the streaming
     * distribution.
     */
    inline void SetLogging(const StreamingLoggingConfig& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * A complex type that controls whether access logs are written for the streaming
     * distribution.
     */
    inline void SetLogging(StreamingLoggingConfig&& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * A complex type that controls whether access logs are written for the streaming
     * distribution.
     */
    inline StreamingDistributionConfig& WithLogging(const StreamingLoggingConfig& value) { SetLogging(value); return *this;}

    /**
     * A complex type that controls whether access logs are written for the streaming
     * distribution.
     */
    inline StreamingDistributionConfig& WithLogging(StreamingLoggingConfig&& value) { SetLogging(value); return *this;}

    /**
     * A complex type that specifies the AWS accounts, if any, that you want to allow
     * to create signed URLs for private content. If you want to require signed URLs in
     * requests for objects in the target origin that match the PathPattern for this
     * cache behavior, specify true for Enabled, and specify the applicable values for
     * Quantity and Items. For more information, go to Using a Signed URL to Serve
     * Private Content in the Amazon CloudFront Developer Guide. If you don't want to
     * require signed URLs in requests for objects that match PathPattern, specify
     * false for Enabled and 0 for Quantity. Omit Items. To add, change, or remove one
     * or more trusted signers, change Enabled to true (if it's currently false),
     * change Quantity as applicable, and specify all of the trusted signers that you
     * want to include in the updated distribution.
     */
    inline const TrustedSigners& GetTrustedSigners() const{ return m_trustedSigners; }

    /**
     * A complex type that specifies the AWS accounts, if any, that you want to allow
     * to create signed URLs for private content. If you want to require signed URLs in
     * requests for objects in the target origin that match the PathPattern for this
     * cache behavior, specify true for Enabled, and specify the applicable values for
     * Quantity and Items. For more information, go to Using a Signed URL to Serve
     * Private Content in the Amazon CloudFront Developer Guide. If you don't want to
     * require signed URLs in requests for objects that match PathPattern, specify
     * false for Enabled and 0 for Quantity. Omit Items. To add, change, or remove one
     * or more trusted signers, change Enabled to true (if it's currently false),
     * change Quantity as applicable, and specify all of the trusted signers that you
     * want to include in the updated distribution.
     */
    inline void SetTrustedSigners(const TrustedSigners& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = value; }

    /**
     * A complex type that specifies the AWS accounts, if any, that you want to allow
     * to create signed URLs for private content. If you want to require signed URLs in
     * requests for objects in the target origin that match the PathPattern for this
     * cache behavior, specify true for Enabled, and specify the applicable values for
     * Quantity and Items. For more information, go to Using a Signed URL to Serve
     * Private Content in the Amazon CloudFront Developer Guide. If you don't want to
     * require signed URLs in requests for objects that match PathPattern, specify
     * false for Enabled and 0 for Quantity. Omit Items. To add, change, or remove one
     * or more trusted signers, change Enabled to true (if it's currently false),
     * change Quantity as applicable, and specify all of the trusted signers that you
     * want to include in the updated distribution.
     */
    inline void SetTrustedSigners(TrustedSigners&& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = value; }

    /**
     * A complex type that specifies the AWS accounts, if any, that you want to allow
     * to create signed URLs for private content. If you want to require signed URLs in
     * requests for objects in the target origin that match the PathPattern for this
     * cache behavior, specify true for Enabled, and specify the applicable values for
     * Quantity and Items. For more information, go to Using a Signed URL to Serve
     * Private Content in the Amazon CloudFront Developer Guide. If you don't want to
     * require signed URLs in requests for objects that match PathPattern, specify
     * false for Enabled and 0 for Quantity. Omit Items. To add, change, or remove one
     * or more trusted signers, change Enabled to true (if it's currently false),
     * change Quantity as applicable, and specify all of the trusted signers that you
     * want to include in the updated distribution.
     */
    inline StreamingDistributionConfig& WithTrustedSigners(const TrustedSigners& value) { SetTrustedSigners(value); return *this;}

    /**
     * A complex type that specifies the AWS accounts, if any, that you want to allow
     * to create signed URLs for private content. If you want to require signed URLs in
     * requests for objects in the target origin that match the PathPattern for this
     * cache behavior, specify true for Enabled, and specify the applicable values for
     * Quantity and Items. For more information, go to Using a Signed URL to Serve
     * Private Content in the Amazon CloudFront Developer Guide. If you don't want to
     * require signed URLs in requests for objects that match PathPattern, specify
     * false for Enabled and 0 for Quantity. Omit Items. To add, change, or remove one
     * or more trusted signers, change Enabled to true (if it's currently false),
     * change Quantity as applicable, and specify all of the trusted signers that you
     * want to include in the updated distribution.
     */
    inline StreamingDistributionConfig& WithTrustedSigners(TrustedSigners&& value) { SetTrustedSigners(value); return *this;}

    /**
     * A complex type that contains information about price class for this streaming
     * distribution.
     */
    inline const PriceClass& GetPriceClass() const{ return m_priceClass; }

    /**
     * A complex type that contains information about price class for this streaming
     * distribution.
     */
    inline void SetPriceClass(const PriceClass& value) { m_priceClassHasBeenSet = true; m_priceClass = value; }

    /**
     * A complex type that contains information about price class for this streaming
     * distribution.
     */
    inline void SetPriceClass(PriceClass&& value) { m_priceClassHasBeenSet = true; m_priceClass = value; }

    /**
     * A complex type that contains information about price class for this streaming
     * distribution.
     */
    inline StreamingDistributionConfig& WithPriceClass(const PriceClass& value) { SetPriceClass(value); return *this;}

    /**
     * A complex type that contains information about price class for this streaming
     * distribution.
     */
    inline StreamingDistributionConfig& WithPriceClass(PriceClass&& value) { SetPriceClass(value); return *this;}

    /**
     * Whether the streaming distribution is enabled to accept end user requests for
     * content.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * Whether the streaming distribution is enabled to accept end user requests for
     * content.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * Whether the streaming distribution is enabled to accept end user requests for
     * content.
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
