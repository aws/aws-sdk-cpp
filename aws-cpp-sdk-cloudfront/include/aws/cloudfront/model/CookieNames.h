﻿/*
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
   * A complex type that specifies the whitelisted cookies, if any, that you want
   * CloudFront to forward to your origin that is associated with this cache
   * behavior.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2016-01-28/CookieNames">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CookieNames
  {
  public:
    CookieNames();
    CookieNames(const Aws::Utils::Xml::XmlNode& xmlNode);
    CookieNames& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The number of whitelisted cookies for this cache behavior.
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * The number of whitelisted cookies for this cache behavior.
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * The number of whitelisted cookies for this cache behavior.
     */
    inline CookieNames& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * Optional: A complex type that contains whitelisted cookies for this cache
     * behavior. If Quantity is 0, you can omit Items.
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * Optional: A complex type that contains whitelisted cookies for this cache
     * behavior. If Quantity is 0, you can omit Items.
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * Optional: A complex type that contains whitelisted cookies for this cache
     * behavior. If Quantity is 0, you can omit Items.
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * Optional: A complex type that contains whitelisted cookies for this cache
     * behavior. If Quantity is 0, you can omit Items.
     */
    inline CookieNames& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * Optional: A complex type that contains whitelisted cookies for this cache
     * behavior. If Quantity is 0, you can omit Items.
     */
    inline CookieNames& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(value); return *this;}

    /**
     * Optional: A complex type that contains whitelisted cookies for this cache
     * behavior. If Quantity is 0, you can omit Items.
     */
    inline CookieNames& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * Optional: A complex type that contains whitelisted cookies for this cache
     * behavior. If Quantity is 0, you can omit Items.
     */
    inline CookieNames& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * Optional: A complex type that contains whitelisted cookies for this cache
     * behavior. If Quantity is 0, you can omit Items.
     */
    inline CookieNames& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:
    int m_quantity;
    bool m_quantityHasBeenSet;
    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
