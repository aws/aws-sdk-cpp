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
#include <aws/pinpoint/model/GPSCoordinates.h>
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
   * <p>Specifies GPS-based criteria for including or excluding endpoints from a
   * segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GPSPointDimension">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API GPSPointDimension
  {
  public:
    GPSPointDimension();
    GPSPointDimension(Aws::Utils::Json::JsonView jsonValue);
    GPSPointDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The GPS coordinates to measure distance from.</p>
     */
    inline const GPSCoordinates& GetCoordinates() const{ return m_coordinates; }

    /**
     * <p>The GPS coordinates to measure distance from.</p>
     */
    inline bool CoordinatesHasBeenSet() const { return m_coordinatesHasBeenSet; }

    /**
     * <p>The GPS coordinates to measure distance from.</p>
     */
    inline void SetCoordinates(const GPSCoordinates& value) { m_coordinatesHasBeenSet = true; m_coordinates = value; }

    /**
     * <p>The GPS coordinates to measure distance from.</p>
     */
    inline void SetCoordinates(GPSCoordinates&& value) { m_coordinatesHasBeenSet = true; m_coordinates = std::move(value); }

    /**
     * <p>The GPS coordinates to measure distance from.</p>
     */
    inline GPSPointDimension& WithCoordinates(const GPSCoordinates& value) { SetCoordinates(value); return *this;}

    /**
     * <p>The GPS coordinates to measure distance from.</p>
     */
    inline GPSPointDimension& WithCoordinates(GPSCoordinates&& value) { SetCoordinates(std::move(value)); return *this;}


    /**
     * <p>The range, in kilometers, from the GPS coordinates.</p>
     */
    inline double GetRangeInKilometers() const{ return m_rangeInKilometers; }

    /**
     * <p>The range, in kilometers, from the GPS coordinates.</p>
     */
    inline bool RangeInKilometersHasBeenSet() const { return m_rangeInKilometersHasBeenSet; }

    /**
     * <p>The range, in kilometers, from the GPS coordinates.</p>
     */
    inline void SetRangeInKilometers(double value) { m_rangeInKilometersHasBeenSet = true; m_rangeInKilometers = value; }

    /**
     * <p>The range, in kilometers, from the GPS coordinates.</p>
     */
    inline GPSPointDimension& WithRangeInKilometers(double value) { SetRangeInKilometers(value); return *this;}

  private:

    GPSCoordinates m_coordinates;
    bool m_coordinatesHasBeenSet;

    double m_rangeInKilometers;
    bool m_rangeInKilometersHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
