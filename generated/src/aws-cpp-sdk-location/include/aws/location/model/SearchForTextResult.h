/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/Place.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class SearchForTextResult
  {
  public:
    AWS_LOCATIONSERVICE_API SearchForTextResult() = default;
    AWS_LOCATIONSERVICE_API SearchForTextResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API SearchForTextResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the search result, such as its address and position.</p>
     */
    inline const Place& GetPlace() const { return m_place; }
    inline bool PlaceHasBeenSet() const { return m_placeHasBeenSet; }
    template<typename PlaceT = Place>
    void SetPlace(PlaceT&& value) { m_placeHasBeenSet = true; m_place = std::forward<PlaceT>(value); }
    template<typename PlaceT = Place>
    SearchForTextResult& WithPlace(PlaceT&& value) { SetPlace(std::forward<PlaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distance in meters of a great-circle arc between the bias position
     * specified and the result. <code>Distance</code> will be returned only if a bias
     * position was specified in the query.</p>  <p>A great-circle arc is the
     * shortest path on a sphere, in this case the Earth. This returns the shortest
     * distance between two locations.</p> 
     */
    inline double GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(double value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline SearchForTextResult& WithDistance(double value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative confidence in the match for a result among the results returned.
     * For example, if more fields for an address match (including house number,
     * street, city, country/region, and postal code), the relevance score is closer to
     * 1.</p> <p>Returned only when the partner selected is Esri or Grab.</p>
     */
    inline double GetRelevance() const { return m_relevance; }
    inline bool RelevanceHasBeenSet() const { return m_relevanceHasBeenSet; }
    inline void SetRelevance(double value) { m_relevanceHasBeenSet = true; m_relevance = value; }
    inline SearchForTextResult& WithRelevance(double value) { SetRelevance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the place. You can use this with the
     * <code>GetPlace</code> operation to find the place again later.</p>  <p>For
     * <code>SearchPlaceIndexForText</code> operations, the <code>PlaceId</code> is
     * returned only by place indexes that use HERE or Grab as a data provider.</p>
     * 
     */
    inline const Aws::String& GetPlaceId() const { return m_placeId; }
    inline bool PlaceIdHasBeenSet() const { return m_placeIdHasBeenSet; }
    template<typename PlaceIdT = Aws::String>
    void SetPlaceId(PlaceIdT&& value) { m_placeIdHasBeenSet = true; m_placeId = std::forward<PlaceIdT>(value); }
    template<typename PlaceIdT = Aws::String>
    SearchForTextResult& WithPlaceId(PlaceIdT&& value) { SetPlaceId(std::forward<PlaceIdT>(value)); return *this;}
    ///@}
  private:

    Place m_place;
    bool m_placeHasBeenSet = false;

    double m_distance{0.0};
    bool m_distanceHasBeenSet = false;

    double m_relevance{0.0};
    bool m_relevanceHasBeenSet = false;

    Aws::String m_placeId;
    bool m_placeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
