/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The country and area code for a proxy phone number in a proxy phone
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GeoMatchParams">AWS
   * API Reference</a></p>
   */
  class GeoMatchParams
  {
  public:
    AWS_CHIMESDKVOICE_API GeoMatchParams() = default;
    AWS_CHIMESDKVOICE_API GeoMatchParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API GeoMatchParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The country.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    GeoMatchParams& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The area code.</p>
     */
    inline const Aws::String& GetAreaCode() const { return m_areaCode; }
    inline bool AreaCodeHasBeenSet() const { return m_areaCodeHasBeenSet; }
    template<typename AreaCodeT = Aws::String>
    void SetAreaCode(AreaCodeT&& value) { m_areaCodeHasBeenSet = true; m_areaCode = std::forward<AreaCodeT>(value); }
    template<typename AreaCodeT = Aws::String>
    GeoMatchParams& WithAreaCode(AreaCodeT&& value) { SetAreaCode(std::forward<AreaCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_areaCode;
    bool m_areaCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
