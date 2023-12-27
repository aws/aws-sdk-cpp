﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/KeyValueStoreAssociation.h>
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
   * <p>The Key Value Store associations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/KeyValueStoreAssociations">AWS
   * API Reference</a></p>
   */
  class KeyValueStoreAssociations
  {
  public:
    AWS_CLOUDFRONT_API KeyValueStoreAssociations();
    AWS_CLOUDFRONT_API KeyValueStoreAssociations(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API KeyValueStoreAssociations& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The quantity of Key Value Store associations.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The quantity of Key Value Store associations.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The quantity of Key Value Store associations.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The quantity of Key Value Store associations.</p>
     */
    inline KeyValueStoreAssociations& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The items of the Key Value Store association.</p>
     */
    inline const Aws::Vector<KeyValueStoreAssociation>& GetItems() const{ return m_items; }

    /**
     * <p>The items of the Key Value Store association.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The items of the Key Value Store association.</p>
     */
    inline void SetItems(const Aws::Vector<KeyValueStoreAssociation>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The items of the Key Value Store association.</p>
     */
    inline void SetItems(Aws::Vector<KeyValueStoreAssociation>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The items of the Key Value Store association.</p>
     */
    inline KeyValueStoreAssociations& WithItems(const Aws::Vector<KeyValueStoreAssociation>& value) { SetItems(value); return *this;}

    /**
     * <p>The items of the Key Value Store association.</p>
     */
    inline KeyValueStoreAssociations& WithItems(Aws::Vector<KeyValueStoreAssociation>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The items of the Key Value Store association.</p>
     */
    inline KeyValueStoreAssociations& AddItems(const KeyValueStoreAssociation& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The items of the Key Value Store association.</p>
     */
    inline KeyValueStoreAssociations& AddItems(KeyValueStoreAssociation&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<KeyValueStoreAssociation> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
