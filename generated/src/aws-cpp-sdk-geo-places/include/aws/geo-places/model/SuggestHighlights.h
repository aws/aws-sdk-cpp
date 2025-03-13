/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/SuggestAddressHighlights.h>
#include <aws/geo-places/model/Highlight.h>
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
   * <p>Describes how the parts of the textQuery matched the input query by returning
   * the sections of the response which matched to textQuery terms.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SuggestHighlights">AWS
   * API Reference</a></p>
   */
  class SuggestHighlights
  {
  public:
    AWS_GEOPLACES_API SuggestHighlights() = default;
    AWS_GEOPLACES_API SuggestHighlights(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API SuggestHighlights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the starting and ending index of the title in the text query that
     * match the found title. </p>
     */
    inline const Aws::Vector<Highlight>& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::Vector<Highlight>>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::Vector<Highlight>>
    SuggestHighlights& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    template<typename TitleT = Highlight>
    SuggestHighlights& AddTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title.emplace_back(std::forward<TitleT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The place's address.</p>
     */
    inline const SuggestAddressHighlights& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = SuggestAddressHighlights>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = SuggestAddressHighlights>
    SuggestHighlights& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Highlight> m_title;
    bool m_titleHasBeenSet = false;

    SuggestAddressHighlights m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
