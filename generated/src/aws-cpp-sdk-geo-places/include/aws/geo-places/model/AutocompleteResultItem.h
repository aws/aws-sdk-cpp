/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/PlaceType.h>
#include <aws/geo-places/model/Address.h>
#include <aws/geo-places/model/AutocompleteHighlights.h>
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
   * <p>A result matching the input query text.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/AutocompleteResultItem">AWS
   * API Reference</a></p>
   */
  class AutocompleteResultItem
  {
  public:
    AWS_GEOPLACES_API AutocompleteResultItem() = default;
    AWS_GEOPLACES_API AutocompleteResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API AutocompleteResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The PlaceId of the place associated with this result. This can be used to
     * look up additional details about the result via GetPlace.</p>
     */
    inline const Aws::String& GetPlaceId() const { return m_placeId; }
    inline bool PlaceIdHasBeenSet() const { return m_placeIdHasBeenSet; }
    template<typename PlaceIdT = Aws::String>
    void SetPlaceId(PlaceIdT&& value) { m_placeIdHasBeenSet = true; m_placeId = std::forward<PlaceIdT>(value); }
    template<typename PlaceIdT = Aws::String>
    AutocompleteResultItem& WithPlaceId(PlaceIdT&& value) { SetPlaceId(std::forward<PlaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>PlaceType describes the type of result entry returned.</p>
     */
    inline PlaceType GetPlaceType() const { return m_placeType; }
    inline bool PlaceTypeHasBeenSet() const { return m_placeTypeHasBeenSet; }
    inline void SetPlaceType(PlaceType value) { m_placeTypeHasBeenSet = true; m_placeType = value; }
    inline AutocompleteResultItem& WithPlaceType(PlaceType value) { SetPlaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A formatted string for display when presenting this result to an end
     * user.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    AutocompleteResultItem& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address associated with this result.</p>
     */
    inline const Address& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Address>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Address>
    AutocompleteResultItem& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distance in meters between the center of the search area and this result.
     * Useful to evaluate how far away from the original bias position the result
     * is.</p>
     */
    inline long long GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline AutocompleteResultItem& WithDistance(long long value) { SetDistance(value); return *this;}
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
    AutocompleteResultItem& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
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
    AutocompleteResultItem& WithPoliticalView(PoliticalViewT&& value) { SetPoliticalView(std::forward<PoliticalViewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the starting and ending index of the place in the text query that
     * match the found title. </p>
     */
    inline const AutocompleteHighlights& GetHighlights() const { return m_highlights; }
    inline bool HighlightsHasBeenSet() const { return m_highlightsHasBeenSet; }
    template<typename HighlightsT = AutocompleteHighlights>
    void SetHighlights(HighlightsT&& value) { m_highlightsHasBeenSet = true; m_highlights = std::forward<HighlightsT>(value); }
    template<typename HighlightsT = AutocompleteHighlights>
    AutocompleteResultItem& WithHighlights(HighlightsT&& value) { SetHighlights(std::forward<HighlightsT>(value)); return *this;}
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

    long long m_distance{0};
    bool m_distanceHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;

    AutocompleteHighlights m_highlights;
    bool m_highlightsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
