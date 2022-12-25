/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains the geometry details for each path between a pair of positions. Used
   * in plotting a route leg on a map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/LegGeometry">AWS
   * API Reference</a></p>
   */
  class LegGeometry
  {
  public:
    AWS_LOCATIONSERVICE_API LegGeometry();
    AWS_LOCATIONSERVICE_API LegGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API LegGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ordered list of positions used to plot a route on a map. </p> <p>The first
     * position is closest to the start position for the leg, and the last position is
     * the closest to the end position for the leg.</p> <ul> <li> <p>For example,
     * <code>[[-123.117, 49.284],[-123.115, 49.285],[-123.115, 49.285]]</code> </p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::Vector<double>>& GetLineString() const{ return m_lineString; }

    /**
     * <p>An ordered list of positions used to plot a route on a map. </p> <p>The first
     * position is closest to the start position for the leg, and the last position is
     * the closest to the end position for the leg.</p> <ul> <li> <p>For example,
     * <code>[[-123.117, 49.284],[-123.115, 49.285],[-123.115, 49.285]]</code> </p>
     * </li> </ul>
     */
    inline bool LineStringHasBeenSet() const { return m_lineStringHasBeenSet; }

    /**
     * <p>An ordered list of positions used to plot a route on a map. </p> <p>The first
     * position is closest to the start position for the leg, and the last position is
     * the closest to the end position for the leg.</p> <ul> <li> <p>For example,
     * <code>[[-123.117, 49.284],[-123.115, 49.285],[-123.115, 49.285]]</code> </p>
     * </li> </ul>
     */
    inline void SetLineString(const Aws::Vector<Aws::Vector<double>>& value) { m_lineStringHasBeenSet = true; m_lineString = value; }

    /**
     * <p>An ordered list of positions used to plot a route on a map. </p> <p>The first
     * position is closest to the start position for the leg, and the last position is
     * the closest to the end position for the leg.</p> <ul> <li> <p>For example,
     * <code>[[-123.117, 49.284],[-123.115, 49.285],[-123.115, 49.285]]</code> </p>
     * </li> </ul>
     */
    inline void SetLineString(Aws::Vector<Aws::Vector<double>>&& value) { m_lineStringHasBeenSet = true; m_lineString = std::move(value); }

    /**
     * <p>An ordered list of positions used to plot a route on a map. </p> <p>The first
     * position is closest to the start position for the leg, and the last position is
     * the closest to the end position for the leg.</p> <ul> <li> <p>For example,
     * <code>[[-123.117, 49.284],[-123.115, 49.285],[-123.115, 49.285]]</code> </p>
     * </li> </ul>
     */
    inline LegGeometry& WithLineString(const Aws::Vector<Aws::Vector<double>>& value) { SetLineString(value); return *this;}

    /**
     * <p>An ordered list of positions used to plot a route on a map. </p> <p>The first
     * position is closest to the start position for the leg, and the last position is
     * the closest to the end position for the leg.</p> <ul> <li> <p>For example,
     * <code>[[-123.117, 49.284],[-123.115, 49.285],[-123.115, 49.285]]</code> </p>
     * </li> </ul>
     */
    inline LegGeometry& WithLineString(Aws::Vector<Aws::Vector<double>>&& value) { SetLineString(std::move(value)); return *this;}

    /**
     * <p>An ordered list of positions used to plot a route on a map. </p> <p>The first
     * position is closest to the start position for the leg, and the last position is
     * the closest to the end position for the leg.</p> <ul> <li> <p>For example,
     * <code>[[-123.117, 49.284],[-123.115, 49.285],[-123.115, 49.285]]</code> </p>
     * </li> </ul>
     */
    inline LegGeometry& AddLineString(const Aws::Vector<double>& value) { m_lineStringHasBeenSet = true; m_lineString.push_back(value); return *this; }

    /**
     * <p>An ordered list of positions used to plot a route on a map. </p> <p>The first
     * position is closest to the start position for the leg, and the last position is
     * the closest to the end position for the leg.</p> <ul> <li> <p>For example,
     * <code>[[-123.117, 49.284],[-123.115, 49.285],[-123.115, 49.285]]</code> </p>
     * </li> </ul>
     */
    inline LegGeometry& AddLineString(Aws::Vector<double>&& value) { m_lineStringHasBeenSet = true; m_lineString.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Vector<double>> m_lineString;
    bool m_lineStringHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
