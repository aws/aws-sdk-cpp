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
   * <p> A summary of the information for a CloudFront streaming
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/StreamingDistributionSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API StreamingDistributionSummary
  {
  public:
    StreamingDistributionSummary();
    StreamingDistributionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    StreamingDistributionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The identifier for the distribution, for example,
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the distribution, for example,
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the distribution, for example,
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the distribution, for example,
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the distribution, for example,
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the distribution, for example,
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline StreamingDistributionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the distribution, for example,
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline StreamingDistributionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the distribution, for example,
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline StreamingDistributionSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The ARN (Amazon Resource Name) for the streaming distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:streaming-distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p> The ARN (Amazon Resource Name) for the streaming distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:streaming-distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p> The ARN (Amazon Resource Name) for the streaming distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:streaming-distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p> The ARN (Amazon Resource Name) for the streaming distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:streaming-distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p> The ARN (Amazon Resource Name) for the streaming distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:streaming-distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p> The ARN (Amazon Resource Name) for the streaming distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:streaming-distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline StreamingDistributionSummary& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p> The ARN (Amazon Resource Name) for the streaming distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:streaming-distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline StreamingDistributionSummary& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p> The ARN (Amazon Resource Name) for the streaming distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:streaming-distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline StreamingDistributionSummary& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p> Indicates the current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> Indicates the current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Indicates the current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Indicates the current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Indicates the current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> Indicates the current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.</p>
     */
    inline StreamingDistributionSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> Indicates the current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.</p>
     */
    inline StreamingDistributionSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> Indicates the current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.</p>
     */
    inline StreamingDistributionSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The date and time the distribution was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time the distribution was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time the distribution was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time the distribution was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time the distribution was last modified.</p>
     */
    inline StreamingDistributionSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time the distribution was last modified.</p>
     */
    inline StreamingDistributionSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline StreamingDistributionSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline StreamingDistributionSummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline StreamingDistributionSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution.</p>
     */
    inline const S3Origin& GetS3Origin() const{ return m_s3Origin; }

    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution.</p>
     */
    inline bool S3OriginHasBeenSet() const { return m_s3OriginHasBeenSet; }

    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution.</p>
     */
    inline void SetS3Origin(const S3Origin& value) { m_s3OriginHasBeenSet = true; m_s3Origin = value; }

    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution.</p>
     */
    inline void SetS3Origin(S3Origin&& value) { m_s3OriginHasBeenSet = true; m_s3Origin = std::move(value); }

    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution.</p>
     */
    inline StreamingDistributionSummary& WithS3Origin(const S3Origin& value) { SetS3Origin(value); return *this;}

    /**
     * <p>A complex type that contains information about the Amazon S3 bucket from
     * which you want CloudFront to get your media files for distribution.</p>
     */
    inline StreamingDistributionSummary& WithS3Origin(S3Origin&& value) { SetS3Origin(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution.</p>
     */
    inline const Aliases& GetAliases() const{ return m_aliases; }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution.</p>
     */
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution.</p>
     */
    inline void SetAliases(const Aliases& value) { m_aliasesHasBeenSet = true; m_aliases = value; }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution.</p>
     */
    inline void SetAliases(Aliases&& value) { m_aliasesHasBeenSet = true; m_aliases = std::move(value); }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution.</p>
     */
    inline StreamingDistributionSummary& WithAliases(const Aliases& value) { SetAliases(value); return *this;}

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this streaming distribution.</p>
     */
    inline StreamingDistributionSummary& WithAliases(Aliases&& value) { SetAliases(std::move(value)); return *this;}


    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content. If you want to require signed
     * URLs in requests for objects in the target origin that match the
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
     * Guide</i>. </p>
     */
    inline const TrustedSigners& GetTrustedSigners() const{ return m_trustedSigners; }

    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content. If you want to require signed
     * URLs in requests for objects in the target origin that match the
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
     * Guide</i>. </p>
     */
    inline bool TrustedSignersHasBeenSet() const { return m_trustedSignersHasBeenSet; }

    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content. If you want to require signed
     * URLs in requests for objects in the target origin that match the
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
     * Guide</i>. </p>
     */
    inline void SetTrustedSigners(const TrustedSigners& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = value; }

    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content. If you want to require signed
     * URLs in requests for objects in the target origin that match the
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
     * Guide</i>. </p>
     */
    inline void SetTrustedSigners(TrustedSigners&& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = std::move(value); }

    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content. If you want to require signed
     * URLs in requests for objects in the target origin that match the
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
     * Guide</i>. </p>
     */
    inline StreamingDistributionSummary& WithTrustedSigners(const TrustedSigners& value) { SetTrustedSigners(value); return *this;}

    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content. If you want to require signed
     * URLs in requests for objects in the target origin that match the
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
     * Guide</i>. </p>
     */
    inline StreamingDistributionSummary& WithTrustedSigners(TrustedSigners&& value) { SetTrustedSigners(std::move(value)); return *this;}


    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline StreamingDistributionSummary& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline StreamingDistributionSummary& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline StreamingDistributionSummary& WithComment(const char* value) { SetComment(value); return *this;}


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
    inline StreamingDistributionSummary& WithPriceClass(const PriceClass& value) { SetPriceClass(value); return *this;}

    /**
     * <p>A complex type that contains information about price class for this streaming
     * distribution. </p>
     */
    inline StreamingDistributionSummary& WithPriceClass(PriceClass&& value) { SetPriceClass(std::move(value)); return *this;}


    /**
     * <p>Whether the distribution is enabled to accept end user requests for
     * content.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether the distribution is enabled to accept end user requests for
     * content.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether the distribution is enabled to accept end user requests for
     * content.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether the distribution is enabled to accept end user requests for
     * content.</p>
     */
    inline StreamingDistributionSummary& WithEnabled(bool value) { SetEnabled(value); return *this;}

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
