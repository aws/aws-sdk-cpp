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
#include <aws/cloudfront/model/Aliases.h>
#include <aws/cloudfront/model/Origins.h>
#include <aws/cloudfront/model/DefaultCacheBehavior.h>
#include <aws/cloudfront/model/CacheBehaviors.h>
#include <aws/cloudfront/model/CustomErrorResponses.h>
#include <aws/cloudfront/model/LoggingConfig.h>
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
   * A distribution Configuration.
   */
  class AWS_CLOUDFRONT_API DistributionConfig
  {
  public:
    DistributionConfig();
    DistributionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    DistributionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the DistributionConfig object),
     * a new distribution is created. If the CallerReference is a value you already
     * sent in a previous request to create a distribution, and the content of the
     * DistributionConfig is identical to the original request (ignoring white space),
     * the response includes the same information returned to the original request. If
     * the CallerReference is a value you already sent in a previous request to create
     * a distribution but the content of the DistributionConfig is different from the
     * original request, CloudFront returns a DistributionAlreadyExists error.
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the DistributionConfig object),
     * a new distribution is created. If the CallerReference is a value you already
     * sent in a previous request to create a distribution, and the content of the
     * DistributionConfig is identical to the original request (ignoring white space),
     * the response includes the same information returned to the original request. If
     * the CallerReference is a value you already sent in a previous request to create
     * a distribution but the content of the DistributionConfig is different from the
     * original request, CloudFront returns a DistributionAlreadyExists error.
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the DistributionConfig object),
     * a new distribution is created. If the CallerReference is a value you already
     * sent in a previous request to create a distribution, and the content of the
     * DistributionConfig is identical to the original request (ignoring white space),
     * the response includes the same information returned to the original request. If
     * the CallerReference is a value you already sent in a previous request to create
     * a distribution but the content of the DistributionConfig is different from the
     * original request, CloudFront returns a DistributionAlreadyExists error.
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the DistributionConfig object),
     * a new distribution is created. If the CallerReference is a value you already
     * sent in a previous request to create a distribution, and the content of the
     * DistributionConfig is identical to the original request (ignoring white space),
     * the response includes the same information returned to the original request. If
     * the CallerReference is a value you already sent in a previous request to create
     * a distribution but the content of the DistributionConfig is different from the
     * original request, CloudFront returns a DistributionAlreadyExists error.
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the DistributionConfig object),
     * a new distribution is created. If the CallerReference is a value you already
     * sent in a previous request to create a distribution, and the content of the
     * DistributionConfig is identical to the original request (ignoring white space),
     * the response includes the same information returned to the original request. If
     * the CallerReference is a value you already sent in a previous request to create
     * a distribution but the content of the DistributionConfig is different from the
     * original request, CloudFront returns a DistributionAlreadyExists error.
     */
    inline DistributionConfig& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the DistributionConfig object),
     * a new distribution is created. If the CallerReference is a value you already
     * sent in a previous request to create a distribution, and the content of the
     * DistributionConfig is identical to the original request (ignoring white space),
     * the response includes the same information returned to the original request. If
     * the CallerReference is a value you already sent in a previous request to create
     * a distribution but the content of the DistributionConfig is different from the
     * original request, CloudFront returns a DistributionAlreadyExists error.
     */
    inline DistributionConfig& WithCallerReference(Aws::String&& value) { SetCallerReference(value); return *this;}

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the DistributionConfig object),
     * a new distribution is created. If the CallerReference is a value you already
     * sent in a previous request to create a distribution, and the content of the
     * DistributionConfig is identical to the original request (ignoring white space),
     * the response includes the same information returned to the original request. If
     * the CallerReference is a value you already sent in a previous request to create
     * a distribution but the content of the DistributionConfig is different from the
     * original request, CloudFront returns a DistributionAlreadyExists error.
     */
    inline DistributionConfig& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

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
    inline DistributionConfig& WithAliases(const Aliases& value) { SetAliases(value); return *this;}

    /**
     * A complex type that contains information about CNAMEs (alternate domain names),
     * if any, for this distribution.
     */
    inline DistributionConfig& WithAliases(Aliases&& value) { SetAliases(value); return *this;}

    /**
     * The object that you want CloudFront to return (for example, index.html) when an
     * end user requests the root URL for your distribution (http://www.example.com)
     * instead of an object in your distribution (http://www.example.com/index.html).
     * Specifying a default root object avoids exposing the contents of your
     * distribution. If you don't want to specify a default root object when you create
     * a distribution, include an empty DefaultRootObject element. To delete the
     * default root object from an existing distribution, update the distribution
     * configuration and include an empty DefaultRootObject element. To replace the
     * default root object, update the distribution configuration and specify the new
     * object.
     */
    inline const Aws::String& GetDefaultRootObject() const{ return m_defaultRootObject; }

    /**
     * The object that you want CloudFront to return (for example, index.html) when an
     * end user requests the root URL for your distribution (http://www.example.com)
     * instead of an object in your distribution (http://www.example.com/index.html).
     * Specifying a default root object avoids exposing the contents of your
     * distribution. If you don't want to specify a default root object when you create
     * a distribution, include an empty DefaultRootObject element. To delete the
     * default root object from an existing distribution, update the distribution
     * configuration and include an empty DefaultRootObject element. To replace the
     * default root object, update the distribution configuration and specify the new
     * object.
     */
    inline void SetDefaultRootObject(const Aws::String& value) { m_defaultRootObjectHasBeenSet = true; m_defaultRootObject = value; }

    /**
     * The object that you want CloudFront to return (for example, index.html) when an
     * end user requests the root URL for your distribution (http://www.example.com)
     * instead of an object in your distribution (http://www.example.com/index.html).
     * Specifying a default root object avoids exposing the contents of your
     * distribution. If you don't want to specify a default root object when you create
     * a distribution, include an empty DefaultRootObject element. To delete the
     * default root object from an existing distribution, update the distribution
     * configuration and include an empty DefaultRootObject element. To replace the
     * default root object, update the distribution configuration and specify the new
     * object.
     */
    inline void SetDefaultRootObject(Aws::String&& value) { m_defaultRootObjectHasBeenSet = true; m_defaultRootObject = value; }

    /**
     * The object that you want CloudFront to return (for example, index.html) when an
     * end user requests the root URL for your distribution (http://www.example.com)
     * instead of an object in your distribution (http://www.example.com/index.html).
     * Specifying a default root object avoids exposing the contents of your
     * distribution. If you don't want to specify a default root object when you create
     * a distribution, include an empty DefaultRootObject element. To delete the
     * default root object from an existing distribution, update the distribution
     * configuration and include an empty DefaultRootObject element. To replace the
     * default root object, update the distribution configuration and specify the new
     * object.
     */
    inline void SetDefaultRootObject(const char* value) { m_defaultRootObjectHasBeenSet = true; m_defaultRootObject.assign(value); }

    /**
     * The object that you want CloudFront to return (for example, index.html) when an
     * end user requests the root URL for your distribution (http://www.example.com)
     * instead of an object in your distribution (http://www.example.com/index.html).
     * Specifying a default root object avoids exposing the contents of your
     * distribution. If you don't want to specify a default root object when you create
     * a distribution, include an empty DefaultRootObject element. To delete the
     * default root object from an existing distribution, update the distribution
     * configuration and include an empty DefaultRootObject element. To replace the
     * default root object, update the distribution configuration and specify the new
     * object.
     */
    inline DistributionConfig& WithDefaultRootObject(const Aws::String& value) { SetDefaultRootObject(value); return *this;}

    /**
     * The object that you want CloudFront to return (for example, index.html) when an
     * end user requests the root URL for your distribution (http://www.example.com)
     * instead of an object in your distribution (http://www.example.com/index.html).
     * Specifying a default root object avoids exposing the contents of your
     * distribution. If you don't want to specify a default root object when you create
     * a distribution, include an empty DefaultRootObject element. To delete the
     * default root object from an existing distribution, update the distribution
     * configuration and include an empty DefaultRootObject element. To replace the
     * default root object, update the distribution configuration and specify the new
     * object.
     */
    inline DistributionConfig& WithDefaultRootObject(Aws::String&& value) { SetDefaultRootObject(value); return *this;}

    /**
     * The object that you want CloudFront to return (for example, index.html) when an
     * end user requests the root URL for your distribution (http://www.example.com)
     * instead of an object in your distribution (http://www.example.com/index.html).
     * Specifying a default root object avoids exposing the contents of your
     * distribution. If you don't want to specify a default root object when you create
     * a distribution, include an empty DefaultRootObject element. To delete the
     * default root object from an existing distribution, update the distribution
     * configuration and include an empty DefaultRootObject element. To replace the
     * default root object, update the distribution configuration and specify the new
     * object.
     */
    inline DistributionConfig& WithDefaultRootObject(const char* value) { SetDefaultRootObject(value); return *this;}

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
    inline DistributionConfig& WithOrigins(const Origins& value) { SetOrigins(value); return *this;}

    /**
     * A complex type that contains information about origins for this distribution.
     */
    inline DistributionConfig& WithOrigins(Origins&& value) { SetOrigins(value); return *this;}

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
    inline DistributionConfig& WithDefaultCacheBehavior(const DefaultCacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}

    /**
     * A complex type that describes the default cache behavior if you do not specify a
     * CacheBehavior element or if files don't match any of the values of PathPattern
     * in CacheBehavior elements.You must create exactly one default cache behavior.
     */
    inline DistributionConfig& WithDefaultCacheBehavior(DefaultCacheBehavior&& value) { SetDefaultCacheBehavior(value); return *this;}

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
    inline DistributionConfig& WithCacheBehaviors(const CacheBehaviors& value) { SetCacheBehaviors(value); return *this;}

    /**
     * A complex type that contains zero or more CacheBehavior elements.
     */
    inline DistributionConfig& WithCacheBehaviors(CacheBehaviors&& value) { SetCacheBehaviors(value); return *this;}

    /**
     * A complex type that contains zero or more CustomErrorResponse elements.
     */
    inline const CustomErrorResponses& GetCustomErrorResponses() const{ return m_customErrorResponses; }

    /**
     * A complex type that contains zero or more CustomErrorResponse elements.
     */
    inline void SetCustomErrorResponses(const CustomErrorResponses& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = value; }

    /**
     * A complex type that contains zero or more CustomErrorResponse elements.
     */
    inline void SetCustomErrorResponses(CustomErrorResponses&& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = value; }

    /**
     * A complex type that contains zero or more CustomErrorResponse elements.
     */
    inline DistributionConfig& WithCustomErrorResponses(const CustomErrorResponses& value) { SetCustomErrorResponses(value); return *this;}

    /**
     * A complex type that contains zero or more CustomErrorResponse elements.
     */
    inline DistributionConfig& WithCustomErrorResponses(CustomErrorResponses&& value) { SetCustomErrorResponses(value); return *this;}

    /**
     * Any comments you want to include about the distribution.
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * Any comments you want to include about the distribution.
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * Any comments you want to include about the distribution.
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * Any comments you want to include about the distribution.
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * Any comments you want to include about the distribution.
     */
    inline DistributionConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * Any comments you want to include about the distribution.
     */
    inline DistributionConfig& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * Any comments you want to include about the distribution.
     */
    inline DistributionConfig& WithComment(const char* value) { SetComment(value); return *this;}

    /**
     * A complex type that controls whether access logs are written for the
     * distribution.
     */
    inline const LoggingConfig& GetLogging() const{ return m_logging; }

    /**
     * A complex type that controls whether access logs are written for the
     * distribution.
     */
    inline void SetLogging(const LoggingConfig& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * A complex type that controls whether access logs are written for the
     * distribution.
     */
    inline void SetLogging(LoggingConfig&& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * A complex type that controls whether access logs are written for the
     * distribution.
     */
    inline DistributionConfig& WithLogging(const LoggingConfig& value) { SetLogging(value); return *this;}

    /**
     * A complex type that controls whether access logs are written for the
     * distribution.
     */
    inline DistributionConfig& WithLogging(LoggingConfig&& value) { SetLogging(value); return *this;}

    /**
     * A complex type that contains information about price class for this
     * distribution.
     */
    inline const PriceClass& GetPriceClass() const{ return m_priceClass; }

    /**
     * A complex type that contains information about price class for this
     * distribution.
     */
    inline void SetPriceClass(const PriceClass& value) { m_priceClassHasBeenSet = true; m_priceClass = value; }

    /**
     * A complex type that contains information about price class for this
     * distribution.
     */
    inline void SetPriceClass(PriceClass&& value) { m_priceClassHasBeenSet = true; m_priceClass = value; }

    /**
     * A complex type that contains information about price class for this
     * distribution.
     */
    inline DistributionConfig& WithPriceClass(const PriceClass& value) { SetPriceClass(value); return *this;}

    /**
     * A complex type that contains information about price class for this
     * distribution.
     */
    inline DistributionConfig& WithPriceClass(PriceClass&& value) { SetPriceClass(value); return *this;}

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
    inline DistributionConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}

    
    inline const ViewerCertificate& GetViewerCertificate() const{ return m_viewerCertificate; }

    
    inline void SetViewerCertificate(const ViewerCertificate& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = value; }

    
    inline void SetViewerCertificate(ViewerCertificate&& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = value; }

    
    inline DistributionConfig& WithViewerCertificate(const ViewerCertificate& value) { SetViewerCertificate(value); return *this;}

    
    inline DistributionConfig& WithViewerCertificate(ViewerCertificate&& value) { SetViewerCertificate(value); return *this;}

    
    inline const Restrictions& GetRestrictions() const{ return m_restrictions; }

    
    inline void SetRestrictions(const Restrictions& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }

    
    inline void SetRestrictions(Restrictions&& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }

    
    inline DistributionConfig& WithRestrictions(const Restrictions& value) { SetRestrictions(value); return *this;}

    
    inline DistributionConfig& WithRestrictions(Restrictions&& value) { SetRestrictions(value); return *this;}

    /**
     * (Optional) If you're using AWS WAF to filter CloudFront requests, the Id of the
     * AWS WAF web ACL that is associated with the distribution.
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * (Optional) If you're using AWS WAF to filter CloudFront requests, the Id of the
     * AWS WAF web ACL that is associated with the distribution.
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * (Optional) If you're using AWS WAF to filter CloudFront requests, the Id of the
     * AWS WAF web ACL that is associated with the distribution.
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * (Optional) If you're using AWS WAF to filter CloudFront requests, the Id of the
     * AWS WAF web ACL that is associated with the distribution.
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * (Optional) If you're using AWS WAF to filter CloudFront requests, the Id of the
     * AWS WAF web ACL that is associated with the distribution.
     */
    inline DistributionConfig& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * (Optional) If you're using AWS WAF to filter CloudFront requests, the Id of the
     * AWS WAF web ACL that is associated with the distribution.
     */
    inline DistributionConfig& WithWebACLId(Aws::String&& value) { SetWebACLId(value); return *this;}

    /**
     * (Optional) If you're using AWS WAF to filter CloudFront requests, the Id of the
     * AWS WAF web ACL that is associated with the distribution.
     */
    inline DistributionConfig& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}

  private:
    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;
    Aliases m_aliases;
    bool m_aliasesHasBeenSet;
    Aws::String m_defaultRootObject;
    bool m_defaultRootObjectHasBeenSet;
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
    LoggingConfig m_logging;
    bool m_loggingHasBeenSet;
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
