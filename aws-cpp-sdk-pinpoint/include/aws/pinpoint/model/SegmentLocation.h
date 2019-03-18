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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SetDimension.h>
#include <aws/pinpoint/model/GPSPointDimension.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Segment location dimensions<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentLocation">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SegmentLocation
  {
  public:
    SegmentLocation();
    SegmentLocation(Aws::Utils::Json::JsonView jsonValue);
    SegmentLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The country or region, in ISO 3166-1 alpha-2 format.
     */
    inline const SetDimension& GetCountry() const{ return m_country; }

    /**
     * The country or region, in ISO 3166-1 alpha-2 format.
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * The country or region, in ISO 3166-1 alpha-2 format.
     */
    inline void SetCountry(const SetDimension& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * The country or region, in ISO 3166-1 alpha-2 format.
     */
    inline void SetCountry(SetDimension&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * The country or region, in ISO 3166-1 alpha-2 format.
     */
    inline SegmentLocation& WithCountry(const SetDimension& value) { SetCountry(value); return *this;}

    /**
     * The country or region, in ISO 3166-1 alpha-2 format.
     */
    inline SegmentLocation& WithCountry(SetDimension&& value) { SetCountry(std::move(value)); return *this;}


    /**
     * The GPS Point dimension.
     */
    inline const GPSPointDimension& GetGPSPoint() const{ return m_gPSPoint; }

    /**
     * The GPS Point dimension.
     */
    inline bool GPSPointHasBeenSet() const { return m_gPSPointHasBeenSet; }

    /**
     * The GPS Point dimension.
     */
    inline void SetGPSPoint(const GPSPointDimension& value) { m_gPSPointHasBeenSet = true; m_gPSPoint = value; }

    /**
     * The GPS Point dimension.
     */
    inline void SetGPSPoint(GPSPointDimension&& value) { m_gPSPointHasBeenSet = true; m_gPSPoint = std::move(value); }

    /**
     * The GPS Point dimension.
     */
    inline SegmentLocation& WithGPSPoint(const GPSPointDimension& value) { SetGPSPoint(value); return *this;}

    /**
     * The GPS Point dimension.
     */
    inline SegmentLocation& WithGPSPoint(GPSPointDimension&& value) { SetGPSPoint(std::move(value)); return *this;}

  private:

    SetDimension m_country;
    bool m_countryHasBeenSet;

    GPSPointDimension m_gPSPoint;
    bool m_gPSPointHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
