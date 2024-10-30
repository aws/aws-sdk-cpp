/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/LocalizedString.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Span computed for the requested SpanAdditionalFeatures.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteFerrySpan">AWS
   * API Reference</a></p>
   */
  class RouteFerrySpan
  {
  public:
    AWS_GEOROUTES_API RouteFerrySpan();
    AWS_GEOROUTES_API RouteFerrySpan(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteFerrySpan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>3 letter Country code corresponding to the Span.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline RouteFerrySpan& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline RouteFerrySpan& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline RouteFerrySpan& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Distance of the computed span. This feature doesn't split a span, but is
     * always computed on a span split by other properties.</p>
     */
    inline long long GetDistance() const{ return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline RouteFerrySpan& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the computed span. This feature doesn't split a span, but is
     * always computed on a span split by other properties.</p> <p> <b>Unit</b>:
     * <code>seconds</code> </p>
     */
    inline long long GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RouteFerrySpan& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Offset in the leg geometry corresponding to the start of this span.</p>
     */
    inline int GetGeometryOffset() const{ return m_geometryOffset; }
    inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
    inline void SetGeometryOffset(int value) { m_geometryOffsetHasBeenSet = true; m_geometryOffset = value; }
    inline RouteFerrySpan& WithGeometryOffset(int value) { SetGeometryOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides an array of names of the ferry span in available languages.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetNames() const{ return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    inline void SetNames(const Aws::Vector<LocalizedString>& value) { m_namesHasBeenSet = true; m_names = value; }
    inline void SetNames(Aws::Vector<LocalizedString>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }
    inline RouteFerrySpan& WithNames(const Aws::Vector<LocalizedString>& value) { SetNames(value); return *this;}
    inline RouteFerrySpan& WithNames(Aws::Vector<LocalizedString>&& value) { SetNames(std::move(value)); return *this;}
    inline RouteFerrySpan& AddNames(const LocalizedString& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    inline RouteFerrySpan& AddNames(LocalizedString&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>2-3 letter Region code corresponding to the Span. This is either a province
     * or a state.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RouteFerrySpan& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RouteFerrySpan& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RouteFerrySpan& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    long long m_distance;
    bool m_distanceHasBeenSet = false;

    long long m_duration;
    bool m_durationHasBeenSet = false;

    int m_geometryOffset;
    bool m_geometryOffsetHasBeenSet = false;

    Aws::Vector<LocalizedString> m_names;
    bool m_namesHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
