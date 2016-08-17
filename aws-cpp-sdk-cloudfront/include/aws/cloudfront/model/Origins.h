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
#include <aws/cloudfront/model/Origin.h>

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
   * A complex type that contains information about origins for this distribution.
   */
  class AWS_CLOUDFRONT_API Origins
  {
  public:
    Origins();
    Origins(const Aws::Utils::Xml::XmlNode& xmlNode);
    Origins& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The number of origins for this distribution.
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * The number of origins for this distribution.
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * The number of origins for this distribution.
     */
    inline Origins& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * A complex type that contains origins for this distribution.
     */
    inline const Aws::Vector<Origin>& GetItems() const{ return m_items; }

    /**
     * A complex type that contains origins for this distribution.
     */
    inline void SetItems(const Aws::Vector<Origin>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains origins for this distribution.
     */
    inline void SetItems(Aws::Vector<Origin>&& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains origins for this distribution.
     */
    inline Origins& WithItems(const Aws::Vector<Origin>& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains origins for this distribution.
     */
    inline Origins& WithItems(Aws::Vector<Origin>&& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains origins for this distribution.
     */
    inline Origins& AddItems(const Origin& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * A complex type that contains origins for this distribution.
     */
    inline Origins& AddItems(Origin&& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:
    int m_quantity;
    bool m_quantityHasBeenSet;
    Aws::Vector<Origin> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
