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
#include <aws/cloudfront/model/GeoRestrictionType.h>
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
   * <p>A complex type that controls the countries in which your content is
   * distributed. CloudFront determines the location of your users using
   * <code>MaxMind</code> GeoIP databases. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GeoRestriction">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API GeoRestriction
  {
  public:
    GeoRestriction();
    GeoRestriction(const Aws::Utils::Xml::XmlNode& xmlNode);
    GeoRestriction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The method that you want to use to restrict distribution of your content by
     * country:</p> <ul> <li> <p> <code>none</code>: No geo restriction is enabled,
     * meaning access to content is not restricted by client geo location.</p> </li>
     * <li> <p> <code>blacklist</code>: The <code>Location</code> elements specify the
     * countries in which you don't want CloudFront to distribute your content.</p>
     * </li> <li> <p> <code>whitelist</code>: The <code>Location</code> elements
     * specify the countries in which you want CloudFront to distribute your
     * content.</p> </li> </ul>
     */
    inline const GeoRestrictionType& GetRestrictionType() const{ return m_restrictionType; }

    /**
     * <p>The method that you want to use to restrict distribution of your content by
     * country:</p> <ul> <li> <p> <code>none</code>: No geo restriction is enabled,
     * meaning access to content is not restricted by client geo location.</p> </li>
     * <li> <p> <code>blacklist</code>: The <code>Location</code> elements specify the
     * countries in which you don't want CloudFront to distribute your content.</p>
     * </li> <li> <p> <code>whitelist</code>: The <code>Location</code> elements
     * specify the countries in which you want CloudFront to distribute your
     * content.</p> </li> </ul>
     */
    inline bool RestrictionTypeHasBeenSet() const { return m_restrictionTypeHasBeenSet; }

    /**
     * <p>The method that you want to use to restrict distribution of your content by
     * country:</p> <ul> <li> <p> <code>none</code>: No geo restriction is enabled,
     * meaning access to content is not restricted by client geo location.</p> </li>
     * <li> <p> <code>blacklist</code>: The <code>Location</code> elements specify the
     * countries in which you don't want CloudFront to distribute your content.</p>
     * </li> <li> <p> <code>whitelist</code>: The <code>Location</code> elements
     * specify the countries in which you want CloudFront to distribute your
     * content.</p> </li> </ul>
     */
    inline void SetRestrictionType(const GeoRestrictionType& value) { m_restrictionTypeHasBeenSet = true; m_restrictionType = value; }

    /**
     * <p>The method that you want to use to restrict distribution of your content by
     * country:</p> <ul> <li> <p> <code>none</code>: No geo restriction is enabled,
     * meaning access to content is not restricted by client geo location.</p> </li>
     * <li> <p> <code>blacklist</code>: The <code>Location</code> elements specify the
     * countries in which you don't want CloudFront to distribute your content.</p>
     * </li> <li> <p> <code>whitelist</code>: The <code>Location</code> elements
     * specify the countries in which you want CloudFront to distribute your
     * content.</p> </li> </ul>
     */
    inline void SetRestrictionType(GeoRestrictionType&& value) { m_restrictionTypeHasBeenSet = true; m_restrictionType = std::move(value); }

    /**
     * <p>The method that you want to use to restrict distribution of your content by
     * country:</p> <ul> <li> <p> <code>none</code>: No geo restriction is enabled,
     * meaning access to content is not restricted by client geo location.</p> </li>
     * <li> <p> <code>blacklist</code>: The <code>Location</code> elements specify the
     * countries in which you don't want CloudFront to distribute your content.</p>
     * </li> <li> <p> <code>whitelist</code>: The <code>Location</code> elements
     * specify the countries in which you want CloudFront to distribute your
     * content.</p> </li> </ul>
     */
    inline GeoRestriction& WithRestrictionType(const GeoRestrictionType& value) { SetRestrictionType(value); return *this;}

    /**
     * <p>The method that you want to use to restrict distribution of your content by
     * country:</p> <ul> <li> <p> <code>none</code>: No geo restriction is enabled,
     * meaning access to content is not restricted by client geo location.</p> </li>
     * <li> <p> <code>blacklist</code>: The <code>Location</code> elements specify the
     * countries in which you don't want CloudFront to distribute your content.</p>
     * </li> <li> <p> <code>whitelist</code>: The <code>Location</code> elements
     * specify the countries in which you want CloudFront to distribute your
     * content.</p> </li> </ul>
     */
    inline GeoRestriction& WithRestrictionType(GeoRestrictionType&& value) { SetRestrictionType(std::move(value)); return *this;}


    /**
     * <p>When geo restriction is <code>enabled</code>, this is the number of countries
     * in your <code>whitelist</code> or <code>blacklist</code>. Otherwise, when it is
     * not enabled, <code>Quantity</code> is <code>0</code>, and you can omit
     * <code>Items</code>.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>When geo restriction is <code>enabled</code>, this is the number of countries
     * in your <code>whitelist</code> or <code>blacklist</code>. Otherwise, when it is
     * not enabled, <code>Quantity</code> is <code>0</code>, and you can omit
     * <code>Items</code>.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>When geo restriction is <code>enabled</code>, this is the number of countries
     * in your <code>whitelist</code> or <code>blacklist</code>. Otherwise, when it is
     * not enabled, <code>Quantity</code> is <code>0</code>, and you can omit
     * <code>Items</code>.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>When geo restriction is <code>enabled</code>, this is the number of countries
     * in your <code>whitelist</code> or <code>blacklist</code>. Otherwise, when it is
     * not enabled, <code>Quantity</code> is <code>0</code>, and you can omit
     * <code>Items</code>.</p>
     */
    inline GeoRestriction& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p> A complex type that contains a <code>Location</code> element for each
     * country in which you want CloudFront either to distribute your content
     * (<code>whitelist</code>) or not distribute your content
     * (<code>blacklist</code>).</p> <p>The <code>Location</code> element is a
     * two-letter, uppercase country code for a country that you want to include in
     * your <code>blacklist</code> or <code>whitelist</code>. Include one
     * <code>Location</code> element for each country.</p> <p>CloudFront and
     * <code>MaxMind</code> both use <code>ISO 3166</code> country codes. For the
     * current list of countries and the corresponding codes, see <code>ISO
     * 3166-1-alpha-2</code> code on the <i>International Organization for
     * Standardization</i> website. You can also refer to the country list on the
     * CloudFront console, which includes both country names and codes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * <p> A complex type that contains a <code>Location</code> element for each
     * country in which you want CloudFront either to distribute your content
     * (<code>whitelist</code>) or not distribute your content
     * (<code>blacklist</code>).</p> <p>The <code>Location</code> element is a
     * two-letter, uppercase country code for a country that you want to include in
     * your <code>blacklist</code> or <code>whitelist</code>. Include one
     * <code>Location</code> element for each country.</p> <p>CloudFront and
     * <code>MaxMind</code> both use <code>ISO 3166</code> country codes. For the
     * current list of countries and the corresponding codes, see <code>ISO
     * 3166-1-alpha-2</code> code on the <i>International Organization for
     * Standardization</i> website. You can also refer to the country list on the
     * CloudFront console, which includes both country names and codes.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p> A complex type that contains a <code>Location</code> element for each
     * country in which you want CloudFront either to distribute your content
     * (<code>whitelist</code>) or not distribute your content
     * (<code>blacklist</code>).</p> <p>The <code>Location</code> element is a
     * two-letter, uppercase country code for a country that you want to include in
     * your <code>blacklist</code> or <code>whitelist</code>. Include one
     * <code>Location</code> element for each country.</p> <p>CloudFront and
     * <code>MaxMind</code> both use <code>ISO 3166</code> country codes. For the
     * current list of countries and the corresponding codes, see <code>ISO
     * 3166-1-alpha-2</code> code on the <i>International Organization for
     * Standardization</i> website. You can also refer to the country list on the
     * CloudFront console, which includes both country names and codes.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p> A complex type that contains a <code>Location</code> element for each
     * country in which you want CloudFront either to distribute your content
     * (<code>whitelist</code>) or not distribute your content
     * (<code>blacklist</code>).</p> <p>The <code>Location</code> element is a
     * two-letter, uppercase country code for a country that you want to include in
     * your <code>blacklist</code> or <code>whitelist</code>. Include one
     * <code>Location</code> element for each country.</p> <p>CloudFront and
     * <code>MaxMind</code> both use <code>ISO 3166</code> country codes. For the
     * current list of countries and the corresponding codes, see <code>ISO
     * 3166-1-alpha-2</code> code on the <i>International Organization for
     * Standardization</i> website. You can also refer to the country list on the
     * CloudFront console, which includes both country names and codes.</p>
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p> A complex type that contains a <code>Location</code> element for each
     * country in which you want CloudFront either to distribute your content
     * (<code>whitelist</code>) or not distribute your content
     * (<code>blacklist</code>).</p> <p>The <code>Location</code> element is a
     * two-letter, uppercase country code for a country that you want to include in
     * your <code>blacklist</code> or <code>whitelist</code>. Include one
     * <code>Location</code> element for each country.</p> <p>CloudFront and
     * <code>MaxMind</code> both use <code>ISO 3166</code> country codes. For the
     * current list of countries and the corresponding codes, see <code>ISO
     * 3166-1-alpha-2</code> code on the <i>International Organization for
     * Standardization</i> website. You can also refer to the country list on the
     * CloudFront console, which includes both country names and codes.</p>
     */
    inline GeoRestriction& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * <p> A complex type that contains a <code>Location</code> element for each
     * country in which you want CloudFront either to distribute your content
     * (<code>whitelist</code>) or not distribute your content
     * (<code>blacklist</code>).</p> <p>The <code>Location</code> element is a
     * two-letter, uppercase country code for a country that you want to include in
     * your <code>blacklist</code> or <code>whitelist</code>. Include one
     * <code>Location</code> element for each country.</p> <p>CloudFront and
     * <code>MaxMind</code> both use <code>ISO 3166</code> country codes. For the
     * current list of countries and the corresponding codes, see <code>ISO
     * 3166-1-alpha-2</code> code on the <i>International Organization for
     * Standardization</i> website. You can also refer to the country list on the
     * CloudFront console, which includes both country names and codes.</p>
     */
    inline GeoRestriction& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p> A complex type that contains a <code>Location</code> element for each
     * country in which you want CloudFront either to distribute your content
     * (<code>whitelist</code>) or not distribute your content
     * (<code>blacklist</code>).</p> <p>The <code>Location</code> element is a
     * two-letter, uppercase country code for a country that you want to include in
     * your <code>blacklist</code> or <code>whitelist</code>. Include one
     * <code>Location</code> element for each country.</p> <p>CloudFront and
     * <code>MaxMind</code> both use <code>ISO 3166</code> country codes. For the
     * current list of countries and the corresponding codes, see <code>ISO
     * 3166-1-alpha-2</code> code on the <i>International Organization for
     * Standardization</i> website. You can also refer to the country list on the
     * CloudFront console, which includes both country names and codes.</p>
     */
    inline GeoRestriction& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p> A complex type that contains a <code>Location</code> element for each
     * country in which you want CloudFront either to distribute your content
     * (<code>whitelist</code>) or not distribute your content
     * (<code>blacklist</code>).</p> <p>The <code>Location</code> element is a
     * two-letter, uppercase country code for a country that you want to include in
     * your <code>blacklist</code> or <code>whitelist</code>. Include one
     * <code>Location</code> element for each country.</p> <p>CloudFront and
     * <code>MaxMind</code> both use <code>ISO 3166</code> country codes. For the
     * current list of countries and the corresponding codes, see <code>ISO
     * 3166-1-alpha-2</code> code on the <i>International Organization for
     * Standardization</i> website. You can also refer to the country list on the
     * CloudFront console, which includes both country names and codes.</p>
     */
    inline GeoRestriction& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

    /**
     * <p> A complex type that contains a <code>Location</code> element for each
     * country in which you want CloudFront either to distribute your content
     * (<code>whitelist</code>) or not distribute your content
     * (<code>blacklist</code>).</p> <p>The <code>Location</code> element is a
     * two-letter, uppercase country code for a country that you want to include in
     * your <code>blacklist</code> or <code>whitelist</code>. Include one
     * <code>Location</code> element for each country.</p> <p>CloudFront and
     * <code>MaxMind</code> both use <code>ISO 3166</code> country codes. For the
     * current list of countries and the corresponding codes, see <code>ISO
     * 3166-1-alpha-2</code> code on the <i>International Organization for
     * Standardization</i> website. You can also refer to the country list on the
     * CloudFront console, which includes both country names and codes.</p>
     */
    inline GeoRestriction& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:

    GeoRestrictionType m_restrictionType;
    bool m_restrictionTypeHasBeenSet;

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
