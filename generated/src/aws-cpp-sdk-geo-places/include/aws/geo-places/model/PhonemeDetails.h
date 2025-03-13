/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/AddressComponentPhonemes.h>
#include <aws/geo-places/model/PhonemeTranscription.h>
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
   * <p>The phoneme details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/PhonemeDetails">AWS
   * API Reference</a></p>
   */
  class PhonemeDetails
  {
  public:
    AWS_GEOPLACES_API PhonemeDetails() = default;
    AWS_GEOPLACES_API PhonemeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API PhonemeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of <code>PhonemeTranscription</code>. See
     * <code>PhonemeTranscription</code> for fields.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::Vector<PhonemeTranscription>>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::Vector<PhonemeTranscription>>
    PhonemeDetails& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    template<typename TitleT = PhonemeTranscription>
    PhonemeDetails& AddTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title.emplace_back(std::forward<TitleT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the address.</p>
     */
    inline const AddressComponentPhonemes& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = AddressComponentPhonemes>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = AddressComponentPhonemes>
    PhonemeDetails& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PhonemeTranscription> m_title;
    bool m_titleHasBeenSet = false;

    AddressComponentPhonemes m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
