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
    AWS_LIGHTSAIL_API CacheSettings() = default;
    AWS_LIGHTSAIL_API CacheSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API CacheSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the content has been updated.</p>  <p>The value specified applies
     * only when the origin does not add HTTP headers such as <code>Cache-Control
     * max-age</code>, <code>Cache-Control s-maxage</code>, and <code>Expires</code> to
     * objects.</p> 
     */
    inline long long GetDefaultTTL() const { return m_defaultTTL; }
    inline bool DefaultTTLHasBeenSet() const { return m_defaultTTLHasBeenSet; }
    inline void SetDefaultTTL(long long value) { m_defaultTTLHasBeenSet = true; m_defaultTTL = value; }
    inline CacheSettings& WithDefaultTTL(long long value) { SetDefaultTTL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the object has been updated.</p> <p>A value of <code>0</code> must be
     * specified for <code>minimumTTL</code> if the distribution is configured to
     * forward all headers to the origin.</p>
     */
    inline long long GetMinimumTTL() const { return m_minimumTTL; }
    inline bool MinimumTTLHasBeenSet() const { return m_minimumTTLHasBeenSet; }
    inline void SetMinimumTTL(long long value) { m_minimumTTLHasBeenSet = true; m_minimumTTL = value; }
    inline CacheSettings& WithMinimumTTL(long long value) { SetMinimumTTL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time that objects stay in the distribution's cache
     * before the distribution forwards another request to the origin to determine
     * whether the object has been updated.</p> <p>The value specified applies only
     * when the origin adds HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects.</p>
     */
    inline long long GetMaximumTTL() const { return m_maximumTTL; }
    inline bool MaximumTTLHasBeenSet() const { return m_maximumTTLHasBeenSet; }
    inline void SetMaximumTTL(long long value) { m_maximumTTLHasBeenSet = true; m_maximumTTL = value; }
    inline CacheSettings& WithMaximumTTL(long long value) { SetMaximumTTL(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetAllowedHTTPMethods() const { return m_allowedHTTPMethods; }
    inline bool AllowedHTTPMethodsHasBeenSet() const { return m_allowedHTTPMethodsHasBeenSet; }
    template<typename AllowedHTTPMethodsT = Aws::String>
    void SetAllowedHTTPMethods(AllowedHTTPMethodsT&& value) { m_allowedHTTPMethodsHasBeenSet = true; m_allowedHTTPMethods = std::forward<AllowedHTTPMethodsT>(value); }
    template<typename AllowedHTTPMethodsT = Aws::String>
    CacheSettings& WithAllowedHTTPMethods(AllowedHTTPMethodsT&& value) { SetAllowedHTTPMethods(std::forward<AllowedHTTPMethodsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method responses that are cached by your distribution.</p> <p>You
     * can specify the following options:</p> <ul> <li> <p> <code>GET,HEAD</code> - The
     * distribution caches responses to the <code>GET</code> and <code>HEAD</code>
     * methods.</p> </li> <li> <p> <code>GET,HEAD,OPTIONS</code> - The distribution
     * caches responses to the <code>GET</code>, <code>HEAD</code>, and
     * <code>OPTIONS</code> methods.</p> </li> </ul>
     */
    inline const Aws::String& GetCachedHTTPMethods() const { return m_cachedHTTPMethods; }
    inline bool CachedHTTPMethodsHasBeenSet() const { return m_cachedHTTPMethodsHasBeenSet; }
    template<typename CachedHTTPMethodsT = Aws::String>
    void SetCachedHTTPMethods(CachedHTTPMethodsT&& value) { m_cachedHTTPMethodsHasBeenSet = true; m_cachedHTTPMethods = std::forward<CachedHTTPMethodsT>(value); }
    template<typename CachedHTTPMethodsT = Aws::String>
    CacheSettings& WithCachedHTTPMethods(CachedHTTPMethodsT&& value) { SetCachedHTTPMethods(std::forward<CachedHTTPMethodsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the cookies that are forwarded to the origin. Your
     * content is cached based on the cookies that are forwarded.</p>
     */
    inline const CookieObject& GetForwardedCookies() const { return m_forwardedCookies; }
    inline bool ForwardedCookiesHasBeenSet() const { return m_forwardedCookiesHasBeenSet; }
    template<typename ForwardedCookiesT = CookieObject>
    void SetForwardedCookies(ForwardedCookiesT&& value) { m_forwardedCookiesHasBeenSet = true; m_forwardedCookies = std::forward<ForwardedCookiesT>(value); }
    template<typename ForwardedCookiesT = CookieObject>
    CacheSettings& WithForwardedCookies(ForwardedCookiesT&& value) { SetForwardedCookies(std::forward<ForwardedCookiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the headers that are forwarded to the origin. Your
     * content is cached based on the headers that are forwarded.</p>
     */
    inline const HeaderObject& GetForwardedHeaders() const { return m_forwardedHeaders; }
    inline bool ForwardedHeadersHasBeenSet() const { return m_forwardedHeadersHasBeenSet; }
    template<typename ForwardedHeadersT = HeaderObject>
    void SetForwardedHeaders(ForwardedHeadersT&& value) { m_forwardedHeadersHasBeenSet = true; m_forwardedHeaders = std::forward<ForwardedHeadersT>(value); }
    template<typename ForwardedHeadersT = HeaderObject>
    CacheSettings& WithForwardedHeaders(ForwardedHeadersT&& value) { SetForwardedHeaders(std::forward<ForwardedHeadersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the query strings that are forwarded to the origin.
     * Your content is cached based on the query strings that are forwarded.</p>
     */
    inline const QueryStringObject& GetForwardedQueryStrings() const { return m_forwardedQueryStrings; }
    inline bool ForwardedQueryStringsHasBeenSet() const { return m_forwardedQueryStringsHasBeenSet; }
    template<typename ForwardedQueryStringsT = QueryStringObject>
    void SetForwardedQueryStrings(ForwardedQueryStringsT&& value) { m_forwardedQueryStringsHasBeenSet = true; m_forwardedQueryStrings = std::forward<ForwardedQueryStringsT>(value); }
    template<typename ForwardedQueryStringsT = QueryStringObject>
    CacheSettings& WithForwardedQueryStrings(ForwardedQueryStringsT&& value) { SetForwardedQueryStrings(std::forward<ForwardedQueryStringsT>(value)); return *this;}
    ///@}
  private:

    long long m_defaultTTL{0};
    bool m_defaultTTLHasBeenSet = false;

    long long m_minimumTTL{0};
    bool m_minimumTTLHasBeenSet = false;

    long long m_maximumTTL{0};
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
