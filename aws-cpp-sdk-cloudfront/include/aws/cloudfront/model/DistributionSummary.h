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
#include <aws/cloudfront/model/Aliases.h>
#include <aws/cloudfront/model/Origins.h>
#include <aws/cloudfront/model/DefaultCacheBehavior.h>
#include <aws/cloudfront/model/CacheBehaviors.h>
#include <aws/cloudfront/model/CustomErrorResponses.h>
#include <aws/cloudfront/model/PriceClass.h>
#include <aws/cloudfront/model/ViewerCertificate.h>
#include <aws/cloudfront/model/Restrictions.h>

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
   * A summary of the information for an Amazon CloudFront distribution.
   */
  class AWS_CLOUDFRONT_API DistributionSummary
  {
  public:
    DistributionSummary();
    DistributionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    DistributionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline DistributionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The identifier for the distribution. For example: EDFDVBD632BHDS5.
     */
    inline DistributionSummary& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * The identifier for the distribution. For example: EDFDVBD632BHDS5.
     */
    inline DistributionSummary& WithId(const char* value) { SetId(value); return *this;}

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline DistributionSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline DistributionSummary& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * This response element indicates the current status of the distribution. When the
     * status is Deployed, the distribution's information is fully propagated
     * throughout the Amazon CloudFront system.
     */
    inline DistributionSummary& WithStatus(const char* value) { SetStatus(value); return *this;}

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
    inline DistributionSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * The date and time the distribution was last modified.
     */
    inline DistributionSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(value); return *this;}

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
    inline DistributionSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The domain name corresponding to the distribution. For example:
     * d604721fxaaqy9.cloudfront.net.
     */
    inline DistributionSummary& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * The domain name corresponding to the distribution. For example:
     * d604721fxaaqy9.cloudfront.net.
     */
    inline DistributionSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this distribution.
     */
    inline const Aliases& GetAliases() const{ return m_aliases; }

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this distribution.
     */
    inline void SetAliases(const Aliases& value) { m_aliasesHasBeenSet = true; m_aliases = value; }

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this distribution.
     */
    inline void SetAliases(Aliases&& value) { m_aliasesHasBeenSet = true; m_aliases = value; }

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this distribution.
     */
    inline DistributionSummary& WithAliases(const Aliases& value) { SetAliases(value); return *this;}

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this distribution.
     */
    inline DistributionSummary& WithAliases(Aliases&& value) { SetAliases(value); return *this;}

    /**
     * A complex type that contains information about origins for this distribution.
     */
    inline const Origins& GetOrigins() const{ return m_origins; }

    /**
     * A complex type that contains information about origins for this distribution.
     */
    inline void SetOrigins(const Origins& value) { m_originsHasBeenSet = true; m_origins = value; }

    /**
     * A complex type that contains information about origins for this distribution.
     */
    inline void SetOrigins(Origins&& value) { m_originsHasBeenSet = true; m_origins = value; }

    /**
     * A complex type that contains information about origins for this distribution.
     */
    inline DistributionSummary& WithOrigins(const Origins& value) { SetOrigins(value); return *this;}

    /**
     * A complex type that contains information about origins for this distribution.
     */
    inline DistributionSummary& WithOrigins(Origins&& value) { SetOrigins(value); return *this;}

    /**
     * A complex type that describes the default cache behavior if you do not specify a
     * CacheBehavior element or if files don't match any of the values of PathPattern
     * in CacheBehavior elements.You must create exactly one default cache behavior.
     */
    inline const DefaultCacheBehavior& GetDefaultCacheBehavior() const{ return m_defaultCacheBehavior; }

    /**
     * A complex type that describes the default cache behavior if you do not specify a
     * CacheBehavior element or if files don't match any of the values of PathPattern
     * in CacheBehavior elements.You must create exactly one default cache behavior.
     */
    inline void SetDefaultCacheBehavior(const DefaultCacheBehavior& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = value; }

    /**
     * A complex type that describes the default cache behavior if you do not specify a
     * CacheBehavior element or if files don't match any of the values of PathPattern
     * in CacheBehavior elements.You must create exactly one default cache behavior.
     */
    inline void SetDefaultCacheBehavior(DefaultCacheBehavior&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = value; }

    /**
     * A complex type that describes the default cache behavior if you do not specify a
     * CacheBehavior element or if files don't match any of the values of PathPattern
     * in CacheBehavior elements.You must create exactly one default cache behavior.
     */
    inline DistributionSummary& WithDefaultCacheBehavior(const DefaultCacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}

    /**
     * A complex type that describes the default cache behavior if you do not specify a
     * CacheBehavior element or if files don't match any of the values of PathPattern
     * in CacheBehavior elements.You must create exactly one default cache behavior.
     */
    inline DistributionSummary& WithDefaultCacheBehavior(DefaultCacheBehavior&& value) { SetDefaultCacheBehavior(value); return *this;}

    /**
     * A complex type that contains zero or more CacheBehavior elements.
     */
    inline const CacheBehaviors& GetCacheBehaviors() const{ return m_cacheBehaviors; }

    /**
     * A complex type that contains zero or more CacheBehavior elements.
     */
    inline void SetCacheBehaviors(const CacheBehaviors& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = value; }

    /**
     * A complex type that contains zero or more CacheBehavior elements.
     */
    inline void SetCacheBehaviors(CacheBehaviors&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = value; }

    /**
     * A complex type that contains zero or more CacheBehavior elements.
     */
    inline DistributionSummary& WithCacheBehaviors(const CacheBehaviors& value) { SetCacheBehaviors(value); return *this;}

    /**
     * A complex type that contains zero or more CacheBehavior elements.
     */
    inline DistributionSummary& WithCacheBehaviors(CacheBehaviors&& value) { SetCacheBehaviors(value); return *this;}

    /**
     * A complex type that contains zero or more CustomErrorResponses elements.
     */
    inline const CustomErrorResponses& GetCustomErrorResponses() const{ return m_customErrorResponses; }

    /**
     * A complex type that contains zero or more CustomErrorResponses elements.
     */
    inline void SetCustomErrorResponses(const CustomErrorResponses& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = value; }

    /**
     * A complex type that contains zero or more CustomErrorResponses elements.
     */
    inline void SetCustomErrorResponses(CustomErrorResponses&& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = value; }

    /**
     * A complex type that contains zero or more CustomErrorResponses elements.
     */
    inline DistributionSummary& WithCustomErrorResponses(const CustomErrorResponses& value) { SetCustomErrorResponses(value); return *this;}

    /**
     * A complex type that contains zero or more CustomErrorResponses elements.
     */
    inline DistributionSummary& WithCustomErrorResponses(CustomErrorResponses&& value) { SetCustomErrorResponses(value); return *this;}

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
    inline DistributionSummary& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * The comment originally specified when this distribution was created.
     */
    inline DistributionSummary& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * The comment originally specified when this distribution was created.
     */
    inline DistributionSummary& WithComment(const char* value) { SetComment(value); return *this;}

    
    inline const PriceClass& GetPriceClass() const{ return m_priceClass; }

    
    inline void SetPriceClass(const PriceClass& value) { m_priceClassHasBeenSet = true; m_priceClass = value; }

    
    inline void SetPriceClass(PriceClass&& value) { m_priceClassHasBeenSet = true; m_priceClass = value; }

    
    inline DistributionSummary& WithPriceClass(const PriceClass& value) { SetPriceClass(value); return *this;}

    
    inline DistributionSummary& WithPriceClass(PriceClass&& value) { SetPriceClass(value); return *this;}

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
    inline DistributionSummary& WithEnabled(bool value) { SetEnabled(value); return *this;}

    
    inline const ViewerCertificate& GetViewerCertificate() const{ return m_viewerCertificate; }

    
    inline void SetViewerCertificate(const ViewerCertificate& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = value; }

    
    inline void SetViewerCertificate(ViewerCertificate&& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = value; }

    
    inline DistributionSummary& WithViewerCertificate(const ViewerCertificate& value) { SetViewerCertificate(value); return *this;}

    
    inline DistributionSummary& WithViewerCertificate(ViewerCertificate&& value) { SetViewerCertificate(value); return *this;}

    
    inline const Restrictions& GetRestrictions() const{ return m_restrictions; }

    
    inline void SetRestrictions(const Restrictions& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }

    
    inline void SetRestrictions(Restrictions&& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }

    
    inline DistributionSummary& WithRestrictions(const Restrictions& value) { SetRestrictions(value); return *this;}

    
    inline DistributionSummary& WithRestrictions(Restrictions&& value) { SetRestrictions(value); return *this;}

    /**
     * The Web ACL Id (if any) associated with the distribution.
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * The Web ACL Id (if any) associated with the distribution.
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * The Web ACL Id (if any) associated with the distribution.
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * The Web ACL Id (if any) associated with the distribution.
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * The Web ACL Id (if any) associated with the distribution.
     */
    inline DistributionSummary& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * The Web ACL Id (if any) associated with the distribution.
     */
    inline DistributionSummary& WithWebACLId(Aws::String&& value) { SetWebACLId(value); return *this;}

    /**
     * The Web ACL Id (if any) associated with the distribution.
     */
    inline DistributionSummary& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
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
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
