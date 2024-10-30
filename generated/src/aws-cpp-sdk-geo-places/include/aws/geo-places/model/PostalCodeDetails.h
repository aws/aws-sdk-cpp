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
    AWS_GEOPLACES_API PostalCodeDetails();
    AWS_GEOPLACES_API PostalCodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API PostalCodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An alphanumeric string included in a postal address to facilitate mail
     * sorting, such as post code, postcode, or ZIP code for which the result should
     * posses. </p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }
    inline PostalCodeDetails& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}
    inline PostalCodeDetails& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}
    inline PostalCodeDetails& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal authority or entity. This could be a governmental authority, a
     * regulatory authority, or a designated postal operator.</p>
     */
    inline const PostalAuthority& GetPostalAuthority() const{ return m_postalAuthority; }
    inline bool PostalAuthorityHasBeenSet() const { return m_postalAuthorityHasBeenSet; }
    inline void SetPostalAuthority(const PostalAuthority& value) { m_postalAuthorityHasBeenSet = true; m_postalAuthority = value; }
    inline void SetPostalAuthority(PostalAuthority&& value) { m_postalAuthorityHasBeenSet = true; m_postalAuthority = std::move(value); }
    inline PostalCodeDetails& WithPostalAuthority(const PostalAuthority& value) { SetPostalAuthority(value); return *this;}
    inline PostalCodeDetails& WithPostalAuthority(PostalAuthority&& value) { SetPostalAuthority(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code type.</p>
     */
    inline const PostalCodeType& GetPostalCodeType() const{ return m_postalCodeType; }
    inline bool PostalCodeTypeHasBeenSet() const { return m_postalCodeTypeHasBeenSet; }
    inline void SetPostalCodeType(const PostalCodeType& value) { m_postalCodeTypeHasBeenSet = true; m_postalCodeType = value; }
    inline void SetPostalCodeType(PostalCodeType&& value) { m_postalCodeTypeHasBeenSet = true; m_postalCodeType = std::move(value); }
    inline PostalCodeDetails& WithPostalCodeType(const PostalCodeType& value) { SetPostalCodeType(value); return *this;}
    inline PostalCodeDetails& WithPostalCodeType(PostalCodeType&& value) { SetPostalCodeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ZIP Classification Code, or in other words what type of postal code is
     * it.</p>
     */
    inline const UspsZip& GetUspsZip() const{ return m_uspsZip; }
    inline bool UspsZipHasBeenSet() const { return m_uspsZipHasBeenSet; }
    inline void SetUspsZip(const UspsZip& value) { m_uspsZipHasBeenSet = true; m_uspsZip = value; }
    inline void SetUspsZip(UspsZip&& value) { m_uspsZipHasBeenSet = true; m_uspsZip = std::move(value); }
    inline PostalCodeDetails& WithUspsZip(const UspsZip& value) { SetUspsZip(value); return *this;}
    inline PostalCodeDetails& WithUspsZip(UspsZip&& value) { SetUspsZip(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The USPS ZIP+4 Record Type Code.</p>
     */
    inline const UspsZipPlus4& GetUspsZipPlus4() const{ return m_uspsZipPlus4; }
    inline bool UspsZipPlus4HasBeenSet() const { return m_uspsZipPlus4HasBeenSet; }
    inline void SetUspsZipPlus4(const UspsZipPlus4& value) { m_uspsZipPlus4HasBeenSet = true; m_uspsZipPlus4 = value; }
    inline void SetUspsZipPlus4(UspsZipPlus4&& value) { m_uspsZipPlus4HasBeenSet = true; m_uspsZipPlus4 = std::move(value); }
    inline PostalCodeDetails& WithUspsZipPlus4(const UspsZipPlus4& value) { SetUspsZipPlus4(value); return *this;}
    inline PostalCodeDetails& WithUspsZipPlus4(UspsZipPlus4&& value) { SetUspsZipPlus4(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    PostalAuthority m_postalAuthority;
    bool m_postalAuthorityHasBeenSet = false;

    PostalCodeType m_postalCodeType;
    bool m_postalCodeTypeHasBeenSet = false;

    UspsZip m_uspsZip;
    bool m_uspsZipHasBeenSet = false;

    UspsZipPlus4 m_uspsZipPlus4;
    bool m_uspsZipPlus4HasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
