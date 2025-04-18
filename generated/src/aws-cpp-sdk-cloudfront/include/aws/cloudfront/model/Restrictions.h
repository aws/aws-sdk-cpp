﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/GeoRestriction.h>
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
   * <p>A complex type that identifies ways in which you want to restrict
   * distribution of your content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/Restrictions">AWS
   * API Reference</a></p>
   */
  class Restrictions
  {
  public:
    AWS_CLOUDFRONT_API Restrictions() = default;
    AWS_CLOUDFRONT_API Restrictions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API Restrictions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A complex type that controls the countries in which your content is
     * distributed. CloudFront determines the location of your users using
     * <code>MaxMind</code> GeoIP databases.</p>
     */
    inline const GeoRestriction& GetGeoRestriction() const { return m_geoRestriction; }
    inline bool GeoRestrictionHasBeenSet() const { return m_geoRestrictionHasBeenSet; }
    template<typename GeoRestrictionT = GeoRestriction>
    void SetGeoRestriction(GeoRestrictionT&& value) { m_geoRestrictionHasBeenSet = true; m_geoRestriction = std::forward<GeoRestrictionT>(value); }
    template<typename GeoRestrictionT = GeoRestriction>
    Restrictions& WithGeoRestriction(GeoRestrictionT&& value) { SetGeoRestriction(std::forward<GeoRestrictionT>(value)); return *this;}
    ///@}
  private:

    GeoRestriction m_geoRestriction;
    bool m_geoRestrictionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
