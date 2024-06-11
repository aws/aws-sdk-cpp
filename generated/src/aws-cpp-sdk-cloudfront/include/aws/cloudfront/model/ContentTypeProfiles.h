﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Field-level encryption content type-profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ContentTypeProfiles">AWS
   * API Reference</a></p>
   */
  class ContentTypeProfiles
  {
  public:
    AWS_CLOUDFRONT_API ContentTypeProfiles();
    AWS_CLOUDFRONT_API ContentTypeProfiles(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContentTypeProfiles& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The number of field-level encryption content type-profile mappings.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline ContentTypeProfiles& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Items in a field-level encryption content type-profile mapping.</p>
     */
    inline const Aws::Vector<ContentTypeProfile>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<ContentTypeProfile>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<ContentTypeProfile>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline ContentTypeProfiles& WithItems(const Aws::Vector<ContentTypeProfile>& value) { SetItems(value); return *this;}
    inline ContentTypeProfiles& WithItems(Aws::Vector<ContentTypeProfile>&& value) { SetItems(std::move(value)); return *this;}
    inline ContentTypeProfiles& AddItems(const ContentTypeProfile& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline ContentTypeProfiles& AddItems(ContentTypeProfile&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<ContentTypeProfile> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
