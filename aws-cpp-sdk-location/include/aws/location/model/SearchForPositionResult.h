﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/Place.h>
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
   * <p>Contains a search result from a position search query that is run on a place
   * index resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchForPositionResult">AWS
   * API Reference</a></p>
   */
  class AWS_LOCATIONSERVICE_API SearchForPositionResult
  {
  public:
    SearchForPositionResult();
    SearchForPositionResult(Aws::Utils::Json::JsonView jsonValue);
    SearchForPositionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The distance in meters of a great-circle arc between the query position and
     * the result.</p>  <p>A great-circle arc is the shortest path on a sphere,
     * in this case the Earth. This returns the shortest distance between two
     * locations.</p> 
     */
    inline double GetDistance() const{ return m_distance; }

    /**
     * <p>The distance in meters of a great-circle arc between the query position and
     * the result.</p>  <p>A great-circle arc is the shortest path on a sphere,
     * in this case the Earth. This returns the shortest distance between two
     * locations.</p> 
     */
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }

    /**
     * <p>The distance in meters of a great-circle arc between the query position and
     * the result.</p>  <p>A great-circle arc is the shortest path on a sphere,
     * in this case the Earth. This returns the shortest distance between two
     * locations.</p> 
     */
    inline void SetDistance(double value) { m_distanceHasBeenSet = true; m_distance = value; }

    /**
     * <p>The distance in meters of a great-circle arc between the query position and
     * the result.</p>  <p>A great-circle arc is the shortest path on a sphere,
     * in this case the Earth. This returns the shortest distance between two
     * locations.</p> 
     */
    inline SearchForPositionResult& WithDistance(double value) { SetDistance(value); return *this;}


    /**
     * <p>Details about the search result, such as its address and position.</p>
     */
    inline const Place& GetPlace() const{ return m_place; }

    /**
     * <p>Details about the search result, such as its address and position.</p>
     */
    inline bool PlaceHasBeenSet() const { return m_placeHasBeenSet; }

    /**
     * <p>Details about the search result, such as its address and position.</p>
     */
    inline void SetPlace(const Place& value) { m_placeHasBeenSet = true; m_place = value; }

    /**
     * <p>Details about the search result, such as its address and position.</p>
     */
    inline void SetPlace(Place&& value) { m_placeHasBeenSet = true; m_place = std::move(value); }

    /**
     * <p>Details about the search result, such as its address and position.</p>
     */
    inline SearchForPositionResult& WithPlace(const Place& value) { SetPlace(value); return *this;}

    /**
     * <p>Details about the search result, such as its address and position.</p>
     */
    inline SearchForPositionResult& WithPlace(Place&& value) { SetPlace(std::move(value)); return *this;}

  private:

    double m_distance;
    bool m_distanceHasBeenSet;

    Place m_place;
    bool m_placeHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
