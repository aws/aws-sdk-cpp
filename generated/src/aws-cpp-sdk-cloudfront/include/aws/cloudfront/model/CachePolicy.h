/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/CachePolicyConfig.h>
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
   * <p>A cache policy.</p> <p>When it's attached to a cache behavior, the cache
   * policy determines the following:</p> <ul> <li> <p>The values that CloudFront
   * includes in the cache key. These values can include HTTP headers, cookies, and
   * URL query strings. CloudFront uses the cache key to find an object in its cache
   * that it can return to the viewer.</p> </li> <li> <p>The default, minimum, and
   * maximum time to live (TTL) values that you want objects to stay in the
   * CloudFront cache.</p> </li> </ul> <p>The headers, cookies, and query strings
   * that are included in the cache key are also included in requests that CloudFront
   * sends to the origin. CloudFront sends a request when it can't find a valid
   * object in its cache that matches the request's cache key. If you want to send
   * values to the origin but <i>not</i> include them in the cache key, use
   * <code>OriginRequestPolicy</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CachePolicy">AWS
   * API Reference</a></p>
   */
  class CachePolicy
  {
  public:
    AWS_CLOUDFRONT_API CachePolicy() = default;
    AWS_CLOUDFRONT_API CachePolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CachePolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The unique identifier for the cache policy.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CachePolicy& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the cache policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    CachePolicy& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache policy configuration.</p>
     */
    inline const CachePolicyConfig& GetCachePolicyConfig() const { return m_cachePolicyConfig; }
    inline bool CachePolicyConfigHasBeenSet() const { return m_cachePolicyConfigHasBeenSet; }
    template<typename CachePolicyConfigT = CachePolicyConfig>
    void SetCachePolicyConfig(CachePolicyConfigT&& value) { m_cachePolicyConfigHasBeenSet = true; m_cachePolicyConfig = std::forward<CachePolicyConfigT>(value); }
    template<typename CachePolicyConfigT = CachePolicyConfig>
    CachePolicy& WithCachePolicyConfig(CachePolicyConfigT&& value) { SetCachePolicyConfig(std::forward<CachePolicyConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    CachePolicyConfig m_cachePolicyConfig;
    bool m_cachePolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
