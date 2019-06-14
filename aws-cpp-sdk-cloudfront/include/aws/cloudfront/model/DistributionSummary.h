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
#include <aws/cloudfront/model/Aliases.h>
#include <aws/cloudfront/model/Origins.h>
#include <aws/cloudfront/model/OriginGroups.h>
#include <aws/cloudfront/model/DefaultCacheBehavior.h>
#include <aws/cloudfront/model/CacheBehaviors.h>
#include <aws/cloudfront/model/CustomErrorResponses.h>
#include <aws/cloudfront/model/PriceClass.h>
#include <aws/cloudfront/model/ViewerCertificate.h>
#include <aws/cloudfront/model/Restrictions.h>
#include <aws/cloudfront/model/HttpVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/AliasICPRecordal.h>
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
   * <p>A summary of the information about a CloudFront distribution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DistributionSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API DistributionSummary
  {
  public:
    DistributionSummary();
    DistributionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    DistributionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline DistributionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline DistributionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline DistributionSummary& WithId(const char* value) { SetId(value); return *this;}


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
    inline DistributionSummary& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline DistributionSummary& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your AWS account ID.</p>
     */
    inline DistributionSummary& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline DistributionSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline DistributionSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline DistributionSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


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
    inline DistributionSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time the distribution was last modified.</p>
     */
    inline DistributionSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The domain name that corresponds to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name that corresponds to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name that corresponds to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name that corresponds to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name that corresponds to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name that corresponds to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline DistributionSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name that corresponds to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline DistributionSummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name that corresponds to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline DistributionSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this distribution.</p>
     */
    inline const Aliases& GetAliases() const{ return m_aliases; }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this distribution.</p>
     */
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this distribution.</p>
     */
    inline void SetAliases(const Aliases& value) { m_aliasesHasBeenSet = true; m_aliases = value; }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this distribution.</p>
     */
    inline void SetAliases(Aliases&& value) { m_aliasesHasBeenSet = true; m_aliases = std::move(value); }

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this distribution.</p>
     */
    inline DistributionSummary& WithAliases(const Aliases& value) { SetAliases(value); return *this;}

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this distribution.</p>
     */
    inline DistributionSummary& WithAliases(Aliases&& value) { SetAliases(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline const Origins& GetOrigins() const{ return m_origins; }

    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline bool OriginsHasBeenSet() const { return m_originsHasBeenSet; }

    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline void SetOrigins(const Origins& value) { m_originsHasBeenSet = true; m_origins = value; }

    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline void SetOrigins(Origins&& value) { m_originsHasBeenSet = true; m_origins = std::move(value); }

    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline DistributionSummary& WithOrigins(const Origins& value) { SetOrigins(value); return *this;}

    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline DistributionSummary& WithOrigins(Origins&& value) { SetOrigins(std::move(value)); return *this;}


    /**
     * <p> A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline const OriginGroups& GetOriginGroups() const{ return m_originGroups; }

    /**
     * <p> A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline bool OriginGroupsHasBeenSet() const { return m_originGroupsHasBeenSet; }

    /**
     * <p> A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline void SetOriginGroups(const OriginGroups& value) { m_originGroupsHasBeenSet = true; m_originGroups = value; }

    /**
     * <p> A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline void SetOriginGroups(OriginGroups&& value) { m_originGroupsHasBeenSet = true; m_originGroups = std::move(value); }

    /**
     * <p> A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline DistributionSummary& WithOriginGroups(const OriginGroups& value) { SetOriginGroups(value); return *this;}

    /**
     * <p> A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline DistributionSummary& WithOriginGroups(OriginGroups&& value) { SetOriginGroups(std::move(value)); return *this;}


    /**
     * <p>A complex type that describes the default cache behavior if you don't specify
     * a <code>CacheBehavior</code> element or if files don't match any of the values
     * of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You must
     * create exactly one default cache behavior.</p>
     */
    inline const DefaultCacheBehavior& GetDefaultCacheBehavior() const{ return m_defaultCacheBehavior; }

    /**
     * <p>A complex type that describes the default cache behavior if you don't specify
     * a <code>CacheBehavior</code> element or if files don't match any of the values
     * of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You must
     * create exactly one default cache behavior.</p>
     */
    inline bool DefaultCacheBehaviorHasBeenSet() const { return m_defaultCacheBehaviorHasBeenSet; }

    /**
     * <p>A complex type that describes the default cache behavior if you don't specify
     * a <code>CacheBehavior</code> element or if files don't match any of the values
     * of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You must
     * create exactly one default cache behavior.</p>
     */
    inline void SetDefaultCacheBehavior(const DefaultCacheBehavior& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = value; }

    /**
     * <p>A complex type that describes the default cache behavior if you don't specify
     * a <code>CacheBehavior</code> element or if files don't match any of the values
     * of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You must
     * create exactly one default cache behavior.</p>
     */
    inline void SetDefaultCacheBehavior(DefaultCacheBehavior&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = std::move(value); }

    /**
     * <p>A complex type that describes the default cache behavior if you don't specify
     * a <code>CacheBehavior</code> element or if files don't match any of the values
     * of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You must
     * create exactly one default cache behavior.</p>
     */
    inline DistributionSummary& WithDefaultCacheBehavior(const DefaultCacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}

    /**
     * <p>A complex type that describes the default cache behavior if you don't specify
     * a <code>CacheBehavior</code> element or if files don't match any of the values
     * of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You must
     * create exactly one default cache behavior.</p>
     */
    inline DistributionSummary& WithDefaultCacheBehavior(DefaultCacheBehavior&& value) { SetDefaultCacheBehavior(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains zero or more <code>CacheBehavior</code>
     * elements.</p>
     */
    inline const CacheBehaviors& GetCacheBehaviors() const{ return m_cacheBehaviors; }

    /**
     * <p>A complex type that contains zero or more <code>CacheBehavior</code>
     * elements.</p>
     */
    inline bool CacheBehaviorsHasBeenSet() const { return m_cacheBehaviorsHasBeenSet; }

    /**
     * <p>A complex type that contains zero or more <code>CacheBehavior</code>
     * elements.</p>
     */
    inline void SetCacheBehaviors(const CacheBehaviors& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = value; }

    /**
     * <p>A complex type that contains zero or more <code>CacheBehavior</code>
     * elements.</p>
     */
    inline void SetCacheBehaviors(CacheBehaviors&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = std::move(value); }

    /**
     * <p>A complex type that contains zero or more <code>CacheBehavior</code>
     * elements.</p>
     */
    inline DistributionSummary& WithCacheBehaviors(const CacheBehaviors& value) { SetCacheBehaviors(value); return *this;}

    /**
     * <p>A complex type that contains zero or more <code>CacheBehavior</code>
     * elements.</p>
     */
    inline DistributionSummary& WithCacheBehaviors(CacheBehaviors&& value) { SetCacheBehaviors(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains zero or more <code>CustomErrorResponses</code>
     * elements.</p>
     */
    inline const CustomErrorResponses& GetCustomErrorResponses() const{ return m_customErrorResponses; }

    /**
     * <p>A complex type that contains zero or more <code>CustomErrorResponses</code>
     * elements.</p>
     */
    inline bool CustomErrorResponsesHasBeenSet() const { return m_customErrorResponsesHasBeenSet; }

    /**
     * <p>A complex type that contains zero or more <code>CustomErrorResponses</code>
     * elements.</p>
     */
    inline void SetCustomErrorResponses(const CustomErrorResponses& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = value; }

    /**
     * <p>A complex type that contains zero or more <code>CustomErrorResponses</code>
     * elements.</p>
     */
    inline void SetCustomErrorResponses(CustomErrorResponses&& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = std::move(value); }

    /**
     * <p>A complex type that contains zero or more <code>CustomErrorResponses</code>
     * elements.</p>
     */
    inline DistributionSummary& WithCustomErrorResponses(const CustomErrorResponses& value) { SetCustomErrorResponses(value); return *this;}

    /**
     * <p>A complex type that contains zero or more <code>CustomErrorResponses</code>
     * elements.</p>
     */
    inline DistributionSummary& WithCustomErrorResponses(CustomErrorResponses&& value) { SetCustomErrorResponses(std::move(value)); return *this;}


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
    inline DistributionSummary& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline DistributionSummary& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline DistributionSummary& WithComment(const char* value) { SetComment(value); return *this;}


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
    inline DistributionSummary& WithPriceClass(const PriceClass& value) { SetPriceClass(value); return *this;}

    /**
     * <p>A complex type that contains information about price class for this streaming
     * distribution. </p>
     */
    inline DistributionSummary& WithPriceClass(PriceClass&& value) { SetPriceClass(std::move(value)); return *this;}


    /**
     * <p>Whether the distribution is enabled to accept user requests for content.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether the distribution is enabled to accept user requests for content.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether the distribution is enabled to accept user requests for content.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether the distribution is enabled to accept user requests for content.</p>
     */
    inline DistributionSummary& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>A complex type that specifies whether you want viewers to use HTTP or HTTPS
     * to request your objects, whether you're using an alternate domain name with
     * HTTPS, and if so, if you're using AWS Certificate Manager (ACM) or a third-party
     * certificate authority.</p>
     */
    inline const ViewerCertificate& GetViewerCertificate() const{ return m_viewerCertificate; }

    /**
     * <p>A complex type that specifies whether you want viewers to use HTTP or HTTPS
     * to request your objects, whether you're using an alternate domain name with
     * HTTPS, and if so, if you're using AWS Certificate Manager (ACM) or a third-party
     * certificate authority.</p>
     */
    inline bool ViewerCertificateHasBeenSet() const { return m_viewerCertificateHasBeenSet; }

    /**
     * <p>A complex type that specifies whether you want viewers to use HTTP or HTTPS
     * to request your objects, whether you're using an alternate domain name with
     * HTTPS, and if so, if you're using AWS Certificate Manager (ACM) or a third-party
     * certificate authority.</p>
     */
    inline void SetViewerCertificate(const ViewerCertificate& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = value; }

    /**
     * <p>A complex type that specifies whether you want viewers to use HTTP or HTTPS
     * to request your objects, whether you're using an alternate domain name with
     * HTTPS, and if so, if you're using AWS Certificate Manager (ACM) or a third-party
     * certificate authority.</p>
     */
    inline void SetViewerCertificate(ViewerCertificate&& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = std::move(value); }

    /**
     * <p>A complex type that specifies whether you want viewers to use HTTP or HTTPS
     * to request your objects, whether you're using an alternate domain name with
     * HTTPS, and if so, if you're using AWS Certificate Manager (ACM) or a third-party
     * certificate authority.</p>
     */
    inline DistributionSummary& WithViewerCertificate(const ViewerCertificate& value) { SetViewerCertificate(value); return *this;}

    /**
     * <p>A complex type that specifies whether you want viewers to use HTTP or HTTPS
     * to request your objects, whether you're using an alternate domain name with
     * HTTPS, and if so, if you're using AWS Certificate Manager (ACM) or a third-party
     * certificate authority.</p>
     */
    inline DistributionSummary& WithViewerCertificate(ViewerCertificate&& value) { SetViewerCertificate(std::move(value)); return *this;}


    /**
     * <p>A complex type that identifies ways in which you want to restrict
     * distribution of your content.</p>
     */
    inline const Restrictions& GetRestrictions() const{ return m_restrictions; }

    /**
     * <p>A complex type that identifies ways in which you want to restrict
     * distribution of your content.</p>
     */
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }

    /**
     * <p>A complex type that identifies ways in which you want to restrict
     * distribution of your content.</p>
     */
    inline void SetRestrictions(const Restrictions& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }

    /**
     * <p>A complex type that identifies ways in which you want to restrict
     * distribution of your content.</p>
     */
    inline void SetRestrictions(Restrictions&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::move(value); }

    /**
     * <p>A complex type that identifies ways in which you want to restrict
     * distribution of your content.</p>
     */
    inline DistributionSummary& WithRestrictions(const Restrictions& value) { SetRestrictions(value); return *this;}

    /**
     * <p>A complex type that identifies ways in which you want to restrict
     * distribution of your content.</p>
     */
    inline DistributionSummary& WithRestrictions(Restrictions&& value) { SetRestrictions(std::move(value)); return *this;}


    /**
     * <p>The Web ACL Id (if any) associated with the distribution.</p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * <p>The Web ACL Id (if any) associated with the distribution.</p>
     */
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }

    /**
     * <p>The Web ACL Id (if any) associated with the distribution.</p>
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * <p>The Web ACL Id (if any) associated with the distribution.</p>
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }

    /**
     * <p>The Web ACL Id (if any) associated with the distribution.</p>
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * <p>The Web ACL Id (if any) associated with the distribution.</p>
     */
    inline DistributionSummary& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * <p>The Web ACL Id (if any) associated with the distribution.</p>
     */
    inline DistributionSummary& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}

    /**
     * <p>The Web ACL Id (if any) associated with the distribution.</p>
     */
    inline DistributionSummary& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}


    /**
     * <p> Specify the maximum HTTP version that you want viewers to use to communicate
     * with CloudFront. The default value for new web distributions is
     * <code>http2</code>. Viewers that don't support <code>HTTP/2</code> will
     * automatically use an earlier version.</p>
     */
    inline const HttpVersion& GetHttpVersion() const{ return m_httpVersion; }

    /**
     * <p> Specify the maximum HTTP version that you want viewers to use to communicate
     * with CloudFront. The default value for new web distributions is
     * <code>http2</code>. Viewers that don't support <code>HTTP/2</code> will
     * automatically use an earlier version.</p>
     */
    inline bool HttpVersionHasBeenSet() const { return m_httpVersionHasBeenSet; }

    /**
     * <p> Specify the maximum HTTP version that you want viewers to use to communicate
     * with CloudFront. The default value for new web distributions is
     * <code>http2</code>. Viewers that don't support <code>HTTP/2</code> will
     * automatically use an earlier version.</p>
     */
    inline void SetHttpVersion(const HttpVersion& value) { m_httpVersionHasBeenSet = true; m_httpVersion = value; }

    /**
     * <p> Specify the maximum HTTP version that you want viewers to use to communicate
     * with CloudFront. The default value for new web distributions is
     * <code>http2</code>. Viewers that don't support <code>HTTP/2</code> will
     * automatically use an earlier version.</p>
     */
    inline void SetHttpVersion(HttpVersion&& value) { m_httpVersionHasBeenSet = true; m_httpVersion = std::move(value); }

    /**
     * <p> Specify the maximum HTTP version that you want viewers to use to communicate
     * with CloudFront. The default value for new web distributions is
     * <code>http2</code>. Viewers that don't support <code>HTTP/2</code> will
     * automatically use an earlier version.</p>
     */
    inline DistributionSummary& WithHttpVersion(const HttpVersion& value) { SetHttpVersion(value); return *this;}

    /**
     * <p> Specify the maximum HTTP version that you want viewers to use to communicate
     * with CloudFront. The default value for new web distributions is
     * <code>http2</code>. Viewers that don't support <code>HTTP/2</code> will
     * automatically use an earlier version.</p>
     */
    inline DistributionSummary& WithHttpVersion(HttpVersion&& value) { SetHttpVersion(std::move(value)); return *this;}


    /**
     * <p>Whether CloudFront responds to IPv6 DNS requests with an IPv6 address for
     * your distribution.</p>
     */
    inline bool GetIsIPV6Enabled() const{ return m_isIPV6Enabled; }

    /**
     * <p>Whether CloudFront responds to IPv6 DNS requests with an IPv6 address for
     * your distribution.</p>
     */
    inline bool IsIPV6EnabledHasBeenSet() const { return m_isIPV6EnabledHasBeenSet; }

    /**
     * <p>Whether CloudFront responds to IPv6 DNS requests with an IPv6 address for
     * your distribution.</p>
     */
    inline void SetIsIPV6Enabled(bool value) { m_isIPV6EnabledHasBeenSet = true; m_isIPV6Enabled = value; }

    /**
     * <p>Whether CloudFront responds to IPv6 DNS requests with an IPv6 address for
     * your distribution.</p>
     */
    inline DistributionSummary& WithIsIPV6Enabled(bool value) { SetIsIPV6Enabled(value); return *this;}


    /**
     * <p>AWS services in China customers must file for an Internet Content Provider
     * (ICP) recordal if they want to serve content publicly on an alternate domain
     * name, also known as a CNAME, that they've added to CloudFront. AliasICPRecordal
     * provides the ICP recordal status for CNAMEs associated with distributions.</p>
     * <p>For more information about ICP recordals, see <a
     * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
     * Signup, Accounts, and Credentials</a> in <i>Getting Started with AWS services in
     * China</i>.</p>
     */
    inline const Aws::Vector<AliasICPRecordal>& GetAliasICPRecordals() const{ return m_aliasICPRecordals; }

    /**
     * <p>AWS services in China customers must file for an Internet Content Provider
     * (ICP) recordal if they want to serve content publicly on an alternate domain
     * name, also known as a CNAME, that they've added to CloudFront. AliasICPRecordal
     * provides the ICP recordal status for CNAMEs associated with distributions.</p>
     * <p>For more information about ICP recordals, see <a
     * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
     * Signup, Accounts, and Credentials</a> in <i>Getting Started with AWS services in
     * China</i>.</p>
     */
    inline bool AliasICPRecordalsHasBeenSet() const { return m_aliasICPRecordalsHasBeenSet; }

    /**
     * <p>AWS services in China customers must file for an Internet Content Provider
     * (ICP) recordal if they want to serve content publicly on an alternate domain
     * name, also known as a CNAME, that they've added to CloudFront. AliasICPRecordal
     * provides the ICP recordal status for CNAMEs associated with distributions.</p>
     * <p>For more information about ICP recordals, see <a
     * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
     * Signup, Accounts, and Credentials</a> in <i>Getting Started with AWS services in
     * China</i>.</p>
     */
    inline void SetAliasICPRecordals(const Aws::Vector<AliasICPRecordal>& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals = value; }

    /**
     * <p>AWS services in China customers must file for an Internet Content Provider
     * (ICP) recordal if they want to serve content publicly on an alternate domain
     * name, also known as a CNAME, that they've added to CloudFront. AliasICPRecordal
     * provides the ICP recordal status for CNAMEs associated with distributions.</p>
     * <p>For more information about ICP recordals, see <a
     * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
     * Signup, Accounts, and Credentials</a> in <i>Getting Started with AWS services in
     * China</i>.</p>
     */
    inline void SetAliasICPRecordals(Aws::Vector<AliasICPRecordal>&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals = std::move(value); }

    /**
     * <p>AWS services in China customers must file for an Internet Content Provider
     * (ICP) recordal if they want to serve content publicly on an alternate domain
     * name, also known as a CNAME, that they've added to CloudFront. AliasICPRecordal
     * provides the ICP recordal status for CNAMEs associated with distributions.</p>
     * <p>For more information about ICP recordals, see <a
     * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
     * Signup, Accounts, and Credentials</a> in <i>Getting Started with AWS services in
     * China</i>.</p>
     */
    inline DistributionSummary& WithAliasICPRecordals(const Aws::Vector<AliasICPRecordal>& value) { SetAliasICPRecordals(value); return *this;}

    /**
     * <p>AWS services in China customers must file for an Internet Content Provider
     * (ICP) recordal if they want to serve content publicly on an alternate domain
     * name, also known as a CNAME, that they've added to CloudFront. AliasICPRecordal
     * provides the ICP recordal status for CNAMEs associated with distributions.</p>
     * <p>For more information about ICP recordals, see <a
     * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
     * Signup, Accounts, and Credentials</a> in <i>Getting Started with AWS services in
     * China</i>.</p>
     */
    inline DistributionSummary& WithAliasICPRecordals(Aws::Vector<AliasICPRecordal>&& value) { SetAliasICPRecordals(std::move(value)); return *this;}

    /**
     * <p>AWS services in China customers must file for an Internet Content Provider
     * (ICP) recordal if they want to serve content publicly on an alternate domain
     * name, also known as a CNAME, that they've added to CloudFront. AliasICPRecordal
     * provides the ICP recordal status for CNAMEs associated with distributions.</p>
     * <p>For more information about ICP recordals, see <a
     * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
     * Signup, Accounts, and Credentials</a> in <i>Getting Started with AWS services in
     * China</i>.</p>
     */
    inline DistributionSummary& AddAliasICPRecordals(const AliasICPRecordal& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals.push_back(value); return *this; }

    /**
     * <p>AWS services in China customers must file for an Internet Content Provider
     * (ICP) recordal if they want to serve content publicly on an alternate domain
     * name, also known as a CNAME, that they've added to CloudFront. AliasICPRecordal
     * provides the ICP recordal status for CNAMEs associated with distributions.</p>
     * <p>For more information about ICP recordals, see <a
     * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
     * Signup, Accounts, and Credentials</a> in <i>Getting Started with AWS services in
     * China</i>.</p>
     */
    inline DistributionSummary& AddAliasICPRecordals(AliasICPRecordal&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals.push_back(std::move(value)); return *this; }

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

    Aliases m_aliases;
    bool m_aliasesHasBeenSet;

    Origins m_origins;
    bool m_originsHasBeenSet;

    OriginGroups m_originGroups;
    bool m_originGroupsHasBeenSet;

    DefaultCacheBehavior m_defaultCacheBehavior;
    bool m_defaultCacheBehaviorHasBeenSet;

    CacheBehaviors m_cacheBehaviors;
    bool m_cacheBehaviorsHasBeenSet;

    CustomErrorResponses m_customErrorResponses;
    bool m_customErrorResponsesHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;

    PriceClass m_priceClass;
    bool m_priceClassHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    ViewerCertificate m_viewerCertificate;
    bool m_viewerCertificateHasBeenSet;

    Restrictions m_restrictions;
    bool m_restrictionsHasBeenSet;

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet;

    HttpVersion m_httpVersion;
    bool m_httpVersionHasBeenSet;

    bool m_isIPV6Enabled;
    bool m_isIPV6EnabledHasBeenSet;

    Aws::Vector<AliasICPRecordal> m_aliasICPRecordals;
    bool m_aliasICPRecordalsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
