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
#include <aws/cloudfront/model/CacheBehavior.h>

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
   * A complex type that contains zero or more CacheBehavior elements.
   */
  class AWS_CLOUDFRONT_API CacheBehaviors
  {
  public:
    CacheBehaviors();
    CacheBehaviors(const Aws::Utils::Xml::XmlNode& xmlNode);
    CacheBehaviors& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The number of cache behaviors for this distribution.
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * The number of cache behaviors for this distribution.
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * The number of cache behaviors for this distribution.
     */
    inline CacheBehaviors& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * Optional: A complex type that contains cache behaviors for this distribution. If
     * Quantity is 0, you can omit Items.
     */
    inline const Aws::Vector<CacheBehavior>& GetItems() const{ return m_items; }

    /**
     * Optional: A complex type that contains cache behaviors for this distribution. If
     * Quantity is 0, you can omit Items.
     */
    inline void SetItems(const Aws::Vector<CacheBehavior>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * Optional: A complex type that contains cache behaviors for this distribution. If
     * Quantity is 0, you can omit Items.
     */
    inline void SetItems(Aws::Vector<CacheBehavior>&& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * Optional: A complex type that contains cache behaviors for this distribution. If
     * Quantity is 0, you can omit Items.
     */
    inline CacheBehaviors& WithItems(const Aws::Vector<CacheBehavior>& value) { SetItems(value); return *this;}

    /**
     * Optional: A complex type that contains cache behaviors for this distribution. If
     * Quantity is 0, you can omit Items.
     */
    inline CacheBehaviors& WithItems(Aws::Vector<CacheBehavior>&& value) { SetItems(value); return *this;}

    /**
     * Optional: A complex type that contains cache behaviors for this distribution. If
     * Quantity is 0, you can omit Items.
     */
    inline CacheBehaviors& AddItems(const CacheBehavior& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * Optional: A complex type that contains cache behaviors for this distribution. If
     * Quantity is 0, you can omit Items.
     */
    inline CacheBehaviors& AddItems(CacheBehavior&& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:
    int m_quantity;
    bool m_quantityHasBeenSet;
    Aws::Vector<CacheBehavior> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
