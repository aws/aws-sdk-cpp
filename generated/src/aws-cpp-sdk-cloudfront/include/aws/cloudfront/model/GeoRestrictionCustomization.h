/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The customizations that you specified for the distribution tenant for
   * geographic restrictions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GeoRestrictionCustomization">AWS
   * API Reference</a></p>
   */
  class GeoRestrictionCustomization
  {
  public:
    AWS_CLOUDFRONT_API GeoRestrictionCustomization() = default;
    AWS_CLOUDFRONT_API GeoRestrictionCustomization(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API GeoRestrictionCustomization& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The method that you want to use to restrict distribution of your content by
     * country:</p> <ul> <li> <p> <code>none</code>: No geographic restriction is
     * enabled, meaning access to content is not restricted by client geo location.</p>
     * </li> <li> <p> <code>blacklist</code>: The <code>Location</code> elements
     * specify the countries in which you don't want CloudFront to distribute your
     * content.</p> </li> <li> <p> <code>whitelist</code>: The <code>Location</code>
     * elements specify the countries in which you want CloudFront to distribute your
     * content.</p> </li> </ul>
     */
    inline GeoRestrictionType GetRestrictionType() const { return m_restrictionType; }
    inline bool RestrictionTypeHasBeenSet() const { return m_restrictionTypeHasBeenSet; }
    inline void SetRestrictionType(GeoRestrictionType value) { m_restrictionTypeHasBeenSet = true; m_restrictionType = value; }
    inline GeoRestrictionCustomization& WithRestrictionType(GeoRestrictionType value) { SetRestrictionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locations for geographic restrictions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLocations() const { return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    template<typename LocationsT = Aws::Vector<Aws::String>>
    void SetLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations = std::forward<LocationsT>(value); }
    template<typename LocationsT = Aws::Vector<Aws::String>>
    GeoRestrictionCustomization& WithLocations(LocationsT&& value) { SetLocations(std::forward<LocationsT>(value)); return *this;}
    template<typename LocationsT = Aws::String>
    GeoRestrictionCustomization& AddLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations.emplace_back(std::forward<LocationsT>(value)); return *this; }
    ///@}
  private:

    GeoRestrictionType m_restrictionType{GeoRestrictionType::NOT_SET};
    bool m_restrictionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_locations;
    bool m_locationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
