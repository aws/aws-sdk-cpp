/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/FieldLevelEncryptionSummary.h>
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
   * <p>List of field-level encrpytion configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/FieldLevelEncryptionList">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API FieldLevelEncryptionList
  {
  public:
    FieldLevelEncryptionList();
    FieldLevelEncryptionList(const Aws::Utils::Xml::XmlNode& xmlNode);
    FieldLevelEncryptionList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your configurations where you left off.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your configurations where you left off.</p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your configurations where you left off.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your configurations where you left off.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your configurations where you left off.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your configurations where you left off.</p>
     */
    inline FieldLevelEncryptionList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your configurations where you left off.</p>
     */
    inline FieldLevelEncryptionList& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your configurations where you left off.</p>
     */
    inline FieldLevelEncryptionList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The maximum number of elements you want in the response body. </p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of elements you want in the response body. </p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of elements you want in the response body. </p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of elements you want in the response body. </p>
     */
    inline FieldLevelEncryptionList& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>The number of field-level encryption items.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of field-level encryption items.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of field-level encryption items.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of field-level encryption items.</p>
     */
    inline FieldLevelEncryptionList& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>An array of field-level encryption items.</p>
     */
    inline const Aws::Vector<FieldLevelEncryptionSummary>& GetItems() const{ return m_items; }

    /**
     * <p>An array of field-level encryption items.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>An array of field-level encryption items.</p>
     */
    inline void SetItems(const Aws::Vector<FieldLevelEncryptionSummary>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>An array of field-level encryption items.</p>
     */
    inline void SetItems(Aws::Vector<FieldLevelEncryptionSummary>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>An array of field-level encryption items.</p>
     */
    inline FieldLevelEncryptionList& WithItems(const Aws::Vector<FieldLevelEncryptionSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of field-level encryption items.</p>
     */
    inline FieldLevelEncryptionList& WithItems(Aws::Vector<FieldLevelEncryptionSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>An array of field-level encryption items.</p>
     */
    inline FieldLevelEncryptionList& AddItems(const FieldLevelEncryptionSummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>An array of field-level encryption items.</p>
     */
    inline FieldLevelEncryptionList& AddItems(FieldLevelEncryptionSummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet;

    int m_maxItems;
    bool m_maxItemsHasBeenSet;

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<FieldLevelEncryptionSummary> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
