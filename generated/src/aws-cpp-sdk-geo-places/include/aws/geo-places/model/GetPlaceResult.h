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
#include <aws/geo-places/model/RelatedPlace.h>
#include <aws/geo-places/model/PostalCodeDetails.h>
#include <aws/geo-places/model/Category.h>
#include <aws/geo-places/model/FoodType.h>
#include <aws/geo-places/model/BusinessChain.h>
#include <aws/geo-places/model/OpeningHours.h>
#include <aws/geo-places/model/AccessPoint.h>
#include <aws/geo-places/model/AccessRestriction.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GeoPlaces
{
namespace Model
{
  class GetPlaceResult
  {
  public:
    AWS_GEOPLACES_API GetPlaceResult() = default;
    AWS_GEOPLACES_API GetPlaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOPLACES_API GetPlaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>PlaceId</code> of the place you wish to receive the information
     * for.</p>
     */
    inline const Aws::String& GetPlaceId() const { return m_placeId; }
    template<typename PlaceIdT = Aws::String>
    void SetPlaceId(PlaceIdT&& value) { m_placeIdHasBeenSet = true; m_placeId = std::forward<PlaceIdT>(value); }
    template<typename PlaceIdT = Aws::String>
    GetPlaceResult& WithPlaceId(PlaceIdT&& value) { SetPlaceId(std::forward<PlaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>PlaceType</code> is a category that the result place must belong
     * to.</p>
     */
    inline PlaceType GetPlaceType() const { return m_placeType; }
    inline void SetPlaceType(PlaceType value) { m_placeTypeHasBeenSet = true; m_placeType = value; }
    inline GetPlaceResult& WithPlaceType(PlaceType value) { SetPlaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The localized display name of this result item based on request parameter
     * <code>language</code>.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    GetPlaceResult& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p> <p>For more
     * information on pricing, please visit <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * Pricing</a>.</p>
     */
    inline const Aws::String& GetPricingBucket() const { return m_pricingBucket; }
    template<typename PricingBucketT = Aws::String>
    void SetPricingBucket(PricingBucketT&& value) { m_pricingBucketHasBeenSet = true; m_pricingBucket = std::forward<PricingBucketT>(value); }
    template<typename PricingBucketT = Aws::String>
    GetPlaceResult& WithPricingBucket(PricingBucketT&& value) { SetPricingBucket(std::forward<PricingBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The place's address.</p>
     */
    inline const Address& GetAddress() const { return m_address; }
    template<typename AddressT = Address>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Address>
    GetPlaceResult& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean indicating if the address provided has been corrected.</p>
     */
    inline bool GetAddressNumberCorrected() const { return m_addressNumberCorrected; }
    inline void SetAddressNumberCorrected(bool value) { m_addressNumberCorrectedHasBeenSet = true; m_addressNumberCorrected = value; }
    inline GetPlaceResult& WithAddressNumberCorrected(bool value) { SetAddressNumberCorrected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the postal code of the place/result. </p>
     */
    inline const Aws::Vector<PostalCodeDetails>& GetPostalCodeDetails() const { return m_postalCodeDetails; }
    template<typename PostalCodeDetailsT = Aws::Vector<PostalCodeDetails>>
    void SetPostalCodeDetails(PostalCodeDetailsT&& value) { m_postalCodeDetailsHasBeenSet = true; m_postalCodeDetails = std::forward<PostalCodeDetailsT>(value); }
    template<typename PostalCodeDetailsT = Aws::Vector<PostalCodeDetails>>
    GetPlaceResult& WithPostalCodeDetails(PostalCodeDetailsT&& value) { SetPostalCodeDetails(std::forward<PostalCodeDetailsT>(value)); return *this;}
    template<typename PostalCodeDetailsT = PostalCodeDetails>
    GetPlaceResult& AddPostalCodeDetails(PostalCodeDetailsT&& value) { m_postalCodeDetailsHasBeenSet = true; m_postalCodeDetails.emplace_back(std::forward<PostalCodeDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The position, in longitude and latitude.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    GetPlaceResult& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline GetPlaceResult& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The bounding box enclosing the geometric shape (area or line) that an
     * individual result covers.</p> <p>The bounding box formed is defined as a set of
     * four coordinates: <code>[{westward lng}, {southern lat}, {eastward lng},
     * {northern lat}]</code> </p>
     */
    inline const Aws::Vector<double>& GetMapView() const { return m_mapView; }
    template<typename MapViewT = Aws::Vector<double>>
    void SetMapView(MapViewT&& value) { m_mapViewHasBeenSet = true; m_mapView = std::forward<MapViewT>(value); }
    template<typename MapViewT = Aws::Vector<double>>
    GetPlaceResult& WithMapView(MapViewT&& value) { SetMapView(std::forward<MapViewT>(value)); return *this;}
    inline GetPlaceResult& AddMapView(double value) { m_mapViewHasBeenSet = true; m_mapView.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories of results that results must belong to.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const { return m_categories; }
    template<typename CategoriesT = Aws::Vector<Category>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<Category>>
    GetPlaceResult& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = Category>
    GetPlaceResult& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of food types offered by this result.</p>
     */
    inline const Aws::Vector<FoodType>& GetFoodTypes() const { return m_foodTypes; }
    template<typename FoodTypesT = Aws::Vector<FoodType>>
    void SetFoodTypes(FoodTypesT&& value) { m_foodTypesHasBeenSet = true; m_foodTypes = std::forward<FoodTypesT>(value); }
    template<typename FoodTypesT = Aws::Vector<FoodType>>
    GetPlaceResult& WithFoodTypes(FoodTypesT&& value) { SetFoodTypes(std::forward<FoodTypesT>(value)); return *this;}
    template<typename FoodTypesT = FoodType>
    GetPlaceResult& AddFoodTypes(FoodTypesT&& value) { m_foodTypesHasBeenSet = true; m_foodTypes.emplace_back(std::forward<FoodTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Business Chains associated with the place.</p>
     */
    inline const Aws::Vector<BusinessChain>& GetBusinessChains() const { return m_businessChains; }
    template<typename BusinessChainsT = Aws::Vector<BusinessChain>>
    void SetBusinessChains(BusinessChainsT&& value) { m_businessChainsHasBeenSet = true; m_businessChains = std::forward<BusinessChainsT>(value); }
    template<typename BusinessChainsT = Aws::Vector<BusinessChain>>
    GetPlaceResult& WithBusinessChains(BusinessChainsT&& value) { SetBusinessChains(std::forward<BusinessChainsT>(value)); return *this;}
    template<typename BusinessChainsT = BusinessChain>
    GetPlaceResult& AddBusinessChains(BusinessChainsT&& value) { m_businessChainsHasBeenSet = true; m_businessChains.emplace_back(std::forward<BusinessChainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of potential contact methods for the result/place.</p>
     */
    inline const Contacts& GetContacts() const { return m_contacts; }
    template<typename ContactsT = Contacts>
    void SetContacts(ContactsT&& value) { m_contactsHasBeenSet = true; m_contacts = std::forward<ContactsT>(value); }
    template<typename ContactsT = Contacts>
    GetPlaceResult& WithContacts(ContactsT&& value) { SetContacts(std::forward<ContactsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of opening hours objects.</p>
     */
    inline const Aws::Vector<OpeningHours>& GetOpeningHours() const { return m_openingHours; }
    template<typename OpeningHoursT = Aws::Vector<OpeningHours>>
    void SetOpeningHours(OpeningHoursT&& value) { m_openingHoursHasBeenSet = true; m_openingHours = std::forward<OpeningHoursT>(value); }
    template<typename OpeningHoursT = Aws::Vector<OpeningHours>>
    GetPlaceResult& WithOpeningHours(OpeningHoursT&& value) { SetOpeningHours(std::forward<OpeningHoursT>(value)); return *this;}
    template<typename OpeningHoursT = OpeningHours>
    GetPlaceResult& AddOpeningHours(OpeningHoursT&& value) { m_openingHoursHasBeenSet = true; m_openingHours.emplace_back(std::forward<OpeningHoursT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Position of the access point in <code>(lng,lat)</code>.</p>
     */
    inline const Aws::Vector<AccessPoint>& GetAccessPoints() const { return m_accessPoints; }
    template<typename AccessPointsT = Aws::Vector<AccessPoint>>
    void SetAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints = std::forward<AccessPointsT>(value); }
    template<typename AccessPointsT = Aws::Vector<AccessPoint>>
    GetPlaceResult& WithAccessPoints(AccessPointsT&& value) { SetAccessPoints(std::forward<AccessPointsT>(value)); return *this;}
    template<typename AccessPointsT = AccessPoint>
    GetPlaceResult& AddAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace_back(std::forward<AccessPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates known access restrictions on a vehicle access point. The index
     * correlates to an access point and indicates if access through this point has
     * some form of restriction.</p>
     */
    inline const Aws::Vector<AccessRestriction>& GetAccessRestrictions() const { return m_accessRestrictions; }
    template<typename AccessRestrictionsT = Aws::Vector<AccessRestriction>>
    void SetAccessRestrictions(AccessRestrictionsT&& value) { m_accessRestrictionsHasBeenSet = true; m_accessRestrictions = std::forward<AccessRestrictionsT>(value); }
    template<typename AccessRestrictionsT = Aws::Vector<AccessRestriction>>
    GetPlaceResult& WithAccessRestrictions(AccessRestrictionsT&& value) { SetAccessRestrictions(std::forward<AccessRestrictionsT>(value)); return *this;}
    template<typename AccessRestrictionsT = AccessRestriction>
    GetPlaceResult& AddAccessRestrictions(AccessRestrictionsT&& value) { m_accessRestrictionsHasBeenSet = true; m_accessRestrictions.emplace_back(std::forward<AccessRestrictionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time zone in which the place is located.</p>
     */
    inline const TimeZone& GetTimeZone() const { return m_timeZone; }
    template<typename TimeZoneT = TimeZone>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = TimeZone>
    GetPlaceResult& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the political view of a country.
     * The political view applies to the results of the request to represent unresolved
     * territorial claims through the point of view of the specified country.</p>
     */
    inline const Aws::String& GetPoliticalView() const { return m_politicalView; }
    template<typename PoliticalViewT = Aws::String>
    void SetPoliticalView(PoliticalViewT&& value) { m_politicalViewHasBeenSet = true; m_politicalView = std::forward<PoliticalViewT>(value); }
    template<typename PoliticalViewT = Aws::String>
    GetPlaceResult& WithPoliticalView(PoliticalViewT&& value) { SetPoliticalView(std::forward<PoliticalViewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the various components of the result's address are pronounced in various
     * languages.</p>
     */
    inline const PhonemeDetails& GetPhonemes() const { return m_phonemes; }
    template<typename PhonemesT = PhonemeDetails>
    void SetPhonemes(PhonemesT&& value) { m_phonemesHasBeenSet = true; m_phonemes = std::forward<PhonemesT>(value); }
    template<typename PhonemesT = PhonemeDetails>
    GetPlaceResult& WithPhonemes(PhonemesT&& value) { SetPhonemes(std::forward<PhonemesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The main address corresponding to a place of type Secondary Address.</p>
     */
    inline const RelatedPlace& GetMainAddress() const { return m_mainAddress; }
    template<typename MainAddressT = RelatedPlace>
    void SetMainAddress(MainAddressT&& value) { m_mainAddressHasBeenSet = true; m_mainAddress = std::forward<MainAddressT>(value); }
    template<typename MainAddressT = RelatedPlace>
    GetPlaceResult& WithMainAddress(MainAddressT&& value) { SetMainAddress(std::forward<MainAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All secondary addresses that are associated with a main address. A secondary
     * address is one that includes secondary designators, such as a Suite or Unit
     * Number, Building, or Floor information.</p>
     */
    inline const Aws::Vector<RelatedPlace>& GetSecondaryAddresses() const { return m_secondaryAddresses; }
    template<typename SecondaryAddressesT = Aws::Vector<RelatedPlace>>
    void SetSecondaryAddresses(SecondaryAddressesT&& value) { m_secondaryAddressesHasBeenSet = true; m_secondaryAddresses = std::forward<SecondaryAddressesT>(value); }
    template<typename SecondaryAddressesT = Aws::Vector<RelatedPlace>>
    GetPlaceResult& WithSecondaryAddresses(SecondaryAddressesT&& value) { SetSecondaryAddresses(std::forward<SecondaryAddressesT>(value)); return *this;}
    template<typename SecondaryAddressesT = RelatedPlace>
    GetPlaceResult& AddSecondaryAddresses(SecondaryAddressesT&& value) { m_secondaryAddressesHasBeenSet = true; m_secondaryAddresses.emplace_back(std::forward<SecondaryAddressesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPlaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_placeId;
    bool m_placeIdHasBeenSet = false;

    PlaceType m_placeType{PlaceType::NOT_SET};
    bool m_placeTypeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_pricingBucket;
    bool m_pricingBucketHasBeenSet = false;

    Address m_address;
    bool m_addressHasBeenSet = false;

    bool m_addressNumberCorrected{false};
    bool m_addressNumberCorrectedHasBeenSet = false;

    Aws::Vector<PostalCodeDetails> m_postalCodeDetails;
    bool m_postalCodeDetailsHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

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

    RelatedPlace m_mainAddress;
    bool m_mainAddressHasBeenSet = false;

    Aws::Vector<RelatedPlace> m_secondaryAddresses;
    bool m_secondaryAddressesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
