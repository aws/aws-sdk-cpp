/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/Origin.h>
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
   * <p>Contains information about the origins for this distribution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/Origins">AWS
   * API Reference</a></p>
   */
  class Origins
  {
  public:
    AWS_CLOUDFRONT_API Origins();
    AWS_CLOUDFRONT_API Origins(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API Origins& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of origins for this distribution.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of origins for this distribution.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of origins for this distribution.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of origins for this distribution.</p>
     */
    inline Origins& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>A list of origins.</p>
     */
    inline const Aws::Vector<Origin>& GetItems() const{ return m_items; }

    /**
     * <p>A list of origins.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A list of origins.</p>
     */
    inline void SetItems(const Aws::Vector<Origin>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A list of origins.</p>
     */
    inline void SetItems(Aws::Vector<Origin>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A list of origins.</p>
     */
    inline Origins& WithItems(const Aws::Vector<Origin>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of origins.</p>
     */
    inline Origins& WithItems(Aws::Vector<Origin>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of origins.</p>
     */
    inline Origins& AddItems(const Origin& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A list of origins.</p>
     */
    inline Origins& AddItems(Origin&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<Origin> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
