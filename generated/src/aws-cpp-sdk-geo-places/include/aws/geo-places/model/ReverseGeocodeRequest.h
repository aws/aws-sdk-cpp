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
    AWS_GEOPLACES_API ReverseGeocodeRequest();

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
     * resultsfor. Results closer to the position will be ranked higher then results
     * further away from the position</p>
     */
    inline const Aws::Vector<double>& GetQueryPosition() const{ return m_queryPosition; }
    inline bool QueryPositionHasBeenSet() const { return m_queryPositionHasBeenSet; }
    inline void SetQueryPosition(const Aws::Vector<double>& value) { m_queryPositionHasBeenSet = true; m_queryPosition = value; }
    inline void SetQueryPosition(Aws::Vector<double>&& value) { m_queryPositionHasBeenSet = true; m_queryPosition = std::move(value); }
    inline ReverseGeocodeRequest& WithQueryPosition(const Aws::Vector<double>& value) { SetQueryPosition(value); return *this;}
    inline ReverseGeocodeRequest& WithQueryPosition(Aws::Vector<double>&& value) { SetQueryPosition(std::move(value)); return *this;}
    inline ReverseGeocodeRequest& AddQueryPosition(double value) { m_queryPositionHasBeenSet = true; m_queryPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum distance in meters from the QueryPosition from which a result
     * will be returned.</p>
     */
    inline long long GetQueryRadius() const{ return m_queryRadius; }
    inline bool QueryRadiusHasBeenSet() const { return m_queryRadiusHasBeenSet; }
    inline void SetQueryRadius(long long value) { m_queryRadiusHasBeenSet = true; m_queryRadius = value; }
    inline ReverseGeocodeRequest& WithQueryRadius(long long value) { SetQueryRadius(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional limit for the number of results returned in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ReverseGeocodeRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure which contains a set of inclusion/exclusion properties that
     * results must posses in order to be returned as a result.</p>
     */
    inline const ReverseGeocodeFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const ReverseGeocodeFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(ReverseGeocodeFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ReverseGeocodeRequest& WithFilter(const ReverseGeocodeFilter& value) { SetFilter(value); return *this;}
    inline ReverseGeocodeRequest& WithFilter(ReverseGeocodeFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of optional additional parameters, such as time zone that can be
     * requested for each result.</p>
     */
    inline const Aws::Vector<ReverseGeocodeAdditionalFeature>& GetAdditionalFeatures() const{ return m_additionalFeatures; }
    inline bool AdditionalFeaturesHasBeenSet() const { return m_additionalFeaturesHasBeenSet; }
    inline void SetAdditionalFeatures(const Aws::Vector<ReverseGeocodeAdditionalFeature>& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures = value; }
    inline void SetAdditionalFeatures(Aws::Vector<ReverseGeocodeAdditionalFeature>&& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures = std::move(value); }
    inline ReverseGeocodeRequest& WithAdditionalFeatures(const Aws::Vector<ReverseGeocodeAdditionalFeature>& value) { SetAdditionalFeatures(value); return *this;}
    inline ReverseGeocodeRequest& WithAdditionalFeatures(Aws::Vector<ReverseGeocodeAdditionalFeature>&& value) { SetAdditionalFeatures(std::move(value)); return *this;}
    inline ReverseGeocodeRequest& AddAdditionalFeatures(const ReverseGeocodeAdditionalFeature& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures.push_back(value); return *this; }
    inline ReverseGeocodeRequest& AddAdditionalFeatures(ReverseGeocodeAdditionalFeature&& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <a href="https://en.wikipedia.org/wiki/IETF_language_tag">BCP
     * 47</a> compliant language codes for the results to be rendered in. If there is
     * no data for the result in the requested language, data will be returned in the
     * default language for the entry.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }
    inline ReverseGeocodeRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline ReverseGeocodeRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline ReverseGeocodeRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}
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
    inline ReverseGeocodeRequest& WithPoliticalView(const Aws::String& value) { SetPoliticalView(value); return *this;}
    inline ReverseGeocodeRequest& WithPoliticalView(Aws::String&& value) { SetPoliticalView(std::move(value)); return *this;}
    inline ReverseGeocodeRequest& WithPoliticalView(const char* value) { SetPoliticalView(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the results will be stored. Defaults to <code>SingleUse</code>,
     * if left empty.</p>
     */
    inline const ReverseGeocodeIntendedUse& GetIntendedUse() const{ return m_intendedUse; }
    inline bool IntendedUseHasBeenSet() const { return m_intendedUseHasBeenSet; }
    inline void SetIntendedUse(const ReverseGeocodeIntendedUse& value) { m_intendedUseHasBeenSet = true; m_intendedUse = value; }
    inline void SetIntendedUse(ReverseGeocodeIntendedUse&& value) { m_intendedUseHasBeenSet = true; m_intendedUse = std::move(value); }
    inline ReverseGeocodeRequest& WithIntendedUse(const ReverseGeocodeIntendedUse& value) { SetIntendedUse(value); return *this;}
    inline ReverseGeocodeRequest& WithIntendedUse(ReverseGeocodeIntendedUse&& value) { SetIntendedUse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional: The API key to be used for authorization. Either an API key or
     * valid SigV4 signature must be provided when making a request.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline ReverseGeocodeRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline ReverseGeocodeRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline ReverseGeocodeRequest& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}
  private:

    Aws::Vector<double> m_queryPosition;
    bool m_queryPositionHasBeenSet = false;

    long long m_queryRadius;
    bool m_queryRadiusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ReverseGeocodeFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<ReverseGeocodeAdditionalFeature> m_additionalFeatures;
    bool m_additionalFeaturesHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;

    ReverseGeocodeIntendedUse m_intendedUse;
    bool m_intendedUseHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
