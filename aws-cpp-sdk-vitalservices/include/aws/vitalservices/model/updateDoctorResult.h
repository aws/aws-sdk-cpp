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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vitalservices/model/ClientDoctor_serviceDetailsListItem.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class AWS_VITALSERVICES_API updateDoctorResult
  {
  public:
    updateDoctorResult();
    updateDoctorResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    updateDoctorResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline double GetLongitude() const{ return m_longitude; }

    
    inline void SetLongitude(double value) { m_longitude = value; }

    
    inline updateDoctorResult& WithLongitude(double value) { SetLongitude(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetServicesOffered() const{ return m_servicesOffered; }

    
    inline void SetServicesOffered(const Aws::Vector<Aws::String>& value) { m_servicesOffered = value; }

    
    inline void SetServicesOffered(Aws::Vector<Aws::String>&& value) { m_servicesOffered = value; }

    
    inline updateDoctorResult& WithServicesOffered(const Aws::Vector<Aws::String>& value) { SetServicesOffered(value); return *this;}

    
    inline updateDoctorResult& WithServicesOffered(Aws::Vector<Aws::String>&& value) { SetServicesOffered(value); return *this;}

    
    inline updateDoctorResult& AddServicesOffered(const Aws::String& value) { m_servicesOffered.push_back(value); return *this; }

    
    inline updateDoctorResult& AddServicesOffered(Aws::String&& value) { m_servicesOffered.push_back(value); return *this; }

    
    inline updateDoctorResult& AddServicesOffered(const char* value) { m_servicesOffered.push_back(value); return *this; }

    
    inline bool GetPayoutInfoIsSet() const{ return m_payoutInfoIsSet; }

    
    inline void SetPayoutInfoIsSet(bool value) { m_payoutInfoIsSet = value; }

    
    inline updateDoctorResult& WithPayoutInfoIsSet(bool value) { SetPayoutInfoIsSet(value); return *this;}

    
    inline const Aws::String& GetCity() const{ return m_city; }

    
    inline void SetCity(const Aws::String& value) { m_city = value; }

    
    inline void SetCity(Aws::String&& value) { m_city = value; }

    
    inline void SetCity(const char* value) { m_city.assign(value); }

    
    inline updateDoctorResult& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    
    inline updateDoctorResult& WithCity(Aws::String&& value) { SetCity(value); return *this;}

    
    inline updateDoctorResult& WithCity(const char* value) { SetCity(value); return *this;}

    
    inline const Aws::String& GetSpecialtyId() const{ return m_specialtyId; }

    
    inline void SetSpecialtyId(const Aws::String& value) { m_specialtyId = value; }

    
    inline void SetSpecialtyId(Aws::String&& value) { m_specialtyId = value; }

    
    inline void SetSpecialtyId(const char* value) { m_specialtyId.assign(value); }

    
    inline updateDoctorResult& WithSpecialtyId(const Aws::String& value) { SetSpecialtyId(value); return *this;}

    
    inline updateDoctorResult& WithSpecialtyId(Aws::String&& value) { SetSpecialtyId(value); return *this;}

    
    inline updateDoctorResult& WithSpecialtyId(const char* value) { SetSpecialtyId(value); return *this;}

    
    inline const Aws::String& GetSuite() const{ return m_suite; }

    
    inline void SetSuite(const Aws::String& value) { m_suite = value; }

    
    inline void SetSuite(Aws::String&& value) { m_suite = value; }

    
    inline void SetSuite(const char* value) { m_suite.assign(value); }

    
    inline updateDoctorResult& WithSuite(const Aws::String& value) { SetSuite(value); return *this;}

    
    inline updateDoctorResult& WithSuite(Aws::String&& value) { SetSuite(value); return *this;}

    
    inline updateDoctorResult& WithSuite(const char* value) { SetSuite(value); return *this;}

    
    inline const Aws::String& GetOfficeNumber() const{ return m_officeNumber; }

    
    inline void SetOfficeNumber(const Aws::String& value) { m_officeNumber = value; }

    
    inline void SetOfficeNumber(Aws::String&& value) { m_officeNumber = value; }

    
    inline void SetOfficeNumber(const char* value) { m_officeNumber.assign(value); }

    
    inline updateDoctorResult& WithOfficeNumber(const Aws::String& value) { SetOfficeNumber(value); return *this;}

    
    inline updateDoctorResult& WithOfficeNumber(Aws::String&& value) { SetOfficeNumber(value); return *this;}

    
    inline updateDoctorResult& WithOfficeNumber(const char* value) { SetOfficeNumber(value); return *this;}

    
    inline const Aws::Vector<ClientDoctor_serviceDetailsListItem>& GetServiceDetailsList() const{ return m_serviceDetailsList; }

    
    inline void SetServiceDetailsList(const Aws::Vector<ClientDoctor_serviceDetailsListItem>& value) { m_serviceDetailsList = value; }

    
    inline void SetServiceDetailsList(Aws::Vector<ClientDoctor_serviceDetailsListItem>&& value) { m_serviceDetailsList = value; }

    
    inline updateDoctorResult& WithServiceDetailsList(const Aws::Vector<ClientDoctor_serviceDetailsListItem>& value) { SetServiceDetailsList(value); return *this;}

    
    inline updateDoctorResult& WithServiceDetailsList(Aws::Vector<ClientDoctor_serviceDetailsListItem>&& value) { SetServiceDetailsList(value); return *this;}

    
    inline updateDoctorResult& AddServiceDetailsList(const ClientDoctor_serviceDetailsListItem& value) { m_serviceDetailsList.push_back(value); return *this; }

    
    inline updateDoctorResult& AddServiceDetailsList(ClientDoctor_serviceDetailsListItem&& value) { m_serviceDetailsList.push_back(value); return *this; }

    
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    
    inline void SetFirstName(const Aws::String& value) { m_firstName = value; }

    
    inline void SetFirstName(Aws::String&& value) { m_firstName = value; }

    
    inline void SetFirstName(const char* value) { m_firstName.assign(value); }

    
    inline updateDoctorResult& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    
    inline updateDoctorResult& WithFirstName(Aws::String&& value) { SetFirstName(value); return *this;}

    
    inline updateDoctorResult& WithFirstName(const char* value) { SetFirstName(value); return *this;}

    
    inline double GetLatitude() const{ return m_latitude; }

    
    inline void SetLatitude(double value) { m_latitude = value; }

    
    inline updateDoctorResult& WithLatitude(double value) { SetLatitude(value); return *this;}

    
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    
    inline void SetPostalCode(const Aws::String& value) { m_postalCode = value; }

    
    inline void SetPostalCode(Aws::String&& value) { m_postalCode = value; }

    
    inline void SetPostalCode(const char* value) { m_postalCode.assign(value); }

    
    inline updateDoctorResult& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    
    inline updateDoctorResult& WithPostalCode(Aws::String&& value) { SetPostalCode(value); return *this;}

    
    inline updateDoctorResult& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}

    
    inline const Aws::String& GetStreetNumberAndName() const{ return m_streetNumberAndName; }

    
    inline void SetStreetNumberAndName(const Aws::String& value) { m_streetNumberAndName = value; }

    
    inline void SetStreetNumberAndName(Aws::String&& value) { m_streetNumberAndName = value; }

    
    inline void SetStreetNumberAndName(const char* value) { m_streetNumberAndName.assign(value); }

    
    inline updateDoctorResult& WithStreetNumberAndName(const Aws::String& value) { SetStreetNumberAndName(value); return *this;}

    
    inline updateDoctorResult& WithStreetNumberAndName(Aws::String&& value) { SetStreetNumberAndName(value); return *this;}

    
    inline updateDoctorResult& WithStreetNumberAndName(const char* value) { SetStreetNumberAndName(value); return *this;}

    
    inline const Aws::String& GetAdministrativeAreaL1() const{ return m_administrativeAreaL1; }

    
    inline void SetAdministrativeAreaL1(const Aws::String& value) { m_administrativeAreaL1 = value; }

    
    inline void SetAdministrativeAreaL1(Aws::String&& value) { m_administrativeAreaL1 = value; }

    
    inline void SetAdministrativeAreaL1(const char* value) { m_administrativeAreaL1.assign(value); }

    
    inline updateDoctorResult& WithAdministrativeAreaL1(const Aws::String& value) { SetAdministrativeAreaL1(value); return *this;}

    
    inline updateDoctorResult& WithAdministrativeAreaL1(Aws::String&& value) { SetAdministrativeAreaL1(value); return *this;}

    
    inline updateDoctorResult& WithAdministrativeAreaL1(const char* value) { SetAdministrativeAreaL1(value); return *this;}

    
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    
    inline void SetLastName(const Aws::String& value) { m_lastName = value; }

    
    inline void SetLastName(Aws::String&& value) { m_lastName = value; }

    
    inline void SetLastName(const char* value) { m_lastName.assign(value); }

    
    inline updateDoctorResult& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    
    inline updateDoctorResult& WithLastName(Aws::String&& value) { SetLastName(value); return *this;}

    
    inline updateDoctorResult& WithLastName(const char* value) { SetLastName(value); return *this;}

    
    inline const Aws::String& GetCoverPhotoUrl() const{ return m_coverPhotoUrl; }

    
    inline void SetCoverPhotoUrl(const Aws::String& value) { m_coverPhotoUrl = value; }

    
    inline void SetCoverPhotoUrl(Aws::String&& value) { m_coverPhotoUrl = value; }

    
    inline void SetCoverPhotoUrl(const char* value) { m_coverPhotoUrl.assign(value); }

    
    inline updateDoctorResult& WithCoverPhotoUrl(const Aws::String& value) { SetCoverPhotoUrl(value); return *this;}

    
    inline updateDoctorResult& WithCoverPhotoUrl(Aws::String&& value) { SetCoverPhotoUrl(value); return *this;}

    
    inline updateDoctorResult& WithCoverPhotoUrl(const char* value) { SetCoverPhotoUrl(value); return *this;}

    
    inline const Aws::String& GetProfilePhotoUrl() const{ return m_profilePhotoUrl; }

    
    inline void SetProfilePhotoUrl(const Aws::String& value) { m_profilePhotoUrl = value; }

    
    inline void SetProfilePhotoUrl(Aws::String&& value) { m_profilePhotoUrl = value; }

    
    inline void SetProfilePhotoUrl(const char* value) { m_profilePhotoUrl.assign(value); }

    
    inline updateDoctorResult& WithProfilePhotoUrl(const Aws::String& value) { SetProfilePhotoUrl(value); return *this;}

    
    inline updateDoctorResult& WithProfilePhotoUrl(Aws::String&& value) { SetProfilePhotoUrl(value); return *this;}

    
    inline updateDoctorResult& WithProfilePhotoUrl(const char* value) { SetProfilePhotoUrl(value); return *this;}

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = value; }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline updateDoctorResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline updateDoctorResult& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline updateDoctorResult& WithId(const char* value) { SetId(value); return *this;}

  private:
    double m_longitude;
    Aws::Vector<Aws::String> m_servicesOffered;
    bool m_payoutInfoIsSet;
    Aws::String m_city;
    Aws::String m_specialtyId;
    Aws::String m_suite;
    Aws::String m_officeNumber;
    Aws::Vector<ClientDoctor_serviceDetailsListItem> m_serviceDetailsList;
    Aws::String m_firstName;
    double m_latitude;
    Aws::String m_postalCode;
    Aws::String m_streetNumberAndName;
    Aws::String m_administrativeAreaL1;
    Aws::String m_lastName;
    Aws::String m_coverPhotoUrl;
    Aws::String m_profilePhotoUrl;
    Aws::String m_id;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
