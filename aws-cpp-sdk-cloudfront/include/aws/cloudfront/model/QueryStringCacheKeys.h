/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>This field is deprecated. We recommend that you use a cache policy or an
   * origin request policy instead of this field.</p> <p>If you want to include query
   * strings in the cache key, use <code>QueryStringsConfig</code> in a cache policy.
   * See <code>CachePolicy</code>.</p> <p>If you want to send query strings to the
   * origin but not include them in the cache key, use
   * <code>QueryStringsConfig</code> in an origin request policy. See
   * <code>OriginRequestPolicy</code>.</p> <p>A complex type that contains
   * information about the query string parameters that you want CloudFront to use
   * for caching for a cache behavior.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/QueryStringCacheKeys">AWS
   * API Reference</a></p>
   */
  class QueryStringCacheKeys
  {
  public:
    AWS_CLOUDFRONT_API QueryStringCacheKeys();
    AWS_CLOUDFRONT_API QueryStringCacheKeys(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API QueryStringCacheKeys& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of <code>whitelisted</code> query string parameters for a cache
     * behavior.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of <code>whitelisted</code> query string parameters for a cache
     * behavior.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of <code>whitelisted</code> query string parameters for a cache
     * behavior.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of <code>whitelisted</code> query string parameters for a cache
     * behavior.</p>
     */
    inline QueryStringCacheKeys& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>A list that contains the query string parameters that you want CloudFront to
     * use as a basis for caching for a cache behavior. If <code>Quantity</code> is 0,
     * you can omit <code>Items</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * <p>A list that contains the query string parameters that you want CloudFront to
     * use as a basis for caching for a cache behavior. If <code>Quantity</code> is 0,
     * you can omit <code>Items</code>.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A list that contains the query string parameters that you want CloudFront to
     * use as a basis for caching for a cache behavior. If <code>Quantity</code> is 0,
     * you can omit <code>Items</code>.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A list that contains the query string parameters that you want CloudFront to
     * use as a basis for caching for a cache behavior. If <code>Quantity</code> is 0,
     * you can omit <code>Items</code>.</p>
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A list that contains the query string parameters that you want CloudFront to
     * use as a basis for caching for a cache behavior. If <code>Quantity</code> is 0,
     * you can omit <code>Items</code>.</p>
     */
    inline QueryStringCacheKeys& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * <p>A list that contains the query string parameters that you want CloudFront to
     * use as a basis for caching for a cache behavior. If <code>Quantity</code> is 0,
     * you can omit <code>Items</code>.</p>
     */
    inline QueryStringCacheKeys& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list that contains the query string parameters that you want CloudFront to
     * use as a basis for caching for a cache behavior. If <code>Quantity</code> is 0,
     * you can omit <code>Items</code>.</p>
     */
    inline QueryStringCacheKeys& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A list that contains the query string parameters that you want CloudFront to
     * use as a basis for caching for a cache behavior. If <code>Quantity</code> is 0,
     * you can omit <code>Items</code>.</p>
     */
    inline QueryStringCacheKeys& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

    /**
     * <p>A list that contains the query string parameters that you want CloudFront to
     * use as a basis for caching for a cache behavior. If <code>Quantity</code> is 0,
     * you can omit <code>Items</code>.</p>
     */
    inline QueryStringCacheKeys& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
