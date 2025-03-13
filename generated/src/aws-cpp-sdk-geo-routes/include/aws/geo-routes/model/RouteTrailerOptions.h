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
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTrailerOptions">AWS
   * API Reference</a></p>
   */
  class RouteTrailerOptions
  {
  public:
    AWS_GEOROUTES_API RouteTrailerOptions() = default;
    AWS_GEOROUTES_API RouteTrailerOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTrailerOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total number of axles of the vehicle.</p>
     */
    inline int GetAxleCount() const { return m_axleCount; }
    inline bool AxleCountHasBeenSet() const { return m_axleCountHasBeenSet; }
    inline void SetAxleCount(int value) { m_axleCountHasBeenSet = true; m_axleCount = value; }
    inline RouteTrailerOptions& WithAxleCount(int value) { SetAxleCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of trailers attached to the vehicle.</p> <p>Default Value:
     * <code>0</code> </p>
     */
    inline int GetTrailerCount() const { return m_trailerCount; }
    inline bool TrailerCountHasBeenSet() const { return m_trailerCountHasBeenSet; }
    inline void SetTrailerCount(int value) { m_trailerCountHasBeenSet = true; m_trailerCount = value; }
    inline RouteTrailerOptions& WithTrailerCount(int value) { SetTrailerCount(value); return *this;}
    ///@}
  private:

    int m_axleCount{0};
    bool m_axleCountHasBeenSet = false;

    int m_trailerCount{0};
    bool m_trailerCountHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
