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
    AWS_GEOROUTES_API IsolineAvoidanceArea();
    AWS_GEOROUTES_API IsolineAvoidanceArea(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineAvoidanceArea& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Exceptions to the provided avoidance geometry, to be included while
     * calculating the route.</p>
     */
    inline const Aws::Vector<IsolineAvoidanceAreaGeometry>& GetExcept() const{ return m_except; }
    inline bool ExceptHasBeenSet() const { return m_exceptHasBeenSet; }
    inline void SetExcept(const Aws::Vector<IsolineAvoidanceAreaGeometry>& value) { m_exceptHasBeenSet = true; m_except = value; }
    inline void SetExcept(Aws::Vector<IsolineAvoidanceAreaGeometry>&& value) { m_exceptHasBeenSet = true; m_except = std::move(value); }
    inline IsolineAvoidanceArea& WithExcept(const Aws::Vector<IsolineAvoidanceAreaGeometry>& value) { SetExcept(value); return *this;}
    inline IsolineAvoidanceArea& WithExcept(Aws::Vector<IsolineAvoidanceAreaGeometry>&& value) { SetExcept(std::move(value)); return *this;}
    inline IsolineAvoidanceArea& AddExcept(const IsolineAvoidanceAreaGeometry& value) { m_exceptHasBeenSet = true; m_except.push_back(value); return *this; }
    inline IsolineAvoidanceArea& AddExcept(IsolineAvoidanceAreaGeometry&& value) { m_exceptHasBeenSet = true; m_except.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Geometry of the area to be avoided.</p>
     */
    inline const IsolineAvoidanceAreaGeometry& GetGeometry() const{ return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    inline void SetGeometry(const IsolineAvoidanceAreaGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }
    inline void SetGeometry(IsolineAvoidanceAreaGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }
    inline IsolineAvoidanceArea& WithGeometry(const IsolineAvoidanceAreaGeometry& value) { SetGeometry(value); return *this;}
    inline IsolineAvoidanceArea& WithGeometry(IsolineAvoidanceAreaGeometry&& value) { SetGeometry(std::move(value)); return *this;}
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
