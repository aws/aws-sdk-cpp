/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/LambdaFunctionAssociation.h>
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
   * <p>A complex type that specifies a list of Lambda@Edge functions associations
   * for a cache behavior.</p> <p>If you want to invoke one or more Lambda@Edge
   * functions triggered by requests that match the <code>PathPattern</code> of the
   * cache behavior, specify the applicable values for <code>Quantity</code> and
   * <code>Items</code>. Note that there can be up to 4
   * <code>LambdaFunctionAssociation</code> items in this list (one for each possible
   * value of <code>EventType</code>) and each <code>EventType</code> can be
   * associated with only one function.</p> <p>If you don't want to invoke any
   * Lambda@Edge functions for the requests that match <code>PathPattern</code>,
   * specify <code>0</code> for <code>Quantity</code> and omit
   * <code>Items</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/LambdaFunctionAssociations">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionAssociations
  {
  public:
    AWS_CLOUDFRONT_API LambdaFunctionAssociations() = default;
    AWS_CLOUDFRONT_API LambdaFunctionAssociations(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API LambdaFunctionAssociations& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The number of Lambda@Edge function associations for this cache behavior.</p>
     */
    inline int GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline LambdaFunctionAssociations& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Optional</b>: A complex type that contains
     * <code>LambdaFunctionAssociation</code> items for this cache behavior. If
     * <code>Quantity</code> is <code>0</code>, you can omit <code>Items</code>.</p>
     */
    inline const Aws::Vector<LambdaFunctionAssociation>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<LambdaFunctionAssociation>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<LambdaFunctionAssociation>>
    LambdaFunctionAssociations& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = LambdaFunctionAssociation>
    LambdaFunctionAssociations& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}
  private:

    int m_quantity{0};
    bool m_quantityHasBeenSet = false;

    Aws::Vector<LambdaFunctionAssociation> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
