/**
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
   * <p>Contains a search result from a text search query that is run on a place
   * index resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchForTextResult">AWS
   * API Reference</a></p>
   */
  class AWS_LOCATIONSERVICE_API SearchForTextResult
  {
  public:
    SearchForTextResult();
    SearchForTextResult(Aws::Utils::Json::JsonView jsonValue);
    SearchForTextResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The distance in meters of a great-circle arc between the bias position
     * specified and the result. <code>Distance</code> will be returned only if a bias
     * position was specified in the query.</p>  <p>A great-circle arc is the
     * shortest path on a sphere, in this case the Earth. This returns the shortest
     * distance between two locations.</p> 
     */
    inline double GetDistance() const{ return m_distance; }

    /**
     * <p>The distance in meters of a great-circle arc between the bias position
     * specified and the result. <code>Distance</code> will be returned only if a bias
     * position was specified in the query.</p>  <p>A great-circle arc is the
     * shortest path on a sphere, in this case the Earth. This returns the shortest
     * distance between two locations.</p> 
     */
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }

    /**
     * <p>The distance in meters of a great-circle arc between the bias position
     * specified and the result. <code>Distance</code> will be returned only if a bias
     * position was specified in the query.</p>  <p>A great-circle arc is the
     * shortest path on a sphere, in this case the Earth. This returns the shortest
     * distance between two locations.</p> 
     */
    inline void SetDistance(double value) { m_distanceHasBeenSet = true; m_distance = value; }

    /**
     * <p>The distance in meters of a great-circle arc between the bias position
     * specified and the result. <code>Distance</code> will be returned only if a bias
     * position was specified in the query.</p>  <p>A great-circle arc is the
     * shortest path on a sphere, in this case the Earth. This returns the shortest
     * distance between two locations.</p> 
     */
    inline SearchForTextResult& WithDistance(double value) { SetDistance(value); return *this;}


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
    inline SearchForTextResult& WithPlace(const Place& value) { SetPlace(value); return *this;}

    /**
     * <p>Details about the search result, such as its address and position.</p>
     */
    inline SearchForTextResult& WithPlace(Place&& value) { SetPlace(std::move(value)); return *this;}


    /**
     * <p>The relative confidence in the match for a result among the results returned.
     * For example, if more fields for an address match (including house number,
     * street, city, country/region, and postal code), the relevance score is closer to
     * 1.</p> <p>Returned only when the partner selected is Esri.</p>
     */
    inline double GetRelevance() const{ return m_relevance; }

    /**
     * <p>The relative confidence in the match for a result among the results returned.
     * For example, if more fields for an address match (including house number,
     * street, city, country/region, and postal code), the relevance score is closer to
     * 1.</p> <p>Returned only when the partner selected is Esri.</p>
     */
    inline bool RelevanceHasBeenSet() const { return m_relevanceHasBeenSet; }

    /**
     * <p>The relative confidence in the match for a result among the results returned.
     * For example, if more fields for an address match (including house number,
     * street, city, country/region, and postal code), the relevance score is closer to
     * 1.</p> <p>Returned only when the partner selected is Esri.</p>
     */
    inline void SetRelevance(double value) { m_relevanceHasBeenSet = true; m_relevance = value; }

    /**
     * <p>The relative confidence in the match for a result among the results returned.
     * For example, if more fields for an address match (including house number,
     * street, city, country/region, and postal code), the relevance score is closer to
     * 1.</p> <p>Returned only when the partner selected is Esri.</p>
     */
    inline SearchForTextResult& WithRelevance(double value) { SetRelevance(value); return *this;}

  private:

    double m_distance;
    bool m_distanceHasBeenSet;

    Place m_place;
    bool m_placeHasBeenSet;

    double m_relevance;
    bool m_relevanceHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
