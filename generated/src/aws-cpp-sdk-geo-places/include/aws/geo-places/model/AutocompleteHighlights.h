/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/AutocompleteAddressHighlights.h>
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
   * <p>Describes how the parts of the response element matched the input query by
   * returning the sections of the response which matched to input query
   * terms.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/AutocompleteHighlights">AWS
   * API Reference</a></p>
   */
  class AutocompleteHighlights
  {
  public:
    AWS_GEOPLACES_API AutocompleteHighlights() = default;
    AWS_GEOPLACES_API AutocompleteHighlights(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API AutocompleteHighlights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates where the title field in the result matches the input query.</p>
     */
    inline const Aws::Vector<Highlight>& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::Vector<Highlight>>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::Vector<Highlight>>
    AutocompleteHighlights& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    template<typename TitleT = Highlight>
    AutocompleteHighlights& AddTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title.emplace_back(std::forward<TitleT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes how part of the result address match the input query.</p>
     */
    inline const AutocompleteAddressHighlights& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = AutocompleteAddressHighlights>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = AutocompleteAddressHighlights>
    AutocompleteHighlights& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Highlight> m_title;
    bool m_titleHasBeenSet = false;

    AutocompleteAddressHighlights m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
