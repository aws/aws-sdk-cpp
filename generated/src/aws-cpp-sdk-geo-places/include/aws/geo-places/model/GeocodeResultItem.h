/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/PlaceType.h>
#include <aws/geo-places/model/Address.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/TimeZone.h>
#include <aws/geo-places/model/MatchScoreDetails.h>
#include <aws/geo-places/model/GeocodeParsedQuery.h>
#include <aws/geo-places/model/RelatedPlace.h>
#include <aws/geo-places/model/PostalCodeDetails.h>
#include <aws/geo-places/model/Category.h>
#include <aws/geo-places/model/FoodType.h>
#include <aws/geo-places/model/AccessPoint.h>
#include <aws/geo-places/model/Intersection.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>The Geocoded result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/GeocodeResultItem">AWS
   * API Reference</a></p>
   */
  class GeocodeResultItem
  {
  public:
    AWS_GEOPLACES_API GeocodeResultItem() = default;
    AWS_GEOPLACES_API GeocodeResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API GeocodeResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>PlaceId</code> of the place result.</p>
     */
    inline const Aws::String& GetPlaceId() const { return m_placeId; }
    inline bool PlaceIdHasBeenSet() const { return m_placeIdHasBeenSet; }
    template<typename PlaceIdT = Aws::String>
    void SetPlaceId(PlaceIdT&& value) { m_placeIdHasBeenSet = true; m_placeId = std::forward<PlaceIdT>(value); }
    template<typename PlaceIdT = Aws::String>
    GeocodeResultItem& WithPlaceId(PlaceIdT&& value) { SetPlaceId(std::forward<PlaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>PlaceType</code> is a category that the result place must belong
     * to.</p>
     */
    inline PlaceType GetPlaceType() const { return m_placeType; }
    inline bool PlaceTypeHasBeenSet() const { return m_placeTypeHasBeenSet; }
    inline void SetPlaceType(PlaceType value) { m_placeTypeHasBeenSet = true; m_placeType = value; }
    inline GeocodeResultItem& WithPlaceType(PlaceType value) { SetPlaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The localized display name of this result item based on request parameter
     * <code>language</code>. </p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    GeocodeResultItem& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The place's address.</p>
     */
    inline const Address& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Address>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Address>
    GeocodeResultItem& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean indicating if the address provided has been corrected.</p>
     */
    inline bool GetAddressNumberCorrected() const { return m_addressNumberCorrected; }
    inline bool AddressNumberCorrectedHasBeenSet() const { return m_addressNumberCorrectedHasBeenSet; }
    inline void SetAddressNumberCorrected(bool value) { m_addressNumberCorrectedHasBeenSet = true; m_addressNumberCorrected = value; }
    inline GeocodeResultItem& WithAddressNumberCorrected(bool value) { SetAddressNumberCorrected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the postal code of the place/result. </p>
     */
    inline const Aws::Vector<PostalCodeDetails>& GetPostalCodeDetails() const { return m_postalCodeDetails; }
    inline bool PostalCodeDetailsHasBeenSet() const { return m_postalCodeDetailsHasBeenSet; }
    template<typename PostalCodeDetailsT = Aws::Vector<PostalCodeDetails>>
    void SetPostalCodeDetails(PostalCodeDetailsT&& value) { m_postalCodeDetailsHasBeenSet = true; m_postalCodeDetails = std::forward<PostalCodeDetailsT>(value); }
    template<typename PostalCodeDetailsT = Aws::Vector<PostalCodeDetails>>
    GeocodeResultItem& WithPostalCodeDetails(PostalCodeDetailsT&& value) { SetPostalCodeDetails(std::forward<PostalCodeDetailsT>(value)); return *this;}
    template<typename PostalCodeDetailsT = PostalCodeDetails>
    GeocodeResultItem& AddPostalCodeDetails(PostalCodeDetailsT&& value) { m_postalCodeDetailsHasBeenSet = true; m_postalCodeDetails.emplace_back(std::forward<PostalCodeDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The position in longitude and latitude.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    GeocodeResultItem& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline GeocodeResultItem& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The distance in meters from the QueryPosition.</p>
     */
    inline long long GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline GeocodeResultItem& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bounding box enclosing the geometric shape (area or line) that an
     * individual result covers.</p> <p>The bounding box formed is defined as a set 4
     * coordinates: <code>[{westward lng}, {southern lat}, {eastward lng}, {northern
     * lat}]</code> </p>
     */
    inline const Aws::Vector<double>& GetMapView() const { return m_mapView; }
    inline bool MapViewHasBeenSet() const { return m_mapViewHasBeenSet; }
    template<typename MapViewT = Aws::Vector<double>>
    void SetMapView(MapViewT&& value) { m_mapViewHasBeenSet = true; m_mapView = std::forward<MapViewT>(value); }
    template<typename MapViewT = Aws::Vector<double>>
    GeocodeResultItem& WithMapView(MapViewT&& value) { SetMapView(std::forward<MapViewT>(value)); return *this;}
    inline GeocodeResultItem& AddMapView(double value) { m_mapViewHasBeenSet = true; m_mapView.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories of results that results must belong to.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<Category>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<Category>>
    GeocodeResultItem& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = Category>
    GeocodeResultItem& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of food types offered by this result.</p>
     */
    inline const Aws::Vector<FoodType>& GetFoodTypes() const { return m_foodTypes; }
    inline bool FoodTypesHasBeenSet() const { return m_foodTypesHasBeenSet; }
    template<typename FoodTypesT = Aws::Vector<FoodType>>
    void SetFoodTypes(FoodTypesT&& value) { m_foodTypesHasBeenSet = true; m_foodTypes = std::forward<FoodTypesT>(value); }
    template<typename FoodTypesT = Aws::Vector<FoodType>>
    GeocodeResultItem& WithFoodTypes(FoodTypesT&& value) { SetFoodTypes(std::forward<FoodTypesT>(value)); return *this;}
    template<typename FoodTypesT = FoodType>
    GeocodeResultItem& AddFoodTypes(FoodTypesT&& value) { m_foodTypesHasBeenSet = true; m_foodTypes.emplace_back(std::forward<FoodTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Position of the access point represented by longitude and latitude.</p>
     */
    inline const Aws::Vector<AccessPoint>& GetAccessPoints() const { return m_accessPoints; }
    inline bool AccessPointsHasBeenSet() const { return m_accessPointsHasBeenSet; }
    template<typename AccessPointsT = Aws::Vector<AccessPoint>>
    void SetAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints = std::forward<AccessPointsT>(value); }
    template<typename AccessPointsT = Aws::Vector<AccessPoint>>
    GeocodeResultItem& WithAccessPoints(AccessPointsT&& value) { SetAccessPoints(std::forward<AccessPointsT>(value)); return *this;}
    template<typename AccessPointsT = AccessPoint>
    GeocodeResultItem& AddAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace_back(std::forward<AccessPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time zone in which the place is located.</p>
     */
    inline const TimeZone& GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    template<typename TimeZoneT = TimeZone>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = TimeZone>
    GeocodeResultItem& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the political view of a country.
     * The political view applies to the results of the request to represent unresolved
     * territorial claims through the point of view of the specified country.</p>
     */
    inline const Aws::String& GetPoliticalView() const { return m_politicalView; }
    inline bool PoliticalViewHasBeenSet() const { return m_politicalViewHasBeenSet; }
    template<typename PoliticalViewT = Aws::String>
    void SetPoliticalView(PoliticalViewT&& value) { m_politicalViewHasBeenSet = true; m_politicalView = std::forward<PoliticalViewT>(value); }
    template<typename PoliticalViewT = Aws::String>
    GeocodeResultItem& WithPoliticalView(PoliticalViewT&& value) { SetPoliticalView(std::forward<PoliticalViewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how well the entire input matches the returned. It is equal to 1 if
     * all input tokens are recognized and matched.</p>
     */
    inline const MatchScoreDetails& GetMatchScores() const { return m_matchScores; }
    inline bool MatchScoresHasBeenSet() const { return m_matchScoresHasBeenSet; }
    template<typename MatchScoresT = MatchScoreDetails>
    void SetMatchScores(MatchScoresT&& value) { m_matchScoresHasBeenSet = true; m_matchScores = std::forward<MatchScoresT>(value); }
    template<typename MatchScoresT = MatchScoreDetails>
    GeocodeResultItem& WithMatchScores(MatchScoresT&& value) { SetMatchScores(std::forward<MatchScoresT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Free-form text query.</p>
     */
    inline const GeocodeParsedQuery& GetParsedQuery() const { return m_parsedQuery; }
    inline bool ParsedQueryHasBeenSet() const { return m_parsedQueryHasBeenSet; }
    template<typename ParsedQueryT = GeocodeParsedQuery>
    void SetParsedQuery(ParsedQueryT&& value) { m_parsedQueryHasBeenSet = true; m_parsedQuery = std::forward<ParsedQueryT>(value); }
    template<typename ParsedQueryT = GeocodeParsedQuery>
    GeocodeResultItem& WithParsedQuery(ParsedQueryT&& value) { SetParsedQuery(std::forward<ParsedQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All Intersections that are near the provided address.</p>
     */
    inline const Aws::Vector<Intersection>& GetIntersections() const { return m_intersections; }
    inline bool IntersectionsHasBeenSet() const { return m_intersectionsHasBeenSet; }
    template<typename IntersectionsT = Aws::Vector<Intersection>>
    void SetIntersections(IntersectionsT&& value) { m_intersectionsHasBeenSet = true; m_intersections = std::forward<IntersectionsT>(value); }
    template<typename IntersectionsT = Aws::Vector<Intersection>>
    GeocodeResultItem& WithIntersections(IntersectionsT&& value) { SetIntersections(std::forward<IntersectionsT>(value)); return *this;}
    template<typename IntersectionsT = Intersection>
    GeocodeResultItem& AddIntersections(IntersectionsT&& value) { m_intersectionsHasBeenSet = true; m_intersections.emplace_back(std::forward<IntersectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The main address corresponding to a place of type Secondary Address.</p>
     */
    inline const RelatedPlace& GetMainAddress() const { return m_mainAddress; }
    inline bool MainAddressHasBeenSet() const { return m_mainAddressHasBeenSet; }
    template<typename MainAddressT = RelatedPlace>
    void SetMainAddress(MainAddressT&& value) { m_mainAddressHasBeenSet = true; m_mainAddress = std::forward<MainAddressT>(value); }
    template<typename MainAddressT = RelatedPlace>
    GeocodeResultItem& WithMainAddress(MainAddressT&& value) { SetMainAddress(std::forward<MainAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All secondary addresses that are associated with a main address. A secondary
     * address is one that includes secondary designators, such as a Suite or Unit
     * Number, Building, or Floor information.</p>
     */
    inline const Aws::Vector<RelatedPlace>& GetSecondaryAddresses() const { return m_secondaryAddresses; }
    inline bool SecondaryAddressesHasBeenSet() const { return m_secondaryAddressesHasBeenSet; }
    template<typename SecondaryAddressesT = Aws::Vector<RelatedPlace>>
    void SetSecondaryAddresses(SecondaryAddressesT&& value) { m_secondaryAddressesHasBeenSet = true; m_secondaryAddresses = std::forward<SecondaryAddressesT>(value); }
    template<typename SecondaryAddressesT = Aws::Vector<RelatedPlace>>
    GeocodeResultItem& WithSecondaryAddresses(SecondaryAddressesT&& value) { SetSecondaryAddresses(std::forward<SecondaryAddressesT>(value)); return *this;}
    template<typename SecondaryAddressesT = RelatedPlace>
    GeocodeResultItem& AddSecondaryAddresses(SecondaryAddressesT&& value) { m_secondaryAddressesHasBeenSet = true; m_secondaryAddresses.emplace_back(std::forward<SecondaryAddressesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_placeId;
    bool m_placeIdHasBeenSet = false;

    PlaceType m_placeType{PlaceType::NOT_SET};
    bool m_placeTypeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Address m_address;
    bool m_addressHasBeenSet = false;

    bool m_addressNumberCorrected{false};
    bool m_addressNumberCorrectedHasBeenSet = false;

    Aws::Vector<PostalCodeDetails> m_postalCodeDetails;
    bool m_postalCodeDetailsHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    long long m_distance{0};
    bool m_distanceHasBeenSet = false;

    Aws::Vector<double> m_mapView;
    bool m_mapViewHasBeenSet = false;

    Aws::Vector<Category> m_categories;
    bool m_categoriesHasBeenSet = false;

    Aws::Vector<FoodType> m_foodTypes;
    bool m_foodTypesHasBeenSet = false;

    Aws::Vector<AccessPoint> m_accessPoints;
    bool m_accessPointsHasBeenSet = false;

    TimeZone m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;

    MatchScoreDetails m_matchScores;
    bool m_matchScoresHasBeenSet = false;

    GeocodeParsedQuery m_parsedQuery;
    bool m_parsedQueryHasBeenSet = false;

    Aws::Vector<Intersection> m_intersections;
    bool m_intersectionsHasBeenSet = false;

    RelatedPlace m_mainAddress;
    bool m_mainAddressHasBeenSet = false;

    Aws::Vector<RelatedPlace> m_secondaryAddresses;
    bool m_secondaryAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
