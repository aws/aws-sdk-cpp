/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/OriginGroupMember.h>
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
   * <p>A complex data type for the origins included in an origin
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginGroupMembers">AWS
   * API Reference</a></p>
   */
  class OriginGroupMembers
  {
  public:
    AWS_CLOUDFRONT_API OriginGroupMembers();
    AWS_CLOUDFRONT_API OriginGroupMembers(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginGroupMembers& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of origins in an origin group.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of origins in an origin group.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of origins in an origin group.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of origins in an origin group.</p>
     */
    inline OriginGroupMembers& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>Items (origins) in an origin group.</p>
     */
    inline const Aws::Vector<OriginGroupMember>& GetItems() const{ return m_items; }

    /**
     * <p>Items (origins) in an origin group.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Items (origins) in an origin group.</p>
     */
    inline void SetItems(const Aws::Vector<OriginGroupMember>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Items (origins) in an origin group.</p>
     */
    inline void SetItems(Aws::Vector<OriginGroupMember>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Items (origins) in an origin group.</p>
     */
    inline OriginGroupMembers& WithItems(const Aws::Vector<OriginGroupMember>& value) { SetItems(value); return *this;}

    /**
     * <p>Items (origins) in an origin group.</p>
     */
    inline OriginGroupMembers& WithItems(Aws::Vector<OriginGroupMember>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Items (origins) in an origin group.</p>
     */
    inline OriginGroupMembers& AddItems(const OriginGroupMember& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Items (origins) in an origin group.</p>
     */
    inline OriginGroupMembers& AddItems(OriginGroupMember&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<OriginGroupMember> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
