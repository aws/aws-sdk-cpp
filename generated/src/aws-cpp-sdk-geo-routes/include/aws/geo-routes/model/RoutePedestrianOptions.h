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
   * <p>Options related to the pedestrian.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoutePedestrianOptions">AWS
   * API Reference</a></p>
   */
  class RoutePedestrianOptions
  {
  public:
    AWS_GEOROUTES_API RoutePedestrianOptions() = default;
    AWS_GEOROUTES_API RoutePedestrianOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoutePedestrianOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Walking speed in Kilometers per hour.</p>
     */
    inline double GetSpeed() const { return m_speed; }
    inline bool SpeedHasBeenSet() const { return m_speedHasBeenSet; }
    inline void SetSpeed(double value) { m_speedHasBeenSet = true; m_speed = value; }
    inline RoutePedestrianOptions& WithSpeed(double value) { SetSpeed(value); return *this;}
    ///@}
  private:

    double m_speed{0.0};
    bool m_speedHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
