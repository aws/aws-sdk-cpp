/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>The address associated with the specified user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/Address">AWS
   * API Reference</a></p>
   */
  class Address
  {
  public:
    AWS_IDENTITYSTORE_API Address();
    AWS_IDENTITYSTORE_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The street of the address.</p>
     */
    inline const Aws::String& GetStreetAddress() const{ return m_streetAddress; }
    inline bool StreetAddressHasBeenSet() const { return m_streetAddressHasBeenSet; }
    inline void SetStreetAddress(const Aws::String& value) { m_streetAddressHasBeenSet = true; m_streetAddress = value; }
    inline void SetStreetAddress(Aws::String&& value) { m_streetAddressHasBeenSet = true; m_streetAddress = std::move(value); }
    inline void SetStreetAddress(const char* value) { m_streetAddressHasBeenSet = true; m_streetAddress.assign(value); }
    inline Address& WithStreetAddress(const Aws::String& value) { SetStreetAddress(value); return *this;}
    inline Address& WithStreetAddress(Aws::String&& value) { SetStreetAddress(std::move(value)); return *this;}
    inline Address& WithStreetAddress(const char* value) { SetStreetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of the address locality.</p>
     */
    inline const Aws::String& GetLocality() const{ return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    inline void SetLocality(const Aws::String& value) { m_localityHasBeenSet = true; m_locality = value; }
    inline void SetLocality(Aws::String&& value) { m_localityHasBeenSet = true; m_locality = std::move(value); }
    inline void SetLocality(const char* value) { m_localityHasBeenSet = true; m_locality.assign(value); }
    inline Address& WithLocality(const Aws::String& value) { SetLocality(value); return *this;}
    inline Address& WithLocality(Aws::String&& value) { SetLocality(std::move(value)); return *this;}
    inline Address& WithLocality(const char* value) { SetLocality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region of the address.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline Address& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline Address& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline Address& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of the address.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }
    inline Address& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}
    inline Address& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}
    inline Address& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country of the address.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline Address& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline Address& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline Address& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing a formatted version of the address for display.</p>
     */
    inline const Aws::String& GetFormatted() const{ return m_formatted; }
    inline bool FormattedHasBeenSet() const { return m_formattedHasBeenSet; }
    inline void SetFormatted(const Aws::String& value) { m_formattedHasBeenSet = true; m_formatted = value; }
    inline void SetFormatted(Aws::String&& value) { m_formattedHasBeenSet = true; m_formatted = std::move(value); }
    inline void SetFormatted(const char* value) { m_formattedHasBeenSet = true; m_formatted.assign(value); }
    inline Address& WithFormatted(const Aws::String& value) { SetFormatted(value); return *this;}
    inline Address& WithFormatted(Aws::String&& value) { SetFormatted(std::move(value)); return *this;}
    inline Address& WithFormatted(const char* value) { SetFormatted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string representing the type of address. For example, "Home."</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline Address& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline Address& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline Address& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value representing whether this is the primary address for the
     * associated resource.</p>
     */
    inline bool GetPrimary() const{ return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }
    inline Address& WithPrimary(bool value) { SetPrimary(value); return *this;}
    ///@}
  private:

    Aws::String m_streetAddress;
    bool m_streetAddressHasBeenSet = false;

    Aws::String m_locality;
    bool m_localityHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_formatted;
    bool m_formattedHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    bool m_primary;
    bool m_primaryHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
