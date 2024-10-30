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
    AWS_GEOPLACES_API GetPlaceResult();
    AWS_GEOPLACES_API GetPlaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOPLACES_API GetPlaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>PlaceId</code> of the place you wish to receive the information
     * for.</p>
     */
    inline const Aws::String& GetPlaceId() const{ return m_placeId; }
    inline void SetPlaceId(const Aws::String& value) { m_placeId = value; }
    inline void SetPlaceId(Aws::String&& value) { m_placeId = std::move(value); }
    inline void SetPlaceId(const char* value) { m_placeId.assign(value); }
    inline GetPlaceResult& WithPlaceId(const Aws::String& value) { SetPlaceId(value); return *this;}
    inline GetPlaceResult& WithPlaceId(Aws::String&& value) { SetPlaceId(std::move(value)); return *this;}
    inline GetPlaceResult& WithPlaceId(const char* value) { SetPlaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>PlaceType</code> is a category that the result place must belong
     * to.</p>
     */
    inline const PlaceType& GetPlaceType() const{ return m_placeType; }
    inline void SetPlaceType(const PlaceType& value) { m_placeType = value; }
    inline void SetPlaceType(PlaceType&& value) { m_placeType = std::move(value); }
    inline GetPlaceResult& WithPlaceType(const PlaceType& value) { SetPlaceType(value); return *this;}
    inline GetPlaceResult& WithPlaceType(PlaceType&& value) { SetPlaceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The localized display name of this result item based on request parameter
     * <code>language</code>. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline void SetTitle(const Aws::String& value) { m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_title.assign(value); }
    inline GetPlaceResult& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline GetPlaceResult& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline GetPlaceResult& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p> <p>For more
     * inforamtion on pricing, please visit <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * Pricing</a>.</p>
     */
    inline const Aws::String& GetPricingBucket() const{ return m_pricingBucket; }
    inline void SetPricingBucket(const Aws::String& value) { m_pricingBucket = value; }
    inline void SetPricingBucket(Aws::String&& value) { m_pricingBucket = std::move(value); }
    inline void SetPricingBucket(const char* value) { m_pricingBucket.assign(value); }
    inline GetPlaceResult& WithPricingBucket(const Aws::String& value) { SetPricingBucket(value); return *this;}
    inline GetPlaceResult& WithPricingBucket(Aws::String&& value) { SetPricingBucket(std::move(value)); return *this;}
    inline GetPlaceResult& WithPricingBucket(const char* value) { SetPricingBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The place's address.</p>
     */
    inline const Address& GetAddress() const{ return m_address; }
    inline void SetAddress(const Address& value) { m_address = value; }
    inline void SetAddress(Address&& value) { m_address = std::move(value); }
    inline GetPlaceResult& WithAddress(const Address& value) { SetAddress(value); return *this;}
    inline GetPlaceResult& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean indicating if the address provided has been corrected.</p>
     */
    inline bool GetAddressNumberCorrected() const{ return m_addressNumberCorrected; }
    inline void SetAddressNumberCorrected(bool value) { m_addressNumberCorrected = value; }
    inline GetPlaceResult& WithAddressNumberCorrected(bool value) { SetAddressNumberCorrected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the postal code of the place/result. </p>
     */
    inline const Aws::Vector<PostalCodeDetails>& GetPostalCodeDetails() const{ return m_postalCodeDetails; }
    inline void SetPostalCodeDetails(const Aws::Vector<PostalCodeDetails>& value) { m_postalCodeDetails = value; }
    inline void SetPostalCodeDetails(Aws::Vector<PostalCodeDetails>&& value) { m_postalCodeDetails = std::move(value); }
    inline GetPlaceResult& WithPostalCodeDetails(const Aws::Vector<PostalCodeDetails>& value) { SetPostalCodeDetails(value); return *this;}
    inline GetPlaceResult& WithPostalCodeDetails(Aws::Vector<PostalCodeDetails>&& value) { SetPostalCodeDetails(std::move(value)); return *this;}
    inline GetPlaceResult& AddPostalCodeDetails(const PostalCodeDetails& value) { m_postalCodeDetails.push_back(value); return *this; }
    inline GetPlaceResult& AddPostalCodeDetails(PostalCodeDetails&& value) { m_postalCodeDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The position, in longitude and latitude.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }
    inline void SetPosition(const Aws::Vector<double>& value) { m_position = value; }
    inline void SetPosition(Aws::Vector<double>&& value) { m_position = std::move(value); }
    inline GetPlaceResult& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}
    inline GetPlaceResult& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}
    inline GetPlaceResult& AddPosition(double value) { m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The bounding box enclosing the geometric shape (area or line) that an
     * individual result covers.</p> <p>The bounding box formed is defined as a set of
     * four coordinates: <code>[{westward lng}, {southern lat}, {eastward lng},
     * {northern lat}]</code> </p>
     */
    inline const Aws::Vector<double>& GetMapView() const{ return m_mapView; }
    inline void SetMapView(const Aws::Vector<double>& value) { m_mapView = value; }
    inline void SetMapView(Aws::Vector<double>&& value) { m_mapView = std::move(value); }
    inline GetPlaceResult& WithMapView(const Aws::Vector<double>& value) { SetMapView(value); return *this;}
    inline GetPlaceResult& WithMapView(Aws::Vector<double>&& value) { SetMapView(std::move(value)); return *this;}
    inline GetPlaceResult& AddMapView(double value) { m_mapView.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories of results that results must belong to.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const{ return m_categories; }
    inline void SetCategories(const Aws::Vector<Category>& value) { m_categories = value; }
    inline void SetCategories(Aws::Vector<Category>&& value) { m_categories = std::move(value); }
    inline GetPlaceResult& WithCategories(const Aws::Vector<Category>& value) { SetCategories(value); return *this;}
    inline GetPlaceResult& WithCategories(Aws::Vector<Category>&& value) { SetCategories(std::move(value)); return *this;}
    inline GetPlaceResult& AddCategories(const Category& value) { m_categories.push_back(value); return *this; }
    inline GetPlaceResult& AddCategories(Category&& value) { m_categories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of food types offered by this result.</p>
     */
    inline const Aws::Vector<FoodType>& GetFoodTypes() const{ return m_foodTypes; }
    inline void SetFoodTypes(const Aws::Vector<FoodType>& value) { m_foodTypes = value; }
    inline void SetFoodTypes(Aws::Vector<FoodType>&& value) { m_foodTypes = std::move(value); }
    inline GetPlaceResult& WithFoodTypes(const Aws::Vector<FoodType>& value) { SetFoodTypes(value); return *this;}
    inline GetPlaceResult& WithFoodTypes(Aws::Vector<FoodType>&& value) { SetFoodTypes(std::move(value)); return *this;}
    inline GetPlaceResult& AddFoodTypes(const FoodType& value) { m_foodTypes.push_back(value); return *this; }
    inline GetPlaceResult& AddFoodTypes(FoodType&& value) { m_foodTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Business Chains associated with the place.</p>
     */
    inline const Aws::Vector<BusinessChain>& GetBusinessChains() const{ return m_businessChains; }
    inline void SetBusinessChains(const Aws::Vector<BusinessChain>& value) { m_businessChains = value; }
    inline void SetBusinessChains(Aws::Vector<BusinessChain>&& value) { m_businessChains = std::move(value); }
    inline GetPlaceResult& WithBusinessChains(const Aws::Vector<BusinessChain>& value) { SetBusinessChains(value); return *this;}
    inline GetPlaceResult& WithBusinessChains(Aws::Vector<BusinessChain>&& value) { SetBusinessChains(std::move(value)); return *this;}
    inline GetPlaceResult& AddBusinessChains(const BusinessChain& value) { m_businessChains.push_back(value); return *this; }
    inline GetPlaceResult& AddBusinessChains(BusinessChain&& value) { m_businessChains.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of potential contact methods for the result/place.</p>
     */
    inline const Contacts& GetContacts() const{ return m_contacts; }
    inline void SetContacts(const Contacts& value) { m_contacts = value; }
    inline void SetContacts(Contacts&& value) { m_contacts = std::move(value); }
    inline GetPlaceResult& WithContacts(const Contacts& value) { SetContacts(value); return *this;}
    inline GetPlaceResult& WithContacts(Contacts&& value) { SetContacts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of opening hours objects.</p>
     */
    inline const Aws::Vector<OpeningHours>& GetOpeningHours() const{ return m_openingHours; }
    inline void SetOpeningHours(const Aws::Vector<OpeningHours>& value) { m_openingHours = value; }
    inline void SetOpeningHours(Aws::Vector<OpeningHours>&& value) { m_openingHours = std::move(value); }
    inline GetPlaceResult& WithOpeningHours(const Aws::Vector<OpeningHours>& value) { SetOpeningHours(value); return *this;}
    inline GetPlaceResult& WithOpeningHours(Aws::Vector<OpeningHours>&& value) { SetOpeningHours(std::move(value)); return *this;}
    inline GetPlaceResult& AddOpeningHours(const OpeningHours& value) { m_openingHours.push_back(value); return *this; }
    inline GetPlaceResult& AddOpeningHours(OpeningHours&& value) { m_openingHours.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Position of the access point in <code>(lng,lat)</code>.</p>
     */
    inline const Aws::Vector<AccessPoint>& GetAccessPoints() const{ return m_accessPoints; }
    inline void SetAccessPoints(const Aws::Vector<AccessPoint>& value) { m_accessPoints = value; }
    inline void SetAccessPoints(Aws::Vector<AccessPoint>&& value) { m_accessPoints = std::move(value); }
    inline GetPlaceResult& WithAccessPoints(const Aws::Vector<AccessPoint>& value) { SetAccessPoints(value); return *this;}
    inline GetPlaceResult& WithAccessPoints(Aws::Vector<AccessPoint>&& value) { SetAccessPoints(std::move(value)); return *this;}
    inline GetPlaceResult& AddAccessPoints(const AccessPoint& value) { m_accessPoints.push_back(value); return *this; }
    inline GetPlaceResult& AddAccessPoints(AccessPoint&& value) { m_accessPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates known access restrictions on a vehicle access point. The index
     * correlates to an access point and indicates if access through this point has
     * some form of restriction.</p>
     */
    inline const Aws::Vector<AccessRestriction>& GetAccessRestrictions() const{ return m_accessRestrictions; }
    inline void SetAccessRestrictions(const Aws::Vector<AccessRestriction>& value) { m_accessRestrictions = value; }
    inline void SetAccessRestrictions(Aws::Vector<AccessRestriction>&& value) { m_accessRestrictions = std::move(value); }
    inline GetPlaceResult& WithAccessRestrictions(const Aws::Vector<AccessRestriction>& value) { SetAccessRestrictions(value); return *this;}
    inline GetPlaceResult& WithAccessRestrictions(Aws::Vector<AccessRestriction>&& value) { SetAccessRestrictions(std::move(value)); return *this;}
    inline GetPlaceResult& AddAccessRestrictions(const AccessRestriction& value) { m_accessRestrictions.push_back(value); return *this; }
    inline GetPlaceResult& AddAccessRestrictions(AccessRestriction&& value) { m_accessRestrictions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time zone in which the place is located.</p>
     */
    inline const TimeZone& GetTimeZone() const{ return m_timeZone; }
    inline void SetTimeZone(const TimeZone& value) { m_timeZone = value; }
    inline void SetTimeZone(TimeZone&& value) { m_timeZone = std::move(value); }
    inline GetPlaceResult& WithTimeZone(const TimeZone& value) { SetTimeZone(value); return *this;}
    inline GetPlaceResult& WithTimeZone(TimeZone&& value) { SetTimeZone(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the political view of a country.
     * The political view applies to the results of the request to represent unresolved
     * territorial claims through the point of view of the specified country.</p>
     */
    inline const Aws::String& GetPoliticalView() const{ return m_politicalView; }
    inline void SetPoliticalView(const Aws::String& value) { m_politicalView = value; }
    inline void SetPoliticalView(Aws::String&& value) { m_politicalView = std::move(value); }
    inline void SetPoliticalView(const char* value) { m_politicalView.assign(value); }
    inline GetPlaceResult& WithPoliticalView(const Aws::String& value) { SetPoliticalView(value); return *this;}
    inline GetPlaceResult& WithPoliticalView(Aws::String&& value) { SetPoliticalView(std::move(value)); return *this;}
    inline GetPlaceResult& WithPoliticalView(const char* value) { SetPoliticalView(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the various components of the result's address are pronounced in various
     * languages.</p>
     */
    inline const PhonemeDetails& GetPhonemes() const{ return m_phonemes; }
    inline void SetPhonemes(const PhonemeDetails& value) { m_phonemes = value; }
    inline void SetPhonemes(PhonemeDetails&& value) { m_phonemes = std::move(value); }
    inline GetPlaceResult& WithPhonemes(const PhonemeDetails& value) { SetPhonemes(value); return *this;}
    inline GetPlaceResult& WithPhonemes(PhonemeDetails&& value) { SetPhonemes(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPlaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPlaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPlaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_placeId;

    PlaceType m_placeType;

    Aws::String m_title;

    Aws::String m_pricingBucket;

    Address m_address;

    bool m_addressNumberCorrected;

    Aws::Vector<PostalCodeDetails> m_postalCodeDetails;

    Aws::Vector<double> m_position;

    Aws::Vector<double> m_mapView;

    Aws::Vector<Category> m_categories;

    Aws::Vector<FoodType> m_foodTypes;

    Aws::Vector<BusinessChain> m_businessChains;

    Contacts m_contacts;

    Aws::Vector<OpeningHours> m_openingHours;

    Aws::Vector<AccessPoint> m_accessPoints;

    Aws::Vector<AccessRestriction> m_accessRestrictions;

    TimeZone m_timeZone;

    Aws::String m_politicalView;

    PhonemeDetails m_phonemes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
