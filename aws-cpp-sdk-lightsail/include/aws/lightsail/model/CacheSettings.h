/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/CookieObject.h>
#include <aws/lightsail/model/HeaderObject.h>
#include <aws/lightsail/model/QueryStringObject.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the cache settings of an Amazon Lightsail content delivery network
   * (CDN) distribution.</p> <p>These settings apply only to your distribution's
   * <code>cacheBehaviors</code> (including the <code>defaultCacheBehavior</code>)
   * that have a <code>behavior</code> of <code>cache</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CacheSettings">AWS
   * API Reference</a></p>
   */
  class CacheSettings
  {
  public:
    AWS_LIGHTSAIL_API CacheSettings();
    AWS_LIGHTSAIL_API CacheSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API CacheSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the content has been updated.</p>  <p>The value specified applies
     * only when the origin does not add HTTP headers such as <code>Cache-Control
     * max-age</code>, <code>Cache-Control s-maxage</code>, and <code>Expires</code> to
     * objects.</p> 
     */
    inline long long GetDefaultTTL() const{ return m_defaultTTL; }

    /**
     * <p>The default amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the content has been updated.</p>  <p>The value specified applies
     * only when the origin does not add HTTP headers such as <code>Cache-Control
     * max-age</code>, <code>Cache-Control s-maxage</code>, and <code>Expires</code> to
     * objects.</p> 
     */
    inline bool DefaultTTLHasBeenSet() const { return m_defaultTTLHasBeenSet; }

    /**
     * <p>The default amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the content has been updated.</p>  <p>The value specified applies
     * only when the origin does not add HTTP headers such as <code>Cache-Control
     * max-age</code>, <code>Cache-Control s-maxage</code>, and <code>Expires</code> to
     * objects.</p> 
     */
    inline void SetDefaultTTL(long long value) { m_defaultTTLHasBeenSet = true; m_defaultTTL = value; }

    /**
     * <p>The default amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the content has been updated.</p>  <p>The value specified applies
     * only when the origin does not add HTTP headers such as <code>Cache-Control
     * max-age</code>, <code>Cache-Control s-maxage</code>, and <code>Expires</code> to
     * objects.</p> 
     */
    inline CacheSettings& WithDefaultTTL(long long value) { SetDefaultTTL(value); return *this;}


    /**
     * <p>The minimum amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the object has been updated.</p> <p>A value of <code>0</code> must be
     * specified for <code>minimumTTL</code> if the distribution is configured to
     * forward all headers to the origin.</p>
     */
    inline long long GetMinimumTTL() const{ return m_minimumTTL; }

    /**
     * <p>The minimum amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the object has been updated.</p> <p>A value of <code>0</code> must be
     * specified for <code>minimumTTL</code> if the distribution is configured to
     * forward all headers to the origin.</p>
     */
    inline bool MinimumTTLHasBeenSet() const { return m_minimumTTLHasBeenSet; }

    /**
     * <p>The minimum amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the object has been updated.</p> <p>A value of <code>0</code> must be
     * specified for <code>minimumTTL</code> if the distribution is configured to
     * forward all headers to the origin.</p>
     */
    inline void SetMinimumTTL(long long value) { m_minimumTTLHasBeenSet = true; m_minimumTTL = value; }

    /**
     * <p>The minimum amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the object has been updated.</p> <p>A value of <code>0</code> must be
     * specified for <code>minimumTTL</code> if the distribution is configured to
     * forward all headers to the origin.</p>
     */
    inline CacheSettings& WithMinimumTTL(long long value) { SetMinimumTTL(value); return *this;}


    /**
     * <p>The maximum amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the object has been updated.</p> <p>The value specified applies only
     * when the origin adds HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects.</p>
     */
    inline long long GetMaximumTTL() const{ return m_maximumTTL; }

    /**
     * <p>The maximum amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the object has been updated.</p> <p>The value specified applies only
     * when the origin adds HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects.</p>
     */
    inline bool MaximumTTLHasBeenSet() const { return m_maximumTTLHasBeenSet; }

    /**
     * <p>The maximum amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the object has been updated.</p> <p>The value specified applies only
     * when the origin adds HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects.</p>
     */
    inline void SetMaximumTTL(long long value) { m_maximumTTLHasBeenSet = true; m_maximumTTL = value; }

    /**
     * <p>The maximum amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the object has been updated.</p> <p>The value specified applies only
     * when the origin adds HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects.</p>
     */
    inline CacheSettings& WithMaximumTTL(long long value) { SetMaximumTTL(value); return *this;}


    /**
     * <p>The HTTP methods that are processed and forwarded to the distribution's
     * origin.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>GET,HEAD</code> - The distribution forwards the <code>GET</code> and
     * <code>HEAD</code> methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> -
     * The distribution forwards the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> <li> <p>
     * <code>GET,HEAD,OPTIONS,PUT,PATCH,POST,DELETE</code> - The distribution forwards
     * the <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PUT</code>,
     * <code>PATCH</code>, <code>POST</code>, and <code>DELETE</code> methods.</p>
     * </li> </ul> <p>If you specify the third option, you might need to restrict
     * access to your distribution's origin so users can't perform operations that you
     * don't want them to. For example, you might not want users to have permission to
     * delete objects from your origin.</p>
     */
    inline const Aws::String& GetAllowedHTTPMethods() const{ return m_allowedHTTPMethods; }

    /**
     * <p>The HTTP methods that are processed and forwarded to the distribution's
     * origin.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>GET,HEAD</code> - The distribution forwards the <code>GET</code> and
     * <code>HEAD</code> methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> -
     * The distribution forwards the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> <li> <p>
     * <code>GET,HEAD,OPTIONS,PUT,PATCH,POST,DELETE</code> - The distribution forwards
     * the <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PUT</code>,
     * <code>PATCH</code>, <code>POST</code>, and <code>DELETE</code> methods.</p>
     * </li> </ul> <p>If you specify the third option, you might need to restrict
     * access to your distribution's origin so users can't perform operations that you
     * don't want them to. For example, you might not want users to have permission to
     * delete objects from your origin.</p>
     */
    inline bool AllowedHTTPMethodsHasBeenSet() const { return m_allowedHTTPMethodsHasBeenSet; }

    /**
     * <p>The HTTP methods that are processed and forwarded to the distribution's
     * origin.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>GET,HEAD</code> - The distribution forwards the <code>GET</code> and
     * <code>HEAD</code> methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> -
     * The distribution forwards the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> <li> <p>
     * <code>GET,HEAD,OPTIONS,PUT,PATCH,POST,DELETE</code> - The distribution forwards
     * the <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PUT</code>,
     * <code>PATCH</code>, <code>POST</code>, and <code>DELETE</code> methods.</p>
     * </li> </ul> <p>If you specify the third option, you might need to restrict
     * access to your distribution's origin so users can't perform operations that you
     * don't want them to. For example, you might not want users to have permission to
     * delete objects from your origin.</p>
     */
    inline void SetAllowedHTTPMethods(const Aws::String& value) { m_allowedHTTPMethodsHasBeenSet = true; m_allowedHTTPMethods = value; }

    /**
     * <p>The HTTP methods that are processed and forwarded to the distribution's
     * origin.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>GET,HEAD</code> - The distribution forwards the <code>GET</code> and
     * <code>HEAD</code> methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> -
     * The distribution forwards the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> <li> <p>
     * <code>GET,HEAD,OPTIONS,PUT,PATCH,POST,DELETE</code> - The distribution forwards
     * the <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PUT</code>,
     * <code>PATCH</code>, <code>POST</code>, and <code>DELETE</code> methods.</p>
     * </li> </ul> <p>If you specify the third option, you might need to restrict
     * access to your distribution's origin so users can't perform operations that you
     * don't want them to. For example, you might not want users to have permission to
     * delete objects from your origin.</p>
     */
    inline void SetAllowedHTTPMethods(Aws::String&& value) { m_allowedHTTPMethodsHasBeenSet = true; m_allowedHTTPMethods = std::move(value); }

    /**
     * <p>The HTTP methods that are processed and forwarded to the distribution's
     * origin.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>GET,HEAD</code> - The distribution forwards the <code>GET</code> and
     * <code>HEAD</code> methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> -
     * The distribution forwards the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> <li> <p>
     * <code>GET,HEAD,OPTIONS,PUT,PATCH,POST,DELETE</code> - The distribution forwards
     * the <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PUT</code>,
     * <code>PATCH</code>, <code>POST</code>, and <code>DELETE</code> methods.</p>
     * </li> </ul> <p>If you specify the third option, you might need to restrict
     * access to your distribution's origin so users can't perform operations that you
     * don't want them to. For example, you might not want users to have permission to
     * delete objects from your origin.</p>
     */
    inline void SetAllowedHTTPMethods(const char* value) { m_allowedHTTPMethodsHasBeenSet = true; m_allowedHTTPMethods.assign(value); }

    /**
     * <p>The HTTP methods that are processed and forwarded to the distribution's
     * origin.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>GET,HEAD</code> - The distribution forwards the <code>GET</code> and
     * <code>HEAD</code> methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> -
     * The distribution forwards the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> <li> <p>
     * <code>GET,HEAD,OPTIONS,PUT,PATCH,POST,DELETE</code> - The distribution forwards
     * the <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PUT</code>,
     * <code>PATCH</code>, <code>POST</code>, and <code>DELETE</code> methods.</p>
     * </li> </ul> <p>If you specify the third option, you might need to restrict
     * access to your distribution's origin so users can't perform operations that you
     * don't want them to. For example, you might not want users to have permission to
     * delete objects from your origin.</p>
     */
    inline CacheSettings& WithAllowedHTTPMethods(const Aws::String& value) { SetAllowedHTTPMethods(value); return *this;}

    /**
     * <p>The HTTP methods that are processed and forwarded to the distribution's
     * origin.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>GET,HEAD</code> - The distribution forwards the <code>GET</code> and
     * <code>HEAD</code> methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> -
     * The distribution forwards the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> <li> <p>
     * <code>GET,HEAD,OPTIONS,PUT,PATCH,POST,DELETE</code> - The distribution forwards
     * the <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PUT</code>,
     * <code>PATCH</code>, <code>POST</code>, and <code>DELETE</code> methods.</p>
     * </li> </ul> <p>If you specify the third option, you might need to restrict
     * access to your distribution's origin so users can't perform operations that you
     * don't want them to. For example, you might not want users to have permission to
     * delete objects from your origin.</p>
     */
    inline CacheSettings& WithAllowedHTTPMethods(Aws::String&& value) { SetAllowedHTTPMethods(std::move(value)); return *this;}

    /**
     * <p>The HTTP methods that are processed and forwarded to the distribution's
     * origin.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>GET,HEAD</code> - The distribution forwards the <code>GET</code> and
     * <code>HEAD</code> methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> -
     * The distribution forwards the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> <li> <p>
     * <code>GET,HEAD,OPTIONS,PUT,PATCH,POST,DELETE</code> - The distribution forwards
     * the <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PUT</code>,
     * <code>PATCH</code>, <code>POST</code>, and <code>DELETE</code> methods.</p>
     * </li> </ul> <p>If you specify the third option, you might need to restrict
     * access to your distribution's origin so users can't perform operations that you
     * don't want them to. For example, you might not want users to have permission to
     * delete objects from your origin.</p>
     */
    inline CacheSettings& WithAllowedHTTPMethods(const char* value) { SetAllowedHTTPMethods(value); return *this;}


    /**
     * <p>The HTTP method responses that are cached by your distribution.</p> <p>You
     * can specify the following options:</p> <ul> <li> <p> <code>GET,HEAD</code> - The
     * distribution caches responses to the <code>GET</code> and <code>HEAD</code>
     * methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> - The distribution
     * caches responses to the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> </ul>
     */
    inline const Aws::String& GetCachedHTTPMethods() const{ return m_cachedHTTPMethods; }

    /**
     * <p>The HTTP method responses that are cached by your distribution.</p> <p>You
     * can specify the following options:</p> <ul> <li> <p> <code>GET,HEAD</code> - The
     * distribution caches responses to the <code>GET</code> and <code>HEAD</code>
     * methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> - The distribution
     * caches responses to the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> </ul>
     */
    inline bool CachedHTTPMethodsHasBeenSet() const { return m_cachedHTTPMethodsHasBeenSet; }

    /**
     * <p>The HTTP method responses that are cached by your distribution.</p> <p>You
     * can specify the following options:</p> <ul> <li> <p> <code>GET,HEAD</code> - The
     * distribution caches responses to the <code>GET</code> and <code>HEAD</code>
     * methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> - The distribution
     * caches responses to the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> </ul>
     */
    inline void SetCachedHTTPMethods(const Aws::String& value) { m_cachedHTTPMethodsHasBeenSet = true; m_cachedHTTPMethods = value; }

    /**
     * <p>The HTTP method responses that are cached by your distribution.</p> <p>You
     * can specify the following options:</p> <ul> <li> <p> <code>GET,HEAD</code> - The
     * distribution caches responses to the <code>GET</code> and <code>HEAD</code>
     * methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> - The distribution
     * caches responses to the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> </ul>
     */
    inline void SetCachedHTTPMethods(Aws::String&& value) { m_cachedHTTPMethodsHasBeenSet = true; m_cachedHTTPMethods = std::move(value); }

    /**
     * <p>The HTTP method responses that are cached by your distribution.</p> <p>You
     * can specify the following options:</p> <ul> <li> <p> <code>GET,HEAD</code> - The
     * distribution caches responses to the <code>GET</code> and <code>HEAD</code>
     * methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> - The distribution
     * caches responses to the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> </ul>
     */
    inline void SetCachedHTTPMethods(const char* value) { m_cachedHTTPMethodsHasBeenSet = true; m_cachedHTTPMethods.assign(value); }

    /**
     * <p>The HTTP method responses that are cached by your distribution.</p> <p>You
     * can specify the following options:</p> <ul> <li> <p> <code>GET,HEAD</code> - The
     * distribution caches responses to the <code>GET</code> and <code>HEAD</code>
     * methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> - The distribution
     * caches responses to the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> </ul>
     */
    inline CacheSettings& WithCachedHTTPMethods(const Aws::String& value) { SetCachedHTTPMethods(value); return *this;}

    /**
     * <p>The HTTP method responses that are cached by your distribution.</p> <p>You
     * can specify the following options:</p> <ul> <li> <p> <code>GET,HEAD</code> - The
     * distribution caches responses to the <code>GET</code> and <code>HEAD</code>
     * methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> - The distribution
     * caches responses to the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> </ul>
     */
    inline CacheSettings& WithCachedHTTPMethods(Aws::String&& value) { SetCachedHTTPMethods(std::move(value)); return *this;}

    /**
     * <p>The HTTP method responses that are cached by your distribution.</p> <p>You
     * can specify the following options:</p> <ul> <li> <p> <code>GET,HEAD</code> - The
     * distribution caches responses to the <code>GET</code> and <code>HEAD</code>
     * methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> - The distribution
     * caches responses to the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> </ul>
     */
    inline CacheSettings& WithCachedHTTPMethods(const char* value) { SetCachedHTTPMethods(value); return *this;}


    /**
     * <p>An object that describes the cookies that are forwarded to the origin. Your
     * content is cached based on the cookies that are forwarded.</p>
     */
    inline const CookieObject& GetForwardedCookies() const{ return m_forwardedCookies; }

    /**
     * <p>An object that describes the cookies that are forwarded to the origin. Your
     * content is cached based on the cookies that are forwarded.</p>
     */
    inline bool ForwardedCookiesHasBeenSet() const { return m_forwardedCookiesHasBeenSet; }

    /**
     * <p>An object that describes the cookies that are forwarded to the origin. Your
     * content is cached based on the cookies that are forwarded.</p>
     */
    inline void SetForwardedCookies(const CookieObject& value) { m_forwardedCookiesHasBeenSet = true; m_forwardedCookies = value; }

    /**
     * <p>An object that describes the cookies that are forwarded to the origin. Your
     * content is cached based on the cookies that are forwarded.</p>
     */
    inline void SetForwardedCookies(CookieObject&& value) { m_forwardedCookiesHasBeenSet = true; m_forwardedCookies = std::move(value); }

    /**
     * <p>An object that describes the cookies that are forwarded to the origin. Your
     * content is cached based on the cookies that are forwarded.</p>
     */
    inline CacheSettings& WithForwardedCookies(const CookieObject& value) { SetForwardedCookies(value); return *this;}

    /**
     * <p>An object that describes the cookies that are forwarded to the origin. Your
     * content is cached based on the cookies that are forwarded.</p>
     */
    inline CacheSettings& WithForwardedCookies(CookieObject&& value) { SetForwardedCookies(std::move(value)); return *this;}


    /**
     * <p>An object that describes the headers that are forwarded to the origin. Your
     * content is cached based on the headers that are forwarded.</p>
     */
    inline const HeaderObject& GetForwardedHeaders() const{ return m_forwardedHeaders; }

    /**
     * <p>An object that describes the headers that are forwarded to the origin. Your
     * content is cached based on the headers that are forwarded.</p>
     */
    inline bool ForwardedHeadersHasBeenSet() const { return m_forwardedHeadersHasBeenSet; }

    /**
     * <p>An object that describes the headers that are forwarded to the origin. Your
     * content is cached based on the headers that are forwarded.</p>
     */
    inline void SetForwardedHeaders(const HeaderObject& value) { m_forwardedHeadersHasBeenSet = true; m_forwardedHeaders = value; }

    /**
     * <p>An object that describes the headers that are forwarded to the origin. Your
     * content is cached based on the headers that are forwarded.</p>
     */
    inline void SetForwardedHeaders(HeaderObject&& value) { m_forwardedHeadersHasBeenSet = true; m_forwardedHeaders = std::move(value); }

    /**
     * <p>An object that describes the headers that are forwarded to the origin. Your
     * content is cached based on the headers that are forwarded.</p>
     */
    inline CacheSettings& WithForwardedHeaders(const HeaderObject& value) { SetForwardedHeaders(value); return *this;}

    /**
     * <p>An object that describes the headers that are forwarded to the origin. Your
     * content is cached based on the headers that are forwarded.</p>
     */
    inline CacheSettings& WithForwardedHeaders(HeaderObject&& value) { SetForwardedHeaders(std::move(value)); return *this;}


    /**
     * <p>An object that describes the query strings that are forwarded to the origin.
     * Your content is cached based on the query strings that are forwarded.</p>
     */
    inline const QueryStringObject& GetForwardedQueryStrings() const{ return m_forwardedQueryStrings; }

    /**
     * <p>An object that describes the query strings that are forwarded to the origin.
     * Your content is cached based on the query strings that are forwarded.</p>
     */
    inline bool ForwardedQueryStringsHasBeenSet() const { return m_forwardedQueryStringsHasBeenSet; }

    /**
     * <p>An object that describes the query strings that are forwarded to the origin.
     * Your content is cached based on the query strings that are forwarded.</p>
     */
    inline void SetForwardedQueryStrings(const QueryStringObject& value) { m_forwardedQueryStringsHasBeenSet = true; m_forwardedQueryStrings = value; }

    /**
     * <p>An object that describes the query strings that are forwarded to the origin.
     * Your content is cached based on the query strings that are forwarded.</p>
     */
    inline void SetForwardedQueryStrings(QueryStringObject&& value) { m_forwardedQueryStringsHasBeenSet = true; m_forwardedQueryStrings = std::move(value); }

    /**
     * <p>An object that describes the query strings that are forwarded to the origin.
     * Your content is cached based on the query strings that are forwarded.</p>
     */
    inline CacheSettings& WithForwardedQueryStrings(const QueryStringObject& value) { SetForwardedQueryStrings(value); return *this;}

    /**
     * <p>An object that describes the query strings that are forwarded to the origin.
     * Your content is cached based on the query strings that are forwarded.</p>
     */
    inline CacheSettings& WithForwardedQueryStrings(QueryStringObject&& value) { SetForwardedQueryStrings(std::move(value)); return *this;}

  private:

    long long m_defaultTTL;
    bool m_defaultTTLHasBeenSet = false;

    long long m_minimumTTL;
    bool m_minimumTTLHasBeenSet = false;

    long long m_maximumTTL;
    bool m_maximumTTLHasBeenSet = false;

    Aws::String m_allowedHTTPMethods;
    bool m_allowedHTTPMethodsHasBeenSet = false;

    Aws::String m_cachedHTTPMethods;
    bool m_cachedHTTPMethodsHasBeenSet = false;

    CookieObject m_forwardedCookies;
    bool m_forwardedCookiesHasBeenSet = false;

    HeaderObject m_forwardedHeaders;
    bool m_forwardedHeadersHasBeenSet = false;

    QueryStringObject m_forwardedQueryStrings;
    bool m_forwardedQueryStringsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
