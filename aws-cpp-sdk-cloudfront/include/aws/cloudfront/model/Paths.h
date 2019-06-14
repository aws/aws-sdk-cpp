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
   * <p>A complex type that contains information about the objects that you want to
   * invalidate. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Invalidation.html#invalidation-specifying-objects">Specifying
   * the Objects to Invalidate</a> in the <i>Amazon CloudFront Developer Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/Paths">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API Paths
  {
  public:
    Paths();
    Paths(const Aws::Utils::Xml::XmlNode& xmlNode);
    Paths& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of invalidation paths specified for the objects that you want to
     * invalidate.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of invalidation paths specified for the objects that you want to
     * invalidate.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of invalidation paths specified for the objects that you want to
     * invalidate.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of invalidation paths specified for the objects that you want to
     * invalidate.</p>
     */
    inline Paths& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>A complex type that contains a list of the paths that you want to
     * invalidate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * <p>A complex type that contains a list of the paths that you want to
     * invalidate.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A complex type that contains a list of the paths that you want to
     * invalidate.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A complex type that contains a list of the paths that you want to
     * invalidate.</p>
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A complex type that contains a list of the paths that you want to
     * invalidate.</p>
     */
    inline Paths& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * <p>A complex type that contains a list of the paths that you want to
     * invalidate.</p>
     */
    inline Paths& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains a list of the paths that you want to
     * invalidate.</p>
     */
    inline Paths& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A complex type that contains a list of the paths that you want to
     * invalidate.</p>
     */
    inline Paths& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

    /**
     * <p>A complex type that contains a list of the paths that you want to
     * invalidate.</p>
     */
    inline Paths& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
