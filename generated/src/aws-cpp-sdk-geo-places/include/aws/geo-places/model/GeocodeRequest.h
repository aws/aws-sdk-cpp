/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/GeoPlacesRequest.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/model/AddressTranslationComponent.h>
#include <aws/geo-places/model/GeocodeAdditionalFeature.h>
#include <aws/geo-places/model/GeocodeAddressNamesMode.h>
#include <aws/geo-places/model/GeocodeFilter.h>
#include <aws/geo-places/model/GeocodeIntendedUse.h>
#include <aws/geo-places/model/GeocodeQueryComponents.h>
#include <aws/geo-places/model/PostalCodeMode.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace GeoPlaces {
namespace Model {

/**
 */
class GeocodeRequest : public GeoPlacesRequest {
 public:
  AWS_GEOPLACES_API GeocodeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "Geocode"; }

  AWS_GEOPLACES_API Aws::String SerializePayload() const override;

  AWS_GEOPLACES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The free-form text query to match addresses against. This is usually a
   * partially typed address from an end user in an address box or form.</p>
   */
  inline const Aws::String& GetQueryText() const { return m_queryText; }
  inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
  template <typename QueryTextT = Aws::String>
  void SetQueryText(QueryTextT&& value) {
    m_queryTextHasBeenSet = true;
    m_queryText = std::forward<QueryTextT>(value);
  }
  template <typename QueryTextT = Aws::String>
  GeocodeRequest& WithQueryText(QueryTextT&& value) {
    SetQueryText(std::forward<QueryTextT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const GeocodeQueryComponents& GetQueryComponents() const { return m_queryComponents; }
  inline bool QueryComponentsHasBeenSet() const { return m_queryComponentsHasBeenSet; }
  template <typename QueryComponentsT = GeocodeQueryComponents>
  void SetQueryComponents(QueryComponentsT&& value) {
    m_queryComponentsHasBeenSet = true;
    m_queryComponents = std::forward<QueryComponentsT>(value);
  }
  template <typename QueryComponentsT = GeocodeQueryComponents>
  GeocodeRequest& WithQueryComponents(QueryComponentsT&& value) {
    SetQueryComponents(std::forward<QueryComponentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional limit for the number of results returned in a single call.</p>
   * <p>Default value: 20</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GeocodeRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The position, in longitude and latitude, that the results should be close to.
   * Typically, place results returned are ranked higher the closer they are to this
   * position. Stored in <code>[lng, lat]</code> and in the WGS 84 format.</p>
   */
  inline const Aws::Vector<double>& GetBiasPosition() const { return m_biasPosition; }
  inline bool BiasPositionHasBeenSet() const { return m_biasPositionHasBeenSet; }
  template <typename BiasPositionT = Aws::Vector<double>>
  void SetBiasPosition(BiasPositionT&& value) {
    m_biasPositionHasBeenSet = true;
    m_biasPosition = std::forward<BiasPositionT>(value);
  }
  template <typename BiasPositionT = Aws::Vector<double>>
  GeocodeRequest& WithBiasPosition(BiasPositionT&& value) {
    SetBiasPosition(std::forward<BiasPositionT>(value));
    return *this;
  }
  inline GeocodeRequest& AddBiasPosition(double value) {
    m_biasPositionHasBeenSet = true;
    m_biasPosition.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure which contains a set of inclusion/exclusion properties that
   * results must possess in order to be returned as a result.</p>
   */
  inline const GeocodeFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = GeocodeFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = GeocodeFilter>
  GeocodeRequest& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of optional additional parameters, such as time zone, that can be
   * requested for each result.</p>
   */
  inline const Aws::Vector<GeocodeAdditionalFeature>& GetAdditionalFeatures() const { return m_additionalFeatures; }
  inline bool AdditionalFeaturesHasBeenSet() const { return m_additionalFeaturesHasBeenSet; }
  template <typename AdditionalFeaturesT = Aws::Vector<GeocodeAdditionalFeature>>
  void SetAdditionalFeatures(AdditionalFeaturesT&& value) {
    m_additionalFeaturesHasBeenSet = true;
    m_additionalFeatures = std::forward<AdditionalFeaturesT>(value);
  }
  template <typename AdditionalFeaturesT = Aws::Vector<GeocodeAdditionalFeature>>
  GeocodeRequest& WithAdditionalFeatures(AdditionalFeaturesT&& value) {
    SetAdditionalFeatures(std::forward<AdditionalFeaturesT>(value));
    return *this;
  }
  inline GeocodeRequest& AddAdditionalFeatures(GeocodeAdditionalFeature value) {
    m_additionalFeaturesHasBeenSet = true;
    m_additionalFeatures.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <a
   * href="https://www.iana.org/assignments/language-subtag-registry/language-subtag-registry">BCP
   * 47</a> compliant language codes for the results to be rendered in. If there is
   * no data for the result in the requested language, data will be returned in the
   * default language for the entry.</p>
   */
  inline const Aws::String& GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  template <typename LanguageT = Aws::String>
  void SetLanguage(LanguageT&& value) {
    m_languageHasBeenSet = true;
    m_language = std::forward<LanguageT>(value);
  }
  template <typename LanguageT = Aws::String>
  GeocodeRequest& WithLanguage(LanguageT&& value) {
    SetLanguage(std::forward<LanguageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alpha-2 or alpha-3 character code for the political view of a country.
   * The political view applies to the results of the request to represent unresolved
   * territorial claims through the point of view of the specified country.</p>
   */
  inline const Aws::String& GetPoliticalView() const { return m_politicalView; }
  inline bool PoliticalViewHasBeenSet() const { return m_politicalViewHasBeenSet; }
  template <typename PoliticalViewT = Aws::String>
  void SetPoliticalView(PoliticalViewT&& value) {
    m_politicalViewHasBeenSet = true;
    m_politicalView = std::forward<PoliticalViewT>(value);
  }
  template <typename PoliticalViewT = Aws::String>
  GeocodeRequest& WithPoliticalView(PoliticalViewT&& value) {
    SetPoliticalView(std::forward<PoliticalViewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Indicates if the query results will be persisted in customer infrastructure.
   * Defaults to <code>SingleUse</code> (not stored). Not supported in
   * <code>ap-southeast-1</code> and <code>ap-southeast-5</code> regions for <a
   * href="https://docs.aws.amazon.com/location/latest/developerguide/GrabMaps.html">GrabMaps</a>
   * customers. </p>  <p>When storing <code>Geocode</code> responses, you
   * <i>must</i> set this field to <code>Storage</code> to comply with the terms of
   * service. These requests will be charged at a higher rate. Please review the <a
   * href="https://aws.amazon.com/location/sla/">user agreement</a> and <a
   * href="https://aws.amazon.com/location/pricing/">service pricing structure</a> to
   * determine the correct setting for your use case.</p>
   */
  inline GeocodeIntendedUse GetIntendedUse() const { return m_intendedUse; }
  inline bool IntendedUseHasBeenSet() const { return m_intendedUseHasBeenSet; }
  inline void SetIntendedUse(GeocodeIntendedUse value) {
    m_intendedUseHasBeenSet = true;
    m_intendedUse = value;
  }
  inline GeocodeRequest& WithIntendedUse(GeocodeIntendedUse value) {
    SetIntendedUse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional: The API key to be used for authorization. Either an API key or
   * valid SigV4 signature must be provided when making a request.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  GeocodeRequest& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>PostalCodeMode</code> affects how postal code results are returned.
   * If a postal code spans multiple localities and this value is empty, partial
   * district or locality information may be returned under a single postal code
   * result entry. If it's populated with the value
   * <code>EnumerateSpannedLocalities</code>, all cities in that postal code are
   * returned. If it's populated with the value
   * <code>EnumerateSpannedDistricts</code>, all combinations of the postal code with
   * the corresponding district and city names are returned.</p>
   */
  inline PostalCodeMode GetPostalCodeMode() const { return m_postalCodeMode; }
  inline bool PostalCodeModeHasBeenSet() const { return m_postalCodeModeHasBeenSet; }
  inline void SetPostalCodeMode(PostalCodeMode value) {
    m_postalCodeModeHasBeenSet = true;
    m_postalCodeMode = value;
  }
  inline GeocodeRequest& WithPostalCodeMode(PostalCodeMode value) {
    SetPostalCodeMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which address components to include translations for. Translations
   * include all name variants and alternative names for the requested fields in all
   * available languages. Valid values are <code>District</code>,
   * <code>Locality</code>, <code>Region</code>, and <code>SubRegion</code>.</p>
   */
  inline const Aws::Vector<AddressTranslationComponent>& GetAddressTranslations() const { return m_addressTranslations; }
  inline bool AddressTranslationsHasBeenSet() const { return m_addressTranslationsHasBeenSet; }
  template <typename AddressTranslationsT = Aws::Vector<AddressTranslationComponent>>
  void SetAddressTranslations(AddressTranslationsT&& value) {
    m_addressTranslationsHasBeenSet = true;
    m_addressTranslations = std::forward<AddressTranslationsT>(value);
  }
  template <typename AddressTranslationsT = Aws::Vector<AddressTranslationComponent>>
  GeocodeRequest& WithAddressTranslations(AddressTranslationsT&& value) {
    SetAddressTranslations(std::forward<AddressTranslationsT>(value));
    return *this;
  }
  inline GeocodeRequest& AddAddressTranslations(AddressTranslationComponent value) {
    m_addressTranslationsHasBeenSet = true;
    m_addressTranslations.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how address names are returned. If not set, the service returns
   * normalized (official) names by default. When set to <code>Matched</code>,
   * address names in the response are based on the input query rather than official
   * names. When set to <code>Administrative</code>, the service returns the official
   * administrative names for address components. <code>Administrative</code>
   * currently applies only to addresses in the United States.</p>
   */
  inline GeocodeAddressNamesMode GetAddressNamesMode() const { return m_addressNamesMode; }
  inline bool AddressNamesModeHasBeenSet() const { return m_addressNamesModeHasBeenSet; }
  inline void SetAddressNamesMode(GeocodeAddressNamesMode value) {
    m_addressNamesModeHasBeenSet = true;
    m_addressNamesMode = value;
  }
  inline GeocodeRequest& WithAddressNamesMode(GeocodeAddressNamesMode value) {
    SetAddressNamesMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_queryText;

  GeocodeQueryComponents m_queryComponents;

  int m_maxResults{0};

  Aws::Vector<double> m_biasPosition;

  GeocodeFilter m_filter;

  Aws::Vector<GeocodeAdditionalFeature> m_additionalFeatures;

  Aws::String m_language;

  Aws::String m_politicalView;

  GeocodeIntendedUse m_intendedUse{GeocodeIntendedUse::NOT_SET};

  Aws::String m_key;

  PostalCodeMode m_postalCodeMode{PostalCodeMode::NOT_SET};

  Aws::Vector<AddressTranslationComponent> m_addressTranslations;

  GeocodeAddressNamesMode m_addressNamesMode{GeocodeAddressNamesMode::NOT_SET};
  bool m_queryTextHasBeenSet = false;
  bool m_queryComponentsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_biasPositionHasBeenSet = false;
  bool m_filterHasBeenSet = false;
  bool m_additionalFeaturesHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_politicalViewHasBeenSet = false;
  bool m_intendedUseHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_postalCodeModeHasBeenSet = false;
  bool m_addressTranslationsHasBeenSet = false;
  bool m_addressNamesModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
