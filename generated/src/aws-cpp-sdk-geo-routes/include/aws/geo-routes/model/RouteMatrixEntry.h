/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteMatrixErrorCode.h>
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
   * <p>The calculated route matrix containing the results for all pairs of Origins
   * to Destination positions. Each row corresponds to one entry in Origins. Each
   * entry in the row corresponds to the route from that entry in Origins to an entry
   * in Destination positions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixEntry">AWS
   * API Reference</a></p>
   */
  class RouteMatrixEntry
  {
  public:
    AWS_GEOROUTES_API RouteMatrixEntry() = default;
    AWS_GEOROUTES_API RouteMatrixEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total distance of travel for the route.</p>
     */
    inline long long GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline RouteMatrixEntry& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected duration of travel for the route.</p> <p> <b>Unit</b>:
     * <code>seconds</code> </p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RouteMatrixEntry& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error code that occurred during calculation of the route.</p>
     */
    inline RouteMatrixErrorCode GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(RouteMatrixErrorCode value) { m_errorHasBeenSet = true; m_error = value; }
    inline RouteMatrixEntry& WithError(RouteMatrixErrorCode value) { SetError(value); return *this;}
    ///@}
  private:

    long long m_distance{0};
    bool m_distanceHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    RouteMatrixErrorCode m_error{RouteMatrixErrorCode::NOT_SET};
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
