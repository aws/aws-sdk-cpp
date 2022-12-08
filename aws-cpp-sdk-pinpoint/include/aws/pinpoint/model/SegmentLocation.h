/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Specifies geographical dimension settings for a segment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentLocation">AWS
   * API Reference</a></p>
   */
  class SegmentLocation
  {
  public:
    AWS_PINPOINT_API SegmentLocation();
    AWS_PINPOINT_API SegmentLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SegmentLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The country or region code, in ISO 3166-1 alpha-2 format, for the
     * segment.</p>
     */
    inline const SetDimension& GetCountry() const{ return m_country; }

    /**
     * <p>The country or region code, in ISO 3166-1 alpha-2 format, for the
     * segment.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>The country or region code, in ISO 3166-1 alpha-2 format, for the
     * segment.</p>
     */
    inline void SetCountry(const SetDimension& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The country or region code, in ISO 3166-1 alpha-2 format, for the
     * segment.</p>
     */
    inline void SetCountry(SetDimension&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>The country or region code, in ISO 3166-1 alpha-2 format, for the
     * segment.</p>
     */
    inline SegmentLocation& WithCountry(const SetDimension& value) { SetCountry(value); return *this;}

    /**
     * <p>The country or region code, in ISO 3166-1 alpha-2 format, for the
     * segment.</p>
     */
    inline SegmentLocation& WithCountry(SetDimension&& value) { SetCountry(std::move(value)); return *this;}


    /**
     * <p>The GPS location and range for the segment.</p>
     */
    inline const GPSPointDimension& GetGPSPoint() const{ return m_gPSPoint; }

    /**
     * <p>The GPS location and range for the segment.</p>
     */
    inline bool GPSPointHasBeenSet() const { return m_gPSPointHasBeenSet; }

    /**
     * <p>The GPS location and range for the segment.</p>
     */
    inline void SetGPSPoint(const GPSPointDimension& value) { m_gPSPointHasBeenSet = true; m_gPSPoint = value; }

    /**
     * <p>The GPS location and range for the segment.</p>
     */
    inline void SetGPSPoint(GPSPointDimension&& value) { m_gPSPointHasBeenSet = true; m_gPSPoint = std::move(value); }

    /**
     * <p>The GPS location and range for the segment.</p>
     */
    inline SegmentLocation& WithGPSPoint(const GPSPointDimension& value) { SetGPSPoint(value); return *this;}

    /**
     * <p>The GPS location and range for the segment.</p>
     */
    inline SegmentLocation& WithGPSPoint(GPSPointDimension&& value) { SetGPSPoint(std::move(value)); return *this;}

  private:

    SetDimension m_country;
    bool m_countryHasBeenSet = false;

    GPSPointDimension m_gPSPoint;
    bool m_gPSPointHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
