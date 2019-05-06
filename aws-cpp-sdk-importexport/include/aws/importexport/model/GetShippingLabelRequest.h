/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/importexport/ImportExportRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ImportExport
{
namespace Model
{

  /**
   */
  class AWS_IMPORTEXPORT_API GetShippingLabelRequest : public ImportExportRequest
  {
  public:
    GetShippingLabelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetShippingLabel"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::Vector<Aws::String>& GetJobIds() const{ return m_jobIds; }

    
    inline bool JobIdsHasBeenSet() const { return m_jobIdsHasBeenSet; }

    
    inline void SetJobIds(const Aws::Vector<Aws::String>& value) { m_jobIdsHasBeenSet = true; m_jobIds = value; }

    
    inline void SetJobIds(Aws::Vector<Aws::String>&& value) { m_jobIdsHasBeenSet = true; m_jobIds = std::move(value); }

    
    inline GetShippingLabelRequest& WithJobIds(const Aws::Vector<Aws::String>& value) { SetJobIds(value); return *this;}

    
    inline GetShippingLabelRequest& WithJobIds(Aws::Vector<Aws::String>&& value) { SetJobIds(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& AddJobIds(const Aws::String& value) { m_jobIdsHasBeenSet = true; m_jobIds.push_back(value); return *this; }

    
    inline GetShippingLabelRequest& AddJobIds(Aws::String&& value) { m_jobIdsHasBeenSet = true; m_jobIds.push_back(std::move(value)); return *this; }

    
    inline GetShippingLabelRequest& AddJobIds(const char* value) { m_jobIdsHasBeenSet = true; m_jobIds.push_back(value); return *this; }


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline GetShippingLabelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline GetShippingLabelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetCompany() const{ return m_company; }

    
    inline bool CompanyHasBeenSet() const { return m_companyHasBeenSet; }

    
    inline void SetCompany(const Aws::String& value) { m_companyHasBeenSet = true; m_company = value; }

    
    inline void SetCompany(Aws::String&& value) { m_companyHasBeenSet = true; m_company = std::move(value); }

    
    inline void SetCompany(const char* value) { m_companyHasBeenSet = true; m_company.assign(value); }

    
    inline GetShippingLabelRequest& WithCompany(const Aws::String& value) { SetCompany(value); return *this;}

    
    inline GetShippingLabelRequest& WithCompany(Aws::String&& value) { SetCompany(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& WithCompany(const char* value) { SetCompany(value); return *this;}


    
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    
    inline GetShippingLabelRequest& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    
    inline GetShippingLabelRequest& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    
    inline const Aws::String& GetCountry() const{ return m_country; }

    
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    
    inline GetShippingLabelRequest& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    
    inline GetShippingLabelRequest& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& WithCountry(const char* value) { SetCountry(value); return *this;}


    
    inline const Aws::String& GetStateOrProvince() const{ return m_stateOrProvince; }

    
    inline bool StateOrProvinceHasBeenSet() const { return m_stateOrProvinceHasBeenSet; }

    
    inline void SetStateOrProvince(const Aws::String& value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince = value; }

    
    inline void SetStateOrProvince(Aws::String&& value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince = std::move(value); }

    
    inline void SetStateOrProvince(const char* value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince.assign(value); }

    
    inline GetShippingLabelRequest& WithStateOrProvince(const Aws::String& value) { SetStateOrProvince(value); return *this;}

    
    inline GetShippingLabelRequest& WithStateOrProvince(Aws::String&& value) { SetStateOrProvince(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& WithStateOrProvince(const char* value) { SetStateOrProvince(value); return *this;}


    
    inline const Aws::String& GetCity() const{ return m_city; }

    
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    
    inline GetShippingLabelRequest& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    
    inline GetShippingLabelRequest& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& WithCity(const char* value) { SetCity(value); return *this;}


    
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    
    inline GetShippingLabelRequest& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    
    inline GetShippingLabelRequest& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}


    
    inline const Aws::String& GetStreet1() const{ return m_street1; }

    
    inline bool Street1HasBeenSet() const { return m_street1HasBeenSet; }

    
    inline void SetStreet1(const Aws::String& value) { m_street1HasBeenSet = true; m_street1 = value; }

    
    inline void SetStreet1(Aws::String&& value) { m_street1HasBeenSet = true; m_street1 = std::move(value); }

    
    inline void SetStreet1(const char* value) { m_street1HasBeenSet = true; m_street1.assign(value); }

    
    inline GetShippingLabelRequest& WithStreet1(const Aws::String& value) { SetStreet1(value); return *this;}

    
    inline GetShippingLabelRequest& WithStreet1(Aws::String&& value) { SetStreet1(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& WithStreet1(const char* value) { SetStreet1(value); return *this;}


    
    inline const Aws::String& GetStreet2() const{ return m_street2; }

    
    inline bool Street2HasBeenSet() const { return m_street2HasBeenSet; }

    
    inline void SetStreet2(const Aws::String& value) { m_street2HasBeenSet = true; m_street2 = value; }

    
    inline void SetStreet2(Aws::String&& value) { m_street2HasBeenSet = true; m_street2 = std::move(value); }

    
    inline void SetStreet2(const char* value) { m_street2HasBeenSet = true; m_street2.assign(value); }

    
    inline GetShippingLabelRequest& WithStreet2(const Aws::String& value) { SetStreet2(value); return *this;}

    
    inline GetShippingLabelRequest& WithStreet2(Aws::String&& value) { SetStreet2(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& WithStreet2(const char* value) { SetStreet2(value); return *this;}


    
    inline const Aws::String& GetStreet3() const{ return m_street3; }

    
    inline bool Street3HasBeenSet() const { return m_street3HasBeenSet; }

    
    inline void SetStreet3(const Aws::String& value) { m_street3HasBeenSet = true; m_street3 = value; }

    
    inline void SetStreet3(Aws::String&& value) { m_street3HasBeenSet = true; m_street3 = std::move(value); }

    
    inline void SetStreet3(const char* value) { m_street3HasBeenSet = true; m_street3.assign(value); }

    
    inline GetShippingLabelRequest& WithStreet3(const Aws::String& value) { SetStreet3(value); return *this;}

    
    inline GetShippingLabelRequest& WithStreet3(Aws::String&& value) { SetStreet3(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& WithStreet3(const char* value) { SetStreet3(value); return *this;}


    
    inline const Aws::String& GetAPIVersion() const{ return m_aPIVersion; }

    
    inline bool APIVersionHasBeenSet() const { return m_aPIVersionHasBeenSet; }

    
    inline void SetAPIVersion(const Aws::String& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = value; }

    
    inline void SetAPIVersion(Aws::String&& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = std::move(value); }

    
    inline void SetAPIVersion(const char* value) { m_aPIVersionHasBeenSet = true; m_aPIVersion.assign(value); }

    
    inline GetShippingLabelRequest& WithAPIVersion(const Aws::String& value) { SetAPIVersion(value); return *this;}

    
    inline GetShippingLabelRequest& WithAPIVersion(Aws::String&& value) { SetAPIVersion(std::move(value)); return *this;}

    
    inline GetShippingLabelRequest& WithAPIVersion(const char* value) { SetAPIVersion(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_jobIds;
    bool m_jobIdsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_company;
    bool m_companyHasBeenSet;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet;

    Aws::String m_country;
    bool m_countryHasBeenSet;

    Aws::String m_stateOrProvince;
    bool m_stateOrProvinceHasBeenSet;

    Aws::String m_city;
    bool m_cityHasBeenSet;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet;

    Aws::String m_street1;
    bool m_street1HasBeenSet;

    Aws::String m_street2;
    bool m_street2HasBeenSet;

    Aws::String m_street3;
    bool m_street3HasBeenSet;

    Aws::String m_aPIVersion;
    bool m_aPIVersionHasBeenSet;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
