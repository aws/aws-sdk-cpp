/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/vitalservices/VitalServices_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vitalservices/model/GetAppointmentsResult_doctorsItem_serviceDetailsListItem.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace VitalServices
{
namespace Model
{

  class AWS_VITALSERVICES_API GetAppointmentsResult_doctorsItem
  {
  public:
    GetAppointmentsResult_doctorsItem();
    GetAppointmentsResult_doctorsItem(const Aws::Utils::Json::JsonValue& jsonValue);
    GetAppointmentsResult_doctorsItem& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetCity() const{ return m_city; }

    
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = value; }

    
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithCity(Aws::String&& value) { SetCity(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithCity(const char* value) { SetCity(value); return *this;}

    
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithLastName(Aws::String&& value) { SetLastName(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithLastName(const char* value) { SetLastName(value); return *this;}

    
    inline const Aws::String& GetOfficeNumber() const{ return m_officeNumber; }

    
    inline void SetOfficeNumber(const Aws::String& value) { m_officeNumberHasBeenSet = true; m_officeNumber = value; }

    
    inline void SetOfficeNumber(Aws::String&& value) { m_officeNumberHasBeenSet = true; m_officeNumber = value; }

    
    inline void SetOfficeNumber(const char* value) { m_officeNumberHasBeenSet = true; m_officeNumber.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithOfficeNumber(const Aws::String& value) { SetOfficeNumber(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithOfficeNumber(Aws::String&& value) { SetOfficeNumber(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithOfficeNumber(const char* value) { SetOfficeNumber(value); return *this;}

    
    inline const Aws::String& GetProfilePhotoUrl() const{ return m_profilePhotoUrl; }

    
    inline void SetProfilePhotoUrl(const Aws::String& value) { m_profilePhotoUrlHasBeenSet = true; m_profilePhotoUrl = value; }

    
    inline void SetProfilePhotoUrl(Aws::String&& value) { m_profilePhotoUrlHasBeenSet = true; m_profilePhotoUrl = value; }

    
    inline void SetProfilePhotoUrl(const char* value) { m_profilePhotoUrlHasBeenSet = true; m_profilePhotoUrl.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithProfilePhotoUrl(const Aws::String& value) { SetProfilePhotoUrl(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithProfilePhotoUrl(Aws::String&& value) { SetProfilePhotoUrl(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithProfilePhotoUrl(const char* value) { SetProfilePhotoUrl(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetServicesOffered() const{ return m_servicesOffered; }

    
    inline void SetServicesOffered(const Aws::Vector<Aws::String>& value) { m_servicesOfferedHasBeenSet = true; m_servicesOffered = value; }

    
    inline void SetServicesOffered(Aws::Vector<Aws::String>&& value) { m_servicesOfferedHasBeenSet = true; m_servicesOffered = value; }

    
    inline GetAppointmentsResult_doctorsItem& WithServicesOffered(const Aws::Vector<Aws::String>& value) { SetServicesOffered(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithServicesOffered(Aws::Vector<Aws::String>&& value) { SetServicesOffered(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& AddServicesOffered(const Aws::String& value) { m_servicesOfferedHasBeenSet = true; m_servicesOffered.push_back(value); return *this; }

    
    inline GetAppointmentsResult_doctorsItem& AddServicesOffered(Aws::String&& value) { m_servicesOfferedHasBeenSet = true; m_servicesOffered.push_back(value); return *this; }

    
    inline GetAppointmentsResult_doctorsItem& AddServicesOffered(const char* value) { m_servicesOfferedHasBeenSet = true; m_servicesOffered.push_back(value); return *this; }

    
    inline const Aws::Vector<GetAppointmentsResult_doctorsItem_serviceDetailsListItem>& GetServiceDetailsList() const{ return m_serviceDetailsList; }

    
    inline void SetServiceDetailsList(const Aws::Vector<GetAppointmentsResult_doctorsItem_serviceDetailsListItem>& value) { m_serviceDetailsListHasBeenSet = true; m_serviceDetailsList = value; }

    
    inline void SetServiceDetailsList(Aws::Vector<GetAppointmentsResult_doctorsItem_serviceDetailsListItem>&& value) { m_serviceDetailsListHasBeenSet = true; m_serviceDetailsList = value; }

    
    inline GetAppointmentsResult_doctorsItem& WithServiceDetailsList(const Aws::Vector<GetAppointmentsResult_doctorsItem_serviceDetailsListItem>& value) { SetServiceDetailsList(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithServiceDetailsList(Aws::Vector<GetAppointmentsResult_doctorsItem_serviceDetailsListItem>&& value) { SetServiceDetailsList(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& AddServiceDetailsList(const GetAppointmentsResult_doctorsItem_serviceDetailsListItem& value) { m_serviceDetailsListHasBeenSet = true; m_serviceDetailsList.push_back(value); return *this; }

    
    inline GetAppointmentsResult_doctorsItem& AddServiceDetailsList(GetAppointmentsResult_doctorsItem_serviceDetailsListItem&& value) { m_serviceDetailsListHasBeenSet = true; m_serviceDetailsList.push_back(value); return *this; }

    
    inline const Aws::String& GetSpecialtyId() const{ return m_specialtyId; }

    
    inline void SetSpecialtyId(const Aws::String& value) { m_specialtyIdHasBeenSet = true; m_specialtyId = value; }

    
    inline void SetSpecialtyId(Aws::String&& value) { m_specialtyIdHasBeenSet = true; m_specialtyId = value; }

    
    inline void SetSpecialtyId(const char* value) { m_specialtyIdHasBeenSet = true; m_specialtyId.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithSpecialtyId(const Aws::String& value) { SetSpecialtyId(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithSpecialtyId(Aws::String&& value) { SetSpecialtyId(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithSpecialtyId(const char* value) { SetSpecialtyId(value); return *this;}

    
    inline const Aws::String& GetStreetNumberAndName() const{ return m_streetNumberAndName; }

    
    inline void SetStreetNumberAndName(const Aws::String& value) { m_streetNumberAndNameHasBeenSet = true; m_streetNumberAndName = value; }

    
    inline void SetStreetNumberAndName(Aws::String&& value) { m_streetNumberAndNameHasBeenSet = true; m_streetNumberAndName = value; }

    
    inline void SetStreetNumberAndName(const char* value) { m_streetNumberAndNameHasBeenSet = true; m_streetNumberAndName.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithStreetNumberAndName(const Aws::String& value) { SetStreetNumberAndName(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithStreetNumberAndName(Aws::String&& value) { SetStreetNumberAndName(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithStreetNumberAndName(const char* value) { SetStreetNumberAndName(value); return *this;}

    
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithPostalCode(Aws::String&& value) { SetPostalCode(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}

    
    inline const Aws::String& GetAdministrativeAreaL1() const{ return m_administrativeAreaL1; }

    
    inline void SetAdministrativeAreaL1(const Aws::String& value) { m_administrativeAreaL1HasBeenSet = true; m_administrativeAreaL1 = value; }

    
    inline void SetAdministrativeAreaL1(Aws::String&& value) { m_administrativeAreaL1HasBeenSet = true; m_administrativeAreaL1 = value; }

    
    inline void SetAdministrativeAreaL1(const char* value) { m_administrativeAreaL1HasBeenSet = true; m_administrativeAreaL1.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithAdministrativeAreaL1(const Aws::String& value) { SetAdministrativeAreaL1(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithAdministrativeAreaL1(Aws::String&& value) { SetAdministrativeAreaL1(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithAdministrativeAreaL1(const char* value) { SetAdministrativeAreaL1(value); return *this;}

    
    inline const Aws::String& GetCoverPhotoUrl() const{ return m_coverPhotoUrl; }

    
    inline void SetCoverPhotoUrl(const Aws::String& value) { m_coverPhotoUrlHasBeenSet = true; m_coverPhotoUrl = value; }

    
    inline void SetCoverPhotoUrl(Aws::String&& value) { m_coverPhotoUrlHasBeenSet = true; m_coverPhotoUrl = value; }

    
    inline void SetCoverPhotoUrl(const char* value) { m_coverPhotoUrlHasBeenSet = true; m_coverPhotoUrl.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithCoverPhotoUrl(const Aws::String& value) { SetCoverPhotoUrl(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithCoverPhotoUrl(Aws::String&& value) { SetCoverPhotoUrl(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithCoverPhotoUrl(const char* value) { SetCoverPhotoUrl(value); return *this;}

    
    inline bool GetPayoutInfoIsSet() const{ return m_payoutInfoIsSet; }

    
    inline void SetPayoutInfoIsSet(bool value) { m_payoutInfoIsSetHasBeenSet = true; m_payoutInfoIsSet = value; }

    
    inline GetAppointmentsResult_doctorsItem& WithPayoutInfoIsSet(bool value) { SetPayoutInfoIsSet(value); return *this;}

    
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithFirstName(Aws::String&& value) { SetFirstName(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithFirstName(const char* value) { SetFirstName(value); return *this;}

    
    inline double GetLongitude() const{ return m_longitude; }

    
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }

    
    inline GetAppointmentsResult_doctorsItem& WithLongitude(double value) { SetLongitude(value); return *this;}

    
    inline const Aws::String& GetSuite() const{ return m_suite; }

    
    inline void SetSuite(const Aws::String& value) { m_suiteHasBeenSet = true; m_suite = value; }

    
    inline void SetSuite(Aws::String&& value) { m_suiteHasBeenSet = true; m_suite = value; }

    
    inline void SetSuite(const char* value) { m_suiteHasBeenSet = true; m_suite.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithSuite(const Aws::String& value) { SetSuite(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithSuite(Aws::String&& value) { SetSuite(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithSuite(const char* value) { SetSuite(value); return *this;}

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline GetAppointmentsResult_doctorsItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline GetAppointmentsResult_doctorsItem& WithId(const char* value) { SetId(value); return *this;}

    
    inline double GetLatitude() const{ return m_latitude; }

    
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }

    
    inline GetAppointmentsResult_doctorsItem& WithLatitude(double value) { SetLatitude(value); return *this;}

  private:
    Aws::String m_city;
    bool m_cityHasBeenSet;
    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;
    Aws::String m_officeNumber;
    bool m_officeNumberHasBeenSet;
    Aws::String m_profilePhotoUrl;
    bool m_profilePhotoUrlHasBeenSet;
    Aws::Vector<Aws::String> m_servicesOffered;
    bool m_servicesOfferedHasBeenSet;
    Aws::Vector<GetAppointmentsResult_doctorsItem_serviceDetailsListItem> m_serviceDetailsList;
    bool m_serviceDetailsListHasBeenSet;
    Aws::String m_specialtyId;
    bool m_specialtyIdHasBeenSet;
    Aws::String m_streetNumberAndName;
    bool m_streetNumberAndNameHasBeenSet;
    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet;
    Aws::String m_administrativeAreaL1;
    bool m_administrativeAreaL1HasBeenSet;
    Aws::String m_coverPhotoUrl;
    bool m_coverPhotoUrlHasBeenSet;
    bool m_payoutInfoIsSet;
    bool m_payoutInfoIsSetHasBeenSet;
    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;
    double m_longitude;
    bool m_longitudeHasBeenSet;
    Aws::String m_suite;
    bool m_suiteHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
    double m_latitude;
    bool m_latitudeHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
