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
#include <aws/cloudfront/model/OriginCustomHeader.h>

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
   * A complex type that contains the list of Custom Headers for each origin.
   */
  class AWS_CLOUDFRONT_API CustomHeaders
  {
  public:
    CustomHeaders();
    CustomHeaders(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomHeaders& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The number of custom headers for this origin.
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * The number of custom headers for this origin.
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * The number of custom headers for this origin.
     */
    inline CustomHeaders& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * A complex type that contains the custom headers for this Origin.
     */
    inline const Aws::Vector<OriginCustomHeader>& GetItems() const{ return m_items; }

    /**
     * A complex type that contains the custom headers for this Origin.
     */
    inline void SetItems(const Aws::Vector<OriginCustomHeader>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains the custom headers for this Origin.
     */
    inline void SetItems(Aws::Vector<OriginCustomHeader>&& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains the custom headers for this Origin.
     */
    inline CustomHeaders& WithItems(const Aws::Vector<OriginCustomHeader>& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains the custom headers for this Origin.
     */
    inline CustomHeaders& WithItems(Aws::Vector<OriginCustomHeader>&& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains the custom headers for this Origin.
     */
    inline CustomHeaders& AddItems(const OriginCustomHeader& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * A complex type that contains the custom headers for this Origin.
     */
    inline CustomHeaders& AddItems(OriginCustomHeader&& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:
    int m_quantity;
    bool m_quantityHasBeenSet;
    Aws::Vector<OriginCustomHeader> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
