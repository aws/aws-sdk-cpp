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
    AWS_GEOPLACES_API AutocompleteHighlights();
    AWS_GEOPLACES_API AutocompleteHighlights(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API AutocompleteHighlights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates where the title field in the result matches the input query.</p>
     */
    inline const Aws::Vector<Highlight>& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::Vector<Highlight>& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::Vector<Highlight>&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline AutocompleteHighlights& WithTitle(const Aws::Vector<Highlight>& value) { SetTitle(value); return *this;}
    inline AutocompleteHighlights& WithTitle(Aws::Vector<Highlight>&& value) { SetTitle(std::move(value)); return *this;}
    inline AutocompleteHighlights& AddTitle(const Highlight& value) { m_titleHasBeenSet = true; m_title.push_back(value); return *this; }
    inline AutocompleteHighlights& AddTitle(Highlight&& value) { m_titleHasBeenSet = true; m_title.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes how part of the result address match the input query.</p>
     */
    inline const AutocompleteAddressHighlights& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const AutocompleteAddressHighlights& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(AutocompleteAddressHighlights&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline AutocompleteHighlights& WithAddress(const AutocompleteAddressHighlights& value) { SetAddress(value); return *this;}
    inline AutocompleteHighlights& WithAddress(AutocompleteAddressHighlights&& value) { SetAddress(std::move(value)); return *this;}
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
