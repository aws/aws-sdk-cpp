/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DistributionSummary">AWS
   * API Reference</a></p>
   */
  class DistributionSummary
  {
  public:
    AWS_CLOUDFRONT_API DistributionSummary();
    AWS_CLOUDFRONT_API DistributionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DistributionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DistributionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DistributionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DistributionSummary& WithId(const char* value) { SetId(value); return *this;}
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
    inline DistributionSummary& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline DistributionSummary& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline DistributionSummary& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DistributionSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DistributionSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DistributionSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the distribution was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline DistributionSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DistributionSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name that corresponds to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DistributionSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DistributionSummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DistributionSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this distribution.</p>
     */
    inline const Aliases& GetAliases() const{ return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    inline void SetAliases(const Aliases& value) { m_aliasesHasBeenSet = true; m_aliases = value; }
    inline void SetAliases(Aliases&& value) { m_aliasesHasBeenSet = true; m_aliases = std::move(value); }
    inline DistributionSummary& WithAliases(const Aliases& value) { SetAliases(value); return *this;}
    inline DistributionSummary& WithAliases(Aliases&& value) { SetAliases(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline const Origins& GetOrigins() const{ return m_origins; }
    inline bool OriginsHasBeenSet() const { return m_originsHasBeenSet; }
    inline void SetOrigins(const Origins& value) { m_originsHasBeenSet = true; m_origins = value; }
    inline void SetOrigins(Origins&& value) { m_originsHasBeenSet = true; m_origins = std::move(value); }
    inline DistributionSummary& WithOrigins(const Origins& value) { SetOrigins(value); return *this;}
    inline DistributionSummary& WithOrigins(Origins&& value) { SetOrigins(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline const OriginGroups& GetOriginGroups() const{ return m_originGroups; }
    inline bool OriginGroupsHasBeenSet() const { return m_originGroupsHasBeenSet; }
    inline void SetOriginGroups(const OriginGroups& value) { m_originGroupsHasBeenSet = true; m_originGroups = value; }
    inline void SetOriginGroups(OriginGroups&& value) { m_originGroupsHasBeenSet = true; m_originGroups = std::move(value); }
    inline DistributionSummary& WithOriginGroups(const OriginGroups& value) { SetOriginGroups(value); return *this;}
    inline DistributionSummary& WithOriginGroups(OriginGroups&& value) { SetOriginGroups(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that describes the default cache behavior if you don't specify
     * a <code>CacheBehavior</code> element or if files don't match any of the values
     * of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You must
     * create exactly one default cache behavior.</p>
     */
    inline const DefaultCacheBehavior& GetDefaultCacheBehavior() const{ return m_defaultCacheBehavior; }
    inline bool DefaultCacheBehaviorHasBeenSet() const { return m_defaultCacheBehaviorHasBeenSet; }
    inline void SetDefaultCacheBehavior(const DefaultCacheBehavior& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = value; }
    inline void SetDefaultCacheBehavior(DefaultCacheBehavior&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = std::move(value); }
    inline DistributionSummary& WithDefaultCacheBehavior(const DefaultCacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}
    inline DistributionSummary& WithDefaultCacheBehavior(DefaultCacheBehavior&& value) { SetDefaultCacheBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains zero or more <code>CacheBehavior</code>
     * elements.</p>
     */
    inline const CacheBehaviors& GetCacheBehaviors() const{ return m_cacheBehaviors; }
    inline bool CacheBehaviorsHasBeenSet() const { return m_cacheBehaviorsHasBeenSet; }
    inline void SetCacheBehaviors(const CacheBehaviors& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = value; }
    inline void SetCacheBehaviors(CacheBehaviors&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = std::move(value); }
    inline DistributionSummary& WithCacheBehaviors(const CacheBehaviors& value) { SetCacheBehaviors(value); return *this;}
    inline DistributionSummary& WithCacheBehaviors(CacheBehaviors&& value) { SetCacheBehaviors(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains zero or more <code>CustomErrorResponses</code>
     * elements.</p>
     */
    inline const CustomErrorResponses& GetCustomErrorResponses() const{ return m_customErrorResponses; }
    inline bool CustomErrorResponsesHasBeenSet() const { return m_customErrorResponsesHasBeenSet; }
    inline void SetCustomErrorResponses(const CustomErrorResponses& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = value; }
    inline void SetCustomErrorResponses(CustomErrorResponses&& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = std::move(value); }
    inline DistributionSummary& WithCustomErrorResponses(const CustomErrorResponses& value) { SetCustomErrorResponses(value); return *this;}
    inline DistributionSummary& WithCustomErrorResponses(CustomErrorResponses&& value) { SetCustomErrorResponses(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment originally specified when this distribution was created.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline DistributionSummary& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline DistributionSummary& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline DistributionSummary& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about price class for this streaming
     * distribution.</p>
     */
    inline const PriceClass& GetPriceClass() const{ return m_priceClass; }
    inline bool PriceClassHasBeenSet() const { return m_priceClassHasBeenSet; }
    inline void SetPriceClass(const PriceClass& value) { m_priceClassHasBeenSet = true; m_priceClass = value; }
    inline void SetPriceClass(PriceClass&& value) { m_priceClassHasBeenSet = true; m_priceClass = std::move(value); }
    inline DistributionSummary& WithPriceClass(const PriceClass& value) { SetPriceClass(value); return *this;}
    inline DistributionSummary& WithPriceClass(PriceClass&& value) { SetPriceClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the distribution is enabled to accept user requests for content.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline DistributionSummary& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that determines the distribution's SSL/TLS configuration for
     * communicating with viewers.</p>
     */
    inline const ViewerCertificate& GetViewerCertificate() const{ return m_viewerCertificate; }
    inline bool ViewerCertificateHasBeenSet() const { return m_viewerCertificateHasBeenSet; }
    inline void SetViewerCertificate(const ViewerCertificate& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = value; }
    inline void SetViewerCertificate(ViewerCertificate&& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = std::move(value); }
    inline DistributionSummary& WithViewerCertificate(const ViewerCertificate& value) { SetViewerCertificate(value); return *this;}
    inline DistributionSummary& WithViewerCertificate(ViewerCertificate&& value) { SetViewerCertificate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that identifies ways in which you want to restrict
     * distribution of your content.</p>
     */
    inline const Restrictions& GetRestrictions() const{ return m_restrictions; }
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }
    inline void SetRestrictions(const Restrictions& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }
    inline void SetRestrictions(Restrictions&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::move(value); }
    inline DistributionSummary& WithRestrictions(const Restrictions& value) { SetRestrictions(value); return *this;}
    inline DistributionSummary& WithRestrictions(Restrictions&& value) { SetRestrictions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Web ACL Id (if any) associated with the distribution.</p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }
    inline DistributionSummary& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}
    inline DistributionSummary& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}
    inline DistributionSummary& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the maximum HTTP version that you want viewers to use to communicate
     * with CloudFront. The default value for new web distributions is
     * <code>http2</code>. Viewers that don't support <code>HTTP/2</code> will
     * automatically use an earlier version.</p>
     */
    inline const HttpVersion& GetHttpVersion() const{ return m_httpVersion; }
    inline bool HttpVersionHasBeenSet() const { return m_httpVersionHasBeenSet; }
    inline void SetHttpVersion(const HttpVersion& value) { m_httpVersionHasBeenSet = true; m_httpVersion = value; }
    inline void SetHttpVersion(HttpVersion&& value) { m_httpVersionHasBeenSet = true; m_httpVersion = std::move(value); }
    inline DistributionSummary& WithHttpVersion(const HttpVersion& value) { SetHttpVersion(value); return *this;}
    inline DistributionSummary& WithHttpVersion(HttpVersion&& value) { SetHttpVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether CloudFront responds to IPv6 DNS requests with an IPv6 address for
     * your distribution.</p>
     */
    inline bool GetIsIPV6Enabled() const{ return m_isIPV6Enabled; }
    inline bool IsIPV6EnabledHasBeenSet() const { return m_isIPV6EnabledHasBeenSet; }
    inline void SetIsIPV6Enabled(bool value) { m_isIPV6EnabledHasBeenSet = true; m_isIPV6Enabled = value; }
    inline DistributionSummary& WithIsIPV6Enabled(bool value) { SetIsIPV6Enabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services services in China customers must file for an Internet
     * Content Provider (ICP) recordal if they want to serve content publicly on an
     * alternate domain name, also known as a CNAME, that they've added to CloudFront.
     * AliasICPRecordal provides the ICP recordal status for CNAMEs associated with
     * distributions.</p> <p>For more information about ICP recordals, see <a
     * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
     * Signup, Accounts, and Credentials</a> in <i>Getting Started with Amazon Web
     * Services services in China</i>.</p>
     */
    inline const Aws::Vector<AliasICPRecordal>& GetAliasICPRecordals() const{ return m_aliasICPRecordals; }
    inline bool AliasICPRecordalsHasBeenSet() const { return m_aliasICPRecordalsHasBeenSet; }
    inline void SetAliasICPRecordals(const Aws::Vector<AliasICPRecordal>& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals = value; }
    inline void SetAliasICPRecordals(Aws::Vector<AliasICPRecordal>&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals = std::move(value); }
    inline DistributionSummary& WithAliasICPRecordals(const Aws::Vector<AliasICPRecordal>& value) { SetAliasICPRecordals(value); return *this;}
    inline DistributionSummary& WithAliasICPRecordals(Aws::Vector<AliasICPRecordal>&& value) { SetAliasICPRecordals(std::move(value)); return *this;}
    inline DistributionSummary& AddAliasICPRecordals(const AliasICPRecordal& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals.push_back(value); return *this; }
    inline DistributionSummary& AddAliasICPRecordals(AliasICPRecordal&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean that indicates whether this is a staging distribution. When this
     * value is <code>true</code>, this is a staging distribution. When this value is
     * <code>false</code>, this is not a staging distribution.</p>
     */
    inline bool GetStaging() const{ return m_staging; }
    inline bool StagingHasBeenSet() const { return m_stagingHasBeenSet; }
    inline void SetStaging(bool value) { m_stagingHasBeenSet = true; m_staging = value; }
    inline DistributionSummary& WithStaging(bool value) { SetStaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Anycast static IP list that is associated with the
     * distribution.</p>
     */
    inline const Aws::String& GetAnycastIpListId() const{ return m_anycastIpListId; }
    inline bool AnycastIpListIdHasBeenSet() const { return m_anycastIpListIdHasBeenSet; }
    inline void SetAnycastIpListId(const Aws::String& value) { m_anycastIpListIdHasBeenSet = true; m_anycastIpListId = value; }
    inline void SetAnycastIpListId(Aws::String&& value) { m_anycastIpListIdHasBeenSet = true; m_anycastIpListId = std::move(value); }
    inline void SetAnycastIpListId(const char* value) { m_anycastIpListIdHasBeenSet = true; m_anycastIpListId.assign(value); }
    inline DistributionSummary& WithAnycastIpListId(const Aws::String& value) { SetAnycastIpListId(value); return *this;}
    inline DistributionSummary& WithAnycastIpListId(Aws::String&& value) { SetAnycastIpListId(std::move(value)); return *this;}
    inline DistributionSummary& WithAnycastIpListId(const char* value) { SetAnycastIpListId(value); return *this;}
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

    Aliases m_aliases;
    bool m_aliasesHasBeenSet = false;

    Origins m_origins;
    bool m_originsHasBeenSet = false;

    OriginGroups m_originGroups;
    bool m_originGroupsHasBeenSet = false;

    DefaultCacheBehavior m_defaultCacheBehavior;
    bool m_defaultCacheBehaviorHasBeenSet = false;

    CacheBehaviors m_cacheBehaviors;
    bool m_cacheBehaviorsHasBeenSet = false;

    CustomErrorResponses m_customErrorResponses;
    bool m_customErrorResponsesHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    PriceClass m_priceClass;
    bool m_priceClassHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    ViewerCertificate m_viewerCertificate;
    bool m_viewerCertificateHasBeenSet = false;

    Restrictions m_restrictions;
    bool m_restrictionsHasBeenSet = false;

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet = false;

    HttpVersion m_httpVersion;
    bool m_httpVersionHasBeenSet = false;

    bool m_isIPV6Enabled;
    bool m_isIPV6EnabledHasBeenSet = false;

    Aws::Vector<AliasICPRecordal> m_aliasICPRecordals;
    bool m_aliasICPRecordalsHasBeenSet = false;

    bool m_staging;
    bool m_stagingHasBeenSet = false;

    Aws::String m_anycastIpListId;
    bool m_anycastIpListIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
