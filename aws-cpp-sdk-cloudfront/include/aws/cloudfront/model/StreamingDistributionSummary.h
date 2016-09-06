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
#include <aws/cloudfront/model/S3Origin.h>
#include <aws/cloudfront/model/Aliases.h>
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
   * A summary of the information for an Amazon CloudFront streaming distribution.
   */
  class AWS_CLOUDFRONT_API StreamingDistributionSummary
  {
  public:
    StreamingDistributionSummary();
    StreamingDistributionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    StreamingDistributionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline StreamingDistributionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The identifier for the distribution. For example: EDFDVBD632BHDS5.
     */
    inline StreamingDistributionSummary& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * The identifier for the distribution. For example: EDFDVBD632BHDS5.
     */
    inline StreamingDistributionSummary& WithId(const char* value) { SetId(value); return *this;}

    /**
     * Indicates the current status of the distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * Indicates the current status of the distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * Indicates the current status of the distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * Indicates the current status of the distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * Indicates the current status of the distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline StreamingDistributionSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * Indicates the current status of the distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline StreamingDistributionSummary& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * Indicates the current status of the distribution. When the status is Deployed,
     * the distribution's information is fully propagated throughout the Amazon
     * CloudFront system.
     */
    inline StreamingDistributionSummary& WithStatus(const char* value) { SetStatus(value); return *this;}

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
    inline StreamingDistributionSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * The date and time the distribution was last modified.
     */
    inline StreamingDistributionSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(value); return *this;}

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
    inline StreamingDistributionSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The domain name corresponding to the distribution. For example:
     * d604721fxaaqy9.cloudfront.net.
     */
    inline StreamingDistributionSummary& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * The domain name corresponding to the distribution. For example:
     * d604721fxaaqy9.cloudfront.net.
     */
    inline StreamingDistributionSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}

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
    inline StreamingDistributionSummary& WithS3Origin(const S3Origin& value) { SetS3Origin(value); return *this;}

    /**
     * A complex type that contains information about the Amazon S3 bucket from which
     * you want CloudFront to get your media files for distribution.
     */
    inline StreamingDistributionSummary& WithS3Origin(S3Origin&& value) { SetS3Origin(value); return *this;}

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
    inline StreamingDistributionSummary& WithAliases(const Aliases& value) { SetAliases(value); return *this;}

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this streaming distribution.
     */
    inline StreamingDistributionSummary& WithAliases(Aliases&& value) { SetAliases(value); return *this;}

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
    inline StreamingDistributionSummary& WithTrustedSigners(const TrustedSigners& value) { SetTrustedSigners(value); return *this;}

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
    inline StreamingDistributionSummary& WithTrustedSigners(TrustedSigners&& value) { SetTrustedSigners(value); return *this;}

    /**
     * The comment originally specified when this distribution was created.
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * The comment originally specified when this distribution was created.
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * The comment originally specified when this distribution was created.
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * The comment originally specified when this distribution was created.
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * The comment originally specified when this distribution was created.
     */
    inline StreamingDistributionSummary& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * The comment originally specified when this distribution was created.
     */
    inline StreamingDistributionSummary& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * The comment originally specified when this distribution was created.
     */
    inline StreamingDistributionSummary& WithComment(const char* value) { SetComment(value); return *this;}

    
    inline const PriceClass& GetPriceClass() const{ return m_priceClass; }

    
    inline void SetPriceClass(const PriceClass& value) { m_priceClassHasBeenSet = true; m_priceClass = value; }

    
    inline void SetPriceClass(PriceClass&& value) { m_priceClassHasBeenSet = true; m_priceClass = value; }

    
    inline StreamingDistributionSummary& WithPriceClass(const PriceClass& value) { SetPriceClass(value); return *this;}

    
    inline StreamingDistributionSummary& WithPriceClass(PriceClass&& value) { SetPriceClass(value); return *this;}

    /**
     * Whether the distribution is enabled to accept end user requests for content.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * Whether the distribution is enabled to accept end user requests for content.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * Whether the distribution is enabled to accept end user requests for content.
     */
    inline StreamingDistributionSummary& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    S3Origin m_s3Origin;
    bool m_s3OriginHasBeenSet;
    Aliases m_aliases;
    bool m_aliasesHasBeenSet;
    TrustedSigners m_trustedSigners;
    bool m_trustedSignersHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
    PriceClass m_priceClass;
    bool m_priceClassHasBeenSet;
    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
