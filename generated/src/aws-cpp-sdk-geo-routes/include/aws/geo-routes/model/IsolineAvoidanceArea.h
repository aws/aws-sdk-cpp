/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/IsolineAvoidanceAreaGeometry.h>
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
   * <p>The area to be avoided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineAvoidanceArea">AWS
   * API Reference</a></p>
   */
  class IsolineAvoidanceArea
  {
  public:
    AWS_GEOROUTES_API IsolineAvoidanceArea() = default;
    AWS_GEOROUTES_API IsolineAvoidanceArea(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineAvoidanceArea& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Exceptions to the provided avoidance geometry, to be included while
     * calculating an isoline.</p>
     */
    inline const Aws::Vector<IsolineAvoidanceAreaGeometry>& GetExcept() const { return m_except; }
    inline bool ExceptHasBeenSet() const { return m_exceptHasBeenSet; }
    template<typename ExceptT = Aws::Vector<IsolineAvoidanceAreaGeometry>>
    void SetExcept(ExceptT&& value) { m_exceptHasBeenSet = true; m_except = std::forward<ExceptT>(value); }
    template<typename ExceptT = Aws::Vector<IsolineAvoidanceAreaGeometry>>
    IsolineAvoidanceArea& WithExcept(ExceptT&& value) { SetExcept(std::forward<ExceptT>(value)); return *this;}
    template<typename ExceptT = IsolineAvoidanceAreaGeometry>
    IsolineAvoidanceArea& AddExcept(ExceptT&& value) { m_exceptHasBeenSet = true; m_except.emplace_back(std::forward<ExceptT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Geometry of the area to be avoided.</p>
     */
    inline const IsolineAvoidanceAreaGeometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = IsolineAvoidanceAreaGeometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = IsolineAvoidanceAreaGeometry>
    IsolineAvoidanceArea& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IsolineAvoidanceAreaGeometry> m_except;
    bool m_exceptHasBeenSet = false;

    IsolineAvoidanceAreaGeometry m_geometry;
    bool m_geometryHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
