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
   * <p>Trailer options corresponding to the vehicle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationTrailerOptions">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationTrailerOptions
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationTrailerOptions() = default;
    AWS_GEOROUTES_API WaypointOptimizationTrailerOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationTrailerOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Number of trailers attached to the vehicle.</p> <p>Default Value:
     * <code>0</code> </p>
     */
    inline int GetTrailerCount() const { return m_trailerCount; }
    inline bool TrailerCountHasBeenSet() const { return m_trailerCountHasBeenSet; }
    inline void SetTrailerCount(int value) { m_trailerCountHasBeenSet = true; m_trailerCount = value; }
    inline WaypointOptimizationTrailerOptions& WithTrailerCount(int value) { SetTrailerCount(value); return *this;}
    ///@}
  private:

    int m_trailerCount{0};
    bool m_trailerCountHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
