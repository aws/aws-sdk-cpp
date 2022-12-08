/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/QueryArgProfile.h>
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
   * <p>Query argument-profile mapping for field-level encryption.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/QueryArgProfiles">AWS
   * API Reference</a></p>
   */
  class QueryArgProfiles
  {
  public:
    AWS_CLOUDFRONT_API QueryArgProfiles();
    AWS_CLOUDFRONT_API QueryArgProfiles(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API QueryArgProfiles& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Number of profiles for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>Number of profiles for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>Number of profiles for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>Number of profiles for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline QueryArgProfiles& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>Number of items for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline const Aws::Vector<QueryArgProfile>& GetItems() const{ return m_items; }

    /**
     * <p>Number of items for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Number of items for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline void SetItems(const Aws::Vector<QueryArgProfile>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Number of items for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline void SetItems(Aws::Vector<QueryArgProfile>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Number of items for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline QueryArgProfiles& WithItems(const Aws::Vector<QueryArgProfile>& value) { SetItems(value); return *this;}

    /**
     * <p>Number of items for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline QueryArgProfiles& WithItems(Aws::Vector<QueryArgProfile>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Number of items for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline QueryArgProfiles& AddItems(const QueryArgProfile& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Number of items for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline QueryArgProfiles& AddItems(QueryArgProfile&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<QueryArgProfile> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
