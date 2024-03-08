/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/KeyValueStore.h>
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
   * <p>The Key Value Store list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/KeyValueStoreList">AWS
   * API Reference</a></p>
   */
  class KeyValueStoreList
  {
  public:
    AWS_CLOUDFRONT_API KeyValueStoreList();
    AWS_CLOUDFRONT_API KeyValueStoreList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API KeyValueStoreList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The next marker associated with the Key Value Store list.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The next marker associated with the Key Value Store list.</p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>The next marker associated with the Key Value Store list.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>The next marker associated with the Key Value Store list.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>The next marker associated with the Key Value Store list.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>The next marker associated with the Key Value Store list.</p>
     */
    inline KeyValueStoreList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The next marker associated with the Key Value Store list.</p>
     */
    inline KeyValueStoreList& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The next marker associated with the Key Value Store list.</p>
     */
    inline KeyValueStoreList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The maximum number of items in the Key Value Store list.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of items in the Key Value Store list.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of items in the Key Value Store list.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of items in the Key Value Store list.</p>
     */
    inline KeyValueStoreList& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>The quantity of the Key Value Store list.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The quantity of the Key Value Store list.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The quantity of the Key Value Store list.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The quantity of the Key Value Store list.</p>
     */
    inline KeyValueStoreList& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The items of the Key Value Store list.</p>
     */
    inline const Aws::Vector<KeyValueStore>& GetItems() const{ return m_items; }

    /**
     * <p>The items of the Key Value Store list.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The items of the Key Value Store list.</p>
     */
    inline void SetItems(const Aws::Vector<KeyValueStore>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The items of the Key Value Store list.</p>
     */
    inline void SetItems(Aws::Vector<KeyValueStore>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The items of the Key Value Store list.</p>
     */
    inline KeyValueStoreList& WithItems(const Aws::Vector<KeyValueStore>& value) { SetItems(value); return *this;}

    /**
     * <p>The items of the Key Value Store list.</p>
     */
    inline KeyValueStoreList& WithItems(Aws::Vector<KeyValueStore>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The items of the Key Value Store list.</p>
     */
    inline KeyValueStoreList& AddItems(const KeyValueStore& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The items of the Key Value Store list.</p>
     */
    inline KeyValueStoreList& AddItems(KeyValueStore&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<KeyValueStore> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
