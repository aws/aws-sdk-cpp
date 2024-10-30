/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Position provided in the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteFerryPlace">AWS
   * API Reference</a></p>
   */
  class RouteFerryPlace
  {
  public:
    AWS_GEOROUTES_API RouteFerryPlace();
    AWS_GEOROUTES_API RouteFerryPlace(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteFerryPlace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the place.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RouteFerryPlace& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RouteFerryPlace& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RouteFerryPlace& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Position provided in the request.</p>
     */
    inline const Aws::Vector<double>& GetOriginalPosition() const{ return m_originalPosition; }
    inline bool OriginalPositionHasBeenSet() const { return m_originalPositionHasBeenSet; }
    inline void SetOriginalPosition(const Aws::Vector<double>& value) { m_originalPositionHasBeenSet = true; m_originalPosition = value; }
    inline void SetOriginalPosition(Aws::Vector<double>&& value) { m_originalPositionHasBeenSet = true; m_originalPosition = std::move(value); }
    inline RouteFerryPlace& WithOriginalPosition(const Aws::Vector<double>& value) { SetOriginalPosition(value); return *this;}
    inline RouteFerryPlace& WithOriginalPosition(Aws::Vector<double>&& value) { SetOriginalPosition(std::move(value)); return *this;}
    inline RouteFerryPlace& AddOriginalPosition(double value) { m_originalPositionHasBeenSet = true; m_originalPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Position defined as <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline RouteFerryPlace& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}
    inline RouteFerryPlace& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}
    inline RouteFerryPlace& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Index of the waypoint in the request.</p>
     */
    inline int GetWaypointIndex() const{ return m_waypointIndex; }
    inline bool WaypointIndexHasBeenSet() const { return m_waypointIndexHasBeenSet; }
    inline void SetWaypointIndex(int value) { m_waypointIndexHasBeenSet = true; m_waypointIndex = value; }
    inline RouteFerryPlace& WithWaypointIndex(int value) { SetWaypointIndex(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<double> m_originalPosition;
    bool m_originalPositionHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    int m_waypointIndex;
    bool m_waypointIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
