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
#include <aws/cloudfront/model/ConnectionMode.h>
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
    AWS_CLOUDFRONT_API DistributionSummary() = default;
    AWS_CLOUDFRONT_API DistributionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DistributionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DistributionSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    DistributionSummary& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the distribution.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    DistributionSummary& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the distribution. When the status is
     * <code>Deployed</code>, the distribution's information is propagated to all
     * CloudFront edge locations.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DistributionSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
    DistributionSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name that corresponds to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DistributionSummary& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this distribution.</p>
     */
    inline const Aliases& GetAliases() const { return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    template<typename AliasesT = Aliases>
    void SetAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases = std::forward<AliasesT>(value); }
    template<typename AliasesT = Aliases>
    DistributionSummary& WithAliases(AliasesT&& value) { SetAliases(std::forward<AliasesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline const Origins& GetOrigins() const { return m_origins; }
    inline bool OriginsHasBeenSet() const { return m_originsHasBeenSet; }
    template<typename OriginsT = Origins>
    void SetOrigins(OriginsT&& value) { m_originsHasBeenSet = true; m_origins = std::forward<OriginsT>(value); }
    template<typename OriginsT = Origins>
    DistributionSummary& WithOrigins(OriginsT&& value) { SetOrigins(std::forward<OriginsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline const OriginGroups& GetOriginGroups() const { return m_originGroups; }
    inline bool OriginGroupsHasBeenSet() const { return m_originGroupsHasBeenSet; }
    template<typename OriginGroupsT = OriginGroups>
    void SetOriginGroups(OriginGroupsT&& value) { m_originGroupsHasBeenSet = true; m_originGroups = std::forward<OriginGroupsT>(value); }
    template<typename OriginGroupsT = OriginGroups>
    DistributionSummary& WithOriginGroups(OriginGroupsT&& value) { SetOriginGroups(std::forward<OriginGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that describes the default cache behavior if you don't specify
     * a <code>CacheBehavior</code> element or if files don't match any of the values
     * of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You must
     * create exactly one default cache behavior.</p>
     */
    inline const DefaultCacheBehavior& GetDefaultCacheBehavior() const { return m_defaultCacheBehavior; }
    inline bool DefaultCacheBehaviorHasBeenSet() const { return m_defaultCacheBehaviorHasBeenSet; }
    template<typename DefaultCacheBehaviorT = DefaultCacheBehavior>
    void SetDefaultCacheBehavior(DefaultCacheBehaviorT&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = std::forward<DefaultCacheBehaviorT>(value); }
    template<typename DefaultCacheBehaviorT = DefaultCacheBehavior>
    DistributionSummary& WithDefaultCacheBehavior(DefaultCacheBehaviorT&& value) { SetDefaultCacheBehavior(std::forward<DefaultCacheBehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains zero or more <code>CacheBehavior</code>
     * elements.</p>
     */
    inline const CacheBehaviors& GetCacheBehaviors() const { return m_cacheBehaviors; }
    inline bool CacheBehaviorsHasBeenSet() const { return m_cacheBehaviorsHasBeenSet; }
    template<typename CacheBehaviorsT = CacheBehaviors>
    void SetCacheBehaviors(CacheBehaviorsT&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = std::forward<CacheBehaviorsT>(value); }
    template<typename CacheBehaviorsT = CacheBehaviors>
    DistributionSummary& WithCacheBehaviors(CacheBehaviorsT&& value) { SetCacheBehaviors(std::forward<CacheBehaviorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains zero or more <code>CustomErrorResponses</code>
     * elements.</p>
     */
    inline const CustomErrorResponses& GetCustomErrorResponses() const { return m_customErrorResponses; }
    inline bool CustomErrorResponsesHasBeenSet() const { return m_customErrorResponsesHasBeenSet; }
    template<typename CustomErrorResponsesT = CustomErrorResponses>
    void SetCustomErrorResponses(CustomErrorResponsesT&& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = std::forward<CustomErrorResponsesT>(value); }
    template<typename CustomErrorResponsesT = CustomErrorResponses>
    DistributionSummary& WithCustomErrorResponses(CustomErrorResponsesT&& value) { SetCustomErrorResponses(std::forward<CustomErrorResponsesT>(value)); return *this;}
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
    DistributionSummary& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>This field only supports standard distributions. You can't specify
     * this field for multi-tenant distributions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-config-options.html#unsupported-saas">Unsupported
     * features for SaaS Manager for Amazon CloudFront</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>  <p>A complex type that contains information
     * about price class for this streaming distribution.</p></p>
     */
    inline PriceClass GetPriceClass() const { return m_priceClass; }
    inline bool PriceClassHasBeenSet() const { return m_priceClassHasBeenSet; }
    inline void SetPriceClass(PriceClass value) { m_priceClassHasBeenSet = true; m_priceClass = value; }
    inline DistributionSummary& WithPriceClass(PriceClass value) { SetPriceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the distribution is enabled to accept user requests for content.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline DistributionSummary& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that determines the distribution's SSL/TLS configuration for
     * communicating with viewers.</p>
     */
    inline const ViewerCertificate& GetViewerCertificate() const { return m_viewerCertificate; }
    inline bool ViewerCertificateHasBeenSet() const { return m_viewerCertificateHasBeenSet; }
    template<typename ViewerCertificateT = ViewerCertificate>
    void SetViewerCertificate(ViewerCertificateT&& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = std::forward<ViewerCertificateT>(value); }
    template<typename ViewerCertificateT = ViewerCertificate>
    DistributionSummary& WithViewerCertificate(ViewerCertificateT&& value) { SetViewerCertificate(std::forward<ViewerCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that identifies ways in which you want to restrict
     * distribution of your content.</p>
     */
    inline const Restrictions& GetRestrictions() const { return m_restrictions; }
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }
    template<typename RestrictionsT = Restrictions>
    void SetRestrictions(RestrictionsT&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::forward<RestrictionsT>(value); }
    template<typename RestrictionsT = Restrictions>
    DistributionSummary& WithRestrictions(RestrictionsT&& value) { SetRestrictions(std::forward<RestrictionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Web ACL Id (if any) associated with the distribution.</p>
     */
    inline const Aws::String& GetWebACLId() const { return m_webACLId; }
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }
    template<typename WebACLIdT = Aws::String>
    void SetWebACLId(WebACLIdT&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::forward<WebACLIdT>(value); }
    template<typename WebACLIdT = Aws::String>
    DistributionSummary& WithWebACLId(WebACLIdT&& value) { SetWebACLId(std::forward<WebACLIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the maximum HTTP version that you want viewers to use to communicate
     * with CloudFront. The default value for new web distributions is
     * <code>http2</code>. Viewers that don't support <code>HTTP/2</code> will
     * automatically use an earlier version.</p>
     */
    inline HttpVersion GetHttpVersion() const { return m_httpVersion; }
    inline bool HttpVersionHasBeenSet() const { return m_httpVersionHasBeenSet; }
    inline void SetHttpVersion(HttpVersion value) { m_httpVersionHasBeenSet = true; m_httpVersion = value; }
    inline DistributionSummary& WithHttpVersion(HttpVersion value) { SetHttpVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether CloudFront responds to IPv6 DNS requests with an IPv6 address for
     * your distribution.</p>
     */
    inline bool GetIsIPV6Enabled() const { return m_isIPV6Enabled; }
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
    inline const Aws::Vector<AliasICPRecordal>& GetAliasICPRecordals() const { return m_aliasICPRecordals; }
    inline bool AliasICPRecordalsHasBeenSet() const { return m_aliasICPRecordalsHasBeenSet; }
    template<typename AliasICPRecordalsT = Aws::Vector<AliasICPRecordal>>
    void SetAliasICPRecordals(AliasICPRecordalsT&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals = std::forward<AliasICPRecordalsT>(value); }
    template<typename AliasICPRecordalsT = Aws::Vector<AliasICPRecordal>>
    DistributionSummary& WithAliasICPRecordals(AliasICPRecordalsT&& value) { SetAliasICPRecordals(std::forward<AliasICPRecordalsT>(value)); return *this;}
    template<typename AliasICPRecordalsT = AliasICPRecordal>
    DistributionSummary& AddAliasICPRecordals(AliasICPRecordalsT&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals.emplace_back(std::forward<AliasICPRecordalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean that indicates whether this is a staging distribution. When this
     * value is <code>true</code>, this is a staging distribution. When this value is
     * <code>false</code>, this is not a staging distribution.</p>
     */
    inline bool GetStaging() const { return m_staging; }
    inline bool StagingHasBeenSet() const { return m_stagingHasBeenSet; }
    inline void SetStaging(bool value) { m_stagingHasBeenSet = true; m_staging = value; }
    inline DistributionSummary& WithStaging(bool value) { SetStaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field specifies whether the connection mode is through a standard
     * distribution (direct) or a multi-tenant distribution with distribution tenants
     * (tenant-only).</p>
     */
    inline ConnectionMode GetConnectionMode() const { return m_connectionMode; }
    inline bool ConnectionModeHasBeenSet() const { return m_connectionModeHasBeenSet; }
    inline void SetConnectionMode(ConnectionMode value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }
    inline DistributionSummary& WithConnectionMode(ConnectionMode value) { SetConnectionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Anycast static IP list that is associated with the
     * distribution.</p>
     */
    inline const Aws::String& GetAnycastIpListId() const { return m_anycastIpListId; }
    inline bool AnycastIpListIdHasBeenSet() const { return m_anycastIpListIdHasBeenSet; }
    template<typename AnycastIpListIdT = Aws::String>
    void SetAnycastIpListId(AnycastIpListIdT&& value) { m_anycastIpListIdHasBeenSet = true; m_anycastIpListId = std::forward<AnycastIpListIdT>(value); }
    template<typename AnycastIpListIdT = Aws::String>
    DistributionSummary& WithAnycastIpListId(AnycastIpListIdT&& value) { SetAnycastIpListId(std::forward<AnycastIpListIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
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

    PriceClass m_priceClass{PriceClass::NOT_SET};
    bool m_priceClassHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    ViewerCertificate m_viewerCertificate;
    bool m_viewerCertificateHasBeenSet = false;

    Restrictions m_restrictions;
    bool m_restrictionsHasBeenSet = false;

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet = false;

    HttpVersion m_httpVersion{HttpVersion::NOT_SET};
    bool m_httpVersionHasBeenSet = false;

    bool m_isIPV6Enabled{false};
    bool m_isIPV6EnabledHasBeenSet = false;

    Aws::Vector<AliasICPRecordal> m_aliasICPRecordals;
    bool m_aliasICPRecordalsHasBeenSet = false;

    bool m_staging{false};
    bool m_stagingHasBeenSet = false;

    ConnectionMode m_connectionMode{ConnectionMode::NOT_SET};
    bool m_connectionModeHasBeenSet = false;

    Aws::String m_anycastIpListId;
    bool m_anycastIpListIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
