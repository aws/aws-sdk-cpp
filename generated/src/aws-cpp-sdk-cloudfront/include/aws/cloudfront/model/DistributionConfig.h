/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/Aliases.h>
#include <aws/cloudfront/model/Origins.h>
#include <aws/cloudfront/model/OriginGroups.h>
#include <aws/cloudfront/model/DefaultCacheBehavior.h>
#include <aws/cloudfront/model/CacheBehaviors.h>
#include <aws/cloudfront/model/CustomErrorResponses.h>
#include <aws/cloudfront/model/LoggingConfig.h>
#include <aws/cloudfront/model/PriceClass.h>
#include <aws/cloudfront/model/ViewerCertificate.h>
#include <aws/cloudfront/model/Restrictions.h>
#include <aws/cloudfront/model/HttpVersion.h>
#include <aws/cloudfront/model/TenantConfig.h>
#include <aws/cloudfront/model/ConnectionMode.h>
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
   * <p>A distribution configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DistributionConfig">AWS
   * API Reference</a></p>
   */
  class DistributionConfig
  {
  public:
    AWS_CLOUDFRONT_API DistributionConfig() = default;
    AWS_CLOUDFRONT_API DistributionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DistributionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>DistributionConfig</code> object),
     * CloudFront creates a new distribution.</p> <p>If <code>CallerReference</code> is
     * a value that you already sent in a previous request to create a distribution,
     * CloudFront returns a <code>DistributionAlreadyExists</code> error.</p>
     */
    inline const Aws::String& GetCallerReference() const { return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    template<typename CallerReferenceT = Aws::String>
    void SetCallerReference(CallerReferenceT&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::forward<CallerReferenceT>(value); }
    template<typename CallerReferenceT = Aws::String>
    DistributionConfig& WithCallerReference(CallerReferenceT&& value) { SetCallerReference(std::forward<CallerReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>This field only supports standard distributions. You can't specify
     * this field for multi-tenant distributions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-config-options.html#unsupported-saas">Unsupported
     * features for SaaS Manager for Amazon CloudFront</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>  <p>A complex type that contains information
     * about CNAMEs (alternate domain names), if any, for this distribution.</p></p>
     */
    inline const Aliases& GetAliases() const { return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    template<typename AliasesT = Aliases>
    void SetAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases = std::forward<AliasesT>(value); }
    template<typename AliasesT = Aliases>
    DistributionConfig& WithAliases(AliasesT&& value) { SetAliases(std::forward<AliasesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a viewer requests the root URL for your distribution, the default root
     * object is the object that you want CloudFront to request from your origin. For
     * example, if your root URL is <code>https://www.example.com</code>, you can
     * specify CloudFront to return the <code>index.html</code> file as the default
     * root object. You can specify a default root object so that viewers see a
     * specific file or object, instead of another object in your distribution (for
     * example, <code>https://www.example.com/product-description.html</code>). A
     * default root object avoids exposing the contents of your distribution.</p>
     * <p>You can specify the object name or a path to the object name (for example,
     * <code>index.html</code> or <code>exampleFolderName/index.html</code>). Your
     * string can't begin with a forward slash (<code>/</code>). Only specify the
     * object name or the path to the object.</p> <p>If you don't want to specify a
     * default root object when you create a distribution, include an empty
     * <code>DefaultRootObject</code> element.</p> <p>To delete the default root object
     * from an existing distribution, update the distribution configuration and include
     * an empty <code>DefaultRootObject</code> element.</p> <p>To replace the default
     * root object, update the distribution configuration and specify the new
     * object.</p> <p>For more information about the default root object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/DefaultRootObject.html">Specify
     * a default root object</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDefaultRootObject() const { return m_defaultRootObject; }
    inline bool DefaultRootObjectHasBeenSet() const { return m_defaultRootObjectHasBeenSet; }
    template<typename DefaultRootObjectT = Aws::String>
    void SetDefaultRootObject(DefaultRootObjectT&& value) { m_defaultRootObjectHasBeenSet = true; m_defaultRootObject = std::forward<DefaultRootObjectT>(value); }
    template<typename DefaultRootObjectT = Aws::String>
    DistributionConfig& WithDefaultRootObject(DefaultRootObjectT&& value) { SetDefaultRootObject(std::forward<DefaultRootObjectT>(value)); return *this;}
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
    DistributionConfig& WithOrigins(OriginsT&& value) { SetOrigins(std::forward<OriginsT>(value)); return *this;}
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
    DistributionConfig& WithOriginGroups(OriginGroupsT&& value) { SetOriginGroups(std::forward<OriginGroupsT>(value)); return *this;}
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
    DistributionConfig& WithDefaultCacheBehavior(DefaultCacheBehaviorT&& value) { SetDefaultCacheBehavior(std::forward<DefaultCacheBehaviorT>(value)); return *this;}
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
    DistributionConfig& WithCacheBehaviors(CacheBehaviorsT&& value) { SetCacheBehaviors(std::forward<CacheBehaviorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that controls the following:</p> <ul> <li> <p>Whether
     * CloudFront replaces HTTP status codes in the 4xx and 5xx range with custom error
     * messages before returning the response to the viewer.</p> </li> <li> <p>How long
     * CloudFront caches HTTP status codes in the 4xx and 5xx range.</p> </li> </ul>
     * <p>For more information about custom error pages, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
     * Error Responses</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const CustomErrorResponses& GetCustomErrorResponses() const { return m_customErrorResponses; }
    inline bool CustomErrorResponsesHasBeenSet() const { return m_customErrorResponsesHasBeenSet; }
    template<typename CustomErrorResponsesT = CustomErrorResponses>
    void SetCustomErrorResponses(CustomErrorResponsesT&& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = std::forward<CustomErrorResponsesT>(value); }
    template<typename CustomErrorResponsesT = CustomErrorResponses>
    DistributionConfig& WithCustomErrorResponses(CustomErrorResponsesT&& value) { SetCustomErrorResponses(std::forward<CustomErrorResponsesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment to describe the distribution. The comment cannot be longer than 128
     * characters.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    DistributionConfig& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p> <p>For more information about logging, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/AccessLogs.html">Access
     * Logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const LoggingConfig& GetLogging() const { return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    template<typename LoggingT = LoggingConfig>
    void SetLogging(LoggingT&& value) { m_loggingHasBeenSet = true; m_logging = std::forward<LoggingT>(value); }
    template<typename LoggingT = LoggingConfig>
    DistributionConfig& WithLogging(LoggingT&& value) { SetLogging(std::forward<LoggingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>This field only supports standard distributions. You can't specify
     * this field for multi-tenant distributions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-config-options.html#unsupported-saas">Unsupported
     * features for SaaS Manager for Amazon CloudFront</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>  <p>The price class that corresponds with the
     * maximum price that you want to pay for CloudFront service. If you specify
     * <code>PriceClass_All</code>, CloudFront responds to requests for your objects
     * from all CloudFront edge locations.</p> <p>If you specify a price class other
     * than <code>PriceClass_All</code>, CloudFront serves your objects from the
     * CloudFront edge location that has the lowest latency among the edge locations in
     * your price class. Viewers who are in or near regions that are excluded from your
     * specified price class may encounter slower performance.</p> <p>For more
     * information about price classes, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PriceClass.html">Choosing
     * the Price Class for a CloudFront Distribution</a> in the <i>Amazon CloudFront
     * Developer Guide</i>. For information about CloudFront pricing, including how
     * price classes (such as Price Class 100) map to CloudFront regions, see <a
     * href="http://aws.amazon.com/cloudfront/pricing/">Amazon CloudFront
     * Pricing</a>.</p></p>
     */
    inline PriceClass GetPriceClass() const { return m_priceClass; }
    inline bool PriceClassHasBeenSet() const { return m_priceClassHasBeenSet; }
    inline void SetPriceClass(PriceClass value) { m_priceClassHasBeenSet = true; m_priceClass = value; }
    inline DistributionConfig& WithPriceClass(PriceClass value) { SetPriceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>From this field, you can enable or disable the selected distribution.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline DistributionConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
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
    DistributionConfig& WithViewerCertificate(ViewerCertificateT&& value) { SetViewerCertificate(std::forward<ViewerCertificateT>(value)); return *this;}
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
    DistributionConfig& WithRestrictions(RestrictionsT&& value) { SetRestrictions(std::forward<RestrictionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>Multi-tenant distributions only support WAF V2 web ACLs.</p>
     *  <p>A unique identifier that specifies the WAF web ACL, if any, to
     * associate with this distribution. To specify a web ACL created using the latest
     * version of WAF, use the ACL ARN, for example
     * <code>arn:aws:wafv2:us-east-1:123456789012:global/webacl/ExampleWebACL/a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>.
     * To specify a web ACL created using WAF Classic, use the ACL ID, for example
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>.</p> <p>WAF is a web
     * application firewall that lets you monitor the HTTP and HTTPS requests that are
     * forwarded to CloudFront, and lets you control access to your content. Based on
     * conditions that you specify, such as the IP addresses that requests originate
     * from or the values of query strings, CloudFront responds to requests either with
     * the requested content or with an HTTP 403 status code (Forbidden). You can also
     * configure CloudFront to return a custom error page when a request is blocked.
     * For more information about WAF, see the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF
     * Developer Guide</a>.</p></p>
     */
    inline const Aws::String& GetWebACLId() const { return m_webACLId; }
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }
    template<typename WebACLIdT = Aws::String>
    void SetWebACLId(WebACLIdT&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::forward<WebACLIdT>(value); }
    template<typename WebACLIdT = Aws::String>
    DistributionConfig& WithWebACLId(WebACLIdT&& value) { SetWebACLId(std::forward<WebACLIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Specify the HTTP version(s) that you want viewers to use to
     * communicate with CloudFront. The default value for new web distributions is
     * <code>http2</code>. Viewers that don't support HTTP/2 automatically use an
     * earlier HTTP version.</p> <p>For viewers and CloudFront to use HTTP/2, viewers
     * must support TLSv1.2 or later, and must support Server Name Indication
     * (SNI).</p> <p>For viewers and CloudFront to use HTTP/3, viewers must support
     * TLSv1.3 and Server Name Indication (SNI). CloudFront supports HTTP/3 connection
     * migration to allow the viewer to switch networks without losing connection. For
     * more information about connection migration, see <a
     * href="https://www.rfc-editor.org/rfc/rfc9000.html#name-connection-migration">Connection
     * Migration</a> at RFC 9000. For more information about supported TLSv1.3 ciphers,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html">Supported
     * protocols and ciphers between viewers and CloudFront</a>.</p>
     */
    inline HttpVersion GetHttpVersion() const { return m_httpVersion; }
    inline bool HttpVersionHasBeenSet() const { return m_httpVersionHasBeenSet; }
    inline void SetHttpVersion(HttpVersion value) { m_httpVersionHasBeenSet = true; m_httpVersion = value; }
    inline DistributionConfig& WithHttpVersion(HttpVersion value) { SetHttpVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>To use this field for a multi-tenant distribution, use a connection
     * group instead. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ConnectionGroup.html">ConnectionGroup</a>.</p>
     *  <p>If you want CloudFront to respond to IPv6 DNS requests with an IPv6
     * address for your distribution, specify <code>true</code>. If you specify
     * <code>false</code>, CloudFront responds to IPv6 DNS requests with the DNS
     * response code <code>NOERROR</code> and with no IP addresses. This allows viewers
     * to submit a second request, for an IPv4 address for your distribution.</p> <p>In
     * general, you should enable IPv6 if you have users on IPv6 networks who want to
     * access your content. However, if you're using signed URLs or signed cookies to
     * restrict access to your content, and if you're using a custom policy that
     * includes the <code>IpAddress</code> parameter to restrict the IP addresses that
     * can access your content, don't enable IPv6. If you want to restrict access to
     * some content by IP address and not restrict access to other content (or restrict
     * access but not by IP address), you can create two distributions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-creating-signed-url-custom-policy.html">Creating
     * a Signed URL Using a Custom Policy</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> <p>If you're using an Route 53 Amazon Web Services Integration
     * alias resource record set to route traffic to your CloudFront distribution, you
     * need to create a second alias resource record set when both of the following are
     * true:</p> <ul> <li> <p>You enable IPv6 for the distribution</p> </li> <li>
     * <p>You're using alternate domain names in the URLs for your objects</p> </li>
     * </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-to-cloudfront-distribution.html">Routing
     * Traffic to an Amazon CloudFront Web Distribution by Using Your Domain Name</a>
     * in the <i>Route 53 Amazon Web Services Integration Developer Guide</i>.</p>
     * <p>If you created a CNAME resource record set, either with Route 53 Amazon Web
     * Services Integration or with another DNS service, you don't need to make any
     * changes. A CNAME record will route traffic to your distribution regardless of
     * the IP address format of the viewer request.</p></p>
     */
    inline bool GetIsIPV6Enabled() const { return m_isIPV6Enabled; }
    inline bool IsIPV6EnabledHasBeenSet() const { return m_isIPV6EnabledHasBeenSet; }
    inline void SetIsIPV6Enabled(bool value) { m_isIPV6EnabledHasBeenSet = true; m_isIPV6Enabled = value; }
    inline DistributionConfig& WithIsIPV6Enabled(bool value) { SetIsIPV6Enabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>This field only supports standard distributions. You can't specify
     * this field for multi-tenant distributions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-config-options.html#unsupported-saas">Unsupported
     * features for SaaS Manager for Amazon CloudFront</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>  <p>The identifier of a continuous deployment
     * policy. For more information, see
     * <code>CreateContinuousDeploymentPolicy</code>.</p></p>
     */
    inline const Aws::String& GetContinuousDeploymentPolicyId() const { return m_continuousDeploymentPolicyId; }
    inline bool ContinuousDeploymentPolicyIdHasBeenSet() const { return m_continuousDeploymentPolicyIdHasBeenSet; }
    template<typename ContinuousDeploymentPolicyIdT = Aws::String>
    void SetContinuousDeploymentPolicyId(ContinuousDeploymentPolicyIdT&& value) { m_continuousDeploymentPolicyIdHasBeenSet = true; m_continuousDeploymentPolicyId = std::forward<ContinuousDeploymentPolicyIdT>(value); }
    template<typename ContinuousDeploymentPolicyIdT = Aws::String>
    DistributionConfig& WithContinuousDeploymentPolicyId(ContinuousDeploymentPolicyIdT&& value) { SetContinuousDeploymentPolicyId(std::forward<ContinuousDeploymentPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>This field only supports standard distributions. You can't specify
     * this field for multi-tenant distributions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-config-options.html#unsupported-saas">Unsupported
     * features for SaaS Manager for Amazon CloudFront</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>  <p>A Boolean that indicates whether this is a
     * staging distribution. When this value is <code>true</code>, this is a staging
     * distribution. When this value is <code>false</code>, this is not a staging
     * distribution.</p></p>
     */
    inline bool GetStaging() const { return m_staging; }
    inline bool StagingHasBeenSet() const { return m_stagingHasBeenSet; }
    inline void SetStaging(bool value) { m_stagingHasBeenSet = true; m_staging = value; }
    inline DistributionConfig& WithStaging(bool value) { SetStaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>To use this field for a multi-tenant distribution, use a connection
     * group instead. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ConnectionGroup.html">ConnectionGroup</a>.</p>
     *  <p>ID of the Anycast static IP list that is associated with the
     * distribution.</p></p>
     */
    inline const Aws::String& GetAnycastIpListId() const { return m_anycastIpListId; }
    inline bool AnycastIpListIdHasBeenSet() const { return m_anycastIpListIdHasBeenSet; }
    template<typename AnycastIpListIdT = Aws::String>
    void SetAnycastIpListId(AnycastIpListIdT&& value) { m_anycastIpListIdHasBeenSet = true; m_anycastIpListId = std::forward<AnycastIpListIdT>(value); }
    template<typename AnycastIpListIdT = Aws::String>
    DistributionConfig& WithAnycastIpListId(AnycastIpListIdT&& value) { SetAnycastIpListId(std::forward<AnycastIpListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>This field only supports multi-tenant distributions. You can't
     * specify this field for standard distributions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-config-options.html#unsupported-saas">Unsupported
     * features for SaaS Manager for Amazon CloudFront</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>  <p>A distribution tenant configuration.</p></p>
     */
    inline const TenantConfig& GetTenantConfig() const { return m_tenantConfig; }
    inline bool TenantConfigHasBeenSet() const { return m_tenantConfigHasBeenSet; }
    template<typename TenantConfigT = TenantConfig>
    void SetTenantConfig(TenantConfigT&& value) { m_tenantConfigHasBeenSet = true; m_tenantConfig = std::forward<TenantConfigT>(value); }
    template<typename TenantConfigT = TenantConfig>
    DistributionConfig& WithTenantConfig(TenantConfigT&& value) { SetTenantConfig(std::forward<TenantConfigT>(value)); return *this;}
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
    inline DistributionConfig& WithConnectionMode(ConnectionMode value) { SetConnectionMode(value); return *this;}
    ///@}
  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    Aliases m_aliases;
    bool m_aliasesHasBeenSet = false;

    Aws::String m_defaultRootObject;
    bool m_defaultRootObjectHasBeenSet = false;

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

    LoggingConfig m_logging;
    bool m_loggingHasBeenSet = false;

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

    Aws::String m_continuousDeploymentPolicyId;
    bool m_continuousDeploymentPolicyIdHasBeenSet = false;

    bool m_staging{false};
    bool m_stagingHasBeenSet = false;

    Aws::String m_anycastIpListId;
    bool m_anycastIpListIdHasBeenSet = false;

    TenantConfig m_tenantConfig;
    bool m_tenantConfigHasBeenSet = false;

    ConnectionMode m_connectionMode{ConnectionMode::NOT_SET};
    bool m_connectionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
