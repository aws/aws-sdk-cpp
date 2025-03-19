/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the country where the remote IP address is
   * located.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Country">AWS
   * API Reference</a></p>
   */
  class Country
  {
  public:
    AWS_GUARDDUTY_API Country() = default;
    AWS_GUARDDUTY_API Country(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Country& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The country code of the remote IP address.</p>
     */
    inline const Aws::String& GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    template<typename CountryCodeT = Aws::String>
    void SetCountryCode(CountryCodeT&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::forward<CountryCodeT>(value); }
    template<typename CountryCodeT = Aws::String>
    Country& WithCountryCode(CountryCodeT&& value) { SetCountryCode(std::forward<CountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country name of the remote IP address.</p>
     */
    inline const Aws::String& GetCountryName() const { return m_countryName; }
    inline bool CountryNameHasBeenSet() const { return m_countryNameHasBeenSet; }
    template<typename CountryNameT = Aws::String>
    void SetCountryName(CountryNameT&& value) { m_countryNameHasBeenSet = true; m_countryName = std::forward<CountryNameT>(value); }
    template<typename CountryNameT = Aws::String>
    Country& WithCountryName(CountryNameT&& value) { SetCountryName(std::forward<CountryNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_countryName;
    bool m_countryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
