/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/ParametersInCacheKeyAndForwardedToOrigin.h>
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
   * <p>A cache policy configuration.</p> <p>This configuration determines the
   * following:</p> <ul> <li> <p>The values that CloudFront includes in the cache
   * key. These values can include HTTP headers, cookies, and URL query strings.
   * CloudFront uses the cache key to find an object in its cache that it can return
   * to the viewer.</p> </li> <li> <p>The default, minimum, and maximum time to live
   * (TTL) values that you want objects to stay in the CloudFront cache.</p>
   *  <p>If your minimum TTL is greater than 0, CloudFront will cache
   * content for at least the duration specified in the cache policy's minimum TTL,
   * even if the <code>Cache-Control: no-cache</code>, <code>no-store</code>, or
   * <code>private</code> directives are present in the origin headers.</p>
   *  </li> </ul> <p>The headers, cookies, and query strings that are
   * included in the cache key are also included in requests that CloudFront sends to
   * the origin. CloudFront sends a request when it can't find a valid object in its
   * cache that matches the request's cache key. If you want to send values to the
   * origin but <i>not</i> include them in the cache key, use
   * <code>OriginRequestPolicy</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CachePolicyConfig">AWS
   * API Reference</a></p>
   */
  class CachePolicyConfig
  {
  public:
    AWS_CLOUDFRONT_API CachePolicyConfig() = default;
    AWS_CLOUDFRONT_API CachePolicyConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CachePolicyConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A comment to describe the cache policy. The comment cannot be longer than 128
     * characters.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    CachePolicyConfig& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name to identify the cache policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CachePolicyConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default amount of time, in seconds, that you want objects to stay in the
     * CloudFront cache before CloudFront sends another request to the origin to see if
     * the object has been updated. CloudFront uses this value as the object's time to
     * live (TTL) only when the origin does <i>not</i> send <code>Cache-Control</code>
     * or <code>Expires</code> headers with the object. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> <p>The default value for this field is 86400
     * seconds (one day). If the value of <code>MinTTL</code> is more than 86400
     * seconds, then the default value for this field is the same as the value of
     * <code>MinTTL</code>.</p>
     */
    inline long long GetDefaultTTL() const { return m_defaultTTL; }
    inline bool DefaultTTLHasBeenSet() const { return m_defaultTTLHasBeenSet; }
    inline void SetDefaultTTL(long long value) { m_defaultTTLHasBeenSet = true; m_defaultTTL = value; }
    inline CachePolicyConfig& WithDefaultTTL(long long value) { SetDefaultTTL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time, in seconds, that objects stay in the CloudFront
     * cache before CloudFront sends another request to the origin to see if the object
     * has been updated. CloudFront uses this value only when the origin sends
     * <code>Cache-Control</code> or <code>Expires</code> headers with the object. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> <p>The default value for this field is
     * 31536000 seconds (one year). If the value of <code>MinTTL</code> or
     * <code>DefaultTTL</code> is more than 31536000 seconds, then the default value
     * for this field is the same as the value of <code>DefaultTTL</code>.</p>
     */
    inline long long GetMaxTTL() const { return m_maxTTL; }
    inline bool MaxTTLHasBeenSet() const { return m_maxTTLHasBeenSet; }
    inline void SetMaxTTL(long long value) { m_maxTTLHasBeenSet = true; m_maxTTL = value; }
    inline CachePolicyConfig& WithMaxTTL(long long value) { SetMaxTTL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum amount of time, in seconds, that you want objects to stay in the
     * CloudFront cache before CloudFront sends another request to the origin to see if
     * the object has been updated. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline long long GetMinTTL() const { return m_minTTL; }
    inline bool MinTTLHasBeenSet() const { return m_minTTLHasBeenSet; }
    inline void SetMinTTL(long long value) { m_minTTLHasBeenSet = true; m_minTTL = value; }
    inline CachePolicyConfig& WithMinTTL(long long value) { SetMinTTL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP headers, cookies, and URL query strings to include in the cache key.
     * The values included in the cache key are also included in requests that
     * CloudFront sends to the origin.</p>
     */
    inline const ParametersInCacheKeyAndForwardedToOrigin& GetParametersInCacheKeyAndForwardedToOrigin() const { return m_parametersInCacheKeyAndForwardedToOrigin; }
    inline bool ParametersInCacheKeyAndForwardedToOriginHasBeenSet() const { return m_parametersInCacheKeyAndForwardedToOriginHasBeenSet; }
    template<typename ParametersInCacheKeyAndForwardedToOriginT = ParametersInCacheKeyAndForwardedToOrigin>
    void SetParametersInCacheKeyAndForwardedToOrigin(ParametersInCacheKeyAndForwardedToOriginT&& value) { m_parametersInCacheKeyAndForwardedToOriginHasBeenSet = true; m_parametersInCacheKeyAndForwardedToOrigin = std::forward<ParametersInCacheKeyAndForwardedToOriginT>(value); }
    template<typename ParametersInCacheKeyAndForwardedToOriginT = ParametersInCacheKeyAndForwardedToOrigin>
    CachePolicyConfig& WithParametersInCacheKeyAndForwardedToOrigin(ParametersInCacheKeyAndForwardedToOriginT&& value) { SetParametersInCacheKeyAndForwardedToOrigin(std::forward<ParametersInCacheKeyAndForwardedToOriginT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_defaultTTL{0};
    bool m_defaultTTLHasBeenSet = false;

    long long m_maxTTL{0};
    bool m_maxTTLHasBeenSet = false;

    long long m_minTTL{0};
    bool m_minTTLHasBeenSet = false;

    ParametersInCacheKeyAndForwardedToOrigin m_parametersInCacheKeyAndForwardedToOrigin;
    bool m_parametersInCacheKeyAndForwardedToOriginHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
