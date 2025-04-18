﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/CachedMethods.h>
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
   * <p>A complex type that controls which HTTP methods CloudFront processes and
   * forwards to your Amazon S3 bucket or your custom origin. There are three
   * choices:</p> <ul> <li> <p>CloudFront forwards only <code>GET</code> and
   * <code>HEAD</code> requests.</p> </li> <li> <p>CloudFront forwards only
   * <code>GET</code>, <code>HEAD</code>, and <code>OPTIONS</code> requests.</p>
   * </li> <li> <p>CloudFront forwards <code>GET, HEAD, OPTIONS, PUT, PATCH,
   * POST</code>, and <code>DELETE</code> requests.</p> </li> </ul> <p>If you pick
   * the third choice, you may need to restrict access to your Amazon S3 bucket or to
   * your custom origin so users can't perform operations that you don't want them
   * to. For example, you might not want users to have permissions to delete objects
   * from your origin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/AllowedMethods">AWS
   * API Reference</a></p>
   */
  class AllowedMethods
  {
  public:
    AWS_CLOUDFRONT_API AllowedMethods() = default;
    AWS_CLOUDFRONT_API AllowedMethods(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API AllowedMethods& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The number of HTTP methods that you want CloudFront to forward to your
     * origin. Valid values are 2 (for <code>GET</code> and <code>HEAD</code>
     * requests), 3 (for <code>GET</code>, <code>HEAD</code>, and <code>OPTIONS</code>
     * requests) and 7 (for <code>GET, HEAD, OPTIONS, PUT, PATCH, POST</code>, and
     * <code>DELETE</code> requests).</p>
     */
    inline int GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline AllowedMethods& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.</p>
     */
    inline const Aws::Vector<Method>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<Method>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<Method>>
    AllowedMethods& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    inline AllowedMethods& AddItems(Method value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const CachedMethods& GetCachedMethods() const { return m_cachedMethods; }
    inline bool CachedMethodsHasBeenSet() const { return m_cachedMethodsHasBeenSet; }
    template<typename CachedMethodsT = CachedMethods>
    void SetCachedMethods(CachedMethodsT&& value) { m_cachedMethodsHasBeenSet = true; m_cachedMethods = std::forward<CachedMethodsT>(value); }
    template<typename CachedMethodsT = CachedMethods>
    AllowedMethods& WithCachedMethods(CachedMethodsT&& value) { SetCachedMethods(std::forward<CachedMethodsT>(value)); return *this;}
    ///@}
  private:

    int m_quantity{0};
    bool m_quantityHasBeenSet = false;

    Aws::Vector<Method> m_items;
    bool m_itemsHasBeenSet = false;

    CachedMethods m_cachedMethods;
    bool m_cachedMethodsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
