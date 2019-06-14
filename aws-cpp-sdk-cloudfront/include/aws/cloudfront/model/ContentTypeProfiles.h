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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/ContentTypeProfile.h>
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
   * <p>Field-level encryption content type-profile. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ContentTypeProfiles">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ContentTypeProfiles
  {
  public:
    ContentTypeProfiles();
    ContentTypeProfiles(const Aws::Utils::Xml::XmlNode& xmlNode);
    ContentTypeProfiles& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of field-level encryption content type-profile mappings. </p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of field-level encryption content type-profile mappings. </p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of field-level encryption content type-profile mappings. </p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of field-level encryption content type-profile mappings. </p>
     */
    inline ContentTypeProfiles& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>Items in a field-level encryption content type-profile mapping. </p>
     */
    inline const Aws::Vector<ContentTypeProfile>& GetItems() const{ return m_items; }

    /**
     * <p>Items in a field-level encryption content type-profile mapping. </p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Items in a field-level encryption content type-profile mapping. </p>
     */
    inline void SetItems(const Aws::Vector<ContentTypeProfile>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Items in a field-level encryption content type-profile mapping. </p>
     */
    inline void SetItems(Aws::Vector<ContentTypeProfile>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Items in a field-level encryption content type-profile mapping. </p>
     */
    inline ContentTypeProfiles& WithItems(const Aws::Vector<ContentTypeProfile>& value) { SetItems(value); return *this;}

    /**
     * <p>Items in a field-level encryption content type-profile mapping. </p>
     */
    inline ContentTypeProfiles& WithItems(Aws::Vector<ContentTypeProfile>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Items in a field-level encryption content type-profile mapping. </p>
     */
    inline ContentTypeProfiles& AddItems(const ContentTypeProfile& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Items in a field-level encryption content type-profile mapping. </p>
     */
    inline ContentTypeProfiles& AddItems(ContentTypeProfile&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<ContentTypeProfile> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
