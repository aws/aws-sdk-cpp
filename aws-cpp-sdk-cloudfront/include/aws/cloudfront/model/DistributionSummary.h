/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /*
    A summary of the information for an Amazon CloudFront distribution.
  */
  class AWS_CLOUDFRONT_API DistributionSummary
  {
  public:
    DistributionSummary();
    DistributionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    DistributionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /*
     The identifier for the distribution. For example: EDFDVBD632BHDS5.
    */
    inline const Aws::String& GetId() const{ return m_id; }
    /*
     The identifier for the distribution. For example: EDFDVBD632BHDS5.
    */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /*
     The identifier for the distribution. For example: EDFDVBD632BHDS5.
    */
    inline void SetId(const char* value) { m_id.assign(value); }

    /*
     The identifier for the distribution. For example: EDFDVBD632BHDS5.
    */
    inline DistributionSummary&  WithId(const Aws::String& value) { SetId(value); return *this;}

    /*
     The identifier for the distribution. For example: EDFDVBD632BHDS5.
    */
    inline DistributionSummary& WithId(const char* value) { SetId(value); return *this;}

    /*
     This response element indicates the current status of the distribution. When the status is Deployed, the distribution's information is fully propagated throughout the Amazon CloudFront system.
    */
    inline const Aws::String& GetStatus() const{ return m_status; }
    /*
     This response element indicates the current status of the distribution. When the status is Deployed, the distribution's information is fully propagated throughout the Amazon CloudFront system.
    */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /*
     This response element indicates the current status of the distribution. When the status is Deployed, the distribution's information is fully propagated throughout the Amazon CloudFront system.
    */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /*
     This response element indicates the current status of the distribution. When the status is Deployed, the distribution's information is fully propagated throughout the Amazon CloudFront system.
    */
    inline DistributionSummary&  WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /*
     This response element indicates the current status of the distribution. When the status is Deployed, the distribution's information is fully propagated throughout the Amazon CloudFront system.
    */
    inline DistributionSummary& WithStatus(const char* value) { SetStatus(value); return *this;}

    /*
     The date and time the distribution was last modified.
    */
    inline double GetLastModifiedTime() const{ return m_lastModifiedTime; }
    /*
     The date and time the distribution was last modified.
    */
    inline void SetLastModifiedTime(double value) { m_lastModifiedTime = value; }

    /*
     The date and time the distribution was last modified.
    */
    inline DistributionSummary&  WithLastModifiedTime(double value) { SetLastModifiedTime(value); return *this;}

    /*
     The domain name corresponding to the distribution. For example: d604721fxaaqy9.cloudfront.net.
    */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    /*
     The domain name corresponding to the distribution. For example: d604721fxaaqy9.cloudfront.net.
    */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /*
     The domain name corresponding to the distribution. For example: d604721fxaaqy9.cloudfront.net.
    */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /*
     The domain name corresponding to the distribution. For example: d604721fxaaqy9.cloudfront.net.
    */
    inline DistributionSummary&  WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /*
     The domain name corresponding to the distribution. For example: d604721fxaaqy9.cloudfront.net.
    */
    inline DistributionSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /*
     A complex type that contains information about CNAMEs (alternate domain names), if any, for this distribution.
    */
    inline const Aliases& GetAliases() const{ return m_aliases; }
    /*
     A complex type that contains information about CNAMEs (alternate domain names), if any, for this distribution.
    */
    inline void SetAliases(const Aliases& value) { m_aliases = value; }

    /*
     A complex type that contains information about CNAMEs (alternate domain names), if any, for this distribution.
    */
    inline DistributionSummary&  WithAliases(const Aliases& value) { SetAliases(value); return *this;}

    /*
     A complex type that contains information about origins for this distribution.
    */
    inline const Origins& GetOrigins() const{ return m_origins; }
    /*
     A complex type that contains information about origins for this distribution.
    */
    inline void SetOrigins(const Origins& value) { m_origins = value; }

    /*
     A complex type that contains information about origins for this distribution.
    */
    inline DistributionSummary&  WithOrigins(const Origins& value) { SetOrigins(value); return *this;}

    /*
     A complex type that describes the default cache behavior if you do not specify a CacheBehavior element or if files don't match any of the values of PathPattern in CacheBehavior elements.You must create exactly one default cache behavior.
    */
    inline const DefaultCacheBehavior& GetDefaultCacheBehavior() const{ return m_defaultCacheBehavior; }
    /*
     A complex type that describes the default cache behavior if you do not specify a CacheBehavior element or if files don't match any of the values of PathPattern in CacheBehavior elements.You must create exactly one default cache behavior.
    */
    inline void SetDefaultCacheBehavior(const DefaultCacheBehavior& value) { m_defaultCacheBehavior = value; }

    /*
     A complex type that describes the default cache behavior if you do not specify a CacheBehavior element or if files don't match any of the values of PathPattern in CacheBehavior elements.You must create exactly one default cache behavior.
    */
    inline DistributionSummary&  WithDefaultCacheBehavior(const DefaultCacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}

    /*
     A complex type that contains zero or more CacheBehavior elements.
    */
    inline const CacheBehaviors& GetCacheBehaviors() const{ return m_cacheBehaviors; }
    /*
     A complex type that contains zero or more CacheBehavior elements.
    */
    inline void SetCacheBehaviors(const CacheBehaviors& value) { m_cacheBehaviors = value; }

    /*
     A complex type that contains zero or more CacheBehavior elements.
    */
    inline DistributionSummary&  WithCacheBehaviors(const CacheBehaviors& value) { SetCacheBehaviors(value); return *this;}

    /*
     A complex type that contains zero or more CustomErrorResponses elements.
    */
    inline const CustomErrorResponses& GetCustomErrorResponses() const{ return m_customErrorResponses; }
    /*
     A complex type that contains zero or more CustomErrorResponses elements.
    */
    inline void SetCustomErrorResponses(const CustomErrorResponses& value) { m_customErrorResponses = value; }

    /*
     A complex type that contains zero or more CustomErrorResponses elements.
    */
    inline DistributionSummary&  WithCustomErrorResponses(const CustomErrorResponses& value) { SetCustomErrorResponses(value); return *this;}

    /*
     The comment originally specified when this distribution was created.
    */
    inline const Aws::String& GetComment() const{ return m_comment; }
    /*
     The comment originally specified when this distribution was created.
    */
    inline void SetComment(const Aws::String& value) { m_comment = value; }

    /*
     The comment originally specified when this distribution was created.
    */
    inline void SetComment(const char* value) { m_comment.assign(value); }

    /*
     The comment originally specified when this distribution was created.
    */
    inline DistributionSummary&  WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /*
     The comment originally specified when this distribution was created.
    */
    inline DistributionSummary& WithComment(const char* value) { SetComment(value); return *this;}

    
    inline const PriceClass& GetPriceClass() const{ return m_priceClass; }
    
    inline void SetPriceClass(const PriceClass& value) { m_priceClass = value; }

    
    inline DistributionSummary&  WithPriceClass(const PriceClass& value) { SetPriceClass(value); return *this;}

    /*
     Whether the distribution is enabled to accept end user requests for content.
    */
    inline bool GetEnabled() const{ return m_enabled; }
    /*
     Whether the distribution is enabled to accept end user requests for content.
    */
    inline void SetEnabled(bool value) { m_enabled = value; }

    /*
     Whether the distribution is enabled to accept end user requests for content.
    */
    inline DistributionSummary&  WithEnabled(bool value) { SetEnabled(value); return *this;}

    
    inline const ViewerCertificate& GetViewerCertificate() const{ return m_viewerCertificate; }
    
    inline void SetViewerCertificate(const ViewerCertificate& value) { m_viewerCertificate = value; }

    
    inline DistributionSummary&  WithViewerCertificate(const ViewerCertificate& value) { SetViewerCertificate(value); return *this;}

    
    inline const Restrictions& GetRestrictions() const{ return m_restrictions; }
    
    inline void SetRestrictions(const Restrictions& value) { m_restrictions = value; }

    
    inline DistributionSummary&  WithRestrictions(const Restrictions& value) { SetRestrictions(value); return *this;}

  private:
    Aws::String m_id;
    Aws::String m_status;
    double m_lastModifiedTime;
    Aws::String m_domainName;
    Aliases m_aliases;
    Origins m_origins;
    DefaultCacheBehavior m_defaultCacheBehavior;
    CacheBehaviors m_cacheBehaviors;
    CustomErrorResponses m_customErrorResponses;
    Aws::String m_comment;
    PriceClass m_priceClass;
    bool m_enabled;
    ViewerCertificate m_viewerCertificate;
    Restrictions m_restrictions;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
