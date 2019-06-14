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
#include <aws/cloudfront/model/OriginCustomHeader.h>
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
   * <p>A complex type that contains the list of Custom Headers for each origin.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CustomHeaders">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CustomHeaders
  {
  public:
    CustomHeaders();
    CustomHeaders(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomHeaders& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of custom headers, if any, for this distribution.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of custom headers, if any, for this distribution.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of custom headers, if any, for this distribution.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of custom headers, if any, for this distribution.</p>
     */
    inline CustomHeaders& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p> <b>Optional</b>: A list that contains one <code>OriginCustomHeader</code>
     * element for each custom header that you want CloudFront to forward to the
     * origin. If Quantity is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline const Aws::Vector<OriginCustomHeader>& GetItems() const{ return m_items; }

    /**
     * <p> <b>Optional</b>: A list that contains one <code>OriginCustomHeader</code>
     * element for each custom header that you want CloudFront to forward to the
     * origin. If Quantity is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p> <b>Optional</b>: A list that contains one <code>OriginCustomHeader</code>
     * element for each custom header that you want CloudFront to forward to the
     * origin. If Quantity is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline void SetItems(const Aws::Vector<OriginCustomHeader>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p> <b>Optional</b>: A list that contains one <code>OriginCustomHeader</code>
     * element for each custom header that you want CloudFront to forward to the
     * origin. If Quantity is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline void SetItems(Aws::Vector<OriginCustomHeader>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p> <b>Optional</b>: A list that contains one <code>OriginCustomHeader</code>
     * element for each custom header that you want CloudFront to forward to the
     * origin. If Quantity is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline CustomHeaders& WithItems(const Aws::Vector<OriginCustomHeader>& value) { SetItems(value); return *this;}

    /**
     * <p> <b>Optional</b>: A list that contains one <code>OriginCustomHeader</code>
     * element for each custom header that you want CloudFront to forward to the
     * origin. If Quantity is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline CustomHeaders& WithItems(Aws::Vector<OriginCustomHeader>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p> <b>Optional</b>: A list that contains one <code>OriginCustomHeader</code>
     * element for each custom header that you want CloudFront to forward to the
     * origin. If Quantity is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline CustomHeaders& AddItems(const OriginCustomHeader& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p> <b>Optional</b>: A list that contains one <code>OriginCustomHeader</code>
     * element for each custom header that you want CloudFront to forward to the
     * origin. If Quantity is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline CustomHeaders& AddItems(OriginCustomHeader&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<OriginCustomHeader> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
