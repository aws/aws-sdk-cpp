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
#include <aws/geo-places/model/Contacts.h>
#include <aws/geo-places/model/TimeZone.h>
#include <aws/geo-places/model/PhonemeDetails.h>
#include <aws/geo-places/model/Category.h>
#include <aws/geo-places/model/FoodType.h>
#include <aws/geo-places/model/BusinessChain.h>
#include <aws/geo-places/model/OpeningHours.h>
#include <aws/geo-places/model/AccessPoint.h>
#include <aws/geo-places/model/AccessRestriction.h>
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
   * <p>The search results of nearby places.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SearchNearbyResultItem">AWS
   * API Reference</a></p>
   */
  class SearchNearbyResultItem
  {
  public:
    AWS_GEOPLACES_API SearchNearbyResultItem() = default;
    AWS_GEOPLACES_API SearchNearbyResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API SearchNearbyResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>PlaceId</code> of the place you wish to receive the information
     * for.</p>
     */
    inline const Aws::String& GetPlaceId() const { return m_placeId; }
    inline bool PlaceIdHasBeenSet() const { return m_placeIdHasBeenSet; }
    template<typename PlaceIdT = Aws::String>
    void SetPlaceId(PlaceIdT&& value) { m_placeIdHasBeenSet = true; m_placeId = std::forward<PlaceIdT>(value); }
    template<typename PlaceIdT = Aws::String>
    SearchNearbyResultItem& WithPlaceId(PlaceIdT&& value) { SetPlaceId(std::forward<PlaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>PlaceType</code> is a category that the result place must belong
     * to.</p>
     */
    inline PlaceType GetPlaceType() const { return m_placeType; }
    inline bool PlaceTypeHasBeenSet() const { return m_placeTypeHasBeenSet; }
    inline void SetPlaceType(PlaceType value) { m_placeTypeHasBeenSet = true; m_placeType = value; }
    inline SearchNearbyResultItem& WithPlaceType(PlaceType value) { SetPlaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The item's title.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    SearchNearbyResultItem& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
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
    SearchNearbyResultItem& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean indicating if the address provided has been corrected.</p>
     */
    inline bool GetAddressNumberCorrected() const { return m_addressNumberCorrected; }
    inline bool AddressNumberCorrectedHasBeenSet() const { return m_addressNumberCorrectedHasBeenSet; }
    inline void SetAddressNumberCorrected(bool value) { m_addressNumberCorrectedHasBeenSet = true; m_addressNumberCorrected = value; }
    inline SearchNearbyResultItem& WithAddressNumberCorrected(bool value) { SetAddressNumberCorrected(value); return *this;}
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
    SearchNearbyResultItem& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline SearchNearbyResultItem& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The distance in meters from the QueryPosition.</p>
     */
    inline long long GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline SearchNearbyResultItem& WithDistance(long long value) { SetDistance(value); return *this;}
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
    SearchNearbyResultItem& WithMapView(MapViewT&& value) { SetMapView(std::forward<MapViewT>(value)); return *this;}
    inline SearchNearbyResultItem& AddMapView(double value) { m_mapViewHasBeenSet = true; m_mapView.push_back(value); return *this; }
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
    SearchNearbyResultItem& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = Category>
    SearchNearbyResultItem& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
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
    SearchNearbyResultItem& WithFoodTypes(FoodTypesT&& value) { SetFoodTypes(std::forward<FoodTypesT>(value)); return *this;}
    template<typename FoodTypesT = FoodType>
    SearchNearbyResultItem& AddFoodTypes(FoodTypesT&& value) { m_foodTypesHasBeenSet = true; m_foodTypes.emplace_back(std::forward<FoodTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Business Chains associated with the place.</p>
     */
    inline const Aws::Vector<BusinessChain>& GetBusinessChains() const { return m_businessChains; }
    inline bool BusinessChainsHasBeenSet() const { return m_businessChainsHasBeenSet; }
    template<typename BusinessChainsT = Aws::Vector<BusinessChain>>
    void SetBusinessChains(BusinessChainsT&& value) { m_businessChainsHasBeenSet = true; m_businessChains = std::forward<BusinessChainsT>(value); }
    template<typename BusinessChainsT = Aws::Vector<BusinessChain>>
    SearchNearbyResultItem& WithBusinessChains(BusinessChainsT&& value) { SetBusinessChains(std::forward<BusinessChainsT>(value)); return *this;}
    template<typename BusinessChainsT = BusinessChain>
    SearchNearbyResultItem& AddBusinessChains(BusinessChainsT&& value) { m_businessChainsHasBeenSet = true; m_businessChains.emplace_back(std::forward<BusinessChainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of potential contact methods for the result/place.</p>
     */
    inline const Contacts& GetContacts() const { return m_contacts; }
    inline bool ContactsHasBeenSet() const { return m_contactsHasBeenSet; }
    template<typename ContactsT = Contacts>
    void SetContacts(ContactsT&& value) { m_contactsHasBeenSet = true; m_contacts = std::forward<ContactsT>(value); }
    template<typename ContactsT = Contacts>
    SearchNearbyResultItem& WithContacts(ContactsT&& value) { SetContacts(std::forward<ContactsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of opening hours objects.</p>
     */
    inline const Aws::Vector<OpeningHours>& GetOpeningHours() const { return m_openingHours; }
    inline bool OpeningHoursHasBeenSet() const { return m_openingHoursHasBeenSet; }
    template<typename OpeningHoursT = Aws::Vector<OpeningHours>>
    void SetOpeningHours(OpeningHoursT&& value) { m_openingHoursHasBeenSet = true; m_openingHours = std::forward<OpeningHoursT>(value); }
    template<typename OpeningHoursT = Aws::Vector<OpeningHours>>
    SearchNearbyResultItem& WithOpeningHours(OpeningHoursT&& value) { SetOpeningHours(std::forward<OpeningHoursT>(value)); return *this;}
    template<typename OpeningHoursT = OpeningHours>
    SearchNearbyResultItem& AddOpeningHours(OpeningHoursT&& value) { m_openingHoursHasBeenSet = true; m_openingHours.emplace_back(std::forward<OpeningHoursT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Position of the access point represent by longitude and latitude.</p>
     */
    inline const Aws::Vector<AccessPoint>& GetAccessPoints() const { return m_accessPoints; }
    inline bool AccessPointsHasBeenSet() const { return m_accessPointsHasBeenSet; }
    template<typename AccessPointsT = Aws::Vector<AccessPoint>>
    void SetAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints = std::forward<AccessPointsT>(value); }
    template<typename AccessPointsT = Aws::Vector<AccessPoint>>
    SearchNearbyResultItem& WithAccessPoints(AccessPointsT&& value) { SetAccessPoints(std::forward<AccessPointsT>(value)); return *this;}
    template<typename AccessPointsT = AccessPoint>
    SearchNearbyResultItem& AddAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace_back(std::forward<AccessPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates known access restrictions on a vehicle access point. The index
     * correlates to an access point and indicates if access through this point has
     * some form of restriction.</p>
     */
    inline const Aws::Vector<AccessRestriction>& GetAccessRestrictions() const { return m_accessRestrictions; }
    inline bool AccessRestrictionsHasBeenSet() const { return m_accessRestrictionsHasBeenSet; }
    template<typename AccessRestrictionsT = Aws::Vector<AccessRestriction>>
    void SetAccessRestrictions(AccessRestrictionsT&& value) { m_accessRestrictionsHasBeenSet = true; m_accessRestrictions = std::forward<AccessRestrictionsT>(value); }
    template<typename AccessRestrictionsT = Aws::Vector<AccessRestriction>>
    SearchNearbyResultItem& WithAccessRestrictions(AccessRestrictionsT&& value) { SetAccessRestrictions(std::forward<AccessRestrictionsT>(value)); return *this;}
    template<typename AccessRestrictionsT = AccessRestriction>
    SearchNearbyResultItem& AddAccessRestrictions(AccessRestrictionsT&& value) { m_accessRestrictionsHasBeenSet = true; m_accessRestrictions.emplace_back(std::forward<AccessRestrictionsT>(value)); return *this; }
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
    SearchNearbyResultItem& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
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
    SearchNearbyResultItem& WithPoliticalView(PoliticalViewT&& value) { SetPoliticalView(std::forward<PoliticalViewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the various components of the result's address are pronounced in various
     * languages.</p>
     */
    inline const PhonemeDetails& GetPhonemes() const { return m_phonemes; }
    inline bool PhonemesHasBeenSet() const { return m_phonemesHasBeenSet; }
    template<typename PhonemesT = PhonemeDetails>
    void SetPhonemes(PhonemesT&& value) { m_phonemesHasBeenSet = true; m_phonemes = std::forward<PhonemesT>(value); }
    template<typename PhonemesT = PhonemeDetails>
    SearchNearbyResultItem& WithPhonemes(PhonemesT&& value) { SetPhonemes(std::forward<PhonemesT>(value)); return *this;}
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

    Aws::Vector<BusinessChain> m_businessChains;
    bool m_businessChainsHasBeenSet = false;

    Contacts m_contacts;
    bool m_contactsHasBeenSet = false;

    Aws::Vector<OpeningHours> m_openingHours;
    bool m_openingHoursHasBeenSet = false;

    Aws::Vector<AccessPoint> m_accessPoints;
    bool m_accessPointsHasBeenSet = false;

    Aws::Vector<AccessRestriction> m_accessRestrictions;
    bool m_accessRestrictionsHasBeenSet = false;

    TimeZone m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;

    PhonemeDetails m_phonemes;
    bool m_phonemesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
