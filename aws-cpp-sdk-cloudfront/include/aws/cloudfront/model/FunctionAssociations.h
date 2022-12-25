/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/FunctionAssociation.h>
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
   * <p>A list of CloudFront functions that are associated with a cache behavior in a
   * CloudFront distribution. CloudFront functions must be published to the
   * <code>LIVE</code> stage to associate them with a cache behavior.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FunctionAssociations">AWS
   * API Reference</a></p>
   */
  class FunctionAssociations
  {
  public:
    AWS_CLOUDFRONT_API FunctionAssociations();
    AWS_CLOUDFRONT_API FunctionAssociations(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FunctionAssociations& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of CloudFront functions in the list.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of CloudFront functions in the list.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of CloudFront functions in the list.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of CloudFront functions in the list.</p>
     */
    inline FunctionAssociations& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The CloudFront functions that are associated with a cache behavior in a
     * CloudFront distribution. CloudFront functions must be published to the
     * <code>LIVE</code> stage to associate them with a cache behavior.</p>
     */
    inline const Aws::Vector<FunctionAssociation>& GetItems() const{ return m_items; }

    /**
     * <p>The CloudFront functions that are associated with a cache behavior in a
     * CloudFront distribution. CloudFront functions must be published to the
     * <code>LIVE</code> stage to associate them with a cache behavior.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The CloudFront functions that are associated with a cache behavior in a
     * CloudFront distribution. CloudFront functions must be published to the
     * <code>LIVE</code> stage to associate them with a cache behavior.</p>
     */
    inline void SetItems(const Aws::Vector<FunctionAssociation>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The CloudFront functions that are associated with a cache behavior in a
     * CloudFront distribution. CloudFront functions must be published to the
     * <code>LIVE</code> stage to associate them with a cache behavior.</p>
     */
    inline void SetItems(Aws::Vector<FunctionAssociation>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The CloudFront functions that are associated with a cache behavior in a
     * CloudFront distribution. CloudFront functions must be published to the
     * <code>LIVE</code> stage to associate them with a cache behavior.</p>
     */
    inline FunctionAssociations& WithItems(const Aws::Vector<FunctionAssociation>& value) { SetItems(value); return *this;}

    /**
     * <p>The CloudFront functions that are associated with a cache behavior in a
     * CloudFront distribution. CloudFront functions must be published to the
     * <code>LIVE</code> stage to associate them with a cache behavior.</p>
     */
    inline FunctionAssociations& WithItems(Aws::Vector<FunctionAssociation>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The CloudFront functions that are associated with a cache behavior in a
     * CloudFront distribution. CloudFront functions must be published to the
     * <code>LIVE</code> stage to associate them with a cache behavior.</p>
     */
    inline FunctionAssociations& AddItems(const FunctionAssociation& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The CloudFront functions that are associated with a cache behavior in a
     * CloudFront distribution. CloudFront functions must be published to the
     * <code>LIVE</code> stage to associate them with a cache behavior.</p>
     */
    inline FunctionAssociations& AddItems(FunctionAssociation&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<FunctionAssociation> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
