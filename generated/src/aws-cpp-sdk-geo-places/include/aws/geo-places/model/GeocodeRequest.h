/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/GeoPlacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/GeocodeQueryComponents.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/GeocodeFilter.h>
#include <aws/geo-places/model/GeocodeIntendedUse.h>
#include <aws/geo-places/model/GeocodeAdditionalFeature.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GeoPlaces
{
namespace Model
{

  /**
   */
  class GeocodeRequest : public GeoPlacesRequest
  {
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
     * <p>The fields <code>QueryText</code>, and <code>QueryID</code> are mutually
     * exclusive.</p> 
     */
    inline const Aws::String& GetQueryText() const { return m_queryText; }
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
    template<typename QueryTextT = Aws::String>
    void SetQueryText(QueryTextT&& value) { m_queryTextHasBeenSet = true; m_queryText = std::forward<QueryTextT>(value); }
    template<typename QueryTextT = Aws::String>
    GeocodeRequest& WithQueryText(QueryTextT&& value) { SetQueryText(std::forward<QueryTextT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const GeocodeQueryComponents& GetQueryComponents() const { return m_queryComponents; }
    inline bool QueryComponentsHasBeenSet() const { return m_queryComponentsHasBeenSet; }
    template<typename QueryComponentsT = GeocodeQueryComponents>
    void SetQueryComponents(QueryComponentsT&& value) { m_queryComponentsHasBeenSet = true; m_queryComponents = std::forward<QueryComponentsT>(value); }
    template<typename QueryComponentsT = GeocodeQueryComponents>
    GeocodeRequest& WithQueryComponents(QueryComponentsT&& value) { SetQueryComponents(std::forward<QueryComponentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional limit for the number of results returned in a single call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GeocodeRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position, in longitude and latitude, that the results should be close to.
     * Typically, place results returned are ranked higher the closer they are to this
     * position. Stored in <code>[lng, lat]</code> and in the WSG84 format.</p> 
     * <p>The fields <code>BiasPosition</code>, <code>FilterBoundingBox</code>, and
     * <code>FilterCircle</code> are mutually exclusive.</p> 
     */
    inline const Aws::Vector<double>& GetBiasPosition() const { return m_biasPosition; }
    inline bool BiasPositionHasBeenSet() const { return m_biasPositionHasBeenSet; }
    template<typename BiasPositionT = Aws::Vector<double>>
    void SetBiasPosition(BiasPositionT&& value) { m_biasPositionHasBeenSet = true; m_biasPosition = std::forward<BiasPositionT>(value); }
    template<typename BiasPositionT = Aws::Vector<double>>
    GeocodeRequest& WithBiasPosition(BiasPositionT&& value) { SetBiasPosition(std::forward<BiasPositionT>(value)); return *this;}
    inline GeocodeRequest& AddBiasPosition(double value) { m_biasPositionHasBeenSet = true; m_biasPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure which contains a set of inclusion/exclusion properties that
     * results must possess in order to be returned as a result.</p>
     */
    inline const GeocodeFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = GeocodeFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = GeocodeFilter>
    GeocodeRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of optional additional parameters, such as time zone, that can be
     * requested for each result.</p>
     */
    inline const Aws::Vector<GeocodeAdditionalFeature>& GetAdditionalFeatures() const { return m_additionalFeatures; }
    inline bool AdditionalFeaturesHasBeenSet() const { return m_additionalFeaturesHasBeenSet; }
    template<typename AdditionalFeaturesT = Aws::Vector<GeocodeAdditionalFeature>>
    void SetAdditionalFeatures(AdditionalFeaturesT&& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures = std::forward<AdditionalFeaturesT>(value); }
    template<typename AdditionalFeaturesT = Aws::Vector<GeocodeAdditionalFeature>>
    GeocodeRequest& WithAdditionalFeatures(AdditionalFeaturesT&& value) { SetAdditionalFeatures(std::forward<AdditionalFeaturesT>(value)); return *this;}
    inline GeocodeRequest& AddAdditionalFeatures(GeocodeAdditionalFeature value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <a href="https://en.wikipedia.org/wiki/IETF_language_tag">BCP
     * 47</a> compliant language codes for the results to be rendered in. If there is
     * no data for the result in the requested language, data will be returned in the
     * default language for the entry.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    GeocodeRequest& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
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
    GeocodeRequest& WithPoliticalView(PoliticalViewT&& value) { SetPoliticalView(std::forward<PoliticalViewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the results will be stored. Defaults to <code>SingleUse</code>,
     * if left empty.</p>  <p>Storing the response of an Geocode query is
     * required to comply with service terms, but charged at a higher cost per request.
     * Please review the <a href="https://aws.amazon.com/location/sla/">user
     * agreement</a> and <a href="https://aws.amazon.com/location/pricing/">service
     * pricing structure</a> to determine the correct setting for your use case.</p>
     * 
     */
    inline GeocodeIntendedUse GetIntendedUse() const { return m_intendedUse; }
    inline bool IntendedUseHasBeenSet() const { return m_intendedUseHasBeenSet; }
    inline void SetIntendedUse(GeocodeIntendedUse value) { m_intendedUseHasBeenSet = true; m_intendedUse = value; }
    inline GeocodeRequest& WithIntendedUse(GeocodeIntendedUse value) { SetIntendedUse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional: The API key to be used for authorization. Either an API key or
     * valid SigV4 signature must be provided when making a request.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    GeocodeRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    GeocodeQueryComponents m_queryComponents;
    bool m_queryComponentsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<double> m_biasPosition;
    bool m_biasPositionHasBeenSet = false;

    GeocodeFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<GeocodeAdditionalFeature> m_additionalFeatures;
    bool m_additionalFeaturesHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;

    GeocodeIntendedUse m_intendedUse{GeocodeIntendedUse::NOT_SET};
    bool m_intendedUseHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
