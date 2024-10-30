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
   * <p>The text search result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SearchTextResultItem">AWS
   * API Reference</a></p>
   */
  class SearchTextResultItem
  {
  public:
    AWS_GEOPLACES_API SearchTextResultItem();
    AWS_GEOPLACES_API SearchTextResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API SearchTextResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>PlaceId</code> of the place you wish to receive the information
     * for.</p>
     */
    inline const Aws::String& GetPlaceId() const{ return m_placeId; }
    inline bool PlaceIdHasBeenSet() const { return m_placeIdHasBeenSet; }
    inline void SetPlaceId(const Aws::String& value) { m_placeIdHasBeenSet = true; m_placeId = value; }
    inline void SetPlaceId(Aws::String&& value) { m_placeIdHasBeenSet = true; m_placeId = std::move(value); }
    inline void SetPlaceId(const char* value) { m_placeIdHasBeenSet = true; m_placeId.assign(value); }
    inline SearchTextResultItem& WithPlaceId(const Aws::String& value) { SetPlaceId(value); return *this;}
    inline SearchTextResultItem& WithPlaceId(Aws::String&& value) { SetPlaceId(std::move(value)); return *this;}
    inline SearchTextResultItem& WithPlaceId(const char* value) { SetPlaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>PlaceType</code> is a category that the result place must belong
     * to.</p>
     */
    inline const PlaceType& GetPlaceType() const{ return m_placeType; }
    inline bool PlaceTypeHasBeenSet() const { return m_placeTypeHasBeenSet; }
    inline void SetPlaceType(const PlaceType& value) { m_placeTypeHasBeenSet = true; m_placeType = value; }
    inline void SetPlaceType(PlaceType&& value) { m_placeTypeHasBeenSet = true; m_placeType = std::move(value); }
    inline SearchTextResultItem& WithPlaceType(const PlaceType& value) { SetPlaceType(value); return *this;}
    inline SearchTextResultItem& WithPlaceType(PlaceType&& value) { SetPlaceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The item's title.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline SearchTextResultItem& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline SearchTextResultItem& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline SearchTextResultItem& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The place's address.</p>
     */
    inline const Address& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Address& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Address&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline SearchTextResultItem& WithAddress(const Address& value) { SetAddress(value); return *this;}
    inline SearchTextResultItem& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean indicating if the address provided has been corrected.</p>
     */
    inline bool GetAddressNumberCorrected() const{ return m_addressNumberCorrected; }
    inline bool AddressNumberCorrectedHasBeenSet() const { return m_addressNumberCorrectedHasBeenSet; }
    inline void SetAddressNumberCorrected(bool value) { m_addressNumberCorrectedHasBeenSet = true; m_addressNumberCorrected = value; }
    inline SearchTextResultItem& WithAddressNumberCorrected(bool value) { SetAddressNumberCorrected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position, in longitude and latitude.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline SearchTextResultItem& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}
    inline SearchTextResultItem& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}
    inline SearchTextResultItem& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The distance in meters from the QueryPosition.</p>
     */
    inline long long GetDistance() const{ return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline SearchTextResultItem& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bounding box enclosing the geometric shape (area or line) that an
     * individual result covers.</p> <p>The bounding box formed is defined as a set 4
     * coordinates: <code>[{westward lng}, {southern lat}, {eastward lng}, {northern
     * lat}]</code> </p>
     */
    inline const Aws::Vector<double>& GetMapView() const{ return m_mapView; }
    inline bool MapViewHasBeenSet() const { return m_mapViewHasBeenSet; }
    inline void SetMapView(const Aws::Vector<double>& value) { m_mapViewHasBeenSet = true; m_mapView = value; }
    inline void SetMapView(Aws::Vector<double>&& value) { m_mapViewHasBeenSet = true; m_mapView = std::move(value); }
    inline SearchTextResultItem& WithMapView(const Aws::Vector<double>& value) { SetMapView(value); return *this;}
    inline SearchTextResultItem& WithMapView(Aws::Vector<double>&& value) { SetMapView(std::move(value)); return *this;}
    inline SearchTextResultItem& AddMapView(double value) { m_mapViewHasBeenSet = true; m_mapView.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories of results that results must belong to.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const{ return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    inline void SetCategories(const Aws::Vector<Category>& value) { m_categoriesHasBeenSet = true; m_categories = value; }
    inline void SetCategories(Aws::Vector<Category>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }
    inline SearchTextResultItem& WithCategories(const Aws::Vector<Category>& value) { SetCategories(value); return *this;}
    inline SearchTextResultItem& WithCategories(Aws::Vector<Category>&& value) { SetCategories(std::move(value)); return *this;}
    inline SearchTextResultItem& AddCategories(const Category& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    inline SearchTextResultItem& AddCategories(Category&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of food types offered by this result.</p>
     */
    inline const Aws::Vector<FoodType>& GetFoodTypes() const{ return m_foodTypes; }
    inline bool FoodTypesHasBeenSet() const { return m_foodTypesHasBeenSet; }
    inline void SetFoodTypes(const Aws::Vector<FoodType>& value) { m_foodTypesHasBeenSet = true; m_foodTypes = value; }
    inline void SetFoodTypes(Aws::Vector<FoodType>&& value) { m_foodTypesHasBeenSet = true; m_foodTypes = std::move(value); }
    inline SearchTextResultItem& WithFoodTypes(const Aws::Vector<FoodType>& value) { SetFoodTypes(value); return *this;}
    inline SearchTextResultItem& WithFoodTypes(Aws::Vector<FoodType>&& value) { SetFoodTypes(std::move(value)); return *this;}
    inline SearchTextResultItem& AddFoodTypes(const FoodType& value) { m_foodTypesHasBeenSet = true; m_foodTypes.push_back(value); return *this; }
    inline SearchTextResultItem& AddFoodTypes(FoodType&& value) { m_foodTypesHasBeenSet = true; m_foodTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Business Chains associated with the place.</p>
     */
    inline const Aws::Vector<BusinessChain>& GetBusinessChains() const{ return m_businessChains; }
    inline bool BusinessChainsHasBeenSet() const { return m_businessChainsHasBeenSet; }
    inline void SetBusinessChains(const Aws::Vector<BusinessChain>& value) { m_businessChainsHasBeenSet = true; m_businessChains = value; }
    inline void SetBusinessChains(Aws::Vector<BusinessChain>&& value) { m_businessChainsHasBeenSet = true; m_businessChains = std::move(value); }
    inline SearchTextResultItem& WithBusinessChains(const Aws::Vector<BusinessChain>& value) { SetBusinessChains(value); return *this;}
    inline SearchTextResultItem& WithBusinessChains(Aws::Vector<BusinessChain>&& value) { SetBusinessChains(std::move(value)); return *this;}
    inline SearchTextResultItem& AddBusinessChains(const BusinessChain& value) { m_businessChainsHasBeenSet = true; m_businessChains.push_back(value); return *this; }
    inline SearchTextResultItem& AddBusinessChains(BusinessChain&& value) { m_businessChainsHasBeenSet = true; m_businessChains.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of potential contact methods for the result/place.</p>
     */
    inline const Contacts& GetContacts() const{ return m_contacts; }
    inline bool ContactsHasBeenSet() const { return m_contactsHasBeenSet; }
    inline void SetContacts(const Contacts& value) { m_contactsHasBeenSet = true; m_contacts = value; }
    inline void SetContacts(Contacts&& value) { m_contactsHasBeenSet = true; m_contacts = std::move(value); }
    inline SearchTextResultItem& WithContacts(const Contacts& value) { SetContacts(value); return *this;}
    inline SearchTextResultItem& WithContacts(Contacts&& value) { SetContacts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of opening hours objects.</p>
     */
    inline const Aws::Vector<OpeningHours>& GetOpeningHours() const{ return m_openingHours; }
    inline bool OpeningHoursHasBeenSet() const { return m_openingHoursHasBeenSet; }
    inline void SetOpeningHours(const Aws::Vector<OpeningHours>& value) { m_openingHoursHasBeenSet = true; m_openingHours = value; }
    inline void SetOpeningHours(Aws::Vector<OpeningHours>&& value) { m_openingHoursHasBeenSet = true; m_openingHours = std::move(value); }
    inline SearchTextResultItem& WithOpeningHours(const Aws::Vector<OpeningHours>& value) { SetOpeningHours(value); return *this;}
    inline SearchTextResultItem& WithOpeningHours(Aws::Vector<OpeningHours>&& value) { SetOpeningHours(std::move(value)); return *this;}
    inline SearchTextResultItem& AddOpeningHours(const OpeningHours& value) { m_openingHoursHasBeenSet = true; m_openingHours.push_back(value); return *this; }
    inline SearchTextResultItem& AddOpeningHours(OpeningHours&& value) { m_openingHoursHasBeenSet = true; m_openingHours.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Position of the access point represent by longitude and latitude.</p>
     */
    inline const Aws::Vector<AccessPoint>& GetAccessPoints() const{ return m_accessPoints; }
    inline bool AccessPointsHasBeenSet() const { return m_accessPointsHasBeenSet; }
    inline void SetAccessPoints(const Aws::Vector<AccessPoint>& value) { m_accessPointsHasBeenSet = true; m_accessPoints = value; }
    inline void SetAccessPoints(Aws::Vector<AccessPoint>&& value) { m_accessPointsHasBeenSet = true; m_accessPoints = std::move(value); }
    inline SearchTextResultItem& WithAccessPoints(const Aws::Vector<AccessPoint>& value) { SetAccessPoints(value); return *this;}
    inline SearchTextResultItem& WithAccessPoints(Aws::Vector<AccessPoint>&& value) { SetAccessPoints(std::move(value)); return *this;}
    inline SearchTextResultItem& AddAccessPoints(const AccessPoint& value) { m_accessPointsHasBeenSet = true; m_accessPoints.push_back(value); return *this; }
    inline SearchTextResultItem& AddAccessPoints(AccessPoint&& value) { m_accessPointsHasBeenSet = true; m_accessPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates known access restrictions on a vehicle access point. The index
     * correlates to an access point and indicates if access through this point has
     * some form of restriction.</p>
     */
    inline const Aws::Vector<AccessRestriction>& GetAccessRestrictions() const{ return m_accessRestrictions; }
    inline bool AccessRestrictionsHasBeenSet() const { return m_accessRestrictionsHasBeenSet; }
    inline void SetAccessRestrictions(const Aws::Vector<AccessRestriction>& value) { m_accessRestrictionsHasBeenSet = true; m_accessRestrictions = value; }
    inline void SetAccessRestrictions(Aws::Vector<AccessRestriction>&& value) { m_accessRestrictionsHasBeenSet = true; m_accessRestrictions = std::move(value); }
    inline SearchTextResultItem& WithAccessRestrictions(const Aws::Vector<AccessRestriction>& value) { SetAccessRestrictions(value); return *this;}
    inline SearchTextResultItem& WithAccessRestrictions(Aws::Vector<AccessRestriction>&& value) { SetAccessRestrictions(std::move(value)); return *this;}
    inline SearchTextResultItem& AddAccessRestrictions(const AccessRestriction& value) { m_accessRestrictionsHasBeenSet = true; m_accessRestrictions.push_back(value); return *this; }
    inline SearchTextResultItem& AddAccessRestrictions(AccessRestriction&& value) { m_accessRestrictionsHasBeenSet = true; m_accessRestrictions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time zone in which the place is located.</p>
     */
    inline const TimeZone& GetTimeZone() const{ return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    inline void SetTimeZone(const TimeZone& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }
    inline void SetTimeZone(TimeZone&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }
    inline SearchTextResultItem& WithTimeZone(const TimeZone& value) { SetTimeZone(value); return *this;}
    inline SearchTextResultItem& WithTimeZone(TimeZone&& value) { SetTimeZone(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the political view of a country.
     * The political view applies to the results of the request to represent unresolved
     * territorial claims through the point of view of the specified country.</p>
     */
    inline const Aws::String& GetPoliticalView() const{ return m_politicalView; }
    inline bool PoliticalViewHasBeenSet() const { return m_politicalViewHasBeenSet; }
    inline void SetPoliticalView(const Aws::String& value) { m_politicalViewHasBeenSet = true; m_politicalView = value; }
    inline void SetPoliticalView(Aws::String&& value) { m_politicalViewHasBeenSet = true; m_politicalView = std::move(value); }
    inline void SetPoliticalView(const char* value) { m_politicalViewHasBeenSet = true; m_politicalView.assign(value); }
    inline SearchTextResultItem& WithPoliticalView(const Aws::String& value) { SetPoliticalView(value); return *this;}
    inline SearchTextResultItem& WithPoliticalView(Aws::String&& value) { SetPoliticalView(std::move(value)); return *this;}
    inline SearchTextResultItem& WithPoliticalView(const char* value) { SetPoliticalView(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the various components of the result's address are pronounced in various
     * languages.</p>
     */
    inline const PhonemeDetails& GetPhonemes() const{ return m_phonemes; }
    inline bool PhonemesHasBeenSet() const { return m_phonemesHasBeenSet; }
    inline void SetPhonemes(const PhonemeDetails& value) { m_phonemesHasBeenSet = true; m_phonemes = value; }
    inline void SetPhonemes(PhonemeDetails&& value) { m_phonemesHasBeenSet = true; m_phonemes = std::move(value); }
    inline SearchTextResultItem& WithPhonemes(const PhonemeDetails& value) { SetPhonemes(value); return *this;}
    inline SearchTextResultItem& WithPhonemes(PhonemeDetails&& value) { SetPhonemes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_placeId;
    bool m_placeIdHasBeenSet = false;

    PlaceType m_placeType;
    bool m_placeTypeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Address m_address;
    bool m_addressHasBeenSet = false;

    bool m_addressNumberCorrected;
    bool m_addressNumberCorrectedHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    long long m_distance;
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
