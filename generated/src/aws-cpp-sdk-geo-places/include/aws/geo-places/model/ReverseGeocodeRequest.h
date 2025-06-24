/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/GeoPlacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/ReverseGeocodeFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/ReverseGeocodeIntendedUse.h>
#include <aws/geo-places/model/ReverseGeocodeAdditionalFeature.h>
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
  class ReverseGeocodeRequest : public GeoPlacesRequest
  {
  public:
    AWS_GEOPLACES_API ReverseGeocodeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReverseGeocode"; }

    AWS_GEOPLACES_API Aws::String SerializePayload() const override;

    AWS_GEOPLACES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The position, in <code>[lng, lat]</code> for which you are querying nearby
     * results for. Results closer to the position will be ranked higher then results
     * further away from the position</p>
     */
    inline const Aws::Vector<double>& GetQueryPosition() const { return m_queryPosition; }
    inline bool QueryPositionHasBeenSet() const { return m_queryPositionHasBeenSet; }
    template<typename QueryPositionT = Aws::Vector<double>>
    void SetQueryPosition(QueryPositionT&& value) { m_queryPositionHasBeenSet = true; m_queryPosition = std::forward<QueryPositionT>(value); }
    template<typename QueryPositionT = Aws::Vector<double>>
    ReverseGeocodeRequest& WithQueryPosition(QueryPositionT&& value) { SetQueryPosition(std::forward<QueryPositionT>(value)); return *this;}
    inline ReverseGeocodeRequest& AddQueryPosition(double value) { m_queryPositionHasBeenSet = true; m_queryPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum distance in meters from the QueryPosition from which a result
     * will be returned.</p>
     */
    inline long long GetQueryRadius() const { return m_queryRadius; }
    inline bool QueryRadiusHasBeenSet() const { return m_queryRadiusHasBeenSet; }
    inline void SetQueryRadius(long long value) { m_queryRadiusHasBeenSet = true; m_queryRadius = value; }
    inline ReverseGeocodeRequest& WithQueryRadius(long long value) { SetQueryRadius(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional limit for the number of results returned in a single call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ReverseGeocodeRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure which contains a set of inclusion/exclusion properties that
     * results must possess in order to be returned as a result.</p>
     */
    inline const ReverseGeocodeFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = ReverseGeocodeFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = ReverseGeocodeFilter>
    ReverseGeocodeRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of optional additional parameters, such as time zone that can be
     * requested for each result.</p>
     */
    inline const Aws::Vector<ReverseGeocodeAdditionalFeature>& GetAdditionalFeatures() const { return m_additionalFeatures; }
    inline bool AdditionalFeaturesHasBeenSet() const { return m_additionalFeaturesHasBeenSet; }
    template<typename AdditionalFeaturesT = Aws::Vector<ReverseGeocodeAdditionalFeature>>
    void SetAdditionalFeatures(AdditionalFeaturesT&& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures = std::forward<AdditionalFeaturesT>(value); }
    template<typename AdditionalFeaturesT = Aws::Vector<ReverseGeocodeAdditionalFeature>>
    ReverseGeocodeRequest& WithAdditionalFeatures(AdditionalFeaturesT&& value) { SetAdditionalFeatures(std::forward<AdditionalFeaturesT>(value)); return *this;}
    inline ReverseGeocodeRequest& AddAdditionalFeatures(ReverseGeocodeAdditionalFeature value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures.push_back(value); return *this; }
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
    ReverseGeocodeRequest& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
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
    ReverseGeocodeRequest& WithPoliticalView(PoliticalViewT&& value) { SetPoliticalView(std::forward<PoliticalViewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the results will be stored. Defaults to <code>SingleUse</code>,
     * if left empty.</p>  <p>Storing the response of an ReverseGeocode query is
     * required to comply with service terms, but charged at a higher cost per request.
     * Please review the <a href="https://aws.amazon.com/location/sla/">user
     * agreement</a> and <a href="https://aws.amazon.com/location/pricing/">service
     * pricing structure</a> to determine the correct setting for your use case.</p>
     * 
     */
    inline ReverseGeocodeIntendedUse GetIntendedUse() const { return m_intendedUse; }
    inline bool IntendedUseHasBeenSet() const { return m_intendedUseHasBeenSet; }
    inline void SetIntendedUse(ReverseGeocodeIntendedUse value) { m_intendedUseHasBeenSet = true; m_intendedUse = value; }
    inline ReverseGeocodeRequest& WithIntendedUse(ReverseGeocodeIntendedUse value) { SetIntendedUse(value); return *this;}
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
    ReverseGeocodeRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<double> m_queryPosition;
    bool m_queryPositionHasBeenSet = false;

    long long m_queryRadius{0};
    bool m_queryRadiusHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ReverseGeocodeFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<ReverseGeocodeAdditionalFeature> m_additionalFeatures;
    bool m_additionalFeaturesHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;

    ReverseGeocodeIntendedUse m_intendedUse{ReverseGeocodeIntendedUse::NOT_SET};
    bool m_intendedUseHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
