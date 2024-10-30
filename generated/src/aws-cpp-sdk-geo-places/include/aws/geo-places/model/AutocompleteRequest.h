/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/GeoPlacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/AutocompleteFilter.h>
#include <aws/geo-places/model/PostalCodeMode.h>
#include <aws/geo-places/model/AutocompleteIntendedUse.h>
#include <aws/geo-places/model/AutocompleteAdditionalFeature.h>
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
  class AutocompleteRequest : public GeoPlacesRequest
  {
  public:
    AWS_GEOPLACES_API AutocompleteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Autocomplete"; }

    AWS_GEOPLACES_API Aws::String SerializePayload() const override;

    AWS_GEOPLACES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The free-form text query to match addresses against. This is usually a
     * partially typed address from an end user in an address box or form.</p>
     */
    inline const Aws::String& GetQueryText() const{ return m_queryText; }
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
    inline void SetQueryText(const Aws::String& value) { m_queryTextHasBeenSet = true; m_queryText = value; }
    inline void SetQueryText(Aws::String&& value) { m_queryTextHasBeenSet = true; m_queryText = std::move(value); }
    inline void SetQueryText(const char* value) { m_queryTextHasBeenSet = true; m_queryText.assign(value); }
    inline AutocompleteRequest& WithQueryText(const Aws::String& value) { SetQueryText(value); return *this;}
    inline AutocompleteRequest& WithQueryText(Aws::String&& value) { SetQueryText(std::move(value)); return *this;}
    inline AutocompleteRequest& WithQueryText(const char* value) { SetQueryText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional limit for the number of results returned in a single call. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline AutocompleteRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position in longitude and latitude that the results should be close to.
     * Typically, place results returned are ranked higher the closer they are to this
     * position. Stored in <code>[lng, lat]</code> and in the WSG84 format.</p> 
     * <p>The fields <code>BiasPosition</code>, <code>FilterBoundingBox</code>, and
     * <code>FilterCircle</code> are mutually exclusive.</p> 
     */
    inline const Aws::Vector<double>& GetBiasPosition() const{ return m_biasPosition; }
    inline bool BiasPositionHasBeenSet() const { return m_biasPositionHasBeenSet; }
    inline void SetBiasPosition(const Aws::Vector<double>& value) { m_biasPositionHasBeenSet = true; m_biasPosition = value; }
    inline void SetBiasPosition(Aws::Vector<double>&& value) { m_biasPositionHasBeenSet = true; m_biasPosition = std::move(value); }
    inline AutocompleteRequest& WithBiasPosition(const Aws::Vector<double>& value) { SetBiasPosition(value); return *this;}
    inline AutocompleteRequest& WithBiasPosition(Aws::Vector<double>&& value) { SetBiasPosition(std::move(value)); return *this;}
    inline AutocompleteRequest& AddBiasPosition(double value) { m_biasPositionHasBeenSet = true; m_biasPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure which contains a set of inclusion/exclusion properties that
     * results must posses in order to be returned as a result.</p>
     */
    inline const AutocompleteFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const AutocompleteFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(AutocompleteFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline AutocompleteRequest& WithFilter(const AutocompleteFilter& value) { SetFilter(value); return *this;}
    inline AutocompleteRequest& WithFilter(AutocompleteFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>PostalCodeMode</code> affects how postal code results are returned.
     * If a postal code spans multiple localities and this value is empty, partial
     * district or locality information may be returned under a single postal code
     * result entry. If it's populated with the value <code>cityLookup</code>, all
     * cities in that postal code are returned.</p>
     */
    inline const PostalCodeMode& GetPostalCodeMode() const{ return m_postalCodeMode; }
    inline bool PostalCodeModeHasBeenSet() const { return m_postalCodeModeHasBeenSet; }
    inline void SetPostalCodeMode(const PostalCodeMode& value) { m_postalCodeModeHasBeenSet = true; m_postalCodeMode = value; }
    inline void SetPostalCodeMode(PostalCodeMode&& value) { m_postalCodeModeHasBeenSet = true; m_postalCodeMode = std::move(value); }
    inline AutocompleteRequest& WithPostalCodeMode(const PostalCodeMode& value) { SetPostalCodeMode(value); return *this;}
    inline AutocompleteRequest& WithPostalCodeMode(PostalCodeMode&& value) { SetPostalCodeMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of optional additional parameters that can be requested for each
     * result.</p>
     */
    inline const Aws::Vector<AutocompleteAdditionalFeature>& GetAdditionalFeatures() const{ return m_additionalFeatures; }
    inline bool AdditionalFeaturesHasBeenSet() const { return m_additionalFeaturesHasBeenSet; }
    inline void SetAdditionalFeatures(const Aws::Vector<AutocompleteAdditionalFeature>& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures = value; }
    inline void SetAdditionalFeatures(Aws::Vector<AutocompleteAdditionalFeature>&& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures = std::move(value); }
    inline AutocompleteRequest& WithAdditionalFeatures(const Aws::Vector<AutocompleteAdditionalFeature>& value) { SetAdditionalFeatures(value); return *this;}
    inline AutocompleteRequest& WithAdditionalFeatures(Aws::Vector<AutocompleteAdditionalFeature>&& value) { SetAdditionalFeatures(std::move(value)); return *this;}
    inline AutocompleteRequest& AddAdditionalFeatures(const AutocompleteAdditionalFeature& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures.push_back(value); return *this; }
    inline AutocompleteRequest& AddAdditionalFeatures(AutocompleteAdditionalFeature&& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures.push_back(std::move(value)); return *this; }
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
    inline AutocompleteRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline AutocompleteRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline AutocompleteRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}
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
    inline AutocompleteRequest& WithPoliticalView(const Aws::String& value) { SetPoliticalView(value); return *this;}
    inline AutocompleteRequest& WithPoliticalView(Aws::String&& value) { SetPoliticalView(std::move(value)); return *this;}
    inline AutocompleteRequest& WithPoliticalView(const char* value) { SetPoliticalView(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the results will be stored. Defaults to <code>SingleUse</code>,
     * if left empty.</p>
     */
    inline const AutocompleteIntendedUse& GetIntendedUse() const{ return m_intendedUse; }
    inline bool IntendedUseHasBeenSet() const { return m_intendedUseHasBeenSet; }
    inline void SetIntendedUse(const AutocompleteIntendedUse& value) { m_intendedUseHasBeenSet = true; m_intendedUse = value; }
    inline void SetIntendedUse(AutocompleteIntendedUse&& value) { m_intendedUseHasBeenSet = true; m_intendedUse = std::move(value); }
    inline AutocompleteRequest& WithIntendedUse(const AutocompleteIntendedUse& value) { SetIntendedUse(value); return *this;}
    inline AutocompleteRequest& WithIntendedUse(AutocompleteIntendedUse&& value) { SetIntendedUse(std::move(value)); return *this;}
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
    inline AutocompleteRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline AutocompleteRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline AutocompleteRequest& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}
  private:

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<double> m_biasPosition;
    bool m_biasPositionHasBeenSet = false;

    AutocompleteFilter m_filter;
    bool m_filterHasBeenSet = false;

    PostalCodeMode m_postalCodeMode;
    bool m_postalCodeModeHasBeenSet = false;

    Aws::Vector<AutocompleteAdditionalFeature> m_additionalFeatures;
    bool m_additionalFeaturesHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;

    AutocompleteIntendedUse m_intendedUse;
    bool m_intendedUseHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
