/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetShippingLabelRequest : public ImportExportRequest
  {
  public:
    AWS_IMPORTEXPORT_API GetShippingLabelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetShippingLabel"; }

    AWS_IMPORTEXPORT_API Aws::String SerializePayload() const override;

  protected:
    AWS_IMPORTEXPORT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetJobIds() const { return m_jobIds; }
    inline bool JobIdsHasBeenSet() const { return m_jobIdsHasBeenSet; }
    template<typename JobIdsT = Aws::Vector<Aws::String>>
    void SetJobIds(JobIdsT&& value) { m_jobIdsHasBeenSet = true; m_jobIds = std::forward<JobIdsT>(value); }
    template<typename JobIdsT = Aws::Vector<Aws::String>>
    GetShippingLabelRequest& WithJobIds(JobIdsT&& value) { SetJobIds(std::forward<JobIdsT>(value)); return *this;}
    template<typename JobIdsT = Aws::String>
    GetShippingLabelRequest& AddJobIds(JobIdsT&& value) { m_jobIdsHasBeenSet = true; m_jobIds.emplace_back(std::forward<JobIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetShippingLabelRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetCompany() const { return m_company; }
    inline bool CompanyHasBeenSet() const { return m_companyHasBeenSet; }
    template<typename CompanyT = Aws::String>
    void SetCompany(CompanyT&& value) { m_companyHasBeenSet = true; m_company = std::forward<CompanyT>(value); }
    template<typename CompanyT = Aws::String>
    GetShippingLabelRequest& WithCompany(CompanyT&& value) { SetCompany(std::forward<CompanyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    GetShippingLabelRequest& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    GetShippingLabelRequest& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetStateOrProvince() const { return m_stateOrProvince; }
    inline bool StateOrProvinceHasBeenSet() const { return m_stateOrProvinceHasBeenSet; }
    template<typename StateOrProvinceT = Aws::String>
    void SetStateOrProvince(StateOrProvinceT&& value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince = std::forward<StateOrProvinceT>(value); }
    template<typename StateOrProvinceT = Aws::String>
    GetShippingLabelRequest& WithStateOrProvince(StateOrProvinceT&& value) { SetStateOrProvince(std::forward<StateOrProvinceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    GetShippingLabelRequest& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    GetShippingLabelRequest& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetStreet1() const { return m_street1; }
    inline bool Street1HasBeenSet() const { return m_street1HasBeenSet; }
    template<typename Street1T = Aws::String>
    void SetStreet1(Street1T&& value) { m_street1HasBeenSet = true; m_street1 = std::forward<Street1T>(value); }
    template<typename Street1T = Aws::String>
    GetShippingLabelRequest& WithStreet1(Street1T&& value) { SetStreet1(std::forward<Street1T>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetStreet2() const { return m_street2; }
    inline bool Street2HasBeenSet() const { return m_street2HasBeenSet; }
    template<typename Street2T = Aws::String>
    void SetStreet2(Street2T&& value) { m_street2HasBeenSet = true; m_street2 = std::forward<Street2T>(value); }
    template<typename Street2T = Aws::String>
    GetShippingLabelRequest& WithStreet2(Street2T&& value) { SetStreet2(std::forward<Street2T>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetStreet3() const { return m_street3; }
    inline bool Street3HasBeenSet() const { return m_street3HasBeenSet; }
    template<typename Street3T = Aws::String>
    void SetStreet3(Street3T&& value) { m_street3HasBeenSet = true; m_street3 = std::forward<Street3T>(value); }
    template<typename Street3T = Aws::String>
    GetShippingLabelRequest& WithStreet3(Street3T&& value) { SetStreet3(std::forward<Street3T>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAPIVersion() const { return m_aPIVersion; }
    inline bool APIVersionHasBeenSet() const { return m_aPIVersionHasBeenSet; }
    template<typename APIVersionT = Aws::String>
    void SetAPIVersion(APIVersionT&& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = std::forward<APIVersionT>(value); }
    template<typename APIVersionT = Aws::String>
    GetShippingLabelRequest& WithAPIVersion(APIVersionT&& value) { SetAPIVersion(std::forward<APIVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobIds;
    bool m_jobIdsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_company;
    bool m_companyHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_stateOrProvince;
    bool m_stateOrProvinceHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_street1;
    bool m_street1HasBeenSet = false;

    Aws::String m_street2;
    bool m_street2HasBeenSet = false;

    Aws::String m_street3;
    bool m_street3HasBeenSet = false;

    Aws::String m_aPIVersion;
    bool m_aPIVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
