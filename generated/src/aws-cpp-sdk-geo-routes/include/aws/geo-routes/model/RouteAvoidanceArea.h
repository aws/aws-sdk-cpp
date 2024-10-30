/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteAvoidanceAreaGeometry.h>
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
   * <p>Areas to be avoided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteAvoidanceArea">AWS
   * API Reference</a></p>
   */
  class RouteAvoidanceArea
  {
  public:
    AWS_GEOROUTES_API RouteAvoidanceArea();
    AWS_GEOROUTES_API RouteAvoidanceArea(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteAvoidanceArea& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Exceptions to the provided avoidance geometry, to be included while
     * calculating the route.</p>
     */
    inline const Aws::Vector<RouteAvoidanceAreaGeometry>& GetExcept() const{ return m_except; }
    inline bool ExceptHasBeenSet() const { return m_exceptHasBeenSet; }
    inline void SetExcept(const Aws::Vector<RouteAvoidanceAreaGeometry>& value) { m_exceptHasBeenSet = true; m_except = value; }
    inline void SetExcept(Aws::Vector<RouteAvoidanceAreaGeometry>&& value) { m_exceptHasBeenSet = true; m_except = std::move(value); }
    inline RouteAvoidanceArea& WithExcept(const Aws::Vector<RouteAvoidanceAreaGeometry>& value) { SetExcept(value); return *this;}
    inline RouteAvoidanceArea& WithExcept(Aws::Vector<RouteAvoidanceAreaGeometry>&& value) { SetExcept(std::move(value)); return *this;}
    inline RouteAvoidanceArea& AddExcept(const RouteAvoidanceAreaGeometry& value) { m_exceptHasBeenSet = true; m_except.push_back(value); return *this; }
    inline RouteAvoidanceArea& AddExcept(RouteAvoidanceAreaGeometry&& value) { m_exceptHasBeenSet = true; m_except.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const RouteAvoidanceAreaGeometry& GetGeometry() const{ return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    inline void SetGeometry(const RouteAvoidanceAreaGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }
    inline void SetGeometry(RouteAvoidanceAreaGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }
    inline RouteAvoidanceArea& WithGeometry(const RouteAvoidanceAreaGeometry& value) { SetGeometry(value); return *this;}
    inline RouteAvoidanceArea& WithGeometry(RouteAvoidanceAreaGeometry&& value) { SetGeometry(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RouteAvoidanceAreaGeometry> m_except;
    bool m_exceptHasBeenSet = false;

    RouteAvoidanceAreaGeometry m_geometry;
    bool m_geometryHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
