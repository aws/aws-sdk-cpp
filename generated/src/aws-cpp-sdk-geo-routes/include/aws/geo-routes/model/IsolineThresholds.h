/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Threshold to be used for the isoline calculation. Up to 5 thresholds per
   * provided type can be requested.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineThresholds">AWS
   * API Reference</a></p>
   */
  class IsolineThresholds
  {
  public:
    AWS_GEOROUTES_API IsolineThresholds() = default;
    AWS_GEOROUTES_API IsolineThresholds(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineThresholds& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Distance to be used for the isoline calculation.</p>
     */
    inline const Aws::Vector<long long>& GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    template<typename DistanceT = Aws::Vector<long long>>
    void SetDistance(DistanceT&& value) { m_distanceHasBeenSet = true; m_distance = std::forward<DistanceT>(value); }
    template<typename DistanceT = Aws::Vector<long long>>
    IsolineThresholds& WithDistance(DistanceT&& value) { SetDistance(std::forward<DistanceT>(value)); return *this;}
    inline IsolineThresholds& AddDistance(long long value) { m_distanceHasBeenSet = true; m_distance.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Time to be used for the isoline calculation.</p>
     */
    inline const Aws::Vector<long long>& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::Vector<long long>>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::Vector<long long>>
    IsolineThresholds& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    inline IsolineThresholds& AddTime(long long value) { m_timeHasBeenSet = true; m_time.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<long long> m_distance;
    bool m_distanceHasBeenSet = false;

    Aws::Vector<long long> m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
