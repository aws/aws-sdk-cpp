/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/GeoPlacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/GetPlaceIntendedUse.h>
#include <aws/geo-places/model/GetPlaceAdditionalFeature.h>
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
  class GetPlaceRequest : public GeoPlacesRequest
  {
  public:
    AWS_GEOPLACES_API GetPlaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPlace"; }

    AWS_GEOPLACES_API Aws::String SerializePayload() const override;

    AWS_GEOPLACES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline GetPlaceRequest& WithPlaceId(const Aws::String& value) { SetPlaceId(value); return *this;}
    inline GetPlaceRequest& WithPlaceId(Aws::String&& value) { SetPlaceId(std::move(value)); return *this;}
    inline GetPlaceRequest& WithPlaceId(const char* value) { SetPlaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of optional additional parameters such as time zone that can be
     * requested for each result.</p>
     */
    inline const Aws::Vector<GetPlaceAdditionalFeature>& GetAdditionalFeatures() const{ return m_additionalFeatures; }
    inline bool AdditionalFeaturesHasBeenSet() const { return m_additionalFeaturesHasBeenSet; }
    inline void SetAdditionalFeatures(const Aws::Vector<GetPlaceAdditionalFeature>& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures = value; }
    inline void SetAdditionalFeatures(Aws::Vector<GetPlaceAdditionalFeature>&& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures = std::move(value); }
    inline GetPlaceRequest& WithAdditionalFeatures(const Aws::Vector<GetPlaceAdditionalFeature>& value) { SetAdditionalFeatures(value); return *this;}
    inline GetPlaceRequest& WithAdditionalFeatures(Aws::Vector<GetPlaceAdditionalFeature>&& value) { SetAdditionalFeatures(std::move(value)); return *this;}
    inline GetPlaceRequest& AddAdditionalFeatures(const GetPlaceAdditionalFeature& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures.push_back(value); return *this; }
    inline GetPlaceRequest& AddAdditionalFeatures(GetPlaceAdditionalFeature&& value) { m_additionalFeaturesHasBeenSet = true; m_additionalFeatures.push_back(std::move(value)); return *this; }
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
    inline GetPlaceRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline GetPlaceRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline GetPlaceRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}
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
    inline GetPlaceRequest& WithPoliticalView(const Aws::String& value) { SetPoliticalView(value); return *this;}
    inline GetPlaceRequest& WithPoliticalView(Aws::String&& value) { SetPoliticalView(std::move(value)); return *this;}
    inline GetPlaceRequest& WithPoliticalView(const char* value) { SetPoliticalView(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the results will be stored. Defaults to <code>SingleUse</code>,
     * if left empty.</p>
     */
    inline const GetPlaceIntendedUse& GetIntendedUse() const{ return m_intendedUse; }
    inline bool IntendedUseHasBeenSet() const { return m_intendedUseHasBeenSet; }
    inline void SetIntendedUse(const GetPlaceIntendedUse& value) { m_intendedUseHasBeenSet = true; m_intendedUse = value; }
    inline void SetIntendedUse(GetPlaceIntendedUse&& value) { m_intendedUseHasBeenSet = true; m_intendedUse = std::move(value); }
    inline GetPlaceRequest& WithIntendedUse(const GetPlaceIntendedUse& value) { SetIntendedUse(value); return *this;}
    inline GetPlaceRequest& WithIntendedUse(GetPlaceIntendedUse&& value) { SetIntendedUse(std::move(value)); return *this;}
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
    inline GetPlaceRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline GetPlaceRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline GetPlaceRequest& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}
  private:

    Aws::String m_placeId;
    bool m_placeIdHasBeenSet = false;

    Aws::Vector<GetPlaceAdditionalFeature> m_additionalFeatures;
    bool m_additionalFeaturesHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;

    GetPlaceIntendedUse m_intendedUse;
    bool m_intendedUseHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
