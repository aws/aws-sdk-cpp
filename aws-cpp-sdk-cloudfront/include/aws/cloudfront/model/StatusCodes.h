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
   * <p>A complex data type for the status codes that you specify that, when returned
   * by a primary origin, trigger CloudFront to failover to a second
   * origin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/StatusCodes">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API StatusCodes
  {
  public:
    StatusCodes();
    StatusCodes(const Aws::Utils::Xml::XmlNode& xmlNode);
    StatusCodes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of status codes.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of status codes.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of status codes.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of status codes.</p>
     */
    inline StatusCodes& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The items (status codes) for an origin group.</p>
     */
    inline const Aws::Vector<int>& GetItems() const{ return m_items; }

    /**
     * <p>The items (status codes) for an origin group.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The items (status codes) for an origin group.</p>
     */
    inline void SetItems(const Aws::Vector<int>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The items (status codes) for an origin group.</p>
     */
    inline void SetItems(Aws::Vector<int>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The items (status codes) for an origin group.</p>
     */
    inline StatusCodes& WithItems(const Aws::Vector<int>& value) { SetItems(value); return *this;}

    /**
     * <p>The items (status codes) for an origin group.</p>
     */
    inline StatusCodes& WithItems(Aws::Vector<int>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The items (status codes) for an origin group.</p>
     */
    inline StatusCodes& AddItems(int value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<int> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
