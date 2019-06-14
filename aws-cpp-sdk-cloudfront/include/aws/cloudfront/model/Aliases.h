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
   * <p>A complex type that contains information about CNAMEs (alternate domain
   * names), if any, for this distribution. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/Aliases">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API Aliases
  {
  public:
    Aliases();
    Aliases(const Aws::Utils::Xml::XmlNode& xmlNode);
    Aliases& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of CNAME aliases, if any, that you want to associate with this
     * distribution.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of CNAME aliases, if any, that you want to associate with this
     * distribution.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of CNAME aliases, if any, that you want to associate with this
     * distribution.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of CNAME aliases, if any, that you want to associate with this
     * distribution.</p>
     */
    inline Aliases& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>A complex type that contains the CNAME aliases, if any, that you want to
     * associate with this distribution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * <p>A complex type that contains the CNAME aliases, if any, that you want to
     * associate with this distribution.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A complex type that contains the CNAME aliases, if any, that you want to
     * associate with this distribution.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A complex type that contains the CNAME aliases, if any, that you want to
     * associate with this distribution.</p>
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A complex type that contains the CNAME aliases, if any, that you want to
     * associate with this distribution.</p>
     */
    inline Aliases& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * <p>A complex type that contains the CNAME aliases, if any, that you want to
     * associate with this distribution.</p>
     */
    inline Aliases& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains the CNAME aliases, if any, that you want to
     * associate with this distribution.</p>
     */
    inline Aliases& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A complex type that contains the CNAME aliases, if any, that you want to
     * associate with this distribution.</p>
     */
    inline Aliases& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

    /**
     * <p>A complex type that contains the CNAME aliases, if any, that you want to
     * associate with this distribution.</p>
     */
    inline Aliases& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
