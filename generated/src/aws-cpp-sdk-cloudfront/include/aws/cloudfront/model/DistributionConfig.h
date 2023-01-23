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
    AWS_CLOUDFRONT_API DistributionConfig();
    AWS_CLOUDFRONT_API DistributionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DistributionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>DistributionConfig</code> object),
     * CloudFront creates a new distribution.</p> <p>If <code>CallerReference</code> is
     * a value that you already sent in a previous request to create a distribution,
     * CloudFront returns a <code>DistributionAlreadyExists</code> error.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>DistributionConfig</code> object),
     * CloudFront creates a new distribution.</p> <p>If <code>CallerReference</code> is
     * a value that you already sent in a previous request to create a distribution,
     * CloudFront returns a <code>DistributionAlreadyExists</code> error.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>DistributionConfig</code> object),
     * CloudFront creates a new distribution.</p> <p>If <code>CallerReference</code> is
     * a value that you already sent in a previous request to create a distribution,
     * CloudFront returns a <code>DistributionAlreadyExists</code> error.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>DistributionConfig</code> object),
     * CloudFront creates a new distribution.</p> <p>If <code>CallerReference</code> is
     * a value that you already sent in a previous request to create a distribution,
     * CloudFront returns a <code>DistributionAlreadyExists</code> error.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>DistributionConfig</code> object),
     * CloudFront creates a new distribution.</p> <p>If <code>CallerReference</code> is
     * a value that you already sent in a previous request to create a distribution,
     * CloudFront returns a <code>DistributionAlreadyExists</code> error.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>DistributionConfig</code> object),
     * CloudFront creates a new distribution.</p> <p>If <code>CallerReference</code> is
     * a value that you already sent in a previous request to create a distribution,
     * CloudFront returns a <code>DistributionAlreadyExists</code> error.</p>
     */
    inline DistributionConfig& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>DistributionConfig</code> object),
     * CloudFront creates a new distribution.</p> <p>If <code>CallerReference</code> is
     * a value that you already sent in a previous request to create a distribution,
     * CloudFront returns a <code>DistributionAlreadyExists</code> error.</p>
     */
    inline DistributionConfig& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the <code>DistributionConfig</code> object),
     * CloudFront creates a new distribution.</p> <p>If <code>CallerReference</code> is
     * a value that you already sent in a previous request to create a distribution,
     * CloudFront returns a <code>DistributionAlreadyExists</code> error.</p>
     */
    inline DistributionConfig& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


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
    inline DistributionConfig& WithAliases(const Aliases& value) { SetAliases(value); return *this;}

    /**
     * <p>A complex type that contains information about CNAMEs (alternate domain
     * names), if any, for this distribution.</p>
     */
    inline DistributionConfig& WithAliases(Aliases&& value) { SetAliases(std::move(value)); return *this;}


    /**
     * <p>The object that you want CloudFront to request from your origin (for example,
     * <code>index.html</code>) when a viewer requests the root URL for your
     * distribution (<code>https://www.example.com</code>) instead of an object in your
     * distribution (<code>https://www.example.com/product-description.html</code>).
     * Specifying a default root object avoids exposing the contents of your
     * distribution.</p> <p>Specify only the object name, for example,
     * <code>index.html</code>. Don't add a <code>/</code> before the object name.</p>
     * <p>If you don't want to specify a default root object when you create a
     * distribution, include an empty <code>DefaultRootObject</code> element.</p> <p>To
     * delete the default root object from an existing distribution, update the
     * distribution configuration and include an empty <code>DefaultRootObject</code>
     * element.</p> <p>To replace the default root object, update the distribution
     * configuration and specify the new object.</p> <p>For more information about the
     * default root object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/DefaultRootObject.html">Creating
     * a Default Root Object</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDefaultRootObject() const{ return m_defaultRootObject; }

    /**
     * <p>The object that you want CloudFront to request from your origin (for example,
     * <code>index.html</code>) when a viewer requests the root URL for your
     * distribution (<code>https://www.example.com</code>) instead of an object in your
     * distribution (<code>https://www.example.com/product-description.html</code>).
     * Specifying a default root object avoids exposing the contents of your
     * distribution.</p> <p>Specify only the object name, for example,
     * <code>index.html</code>. Don't add a <code>/</code> before the object name.</p>
     * <p>If you don't want to specify a default root object when you create a
     * distribution, include an empty <code>DefaultRootObject</code> element.</p> <p>To
     * delete the default root object from an existing distribution, update the
     * distribution configuration and include an empty <code>DefaultRootObject</code>
     * element.</p> <p>To replace the default root object, update the distribution
     * configuration and specify the new object.</p> <p>For more information about the
     * default root object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/DefaultRootObject.html">Creating
     * a Default Root Object</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool DefaultRootObjectHasBeenSet() const { return m_defaultRootObjectHasBeenSet; }

    /**
     * <p>The object that you want CloudFront to request from your origin (for example,
     * <code>index.html</code>) when a viewer requests the root URL for your
     * distribution (<code>https://www.example.com</code>) instead of an object in your
     * distribution (<code>https://www.example.com/product-description.html</code>).
     * Specifying a default root object avoids exposing the contents of your
     * distribution.</p> <p>Specify only the object name, for example,
     * <code>index.html</code>. Don't add a <code>/</code> before the object name.</p>
     * <p>If you don't want to specify a default root object when you create a
     * distribution, include an empty <code>DefaultRootObject</code> element.</p> <p>To
     * delete the default root object from an existing distribution, update the
     * distribution configuration and include an empty <code>DefaultRootObject</code>
     * element.</p> <p>To replace the default root object, update the distribution
     * configuration and specify the new object.</p> <p>For more information about the
     * default root object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/DefaultRootObject.html">Creating
     * a Default Root Object</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetDefaultRootObject(const Aws::String& value) { m_defaultRootObjectHasBeenSet = true; m_defaultRootObject = value; }

    /**
     * <p>The object that you want CloudFront to request from your origin (for example,
     * <code>index.html</code>) when a viewer requests the root URL for your
     * distribution (<code>https://www.example.com</code>) instead of an object in your
     * distribution (<code>https://www.example.com/product-description.html</code>).
     * Specifying a default root object avoids exposing the contents of your
     * distribution.</p> <p>Specify only the object name, for example,
     * <code>index.html</code>. Don't add a <code>/</code> before the object name.</p>
     * <p>If you don't want to specify a default root object when you create a
     * distribution, include an empty <code>DefaultRootObject</code> element.</p> <p>To
     * delete the default root object from an existing distribution, update the
     * distribution configuration and include an empty <code>DefaultRootObject</code>
     * element.</p> <p>To replace the default root object, update the distribution
     * configuration and specify the new object.</p> <p>For more information about the
     * default root object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/DefaultRootObject.html">Creating
     * a Default Root Object</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetDefaultRootObject(Aws::String&& value) { m_defaultRootObjectHasBeenSet = true; m_defaultRootObject = std::move(value); }

    /**
     * <p>The object that you want CloudFront to request from your origin (for example,
     * <code>index.html</code>) when a viewer requests the root URL for your
     * distribution (<code>https://www.example.com</code>) instead of an object in your
     * distribution (<code>https://www.example.com/product-description.html</code>).
     * Specifying a default root object avoids exposing the contents of your
     * distribution.</p> <p>Specify only the object name, for example,
     * <code>index.html</code>. Don't add a <code>/</code> before the object name.</p>
     * <p>If you don't want to specify a default root object when you create a
     * distribution, include an empty <code>DefaultRootObject</code> element.</p> <p>To
     * delete the default root object from an existing distribution, update the
     * distribution configuration and include an empty <code>DefaultRootObject</code>
     * element.</p> <p>To replace the default root object, update the distribution
     * configuration and specify the new object.</p> <p>For more information about the
     * default root object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/DefaultRootObject.html">Creating
     * a Default Root Object</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetDefaultRootObject(const char* value) { m_defaultRootObjectHasBeenSet = true; m_defaultRootObject.assign(value); }

    /**
     * <p>The object that you want CloudFront to request from your origin (for example,
     * <code>index.html</code>) when a viewer requests the root URL for your
     * distribution (<code>https://www.example.com</code>) instead of an object in your
     * distribution (<code>https://www.example.com/product-description.html</code>).
     * Specifying a default root object avoids exposing the contents of your
     * distribution.</p> <p>Specify only the object name, for example,
     * <code>index.html</code>. Don't add a <code>/</code> before the object name.</p>
     * <p>If you don't want to specify a default root object when you create a
     * distribution, include an empty <code>DefaultRootObject</code> element.</p> <p>To
     * delete the default root object from an existing distribution, update the
     * distribution configuration and include an empty <code>DefaultRootObject</code>
     * element.</p> <p>To replace the default root object, update the distribution
     * configuration and specify the new object.</p> <p>For more information about the
     * default root object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/DefaultRootObject.html">Creating
     * a Default Root Object</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DistributionConfig& WithDefaultRootObject(const Aws::String& value) { SetDefaultRootObject(value); return *this;}

    /**
     * <p>The object that you want CloudFront to request from your origin (for example,
     * <code>index.html</code>) when a viewer requests the root URL for your
     * distribution (<code>https://www.example.com</code>) instead of an object in your
     * distribution (<code>https://www.example.com/product-description.html</code>).
     * Specifying a default root object avoids exposing the contents of your
     * distribution.</p> <p>Specify only the object name, for example,
     * <code>index.html</code>. Don't add a <code>/</code> before the object name.</p>
     * <p>If you don't want to specify a default root object when you create a
     * distribution, include an empty <code>DefaultRootObject</code> element.</p> <p>To
     * delete the default root object from an existing distribution, update the
     * distribution configuration and include an empty <code>DefaultRootObject</code>
     * element.</p> <p>To replace the default root object, update the distribution
     * configuration and specify the new object.</p> <p>For more information about the
     * default root object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/DefaultRootObject.html">Creating
     * a Default Root Object</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DistributionConfig& WithDefaultRootObject(Aws::String&& value) { SetDefaultRootObject(std::move(value)); return *this;}

    /**
     * <p>The object that you want CloudFront to request from your origin (for example,
     * <code>index.html</code>) when a viewer requests the root URL for your
     * distribution (<code>https://www.example.com</code>) instead of an object in your
     * distribution (<code>https://www.example.com/product-description.html</code>).
     * Specifying a default root object avoids exposing the contents of your
     * distribution.</p> <p>Specify only the object name, for example,
     * <code>index.html</code>. Don't add a <code>/</code> before the object name.</p>
     * <p>If you don't want to specify a default root object when you create a
     * distribution, include an empty <code>DefaultRootObject</code> element.</p> <p>To
     * delete the default root object from an existing distribution, update the
     * distribution configuration and include an empty <code>DefaultRootObject</code>
     * element.</p> <p>To replace the default root object, update the distribution
     * configuration and specify the new object.</p> <p>For more information about the
     * default root object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/DefaultRootObject.html">Creating
     * a Default Root Object</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DistributionConfig& WithDefaultRootObject(const char* value) { SetDefaultRootObject(value); return *this;}


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
    inline DistributionConfig& WithOrigins(const Origins& value) { SetOrigins(value); return *this;}

    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline DistributionConfig& WithOrigins(Origins&& value) { SetOrigins(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline const OriginGroups& GetOriginGroups() const{ return m_originGroups; }

    /**
     * <p>A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline bool OriginGroupsHasBeenSet() const { return m_originGroupsHasBeenSet; }

    /**
     * <p>A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline void SetOriginGroups(const OriginGroups& value) { m_originGroupsHasBeenSet = true; m_originGroups = value; }

    /**
     * <p>A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline void SetOriginGroups(OriginGroups&& value) { m_originGroupsHasBeenSet = true; m_originGroups = std::move(value); }

    /**
     * <p>A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline DistributionConfig& WithOriginGroups(const OriginGroups& value) { SetOriginGroups(value); return *this;}

    /**
     * <p>A complex type that contains information about origin groups for this
     * distribution.</p>
     */
    inline DistributionConfig& WithOriginGroups(OriginGroups&& value) { SetOriginGroups(std::move(value)); return *this;}


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
    inline DistributionConfig& WithDefaultCacheBehavior(const DefaultCacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}

    /**
     * <p>A complex type that describes the default cache behavior if you don't specify
     * a <code>CacheBehavior</code> element or if files don't match any of the values
     * of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You must
     * create exactly one default cache behavior.</p>
     */
    inline DistributionConfig& WithDefaultCacheBehavior(DefaultCacheBehavior&& value) { SetDefaultCacheBehavior(std::move(value)); return *this;}


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
    inline DistributionConfig& WithCacheBehaviors(const CacheBehaviors& value) { SetCacheBehaviors(value); return *this;}

    /**
     * <p>A complex type that contains zero or more <code>CacheBehavior</code>
     * elements.</p>
     */
    inline DistributionConfig& WithCacheBehaviors(CacheBehaviors&& value) { SetCacheBehaviors(std::move(value)); return *this;}


    /**
     * <p>A complex type that controls the following:</p> <ul> <li> <p>Whether
     * CloudFront replaces HTTP status codes in the 4xx and 5xx range with custom error
     * messages before returning the response to the viewer.</p> </li> <li> <p>How long
     * CloudFront caches HTTP status codes in the 4xx and 5xx range.</p> </li> </ul>
     * <p>For more information about custom error pages, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
     * Error Responses</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const CustomErrorResponses& GetCustomErrorResponses() const{ return m_customErrorResponses; }

    /**
     * <p>A complex type that controls the following:</p> <ul> <li> <p>Whether
     * CloudFront replaces HTTP status codes in the 4xx and 5xx range with custom error
     * messages before returning the response to the viewer.</p> </li> <li> <p>How long
     * CloudFront caches HTTP status codes in the 4xx and 5xx range.</p> </li> </ul>
     * <p>For more information about custom error pages, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
     * Error Responses</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool CustomErrorResponsesHasBeenSet() const { return m_customErrorResponsesHasBeenSet; }

    /**
     * <p>A complex type that controls the following:</p> <ul> <li> <p>Whether
     * CloudFront replaces HTTP status codes in the 4xx and 5xx range with custom error
     * messages before returning the response to the viewer.</p> </li> <li> <p>How long
     * CloudFront caches HTTP status codes in the 4xx and 5xx range.</p> </li> </ul>
     * <p>For more information about custom error pages, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
     * Error Responses</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetCustomErrorResponses(const CustomErrorResponses& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = value; }

    /**
     * <p>A complex type that controls the following:</p> <ul> <li> <p>Whether
     * CloudFront replaces HTTP status codes in the 4xx and 5xx range with custom error
     * messages before returning the response to the viewer.</p> </li> <li> <p>How long
     * CloudFront caches HTTP status codes in the 4xx and 5xx range.</p> </li> </ul>
     * <p>For more information about custom error pages, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
     * Error Responses</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetCustomErrorResponses(CustomErrorResponses&& value) { m_customErrorResponsesHasBeenSet = true; m_customErrorResponses = std::move(value); }

    /**
     * <p>A complex type that controls the following:</p> <ul> <li> <p>Whether
     * CloudFront replaces HTTP status codes in the 4xx and 5xx range with custom error
     * messages before returning the response to the viewer.</p> </li> <li> <p>How long
     * CloudFront caches HTTP status codes in the 4xx and 5xx range.</p> </li> </ul>
     * <p>For more information about custom error pages, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
     * Error Responses</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DistributionConfig& WithCustomErrorResponses(const CustomErrorResponses& value) { SetCustomErrorResponses(value); return *this;}

    /**
     * <p>A complex type that controls the following:</p> <ul> <li> <p>Whether
     * CloudFront replaces HTTP status codes in the 4xx and 5xx range with custom error
     * messages before returning the response to the viewer.</p> </li> <li> <p>How long
     * CloudFront caches HTTP status codes in the 4xx and 5xx range.</p> </li> </ul>
     * <p>For more information about custom error pages, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
     * Error Responses</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DistributionConfig& WithCustomErrorResponses(CustomErrorResponses&& value) { SetCustomErrorResponses(std::move(value)); return *this;}


    /**
     * <p>A comment to describe the distribution. The comment cannot be longer than 128
     * characters.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A comment to describe the distribution. The comment cannot be longer than 128
     * characters.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A comment to describe the distribution. The comment cannot be longer than 128
     * characters.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A comment to describe the distribution. The comment cannot be longer than 128
     * characters.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A comment to describe the distribution. The comment cannot be longer than 128
     * characters.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A comment to describe the distribution. The comment cannot be longer than 128
     * characters.</p>
     */
    inline DistributionConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment to describe the distribution. The comment cannot be longer than 128
     * characters.</p>
     */
    inline DistributionConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment to describe the distribution. The comment cannot be longer than 128
     * characters.</p>
     */
    inline DistributionConfig& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p> <p>For more information about logging, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/AccessLogs.html">Access
     * Logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const LoggingConfig& GetLogging() const{ return m_logging; }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p> <p>For more information about logging, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/AccessLogs.html">Access
     * Logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p> <p>For more information about logging, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/AccessLogs.html">Access
     * Logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetLogging(const LoggingConfig& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p> <p>For more information about logging, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/AccessLogs.html">Access
     * Logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetLogging(LoggingConfig&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p> <p>For more information about logging, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/AccessLogs.html">Access
     * Logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DistributionConfig& WithLogging(const LoggingConfig& value) { SetLogging(value); return *this;}

    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p> <p>For more information about logging, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/AccessLogs.html">Access
     * Logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DistributionConfig& WithLogging(LoggingConfig&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>The price class that corresponds with the maximum price that you want to pay
     * for CloudFront service. If you specify <code>PriceClass_All</code>, CloudFront
     * responds to requests for your objects from all CloudFront edge locations.</p>
     * <p>If you specify a price class other than <code>PriceClass_All</code>,
     * CloudFront serves your objects from the CloudFront edge location that has the
     * lowest latency among the edge locations in your price class. Viewers who are in
     * or near regions that are excluded from your specified price class may encounter
     * slower performance.</p> <p>For more information about price classes, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PriceClass.html">Choosing
     * the Price Class for a CloudFront Distribution</a> in the <i>Amazon CloudFront
     * Developer Guide</i>. For information about CloudFront pricing, including how
     * price classes (such as Price Class 100) map to CloudFront regions, see <a
     * href="http://aws.amazon.com/cloudfront/pricing/">Amazon CloudFront
     * Pricing</a>.</p>
     */
    inline const PriceClass& GetPriceClass() const{ return m_priceClass; }

    /**
     * <p>The price class that corresponds with the maximum price that you want to pay
     * for CloudFront service. If you specify <code>PriceClass_All</code>, CloudFront
     * responds to requests for your objects from all CloudFront edge locations.</p>
     * <p>If you specify a price class other than <code>PriceClass_All</code>,
     * CloudFront serves your objects from the CloudFront edge location that has the
     * lowest latency among the edge locations in your price class. Viewers who are in
     * or near regions that are excluded from your specified price class may encounter
     * slower performance.</p> <p>For more information about price classes, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PriceClass.html">Choosing
     * the Price Class for a CloudFront Distribution</a> in the <i>Amazon CloudFront
     * Developer Guide</i>. For information about CloudFront pricing, including how
     * price classes (such as Price Class 100) map to CloudFront regions, see <a
     * href="http://aws.amazon.com/cloudfront/pricing/">Amazon CloudFront
     * Pricing</a>.</p>
     */
    inline bool PriceClassHasBeenSet() const { return m_priceClassHasBeenSet; }

    /**
     * <p>The price class that corresponds with the maximum price that you want to pay
     * for CloudFront service. If you specify <code>PriceClass_All</code>, CloudFront
     * responds to requests for your objects from all CloudFront edge locations.</p>
     * <p>If you specify a price class other than <code>PriceClass_All</code>,
     * CloudFront serves your objects from the CloudFront edge location that has the
     * lowest latency among the edge locations in your price class. Viewers who are in
     * or near regions that are excluded from your specified price class may encounter
     * slower performance.</p> <p>For more information about price classes, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PriceClass.html">Choosing
     * the Price Class for a CloudFront Distribution</a> in the <i>Amazon CloudFront
     * Developer Guide</i>. For information about CloudFront pricing, including how
     * price classes (such as Price Class 100) map to CloudFront regions, see <a
     * href="http://aws.amazon.com/cloudfront/pricing/">Amazon CloudFront
     * Pricing</a>.</p>
     */
    inline void SetPriceClass(const PriceClass& value) { m_priceClassHasBeenSet = true; m_priceClass = value; }

    /**
     * <p>The price class that corresponds with the maximum price that you want to pay
     * for CloudFront service. If you specify <code>PriceClass_All</code>, CloudFront
     * responds to requests for your objects from all CloudFront edge locations.</p>
     * <p>If you specify a price class other than <code>PriceClass_All</code>,
     * CloudFront serves your objects from the CloudFront edge location that has the
     * lowest latency among the edge locations in your price class. Viewers who are in
     * or near regions that are excluded from your specified price class may encounter
     * slower performance.</p> <p>For more information about price classes, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PriceClass.html">Choosing
     * the Price Class for a CloudFront Distribution</a> in the <i>Amazon CloudFront
     * Developer Guide</i>. For information about CloudFront pricing, including how
     * price classes (such as Price Class 100) map to CloudFront regions, see <a
     * href="http://aws.amazon.com/cloudfront/pricing/">Amazon CloudFront
     * Pricing</a>.</p>
     */
    inline void SetPriceClass(PriceClass&& value) { m_priceClassHasBeenSet = true; m_priceClass = std::move(value); }

    /**
     * <p>The price class that corresponds with the maximum price that you want to pay
     * for CloudFront service. If you specify <code>PriceClass_All</code>, CloudFront
     * responds to requests for your objects from all CloudFront edge locations.</p>
     * <p>If you specify a price class other than <code>PriceClass_All</code>,
     * CloudFront serves your objects from the CloudFront edge location that has the
     * lowest latency among the edge locations in your price class. Viewers who are in
     * or near regions that are excluded from your specified price class may encounter
     * slower performance.</p> <p>For more information about price classes, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PriceClass.html">Choosing
     * the Price Class for a CloudFront Distribution</a> in the <i>Amazon CloudFront
     * Developer Guide</i>. For information about CloudFront pricing, including how
     * price classes (such as Price Class 100) map to CloudFront regions, see <a
     * href="http://aws.amazon.com/cloudfront/pricing/">Amazon CloudFront
     * Pricing</a>.</p>
     */
    inline DistributionConfig& WithPriceClass(const PriceClass& value) { SetPriceClass(value); return *this;}

    /**
     * <p>The price class that corresponds with the maximum price that you want to pay
     * for CloudFront service. If you specify <code>PriceClass_All</code>, CloudFront
     * responds to requests for your objects from all CloudFront edge locations.</p>
     * <p>If you specify a price class other than <code>PriceClass_All</code>,
     * CloudFront serves your objects from the CloudFront edge location that has the
     * lowest latency among the edge locations in your price class. Viewers who are in
     * or near regions that are excluded from your specified price class may encounter
     * slower performance.</p> <p>For more information about price classes, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PriceClass.html">Choosing
     * the Price Class for a CloudFront Distribution</a> in the <i>Amazon CloudFront
     * Developer Guide</i>. For information about CloudFront pricing, including how
     * price classes (such as Price Class 100) map to CloudFront regions, see <a
     * href="http://aws.amazon.com/cloudfront/pricing/">Amazon CloudFront
     * Pricing</a>.</p>
     */
    inline DistributionConfig& WithPriceClass(PriceClass&& value) { SetPriceClass(std::move(value)); return *this;}


    /**
     * <p>From this field, you can enable or disable the selected distribution.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>From this field, you can enable or disable the selected distribution.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>From this field, you can enable or disable the selected distribution.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>From this field, you can enable or disable the selected distribution.</p>
     */
    inline DistributionConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>A complex type that determines the distribution's SSL/TLS configuration for
     * communicating with viewers.</p>
     */
    inline const ViewerCertificate& GetViewerCertificate() const{ return m_viewerCertificate; }

    /**
     * <p>A complex type that determines the distribution's SSL/TLS configuration for
     * communicating with viewers.</p>
     */
    inline bool ViewerCertificateHasBeenSet() const { return m_viewerCertificateHasBeenSet; }

    /**
     * <p>A complex type that determines the distribution's SSL/TLS configuration for
     * communicating with viewers.</p>
     */
    inline void SetViewerCertificate(const ViewerCertificate& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = value; }

    /**
     * <p>A complex type that determines the distribution's SSL/TLS configuration for
     * communicating with viewers.</p>
     */
    inline void SetViewerCertificate(ViewerCertificate&& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = std::move(value); }

    /**
     * <p>A complex type that determines the distribution's SSL/TLS configuration for
     * communicating with viewers.</p>
     */
    inline DistributionConfig& WithViewerCertificate(const ViewerCertificate& value) { SetViewerCertificate(value); return *this;}

    /**
     * <p>A complex type that determines the distribution's SSL/TLS configuration for
     * communicating with viewers.</p>
     */
    inline DistributionConfig& WithViewerCertificate(ViewerCertificate&& value) { SetViewerCertificate(std::move(value)); return *this;}


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
    inline DistributionConfig& WithRestrictions(const Restrictions& value) { SetRestrictions(value); return *this;}

    /**
     * <p>A complex type that identifies ways in which you want to restrict
     * distribution of your content.</p>
     */
    inline DistributionConfig& WithRestrictions(Restrictions&& value) { SetRestrictions(std::move(value)); return *this;}


    /**
     * <p>A unique identifier that specifies the WAF web ACL, if any, to associate with
     * this distribution. To specify a web ACL created using the latest version of WAF,
     * use the ACL ARN, for example
     * <code>arn:aws:wafv2:us-east-1:123456789012:global/webacl/ExampleWebACL/473e64fd-f30b-4765-81a0-62ad96dd167a</code>.
     * To specify a web ACL created using WAF Classic, use the ACL ID, for example
     * <code>473e64fd-f30b-4765-81a0-62ad96dd167a</code>.</p> <p>WAF is a web
     * application firewall that lets you monitor the HTTP and HTTPS requests that are
     * forwarded to CloudFront, and lets you control access to your content. Based on
     * conditions that you specify, such as the IP addresses that requests originate
     * from or the values of query strings, CloudFront responds to requests either with
     * the requested content or with an HTTP 403 status code (Forbidden). You can also
     * configure CloudFront to return a custom error page when a request is blocked.
     * For more information about WAF, see the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * <p>A unique identifier that specifies the WAF web ACL, if any, to associate with
     * this distribution. To specify a web ACL created using the latest version of WAF,
     * use the ACL ARN, for example
     * <code>arn:aws:wafv2:us-east-1:123456789012:global/webacl/ExampleWebACL/473e64fd-f30b-4765-81a0-62ad96dd167a</code>.
     * To specify a web ACL created using WAF Classic, use the ACL ID, for example
     * <code>473e64fd-f30b-4765-81a0-62ad96dd167a</code>.</p> <p>WAF is a web
     * application firewall that lets you monitor the HTTP and HTTPS requests that are
     * forwarded to CloudFront, and lets you control access to your content. Based on
     * conditions that you specify, such as the IP addresses that requests originate
     * from or the values of query strings, CloudFront responds to requests either with
     * the requested content or with an HTTP 403 status code (Forbidden). You can also
     * configure CloudFront to return a custom error page when a request is blocked.
     * For more information about WAF, see the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF
     * Developer Guide</a>.</p>
     */
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }

    /**
     * <p>A unique identifier that specifies the WAF web ACL, if any, to associate with
     * this distribution. To specify a web ACL created using the latest version of WAF,
     * use the ACL ARN, for example
     * <code>arn:aws:wafv2:us-east-1:123456789012:global/webacl/ExampleWebACL/473e64fd-f30b-4765-81a0-62ad96dd167a</code>.
     * To specify a web ACL created using WAF Classic, use the ACL ID, for example
     * <code>473e64fd-f30b-4765-81a0-62ad96dd167a</code>.</p> <p>WAF is a web
     * application firewall that lets you monitor the HTTP and HTTPS requests that are
     * forwarded to CloudFront, and lets you control access to your content. Based on
     * conditions that you specify, such as the IP addresses that requests originate
     * from or the values of query strings, CloudFront responds to requests either with
     * the requested content or with an HTTP 403 status code (Forbidden). You can also
     * configure CloudFront to return a custom error page when a request is blocked.
     * For more information about WAF, see the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF
     * Developer Guide</a>.</p>
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * <p>A unique identifier that specifies the WAF web ACL, if any, to associate with
     * this distribution. To specify a web ACL created using the latest version of WAF,
     * use the ACL ARN, for example
     * <code>arn:aws:wafv2:us-east-1:123456789012:global/webacl/ExampleWebACL/473e64fd-f30b-4765-81a0-62ad96dd167a</code>.
     * To specify a web ACL created using WAF Classic, use the ACL ID, for example
     * <code>473e64fd-f30b-4765-81a0-62ad96dd167a</code>.</p> <p>WAF is a web
     * application firewall that lets you monitor the HTTP and HTTPS requests that are
     * forwarded to CloudFront, and lets you control access to your content. Based on
     * conditions that you specify, such as the IP addresses that requests originate
     * from or the values of query strings, CloudFront responds to requests either with
     * the requested content or with an HTTP 403 status code (Forbidden). You can also
     * configure CloudFront to return a custom error page when a request is blocked.
     * For more information about WAF, see the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF
     * Developer Guide</a>.</p>
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }

    /**
     * <p>A unique identifier that specifies the WAF web ACL, if any, to associate with
     * this distribution. To specify a web ACL created using the latest version of WAF,
     * use the ACL ARN, for example
     * <code>arn:aws:wafv2:us-east-1:123456789012:global/webacl/ExampleWebACL/473e64fd-f30b-4765-81a0-62ad96dd167a</code>.
     * To specify a web ACL created using WAF Classic, use the ACL ID, for example
     * <code>473e64fd-f30b-4765-81a0-62ad96dd167a</code>.</p> <p>WAF is a web
     * application firewall that lets you monitor the HTTP and HTTPS requests that are
     * forwarded to CloudFront, and lets you control access to your content. Based on
     * conditions that you specify, such as the IP addresses that requests originate
     * from or the values of query strings, CloudFront responds to requests either with
     * the requested content or with an HTTP 403 status code (Forbidden). You can also
     * configure CloudFront to return a custom error page when a request is blocked.
     * For more information about WAF, see the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF
     * Developer Guide</a>.</p>
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * <p>A unique identifier that specifies the WAF web ACL, if any, to associate with
     * this distribution. To specify a web ACL created using the latest version of WAF,
     * use the ACL ARN, for example
     * <code>arn:aws:wafv2:us-east-1:123456789012:global/webacl/ExampleWebACL/473e64fd-f30b-4765-81a0-62ad96dd167a</code>.
     * To specify a web ACL created using WAF Classic, use the ACL ID, for example
     * <code>473e64fd-f30b-4765-81a0-62ad96dd167a</code>.</p> <p>WAF is a web
     * application firewall that lets you monitor the HTTP and HTTPS requests that are
     * forwarded to CloudFront, and lets you control access to your content. Based on
     * conditions that you specify, such as the IP addresses that requests originate
     * from or the values of query strings, CloudFront responds to requests either with
     * the requested content or with an HTTP 403 status code (Forbidden). You can also
     * configure CloudFront to return a custom error page when a request is blocked.
     * For more information about WAF, see the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF
     * Developer Guide</a>.</p>
     */
    inline DistributionConfig& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * <p>A unique identifier that specifies the WAF web ACL, if any, to associate with
     * this distribution. To specify a web ACL created using the latest version of WAF,
     * use the ACL ARN, for example
     * <code>arn:aws:wafv2:us-east-1:123456789012:global/webacl/ExampleWebACL/473e64fd-f30b-4765-81a0-62ad96dd167a</code>.
     * To specify a web ACL created using WAF Classic, use the ACL ID, for example
     * <code>473e64fd-f30b-4765-81a0-62ad96dd167a</code>.</p> <p>WAF is a web
     * application firewall that lets you monitor the HTTP and HTTPS requests that are
     * forwarded to CloudFront, and lets you control access to your content. Based on
     * conditions that you specify, such as the IP addresses that requests originate
     * from or the values of query strings, CloudFront responds to requests either with
     * the requested content or with an HTTP 403 status code (Forbidden). You can also
     * configure CloudFront to return a custom error page when a request is blocked.
     * For more information about WAF, see the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF
     * Developer Guide</a>.</p>
     */
    inline DistributionConfig& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that specifies the WAF web ACL, if any, to associate with
     * this distribution. To specify a web ACL created using the latest version of WAF,
     * use the ACL ARN, for example
     * <code>arn:aws:wafv2:us-east-1:123456789012:global/webacl/ExampleWebACL/473e64fd-f30b-4765-81a0-62ad96dd167a</code>.
     * To specify a web ACL created using WAF Classic, use the ACL ID, for example
     * <code>473e64fd-f30b-4765-81a0-62ad96dd167a</code>.</p> <p>WAF is a web
     * application firewall that lets you monitor the HTTP and HTTPS requests that are
     * forwarded to CloudFront, and lets you control access to your content. Based on
     * conditions that you specify, such as the IP addresses that requests originate
     * from or the values of query strings, CloudFront responds to requests either with
     * the requested content or with an HTTP 403 status code (Forbidden). You can also
     * configure CloudFront to return a custom error page when a request is blocked.
     * For more information about WAF, see the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF
     * Developer Guide</a>.</p>
     */
    inline DistributionConfig& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}


    /**
     * <p>(Optional) Specify the maximum HTTP version(s) that you want viewers to use
     * to communicate with CloudFront. The default value for new web distributions is
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
    inline const HttpVersion& GetHttpVersion() const{ return m_httpVersion; }

    /**
     * <p>(Optional) Specify the maximum HTTP version(s) that you want viewers to use
     * to communicate with CloudFront. The default value for new web distributions is
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
    inline bool HttpVersionHasBeenSet() const { return m_httpVersionHasBeenSet; }

    /**
     * <p>(Optional) Specify the maximum HTTP version(s) that you want viewers to use
     * to communicate with CloudFront. The default value for new web distributions is
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
    inline void SetHttpVersion(const HttpVersion& value) { m_httpVersionHasBeenSet = true; m_httpVersion = value; }

    /**
     * <p>(Optional) Specify the maximum HTTP version(s) that you want viewers to use
     * to communicate with CloudFront. The default value for new web distributions is
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
    inline void SetHttpVersion(HttpVersion&& value) { m_httpVersionHasBeenSet = true; m_httpVersion = std::move(value); }

    /**
     * <p>(Optional) Specify the maximum HTTP version(s) that you want viewers to use
     * to communicate with CloudFront. The default value for new web distributions is
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
    inline DistributionConfig& WithHttpVersion(const HttpVersion& value) { SetHttpVersion(value); return *this;}

    /**
     * <p>(Optional) Specify the maximum HTTP version(s) that you want viewers to use
     * to communicate with CloudFront. The default value for new web distributions is
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
    inline DistributionConfig& WithHttpVersion(HttpVersion&& value) { SetHttpVersion(std::move(value)); return *this;}


    /**
     * <p>If you want CloudFront to respond to IPv6 DNS requests with an IPv6 address
     * for your distribution, specify <code>true</code>. If you specify
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
     * the IP address format of the viewer request.</p>
     */
    inline bool GetIsIPV6Enabled() const{ return m_isIPV6Enabled; }

    /**
     * <p>If you want CloudFront to respond to IPv6 DNS requests with an IPv6 address
     * for your distribution, specify <code>true</code>. If you specify
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
     * the IP address format of the viewer request.</p>
     */
    inline bool IsIPV6EnabledHasBeenSet() const { return m_isIPV6EnabledHasBeenSet; }

    /**
     * <p>If you want CloudFront to respond to IPv6 DNS requests with an IPv6 address
     * for your distribution, specify <code>true</code>. If you specify
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
     * the IP address format of the viewer request.</p>
     */
    inline void SetIsIPV6Enabled(bool value) { m_isIPV6EnabledHasBeenSet = true; m_isIPV6Enabled = value; }

    /**
     * <p>If you want CloudFront to respond to IPv6 DNS requests with an IPv6 address
     * for your distribution, specify <code>true</code>. If you specify
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
     * the IP address format of the viewer request.</p>
     */
    inline DistributionConfig& WithIsIPV6Enabled(bool value) { SetIsIPV6Enabled(value); return *this;}


    /**
     * <p>The identifier of a continuous deployment policy. For more information, see
     * <code>CreateContinuousDeploymentPolicy</code>.</p>
     */
    inline const Aws::String& GetContinuousDeploymentPolicyId() const{ return m_continuousDeploymentPolicyId; }

    /**
     * <p>The identifier of a continuous deployment policy. For more information, see
     * <code>CreateContinuousDeploymentPolicy</code>.</p>
     */
    inline bool ContinuousDeploymentPolicyIdHasBeenSet() const { return m_continuousDeploymentPolicyIdHasBeenSet; }

    /**
     * <p>The identifier of a continuous deployment policy. For more information, see
     * <code>CreateContinuousDeploymentPolicy</code>.</p>
     */
    inline void SetContinuousDeploymentPolicyId(const Aws::String& value) { m_continuousDeploymentPolicyIdHasBeenSet = true; m_continuousDeploymentPolicyId = value; }

    /**
     * <p>The identifier of a continuous deployment policy. For more information, see
     * <code>CreateContinuousDeploymentPolicy</code>.</p>
     */
    inline void SetContinuousDeploymentPolicyId(Aws::String&& value) { m_continuousDeploymentPolicyIdHasBeenSet = true; m_continuousDeploymentPolicyId = std::move(value); }

    /**
     * <p>The identifier of a continuous deployment policy. For more information, see
     * <code>CreateContinuousDeploymentPolicy</code>.</p>
     */
    inline void SetContinuousDeploymentPolicyId(const char* value) { m_continuousDeploymentPolicyIdHasBeenSet = true; m_continuousDeploymentPolicyId.assign(value); }

    /**
     * <p>The identifier of a continuous deployment policy. For more information, see
     * <code>CreateContinuousDeploymentPolicy</code>.</p>
     */
    inline DistributionConfig& WithContinuousDeploymentPolicyId(const Aws::String& value) { SetContinuousDeploymentPolicyId(value); return *this;}

    /**
     * <p>The identifier of a continuous deployment policy. For more information, see
     * <code>CreateContinuousDeploymentPolicy</code>.</p>
     */
    inline DistributionConfig& WithContinuousDeploymentPolicyId(Aws::String&& value) { SetContinuousDeploymentPolicyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a continuous deployment policy. For more information, see
     * <code>CreateContinuousDeploymentPolicy</code>.</p>
     */
    inline DistributionConfig& WithContinuousDeploymentPolicyId(const char* value) { SetContinuousDeploymentPolicyId(value); return *this;}


    /**
     * <p>A Boolean that indicates whether this is a staging distribution. When this
     * value is <code>true</code>, this is a staging distribution. When this value is
     * <code>false</code>, this is not a staging distribution.</p>
     */
    inline bool GetStaging() const{ return m_staging; }

    /**
     * <p>A Boolean that indicates whether this is a staging distribution. When this
     * value is <code>true</code>, this is a staging distribution. When this value is
     * <code>false</code>, this is not a staging distribution.</p>
     */
    inline bool StagingHasBeenSet() const { return m_stagingHasBeenSet; }

    /**
     * <p>A Boolean that indicates whether this is a staging distribution. When this
     * value is <code>true</code>, this is a staging distribution. When this value is
     * <code>false</code>, this is not a staging distribution.</p>
     */
    inline void SetStaging(bool value) { m_stagingHasBeenSet = true; m_staging = value; }

    /**
     * <p>A Boolean that indicates whether this is a staging distribution. When this
     * value is <code>true</code>, this is a staging distribution. When this value is
     * <code>false</code>, this is not a staging distribution.</p>
     */
    inline DistributionConfig& WithStaging(bool value) { SetStaging(value); return *this;}

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

    Aws::String m_continuousDeploymentPolicyId;
    bool m_continuousDeploymentPolicyIdHasBeenSet = false;

    bool m_staging;
    bool m_stagingHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
