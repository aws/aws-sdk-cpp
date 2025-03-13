/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/Method.h>
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
   * <p>A complex type that controls whether CloudFront caches the response to
   * requests using the specified HTTP methods. There are two choices:</p> <ul> <li>
   * <p>CloudFront caches responses to <code>GET</code> and <code>HEAD</code>
   * requests.</p> </li> <li> <p>CloudFront caches responses to <code>GET</code>,
   * <code>HEAD</code>, and <code>OPTIONS</code> requests.</p> </li> </ul> <p>If you
   * pick the second choice for your Amazon S3 Origin, you may need to forward
   * Access-Control-Request-Method, Access-Control-Request-Headers, and Origin
   * headers for the responses to be cached correctly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CachedMethods">AWS
   * API Reference</a></p>
   */
  class CachedMethods
  {
  public:
    AWS_CLOUDFRONT_API CachedMethods() = default;
    AWS_CLOUDFRONT_API CachedMethods(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CachedMethods& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The number of HTTP methods for which you want CloudFront to cache responses.
     * Valid values are <code>2</code> (for caching responses to <code>GET</code> and
     * <code>HEAD</code> requests) and <code>3</code> (for caching responses to
     * <code>GET</code>, <code>HEAD</code>, and <code>OPTIONS</code> requests).</p>
     */
    inline int GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline CachedMethods& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains the HTTP methods that you want CloudFront to
     * cache responses to. Valid values for <code>CachedMethods</code> include
     * <code>GET</code>, <code>HEAD</code>, and <code>OPTIONS</code>, depending on
     * which caching option you choose. For more information, see the preceding
     * section.</p>
     */
    inline const Aws::Vector<Method>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<Method>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<Method>>
    CachedMethods& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    inline CachedMethods& AddItems(Method value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    ///@}
  private:

    int m_quantity{0};
    bool m_quantityHasBeenSet = false;

    Aws::Vector<Method> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
