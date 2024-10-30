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
   * <p>Threshold to be used for the isoline calculation. Up to 3 thresholds per
   * provided type can be requested.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineThresholds">AWS
   * API Reference</a></p>
   */
  class IsolineThresholds
  {
  public:
    AWS_GEOROUTES_API IsolineThresholds();
    AWS_GEOROUTES_API IsolineThresholds(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineThresholds& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Distance to be used for the isoline calculation.</p>
     */
    inline const Aws::Vector<long long>& GetDistance() const{ return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(const Aws::Vector<long long>& value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline void SetDistance(Aws::Vector<long long>&& value) { m_distanceHasBeenSet = true; m_distance = std::move(value); }
    inline IsolineThresholds& WithDistance(const Aws::Vector<long long>& value) { SetDistance(value); return *this;}
    inline IsolineThresholds& WithDistance(Aws::Vector<long long>&& value) { SetDistance(std::move(value)); return *this;}
    inline IsolineThresholds& AddDistance(long long value) { m_distanceHasBeenSet = true; m_distance.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Time to be used for the isoline calculation.</p>
     */
    inline const Aws::Vector<long long>& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const Aws::Vector<long long>& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(Aws::Vector<long long>&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline IsolineThresholds& WithTime(const Aws::Vector<long long>& value) { SetTime(value); return *this;}
    inline IsolineThresholds& WithTime(Aws::Vector<long long>&& value) { SetTime(std::move(value)); return *this;}
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
