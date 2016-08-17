/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * A complex type that specifies the headers that you want CloudFront to forward to
   * the origin for this cache behavior. For the headers that you specify, CloudFront
   * also caches separate versions of a given object based on the header values in
   * viewer requests; this is known as varying on headers. For example, suppose
   * viewer requests for logo.jpg contain a custom Product header that has a value of
   * either Acme or Apex, and you configure CloudFront to vary on the Product header.
   * CloudFront forwards the Product header to the origin and caches the response
   * from the origin once for each header value.
   */
  class AWS_CLOUDFRONT_API Headers
  {
  public:
    Headers();
    Headers(const Aws::Utils::Xml::XmlNode& xmlNode);
    Headers& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The number of different headers that you want CloudFront to forward to the
     * origin and to vary on for this cache behavior. The maximum number of headers
     * that you can specify by name is 10. If you want CloudFront to forward all
     * headers to the origin and vary on all of them, specify 1 for Quantity and * for
     * Name. If you don't want CloudFront to forward any additional headers to the
     * origin or to vary on any headers, specify 0 for Quantity and omit Items.
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * The number of different headers that you want CloudFront to forward to the
     * origin and to vary on for this cache behavior. The maximum number of headers
     * that you can specify by name is 10. If you want CloudFront to forward all
     * headers to the origin and vary on all of them, specify 1 for Quantity and * for
     * Name. If you don't want CloudFront to forward any additional headers to the
     * origin or to vary on any headers, specify 0 for Quantity and omit Items.
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * The number of different headers that you want CloudFront to forward to the
     * origin and to vary on for this cache behavior. The maximum number of headers
     * that you can specify by name is 10. If you want CloudFront to forward all
     * headers to the origin and vary on all of them, specify 1 for Quantity and * for
     * Name. If you don't want CloudFront to forward any additional headers to the
     * origin or to vary on any headers, specify 0 for Quantity and omit Items.
     */
    inline Headers& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * Optional: A complex type that contains a Name element for each header that you
     * want CloudFront to forward to the origin and to vary on for this cache behavior.
     * If Quantity is 0, omit Items.
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * Optional: A complex type that contains a Name element for each header that you
     * want CloudFront to forward to the origin and to vary on for this cache behavior.
     * If Quantity is 0, omit Items.
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * Optional: A complex type that contains a Name element for each header that you
     * want CloudFront to forward to the origin and to vary on for this cache behavior.
     * If Quantity is 0, omit Items.
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * Optional: A complex type that contains a Name element for each header that you
     * want CloudFront to forward to the origin and to vary on for this cache behavior.
     * If Quantity is 0, omit Items.
     */
    inline Headers& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * Optional: A complex type that contains a Name element for each header that you
     * want CloudFront to forward to the origin and to vary on for this cache behavior.
     * If Quantity is 0, omit Items.
     */
    inline Headers& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(value); return *this;}

    /**
     * Optional: A complex type that contains a Name element for each header that you
     * want CloudFront to forward to the origin and to vary on for this cache behavior.
     * If Quantity is 0, omit Items.
     */
    inline Headers& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * Optional: A complex type that contains a Name element for each header that you
     * want CloudFront to forward to the origin and to vary on for this cache behavior.
     * If Quantity is 0, omit Items.
     */
    inline Headers& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * Optional: A complex type that contains a Name element for each header that you
     * want CloudFront to forward to the origin and to vary on for this cache behavior.
     * If Quantity is 0, omit Items.
     */
    inline Headers& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:
    int m_quantity;
    bool m_quantityHasBeenSet;
    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
