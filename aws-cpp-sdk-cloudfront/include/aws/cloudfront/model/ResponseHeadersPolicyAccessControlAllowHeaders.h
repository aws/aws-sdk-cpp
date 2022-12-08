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
   * <p>A list of HTTP header names that CloudFront includes as values for the
   * <code>Access-Control-Allow-Headers</code> HTTP response header.</p> <p>For more
   * information about the <code>Access-Control-Allow-Headers</code> HTTP response
   * header, see <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Headers">Access-Control-Allow-Headers</a>
   * in the MDN Web Docs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyAccessControlAllowHeaders">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyAccessControlAllowHeaders
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyAccessControlAllowHeaders();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyAccessControlAllowHeaders(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyAccessControlAllowHeaders& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of HTTP header names in the list.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of HTTP header names in the list.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of HTTP header names in the list.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of HTTP header names in the list.</p>
     */
    inline ResponseHeadersPolicyAccessControlAllowHeaders& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The list of HTTP header names. You can specify <code>*</code> to allow all
     * headers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * <p>The list of HTTP header names. You can specify <code>*</code> to allow all
     * headers.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The list of HTTP header names. You can specify <code>*</code> to allow all
     * headers.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The list of HTTP header names. You can specify <code>*</code> to allow all
     * headers.</p>
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The list of HTTP header names. You can specify <code>*</code> to allow all
     * headers.</p>
     */
    inline ResponseHeadersPolicyAccessControlAllowHeaders& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of HTTP header names. You can specify <code>*</code> to allow all
     * headers.</p>
     */
    inline ResponseHeadersPolicyAccessControlAllowHeaders& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of HTTP header names. You can specify <code>*</code> to allow all
     * headers.</p>
     */
    inline ResponseHeadersPolicyAccessControlAllowHeaders& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The list of HTTP header names. You can specify <code>*</code> to allow all
     * headers.</p>
     */
    inline ResponseHeadersPolicyAccessControlAllowHeaders& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of HTTP header names. You can specify <code>*</code> to allow all
     * headers.</p>
     */
    inline ResponseHeadersPolicyAccessControlAllowHeaders& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
