/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/PostalAuthority.h>
#include <aws/geo-places/model/PostalCodeType.h>
#include <aws/geo-places/model/UspsZip.h>
#include <aws/geo-places/model/UspsZipPlus4.h>
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
   * <p>Contains details about the postal code of the place or result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/PostalCodeDetails">AWS
   * API Reference</a></p>
   */
  class PostalCodeDetails
  {
  public:
    AWS_GEOPLACES_API PostalCodeDetails() = default;
    AWS_GEOPLACES_API PostalCodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API PostalCodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An alphanumeric string included in a postal address to facilitate mail
     * sorting, such as post code, postcode, or ZIP code for which the result should
     * possess. </p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    PostalCodeDetails& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal authority or entity. This could be a governmental authority, a
     * regulatory authority, or a designated postal operator.</p>
     */
    inline PostalAuthority GetPostalAuthority() const { return m_postalAuthority; }
    inline bool PostalAuthorityHasBeenSet() const { return m_postalAuthorityHasBeenSet; }
    inline void SetPostalAuthority(PostalAuthority value) { m_postalAuthorityHasBeenSet = true; m_postalAuthority = value; }
    inline PostalCodeDetails& WithPostalAuthority(PostalAuthority value) { SetPostalAuthority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code type.</p>
     */
    inline PostalCodeType GetPostalCodeType() const { return m_postalCodeType; }
    inline bool PostalCodeTypeHasBeenSet() const { return m_postalCodeTypeHasBeenSet; }
    inline void SetPostalCodeType(PostalCodeType value) { m_postalCodeTypeHasBeenSet = true; m_postalCodeType = value; }
    inline PostalCodeDetails& WithPostalCodeType(PostalCodeType value) { SetPostalCodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ZIP Classification Code, or in other words what type of postal code is
     * it.</p>
     */
    inline const UspsZip& GetUspsZip() const { return m_uspsZip; }
    inline bool UspsZipHasBeenSet() const { return m_uspsZipHasBeenSet; }
    template<typename UspsZipT = UspsZip>
    void SetUspsZip(UspsZipT&& value) { m_uspsZipHasBeenSet = true; m_uspsZip = std::forward<UspsZipT>(value); }
    template<typename UspsZipT = UspsZip>
    PostalCodeDetails& WithUspsZip(UspsZipT&& value) { SetUspsZip(std::forward<UspsZipT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The USPS ZIP+4 Record Type Code.</p>
     */
    inline const UspsZipPlus4& GetUspsZipPlus4() const { return m_uspsZipPlus4; }
    inline bool UspsZipPlus4HasBeenSet() const { return m_uspsZipPlus4HasBeenSet; }
    template<typename UspsZipPlus4T = UspsZipPlus4>
    void SetUspsZipPlus4(UspsZipPlus4T&& value) { m_uspsZipPlus4HasBeenSet = true; m_uspsZipPlus4 = std::forward<UspsZipPlus4T>(value); }
    template<typename UspsZipPlus4T = UspsZipPlus4>
    PostalCodeDetails& WithUspsZipPlus4(UspsZipPlus4T&& value) { SetUspsZipPlus4(std::forward<UspsZipPlus4T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    PostalAuthority m_postalAuthority{PostalAuthority::NOT_SET};
    bool m_postalAuthorityHasBeenSet = false;

    PostalCodeType m_postalCodeType{PostalCodeType::NOT_SET};
    bool m_postalCodeTypeHasBeenSet = false;

    UspsZip m_uspsZip;
    bool m_uspsZipHasBeenSet = false;

    UspsZipPlus4 m_uspsZipPlus4;
    bool m_uspsZipPlus4HasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
