/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/OriginGroup.h>
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
   * <p>A complex data type for the origin groups specified for a
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginGroups">AWS
   * API Reference</a></p>
   */
  class OriginGroups
  {
  public:
    AWS_CLOUDFRONT_API OriginGroups();
    AWS_CLOUDFRONT_API OriginGroups(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginGroups& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of origin groups.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of origin groups.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of origin groups.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of origin groups.</p>
     */
    inline OriginGroups& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The items (origin groups) in a distribution.</p>
     */
    inline const Aws::Vector<OriginGroup>& GetItems() const{ return m_items; }

    /**
     * <p>The items (origin groups) in a distribution.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The items (origin groups) in a distribution.</p>
     */
    inline void SetItems(const Aws::Vector<OriginGroup>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The items (origin groups) in a distribution.</p>
     */
    inline void SetItems(Aws::Vector<OriginGroup>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The items (origin groups) in a distribution.</p>
     */
    inline OriginGroups& WithItems(const Aws::Vector<OriginGroup>& value) { SetItems(value); return *this;}

    /**
     * <p>The items (origin groups) in a distribution.</p>
     */
    inline OriginGroups& WithItems(Aws::Vector<OriginGroup>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The items (origin groups) in a distribution.</p>
     */
    inline OriginGroups& AddItems(const OriginGroup& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The items (origin groups) in a distribution.</p>
     */
    inline OriginGroups& AddItems(OriginGroup&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<OriginGroup> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
