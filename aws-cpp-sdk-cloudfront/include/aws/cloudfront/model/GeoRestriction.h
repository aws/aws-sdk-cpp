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
#include <aws/cloudfront/model/GeoRestrictionType.h>
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
   * A complex type that controls the countries in which your content is distributed.
   * For more information about geo restriction, go to Customizing Error Responses in
   * the Amazon CloudFront Developer Guide. CloudFront determines the location of
   * your users using MaxMind GeoIP databases. For information about the accuracy of
   * these databases, see How accurate are your GeoIP databases? on the MaxMind
   * website.
   */
  class AWS_CLOUDFRONT_API GeoRestriction
  {
  public:
    GeoRestriction();
    GeoRestriction(const Aws::Utils::Xml::XmlNode& xmlNode);
    GeoRestriction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The method that you want to use to restrict distribution of your content by
     * country: - none: No geo restriction is enabled, meaning access to content is not
     * restricted by client geo location. - blacklist: The Location elements specify
     * the countries in which you do not want CloudFront to distribute your content. -
     * whitelist: The Location elements specify the countries in which you want
     * CloudFront to distribute your content.
     */
    inline const GeoRestrictionType& GetRestrictionType() const{ return m_restrictionType; }

    /**
     * The method that you want to use to restrict distribution of your content by
     * country: - none: No geo restriction is enabled, meaning access to content is not
     * restricted by client geo location. - blacklist: The Location elements specify
     * the countries in which you do not want CloudFront to distribute your content. -
     * whitelist: The Location elements specify the countries in which you want
     * CloudFront to distribute your content.
     */
    inline void SetRestrictionType(const GeoRestrictionType& value) { m_restrictionTypeHasBeenSet = true; m_restrictionType = value; }

    /**
     * The method that you want to use to restrict distribution of your content by
     * country: - none: No geo restriction is enabled, meaning access to content is not
     * restricted by client geo location. - blacklist: The Location elements specify
     * the countries in which you do not want CloudFront to distribute your content. -
     * whitelist: The Location elements specify the countries in which you want
     * CloudFront to distribute your content.
     */
    inline void SetRestrictionType(GeoRestrictionType&& value) { m_restrictionTypeHasBeenSet = true; m_restrictionType = value; }

    /**
     * The method that you want to use to restrict distribution of your content by
     * country: - none: No geo restriction is enabled, meaning access to content is not
     * restricted by client geo location. - blacklist: The Location elements specify
     * the countries in which you do not want CloudFront to distribute your content. -
     * whitelist: The Location elements specify the countries in which you want
     * CloudFront to distribute your content.
     */
    inline GeoRestriction& WithRestrictionType(const GeoRestrictionType& value) { SetRestrictionType(value); return *this;}

    /**
     * The method that you want to use to restrict distribution of your content by
     * country: - none: No geo restriction is enabled, meaning access to content is not
     * restricted by client geo location. - blacklist: The Location elements specify
     * the countries in which you do not want CloudFront to distribute your content. -
     * whitelist: The Location elements specify the countries in which you want
     * CloudFront to distribute your content.
     */
    inline GeoRestriction& WithRestrictionType(GeoRestrictionType&& value) { SetRestrictionType(value); return *this;}

    /**
     * When geo restriction is enabled, this is the number of countries in your
     * whitelist or blacklist. Otherwise, when it is not enabled, Quantity is 0, and
     * you can omit Items.
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * When geo restriction is enabled, this is the number of countries in your
     * whitelist or blacklist. Otherwise, when it is not enabled, Quantity is 0, and
     * you can omit Items.
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * When geo restriction is enabled, this is the number of countries in your
     * whitelist or blacklist. Otherwise, when it is not enabled, Quantity is 0, and
     * you can omit Items.
     */
    inline GeoRestriction& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * A complex type that contains a Location element for each country in which you
     * want CloudFront either to distribute your content (whitelist) or not distribute
     * your content (blacklist). The Location element is a two-letter, uppercase
     * country code for a country that you want to include in your blacklist or
     * whitelist. Include one Location element for each country. CloudFront and MaxMind
     * both use ISO 3166 country codes. For the current list of countries and the
     * corresponding codes, see ISO 3166-1-alpha-2 code on the International
     * Organization for Standardization website. You can also refer to the country list
     * in the CloudFront console, which includes both country names and codes.
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * A complex type that contains a Location element for each country in which you
     * want CloudFront either to distribute your content (whitelist) or not distribute
     * your content (blacklist). The Location element is a two-letter, uppercase
     * country code for a country that you want to include in your blacklist or
     * whitelist. Include one Location element for each country. CloudFront and MaxMind
     * both use ISO 3166 country codes. For the current list of countries and the
     * corresponding codes, see ISO 3166-1-alpha-2 code on the International
     * Organization for Standardization website. You can also refer to the country list
     * in the CloudFront console, which includes both country names and codes.
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains a Location element for each country in which you
     * want CloudFront either to distribute your content (whitelist) or not distribute
     * your content (blacklist). The Location element is a two-letter, uppercase
     * country code for a country that you want to include in your blacklist or
     * whitelist. Include one Location element for each country. CloudFront and MaxMind
     * both use ISO 3166 country codes. For the current list of countries and the
     * corresponding codes, see ISO 3166-1-alpha-2 code on the International
     * Organization for Standardization website. You can also refer to the country list
     * in the CloudFront console, which includes both country names and codes.
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains a Location element for each country in which you
     * want CloudFront either to distribute your content (whitelist) or not distribute
     * your content (blacklist). The Location element is a two-letter, uppercase
     * country code for a country that you want to include in your blacklist or
     * whitelist. Include one Location element for each country. CloudFront and MaxMind
     * both use ISO 3166 country codes. For the current list of countries and the
     * corresponding codes, see ISO 3166-1-alpha-2 code on the International
     * Organization for Standardization website. You can also refer to the country list
     * in the CloudFront console, which includes both country names and codes.
     */
    inline GeoRestriction& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains a Location element for each country in which you
     * want CloudFront either to distribute your content (whitelist) or not distribute
     * your content (blacklist). The Location element is a two-letter, uppercase
     * country code for a country that you want to include in your blacklist or
     * whitelist. Include one Location element for each country. CloudFront and MaxMind
     * both use ISO 3166 country codes. For the current list of countries and the
     * corresponding codes, see ISO 3166-1-alpha-2 code on the International
     * Organization for Standardization website. You can also refer to the country list
     * in the CloudFront console, which includes both country names and codes.
     */
    inline GeoRestriction& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains a Location element for each country in which you
     * want CloudFront either to distribute your content (whitelist) or not distribute
     * your content (blacklist). The Location element is a two-letter, uppercase
     * country code for a country that you want to include in your blacklist or
     * whitelist. Include one Location element for each country. CloudFront and MaxMind
     * both use ISO 3166 country codes. For the current list of countries and the
     * corresponding codes, see ISO 3166-1-alpha-2 code on the International
     * Organization for Standardization website. You can also refer to the country list
     * in the CloudFront console, which includes both country names and codes.
     */
    inline GeoRestriction& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * A complex type that contains a Location element for each country in which you
     * want CloudFront either to distribute your content (whitelist) or not distribute
     * your content (blacklist). The Location element is a two-letter, uppercase
     * country code for a country that you want to include in your blacklist or
     * whitelist. Include one Location element for each country. CloudFront and MaxMind
     * both use ISO 3166 country codes. For the current list of countries and the
     * corresponding codes, see ISO 3166-1-alpha-2 code on the International
     * Organization for Standardization website. You can also refer to the country list
     * in the CloudFront console, which includes both country names and codes.
     */
    inline GeoRestriction& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * A complex type that contains a Location element for each country in which you
     * want CloudFront either to distribute your content (whitelist) or not distribute
     * your content (blacklist). The Location element is a two-letter, uppercase
     * country code for a country that you want to include in your blacklist or
     * whitelist. Include one Location element for each country. CloudFront and MaxMind
     * both use ISO 3166 country codes. For the current list of countries and the
     * corresponding codes, see ISO 3166-1-alpha-2 code on the International
     * Organization for Standardization website. You can also refer to the country list
     * in the CloudFront console, which includes both country names and codes.
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
