/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A list of origins (domain names) that CloudFront can use as the value for the
   * <code>Access-Control-Allow-Origin</code> HTTP response header.</p> <p>For more
   * information about the <code>Access-Control-Allow-Origin</code> HTTP response
   * header, see <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Origin">Access-Control-Allow-Origin</a>
   * in the MDN Web Docs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyAccessControlAllowOrigins">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyAccessControlAllowOrigins
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyAccessControlAllowOrigins() = default;
    AWS_CLOUDFRONT_API ResponseHeadersPolicyAccessControlAllowOrigins(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyAccessControlAllowOrigins& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The number of origins in the list.</p>
     */
    inline int GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline ResponseHeadersPolicyAccessControlAllowOrigins& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of origins (domain names). You can specify <code>*</code> to allow
     * all origins.</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<Aws::String>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<Aws::String>>
    ResponseHeadersPolicyAccessControlAllowOrigins& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = Aws::String>
    ResponseHeadersPolicyAccessControlAllowOrigins& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}
  private:

    int m_quantity{0};
    bool m_quantityHasBeenSet = false;

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
