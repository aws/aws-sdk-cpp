/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

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
   * <p>Summarized details for the leg including travel steps only. The Distance for
   * the travel only portion of the journey is the same as the Distance within the
   * Overview summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteFerryTravelOnlySummary">AWS
   * API Reference</a></p>
   */
  class RouteFerryTravelOnlySummary
  {
  public:
    AWS_GEOROUTES_API RouteFerryTravelOnlySummary() = default;
    AWS_GEOROUTES_API RouteFerryTravelOnlySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteFerryTravelOnlySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total duration in free flowing traffic, which is the best case or shortest
     * duration possible to cover the leg.</p> <p> <b>Unit</b>: <code>seconds</code>
     * </p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RouteFerryTravelOnlySummary& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}
  private:

    long long m_duration{0};
    bool m_durationHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
