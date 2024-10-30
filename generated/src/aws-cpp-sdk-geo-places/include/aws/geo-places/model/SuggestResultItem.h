/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/SuggestResultItemType.h>
#include <aws/geo-places/model/SuggestPlaceResult.h>
#include <aws/geo-places/model/SuggestQueryResult.h>
#include <aws/geo-places/model/SuggestHighlights.h>
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
   * <p>The resulting item from the suggested query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SuggestResultItem">AWS
   * API Reference</a></p>
   */
  class SuggestResultItem
  {
  public:
    AWS_GEOPLACES_API SuggestResultItem();
    AWS_GEOPLACES_API SuggestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API SuggestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display title that should be used when presenting this option to the end
     * user.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline SuggestResultItem& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline SuggestResultItem& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline SuggestResultItem& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result type. Place results represent the final result for a point of
     * interest, Query results represent a follow up query which can be completed
     * through the SearchText operation.</p>
     */
    inline const SuggestResultItemType& GetSuggestResultItemType() const{ return m_suggestResultItemType; }
    inline bool SuggestResultItemTypeHasBeenSet() const { return m_suggestResultItemTypeHasBeenSet; }
    inline void SetSuggestResultItemType(const SuggestResultItemType& value) { m_suggestResultItemTypeHasBeenSet = true; m_suggestResultItemType = value; }
    inline void SetSuggestResultItemType(SuggestResultItemType&& value) { m_suggestResultItemTypeHasBeenSet = true; m_suggestResultItemType = std::move(value); }
    inline SuggestResultItem& WithSuggestResultItemType(const SuggestResultItemType& value) { SetSuggestResultItemType(value); return *this;}
    inline SuggestResultItem& WithSuggestResultItemType(SuggestResultItemType&& value) { SetSuggestResultItemType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The suggested place by its unique ID.</p>
     */
    inline const SuggestPlaceResult& GetPlace() const{ return m_place; }
    inline bool PlaceHasBeenSet() const { return m_placeHasBeenSet; }
    inline void SetPlace(const SuggestPlaceResult& value) { m_placeHasBeenSet = true; m_place = value; }
    inline void SetPlace(SuggestPlaceResult&& value) { m_placeHasBeenSet = true; m_place = std::move(value); }
    inline SuggestResultItem& WithPlace(const SuggestPlaceResult& value) { SetPlace(value); return *this;}
    inline SuggestResultItem& WithPlace(SuggestPlaceResult&& value) { SetPlace(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SuggestQueryResult& GetQuery() const{ return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    inline void SetQuery(const SuggestQueryResult& value) { m_queryHasBeenSet = true; m_query = value; }
    inline void SetQuery(SuggestQueryResult&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }
    inline SuggestResultItem& WithQuery(const SuggestQueryResult& value) { SetQuery(value); return *this;}
    inline SuggestResultItem& WithQuery(SuggestQueryResult&& value) { SetQuery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes how the parts of the response element matched the input query by
     * returning the sections of the response which matched to input query terms. </p>
     */
    inline const SuggestHighlights& GetHighlights() const{ return m_highlights; }
    inline bool HighlightsHasBeenSet() const { return m_highlightsHasBeenSet; }
    inline void SetHighlights(const SuggestHighlights& value) { m_highlightsHasBeenSet = true; m_highlights = value; }
    inline void SetHighlights(SuggestHighlights&& value) { m_highlightsHasBeenSet = true; m_highlights = std::move(value); }
    inline SuggestResultItem& WithHighlights(const SuggestHighlights& value) { SetHighlights(value); return *this;}
    inline SuggestResultItem& WithHighlights(SuggestHighlights&& value) { SetHighlights(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    SuggestResultItemType m_suggestResultItemType;
    bool m_suggestResultItemTypeHasBeenSet = false;

    SuggestPlaceResult m_place;
    bool m_placeHasBeenSet = false;

    SuggestQueryResult m_query;
    bool m_queryHasBeenSet = false;

    SuggestHighlights m_highlights;
    bool m_highlightsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
