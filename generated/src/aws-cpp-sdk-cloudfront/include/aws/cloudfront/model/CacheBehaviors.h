/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/CacheBehavior.h>
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
   * <p>A complex type that contains zero or more <code>CacheBehavior</code>
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CacheBehaviors">AWS
   * API Reference</a></p>
   */
  class CacheBehaviors
  {
  public:
    AWS_CLOUDFRONT_API CacheBehaviors();
    AWS_CLOUDFRONT_API CacheBehaviors(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CacheBehaviors& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of cache behaviors for this distribution.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of cache behaviors for this distribution.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of cache behaviors for this distribution.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of cache behaviors for this distribution.</p>
     */
    inline CacheBehaviors& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>Optional: A complex type that contains cache behaviors for this distribution.
     * If <code>Quantity</code> is <code>0</code>, you can omit <code>Items</code>.</p>
     */
    inline const Aws::Vector<CacheBehavior>& GetItems() const{ return m_items; }

    /**
     * <p>Optional: A complex type that contains cache behaviors for this distribution.
     * If <code>Quantity</code> is <code>0</code>, you can omit <code>Items</code>.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Optional: A complex type that contains cache behaviors for this distribution.
     * If <code>Quantity</code> is <code>0</code>, you can omit <code>Items</code>.</p>
     */
    inline void SetItems(const Aws::Vector<CacheBehavior>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Optional: A complex type that contains cache behaviors for this distribution.
     * If <code>Quantity</code> is <code>0</code>, you can omit <code>Items</code>.</p>
     */
    inline void SetItems(Aws::Vector<CacheBehavior>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Optional: A complex type that contains cache behaviors for this distribution.
     * If <code>Quantity</code> is <code>0</code>, you can omit <code>Items</code>.</p>
     */
    inline CacheBehaviors& WithItems(const Aws::Vector<CacheBehavior>& value) { SetItems(value); return *this;}

    /**
     * <p>Optional: A complex type that contains cache behaviors for this distribution.
     * If <code>Quantity</code> is <code>0</code>, you can omit <code>Items</code>.</p>
     */
    inline CacheBehaviors& WithItems(Aws::Vector<CacheBehavior>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Optional: A complex type that contains cache behaviors for this distribution.
     * If <code>Quantity</code> is <code>0</code>, you can omit <code>Items</code>.</p>
     */
    inline CacheBehaviors& AddItems(const CacheBehavior& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Optional: A complex type that contains cache behaviors for this distribution.
     * If <code>Quantity</code> is <code>0</code>, you can omit <code>Items</code>.</p>
     */
    inline CacheBehaviors& AddItems(CacheBehavior&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<CacheBehavior> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
