﻿/**
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
   * <p>Allow Options related to the route matrix.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixAllowOptions">AWS
   * API Reference</a></p>
   */
  class RouteMatrixAllowOptions
  {
  public:
    AWS_GEOROUTES_API RouteMatrixAllowOptions() = default;
    AWS_GEOROUTES_API RouteMatrixAllowOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixAllowOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allow Hot (High Occupancy Toll) lanes while calculating the route.</p>
     * <p>Default value: <code>false</code> </p>
     */
    inline bool GetHot() const { return m_hot; }
    inline bool HotHasBeenSet() const { return m_hotHasBeenSet; }
    inline void SetHot(bool value) { m_hotHasBeenSet = true; m_hot = value; }
    inline RouteMatrixAllowOptions& WithHot(bool value) { SetHot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allow Hov (High Occupancy vehicle) lanes while calculating the route.</p>
     * <p>Default value: <code>false</code> </p>
     */
    inline bool GetHov() const { return m_hov; }
    inline bool HovHasBeenSet() const { return m_hovHasBeenSet; }
    inline void SetHov(bool value) { m_hovHasBeenSet = true; m_hov = value; }
    inline RouteMatrixAllowOptions& WithHov(bool value) { SetHov(value); return *this;}
    ///@}
  private:

    bool m_hot{false};
    bool m_hotHasBeenSet = false;

    bool m_hov{false};
    bool m_hovHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
