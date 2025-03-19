/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/CustomErrorResponse.h>
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
   * <p>A complex type that controls:</p> <ul> <li> <p>Whether CloudFront replaces
   * HTTP status codes in the 4xx and 5xx range with custom error messages before
   * returning the response to the viewer.</p> </li> <li> <p>How long CloudFront
   * caches HTTP status codes in the 4xx and 5xx range.</p> </li> </ul> <p>For more
   * information about custom error pages, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
   * Error Responses</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CustomErrorResponses">AWS
   * API Reference</a></p>
   */
  class CustomErrorResponses
  {
  public:
    AWS_CLOUDFRONT_API CustomErrorResponses() = default;
    AWS_CLOUDFRONT_API CustomErrorResponses(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CustomErrorResponses& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The number of HTTP status codes for which you want to specify a custom error
     * page and/or a caching duration. If <code>Quantity</code> is <code>0</code>, you
     * can omit <code>Items</code>.</p>
     */
    inline int GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline CustomErrorResponses& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains a <code>CustomErrorResponse</code> element for
     * each HTTP status code for which you want to specify a custom error page and/or a
     * caching duration. </p>
     */
    inline const Aws::Vector<CustomErrorResponse>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<CustomErrorResponse>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<CustomErrorResponse>>
    CustomErrorResponses& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = CustomErrorResponse>
    CustomErrorResponses& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}
  private:

    int m_quantity{0};
    bool m_quantityHasBeenSet = false;

    Aws::Vector<CustomErrorResponse> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
