/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/GeocodeParsedQueryAddressComponents.h>
#include <aws/geo-places/model/ParsedQueryComponent.h>
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
   * <p>Parsed components in the provided QueryText.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/GeocodeParsedQuery">AWS
   * API Reference</a></p>
   */
  class GeocodeParsedQuery
  {
  public:
    AWS_GEOPLACES_API GeocodeParsedQuery() = default;
    AWS_GEOPLACES_API GeocodeParsedQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API GeocodeParsedQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The localized display name of this result item based on request parameter
     * <code>language</code>.</p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::Vector<ParsedQueryComponent>>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQuery& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    template<typename TitleT = ParsedQueryComponent>
    GeocodeParsedQuery& AddTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title.emplace_back(std::forward<TitleT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The place address.</p>
     */
    inline const GeocodeParsedQueryAddressComponents& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = GeocodeParsedQueryAddressComponents>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = GeocodeParsedQueryAddressComponents>
    GeocodeParsedQuery& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ParsedQueryComponent> m_title;
    bool m_titleHasBeenSet = false;

    GeocodeParsedQueryAddressComponents m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
