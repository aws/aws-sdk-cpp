/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/PublicKeySummary.h>
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
   * <p>A list of public keys that you can use with <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
   * URLs and signed cookies</a>, or with <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
   * encryption</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/PublicKeyList">AWS
   * API Reference</a></p>
   */
  class PublicKeyList
  {
  public:
    AWS_CLOUDFRONT_API PublicKeyList();
    AWS_CLOUDFRONT_API PublicKeyList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API PublicKeyList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your public keys where you left off.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }
    inline PublicKeyList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline PublicKeyList& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline PublicKeyList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of public keys you want in the response.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline PublicKeyList& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of public keys in the list.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline PublicKeyList& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of public keys.</p>
     */
    inline const Aws::Vector<PublicKeySummary>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<PublicKeySummary>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<PublicKeySummary>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline PublicKeyList& WithItems(const Aws::Vector<PublicKeySummary>& value) { SetItems(value); return *this;}
    inline PublicKeyList& WithItems(Aws::Vector<PublicKeySummary>&& value) { SetItems(std::move(value)); return *this;}
    inline PublicKeyList& AddItems(const PublicKeySummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline PublicKeyList& AddItems(PublicKeySummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<PublicKeySummary> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
