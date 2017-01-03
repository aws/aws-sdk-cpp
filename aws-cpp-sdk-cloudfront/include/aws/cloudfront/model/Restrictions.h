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
#include <aws/cloudfront/model/GeoRestriction.h>

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
   * A complex type that identifies ways in which you want to restrict distribution
   * of your content.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2016-01-28/Restrictions">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API Restrictions
  {
  public:
    Restrictions();
    Restrictions(const Aws::Utils::Xml::XmlNode& xmlNode);
    Restrictions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    
    inline const GeoRestriction& GetGeoRestriction() const{ return m_geoRestriction; }

    
    inline void SetGeoRestriction(const GeoRestriction& value) { m_geoRestrictionHasBeenSet = true; m_geoRestriction = value; }

    
    inline void SetGeoRestriction(GeoRestriction&& value) { m_geoRestrictionHasBeenSet = true; m_geoRestriction = value; }

    
    inline Restrictions& WithGeoRestriction(const GeoRestriction& value) { SetGeoRestriction(value); return *this;}

    
    inline Restrictions& WithGeoRestriction(GeoRestriction&& value) { SetGeoRestriction(value); return *this;}

  private:
    GeoRestriction m_geoRestriction;
    bool m_geoRestrictionHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
