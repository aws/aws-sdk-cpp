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
#include <aws/vitalservices/VitalServicesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace VitalServices
{
namespace Model
{

  /**
   */
  class AWS_VITALSERVICES_API getLoggedInUserRequest : public VitalServicesRequest
  {
  public:
    getLoggedInUserRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetBusinessName() const{ return m_businessName; }

    
    inline void SetBusinessName(const Aws::String& value) { m_businessNameHasBeenSet = true; m_businessName = value; }

    
    inline void SetBusinessName(Aws::String&& value) { m_businessNameHasBeenSet = true; m_businessName = value; }

    
    inline void SetBusinessName(const char* value) { m_businessNameHasBeenSet = true; m_businessName.assign(value); }

    
    inline getLoggedInUserRequest& WithBusinessName(const Aws::String& value) { SetBusinessName(value); return *this;}

    
    inline getLoggedInUserRequest& WithBusinessName(Aws::String&& value) { SetBusinessName(value); return *this;}

    
    inline getLoggedInUserRequest& WithBusinessName(const char* value) { SetBusinessName(value); return *this;}

    
    inline double GetLatitude() const{ return m_latitude; }

    
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }

    
    inline getLoggedInUserRequest& WithLatitude(double value) { SetLatitude(value); return *this;}

    
    inline const Aws::String& GetBirthdateMonth() const{ return m_birthdateMonth; }

    
    inline void SetBirthdateMonth(const Aws::String& value) { m_birthdateMonthHasBeenSet = true; m_birthdateMonth = value; }

    
    inline void SetBirthdateMonth(Aws::String&& value) { m_birthdateMonthHasBeenSet = true; m_birthdateMonth = value; }

    
    inline void SetBirthdateMonth(const char* value) { m_birthdateMonthHasBeenSet = true; m_birthdateMonth.assign(value); }

    
    inline getLoggedInUserRequest& WithBirthdateMonth(const Aws::String& value) { SetBirthdateMonth(value); return *this;}

    
    inline getLoggedInUserRequest& WithBirthdateMonth(Aws::String&& value) { SetBirthdateMonth(value); return *this;}

    
    inline getLoggedInUserRequest& WithBirthdateMonth(const char* value) { SetBirthdateMonth(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetDoctorIds() const{ return m_doctorIds; }

    
    inline void SetDoctorIds(const Aws::Vector<Aws::String>& value) { m_doctorIdsHasBeenSet = true; m_doctorIds = value; }

    
    inline void SetDoctorIds(Aws::Vector<Aws::String>&& value) { m_doctorIdsHasBeenSet = true; m_doctorIds = value; }

    
    inline getLoggedInUserRequest& WithDoctorIds(const Aws::Vector<Aws::String>& value) { SetDoctorIds(value); return *this;}

    
    inline getLoggedInUserRequest& WithDoctorIds(Aws::Vector<Aws::String>&& value) { SetDoctorIds(value); return *this;}

    
    inline getLoggedInUserRequest& AddDoctorIds(const Aws::String& value) { m_doctorIdsHasBeenSet = true; m_doctorIds.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddDoctorIds(Aws::String&& value) { m_doctorIdsHasBeenSet = true; m_doctorIds.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddDoctorIds(const char* value) { m_doctorIdsHasBeenSet = true; m_doctorIds.push_back(value); return *this; }

    
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    
    inline getLoggedInUserRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    
    inline getLoggedInUserRequest& WithLastName(Aws::String&& value) { SetLastName(value); return *this;}

    
    inline getLoggedInUserRequest& WithLastName(const char* value) { SetLastName(value); return *this;}

    
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    
    inline getLoggedInUserRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    
    inline getLoggedInUserRequest& WithServiceId(Aws::String&& value) { SetServiceId(value); return *this;}

    
    inline getLoggedInUserRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}

    
    inline const Aws::String& GetStreetNumberAndName() const{ return m_streetNumberAndName; }

    
    inline void SetStreetNumberAndName(const Aws::String& value) { m_streetNumberAndNameHasBeenSet = true; m_streetNumberAndName = value; }

    
    inline void SetStreetNumberAndName(Aws::String&& value) { m_streetNumberAndNameHasBeenSet = true; m_streetNumberAndName = value; }

    
    inline void SetStreetNumberAndName(const char* value) { m_streetNumberAndNameHasBeenSet = true; m_streetNumberAndName.assign(value); }

    
    inline getLoggedInUserRequest& WithStreetNumberAndName(const Aws::String& value) { SetStreetNumberAndName(value); return *this;}

    
    inline getLoggedInUserRequest& WithStreetNumberAndName(Aws::String&& value) { SetStreetNumberAndName(value); return *this;}

    
    inline getLoggedInUserRequest& WithStreetNumberAndName(const char* value) { SetStreetNumberAndName(value); return *this;}

    
    inline const Aws::String& GetString1() const{ return m_string1; }

    
    inline void SetString1(const Aws::String& value) { m_string1HasBeenSet = true; m_string1 = value; }

    
    inline void SetString1(Aws::String&& value) { m_string1HasBeenSet = true; m_string1 = value; }

    
    inline void SetString1(const char* value) { m_string1HasBeenSet = true; m_string1.assign(value); }

    
    inline getLoggedInUserRequest& WithString1(const Aws::String& value) { SetString1(value); return *this;}

    
    inline getLoggedInUserRequest& WithString1(Aws::String&& value) { SetString1(value); return *this;}

    
    inline getLoggedInUserRequest& WithString1(const char* value) { SetString1(value); return *this;}

    
    inline bool GetLateCancellation() const{ return m_lateCancellation; }

    
    inline void SetLateCancellation(bool value) { m_lateCancellationHasBeenSet = true; m_lateCancellation = value; }

    
    inline getLoggedInUserRequest& WithLateCancellation(bool value) { SetLateCancellation(value); return *this;}

    
    inline const Aws::String& GetPatientId() const{ return m_patientId; }

    
    inline void SetPatientId(const Aws::String& value) { m_patientIdHasBeenSet = true; m_patientId = value; }

    
    inline void SetPatientId(Aws::String&& value) { m_patientIdHasBeenSet = true; m_patientId = value; }

    
    inline void SetPatientId(const char* value) { m_patientIdHasBeenSet = true; m_patientId.assign(value); }

    
    inline getLoggedInUserRequest& WithPatientId(const Aws::String& value) { SetPatientId(value); return *this;}

    
    inline getLoggedInUserRequest& WithPatientId(Aws::String&& value) { SetPatientId(value); return *this;}

    
    inline getLoggedInUserRequest& WithPatientId(const char* value) { SetPatientId(value); return *this;}

    
    inline const Aws::String& GetString2() const{ return m_string2; }

    
    inline void SetString2(const Aws::String& value) { m_string2HasBeenSet = true; m_string2 = value; }

    
    inline void SetString2(Aws::String&& value) { m_string2HasBeenSet = true; m_string2 = value; }

    
    inline void SetString2(const char* value) { m_string2HasBeenSet = true; m_string2.assign(value); }

    
    inline getLoggedInUserRequest& WithString2(const Aws::String& value) { SetString2(value); return *this;}

    
    inline getLoggedInUserRequest& WithString2(Aws::String&& value) { SetString2(value); return *this;}

    
    inline getLoggedInUserRequest& WithString2(const char* value) { SetString2(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetUnavailableTimeSlots() const{ return m_unavailableTimeSlots; }

    
    inline void SetUnavailableTimeSlots(const Aws::Vector<Aws::String>& value) { m_unavailableTimeSlotsHasBeenSet = true; m_unavailableTimeSlots = value; }

    
    inline void SetUnavailableTimeSlots(Aws::Vector<Aws::String>&& value) { m_unavailableTimeSlotsHasBeenSet = true; m_unavailableTimeSlots = value; }

    
    inline getLoggedInUserRequest& WithUnavailableTimeSlots(const Aws::Vector<Aws::String>& value) { SetUnavailableTimeSlots(value); return *this;}

    
    inline getLoggedInUserRequest& WithUnavailableTimeSlots(Aws::Vector<Aws::String>&& value) { SetUnavailableTimeSlots(value); return *this;}

    
    inline getLoggedInUserRequest& AddUnavailableTimeSlots(const Aws::String& value) { m_unavailableTimeSlotsHasBeenSet = true; m_unavailableTimeSlots.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddUnavailableTimeSlots(Aws::String&& value) { m_unavailableTimeSlotsHasBeenSet = true; m_unavailableTimeSlots.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddUnavailableTimeSlots(const char* value) { m_unavailableTimeSlotsHasBeenSet = true; m_unavailableTimeSlots.push_back(value); return *this; }

    
    inline const Aws::String& GetOfficeNumber() const{ return m_officeNumber; }

    
    inline void SetOfficeNumber(const Aws::String& value) { m_officeNumberHasBeenSet = true; m_officeNumber = value; }

    
    inline void SetOfficeNumber(Aws::String&& value) { m_officeNumberHasBeenSet = true; m_officeNumber = value; }

    
    inline void SetOfficeNumber(const char* value) { m_officeNumberHasBeenSet = true; m_officeNumber.assign(value); }

    
    inline getLoggedInUserRequest& WithOfficeNumber(const Aws::String& value) { SetOfficeNumber(value); return *this;}

    
    inline getLoggedInUserRequest& WithOfficeNumber(Aws::String&& value) { SetOfficeNumber(value); return *this;}

    
    inline getLoggedInUserRequest& WithOfficeNumber(const char* value) { SetOfficeNumber(value); return *this;}

    
    inline const Aws::String& GetSsnLast4() const{ return m_ssnLast4; }

    
    inline void SetSsnLast4(const Aws::String& value) { m_ssnLast4HasBeenSet = true; m_ssnLast4 = value; }

    
    inline void SetSsnLast4(Aws::String&& value) { m_ssnLast4HasBeenSet = true; m_ssnLast4 = value; }

    
    inline void SetSsnLast4(const char* value) { m_ssnLast4HasBeenSet = true; m_ssnLast4.assign(value); }

    
    inline getLoggedInUserRequest& WithSsnLast4(const Aws::String& value) { SetSsnLast4(value); return *this;}

    
    inline getLoggedInUserRequest& WithSsnLast4(Aws::String&& value) { SetSsnLast4(value); return *this;}

    
    inline getLoggedInUserRequest& WithSsnLast4(const char* value) { SetSsnLast4(value); return *this;}

    
    inline const Aws::String& GetFile() const{ return m_file; }

    
    inline void SetFile(const Aws::String& value) { m_fileHasBeenSet = true; m_file = value; }

    
    inline void SetFile(Aws::String&& value) { m_fileHasBeenSet = true; m_file = value; }

    
    inline void SetFile(const char* value) { m_fileHasBeenSet = true; m_file.assign(value); }

    
    inline getLoggedInUserRequest& WithFile(const Aws::String& value) { SetFile(value); return *this;}

    
    inline getLoggedInUserRequest& WithFile(Aws::String&& value) { SetFile(value); return *this;}

    
    inline getLoggedInUserRequest& WithFile(const char* value) { SetFile(value); return *this;}

    
    inline const Aws::String& GetPictureUrl() const{ return m_pictureUrl; }

    
    inline void SetPictureUrl(const Aws::String& value) { m_pictureUrlHasBeenSet = true; m_pictureUrl = value; }

    
    inline void SetPictureUrl(Aws::String&& value) { m_pictureUrlHasBeenSet = true; m_pictureUrl = value; }

    
    inline void SetPictureUrl(const char* value) { m_pictureUrlHasBeenSet = true; m_pictureUrl.assign(value); }

    
    inline getLoggedInUserRequest& WithPictureUrl(const Aws::String& value) { SetPictureUrl(value); return *this;}

    
    inline getLoggedInUserRequest& WithPictureUrl(Aws::String&& value) { SetPictureUrl(value); return *this;}

    
    inline getLoggedInUserRequest& WithPictureUrl(const char* value) { SetPictureUrl(value); return *this;}

    
    inline const Aws::String& GetMobileNumber() const{ return m_mobileNumber; }

    
    inline void SetMobileNumber(const Aws::String& value) { m_mobileNumberHasBeenSet = true; m_mobileNumber = value; }

    
    inline void SetMobileNumber(Aws::String&& value) { m_mobileNumberHasBeenSet = true; m_mobileNumber = value; }

    
    inline void SetMobileNumber(const char* value) { m_mobileNumberHasBeenSet = true; m_mobileNumber.assign(value); }

    
    inline getLoggedInUserRequest& WithMobileNumber(const Aws::String& value) { SetMobileNumber(value); return *this;}

    
    inline getLoggedInUserRequest& WithMobileNumber(Aws::String&& value) { SetMobileNumber(value); return *this;}

    
    inline getLoggedInUserRequest& WithMobileNumber(const char* value) { SetMobileNumber(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetServiceIds() const{ return m_serviceIds; }

    
    inline void SetServiceIds(const Aws::Vector<Aws::String>& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = value; }

    
    inline void SetServiceIds(Aws::Vector<Aws::String>&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = value; }

    
    inline getLoggedInUserRequest& WithServiceIds(const Aws::Vector<Aws::String>& value) { SetServiceIds(value); return *this;}

    
    inline getLoggedInUserRequest& WithServiceIds(Aws::Vector<Aws::String>&& value) { SetServiceIds(value); return *this;}

    
    inline getLoggedInUserRequest& AddServiceIds(const Aws::String& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddServiceIds(Aws::String&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddServiceIds(const char* value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }

    
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    
    inline getLoggedInUserRequest& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    
    inline getLoggedInUserRequest& WithStartTime(Aws::String&& value) { SetStartTime(value); return *this;}

    
    inline getLoggedInUserRequest& WithStartTime(const char* value) { SetStartTime(value); return *this;}

    
    inline const Aws::String& GetEmployerIdentificationNumber() const{ return m_employerIdentificationNumber; }

    
    inline void SetEmployerIdentificationNumber(const Aws::String& value) { m_employerIdentificationNumberHasBeenSet = true; m_employerIdentificationNumber = value; }

    
    inline void SetEmployerIdentificationNumber(Aws::String&& value) { m_employerIdentificationNumberHasBeenSet = true; m_employerIdentificationNumber = value; }

    
    inline void SetEmployerIdentificationNumber(const char* value) { m_employerIdentificationNumberHasBeenSet = true; m_employerIdentificationNumber.assign(value); }

    
    inline getLoggedInUserRequest& WithEmployerIdentificationNumber(const Aws::String& value) { SetEmployerIdentificationNumber(value); return *this;}

    
    inline getLoggedInUserRequest& WithEmployerIdentificationNumber(Aws::String&& value) { SetEmployerIdentificationNumber(value); return *this;}

    
    inline getLoggedInUserRequest& WithEmployerIdentificationNumber(const char* value) { SetEmployerIdentificationNumber(value); return *this;}

    
    inline bool GetGetDoctors() const{ return m_getDoctors; }

    
    inline void SetGetDoctors(bool value) { m_getDoctorsHasBeenSet = true; m_getDoctors = value; }

    
    inline getLoggedInUserRequest& WithGetDoctors(bool value) { SetGetDoctors(value); return *this;}

    
    inline const Aws::String& GetSpecialtyId() const{ return m_specialtyId; }

    
    inline void SetSpecialtyId(const Aws::String& value) { m_specialtyIdHasBeenSet = true; m_specialtyId = value; }

    
    inline void SetSpecialtyId(Aws::String&& value) { m_specialtyIdHasBeenSet = true; m_specialtyId = value; }

    
    inline void SetSpecialtyId(const char* value) { m_specialtyIdHasBeenSet = true; m_specialtyId.assign(value); }

    
    inline getLoggedInUserRequest& WithSpecialtyId(const Aws::String& value) { SetSpecialtyId(value); return *this;}

    
    inline getLoggedInUserRequest& WithSpecialtyId(Aws::String&& value) { SetSpecialtyId(value); return *this;}

    
    inline getLoggedInUserRequest& WithSpecialtyId(const char* value) { SetSpecialtyId(value); return *this;}

    
    inline double GetLongitude() const{ return m_longitude; }

    
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }

    
    inline getLoggedInUserRequest& WithLongitude(double value) { SetLongitude(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetAvailableTimeSlots() const{ return m_availableTimeSlots; }

    
    inline void SetAvailableTimeSlots(const Aws::Vector<Aws::String>& value) { m_availableTimeSlotsHasBeenSet = true; m_availableTimeSlots = value; }

    
    inline void SetAvailableTimeSlots(Aws::Vector<Aws::String>&& value) { m_availableTimeSlotsHasBeenSet = true; m_availableTimeSlots = value; }

    
    inline getLoggedInUserRequest& WithAvailableTimeSlots(const Aws::Vector<Aws::String>& value) { SetAvailableTimeSlots(value); return *this;}

    
    inline getLoggedInUserRequest& WithAvailableTimeSlots(Aws::Vector<Aws::String>&& value) { SetAvailableTimeSlots(value); return *this;}

    
    inline getLoggedInUserRequest& AddAvailableTimeSlots(const Aws::String& value) { m_availableTimeSlotsHasBeenSet = true; m_availableTimeSlots.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddAvailableTimeSlots(Aws::String&& value) { m_availableTimeSlotsHasBeenSet = true; m_availableTimeSlots.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddAvailableTimeSlots(const char* value) { m_availableTimeSlotsHasBeenSet = true; m_availableTimeSlots.push_back(value); return *this; }

    
    inline const Aws::Vector<Aws::String>& GetPatientIds() const{ return m_patientIds; }

    
    inline void SetPatientIds(const Aws::Vector<Aws::String>& value) { m_patientIdsHasBeenSet = true; m_patientIds = value; }

    
    inline void SetPatientIds(Aws::Vector<Aws::String>&& value) { m_patientIdsHasBeenSet = true; m_patientIds = value; }

    
    inline getLoggedInUserRequest& WithPatientIds(const Aws::Vector<Aws::String>& value) { SetPatientIds(value); return *this;}

    
    inline getLoggedInUserRequest& WithPatientIds(Aws::Vector<Aws::String>&& value) { SetPatientIds(value); return *this;}

    
    inline getLoggedInUserRequest& AddPatientIds(const Aws::String& value) { m_patientIdsHasBeenSet = true; m_patientIds.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddPatientIds(Aws::String&& value) { m_patientIdsHasBeenSet = true; m_patientIds.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddPatientIds(const char* value) { m_patientIdsHasBeenSet = true; m_patientIds.push_back(value); return *this; }

    
    inline const Aws::String& GetCity() const{ return m_city; }

    
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = value; }

    
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    
    inline getLoggedInUserRequest& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    
    inline getLoggedInUserRequest& WithCity(Aws::String&& value) { SetCity(value); return *this;}

    
    inline getLoggedInUserRequest& WithCity(const char* value) { SetCity(value); return *this;}

    
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    
    inline getLoggedInUserRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    
    inline getLoggedInUserRequest& WithFirstName(Aws::String&& value) { SetFirstName(value); return *this;}

    
    inline getLoggedInUserRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}

    
    inline const Aws::String& GetDurationMinutes() const{ return m_durationMinutes; }

    
    inline void SetDurationMinutes(const Aws::String& value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = value; }

    
    inline void SetDurationMinutes(Aws::String&& value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = value; }

    
    inline void SetDurationMinutes(const char* value) { m_durationMinutesHasBeenSet = true; m_durationMinutes.assign(value); }

    
    inline getLoggedInUserRequest& WithDurationMinutes(const Aws::String& value) { SetDurationMinutes(value); return *this;}

    
    inline getLoggedInUserRequest& WithDurationMinutes(Aws::String&& value) { SetDurationMinutes(value); return *this;}

    
    inline getLoggedInUserRequest& WithDurationMinutes(const char* value) { SetDurationMinutes(value); return *this;}

    
    inline const Aws::String& GetBankAccountToken() const{ return m_bankAccountToken; }

    
    inline void SetBankAccountToken(const Aws::String& value) { m_bankAccountTokenHasBeenSet = true; m_bankAccountToken = value; }

    
    inline void SetBankAccountToken(Aws::String&& value) { m_bankAccountTokenHasBeenSet = true; m_bankAccountToken = value; }

    
    inline void SetBankAccountToken(const char* value) { m_bankAccountTokenHasBeenSet = true; m_bankAccountToken.assign(value); }

    
    inline getLoggedInUserRequest& WithBankAccountToken(const Aws::String& value) { SetBankAccountToken(value); return *this;}

    
    inline getLoggedInUserRequest& WithBankAccountToken(Aws::String&& value) { SetBankAccountToken(value); return *this;}

    
    inline getLoggedInUserRequest& WithBankAccountToken(const char* value) { SetBankAccountToken(value); return *this;}

    
    inline const Aws::String& GetBirthdateYear() const{ return m_birthdateYear; }

    
    inline void SetBirthdateYear(const Aws::String& value) { m_birthdateYearHasBeenSet = true; m_birthdateYear = value; }

    
    inline void SetBirthdateYear(Aws::String&& value) { m_birthdateYearHasBeenSet = true; m_birthdateYear = value; }

    
    inline void SetBirthdateYear(const char* value) { m_birthdateYearHasBeenSet = true; m_birthdateYear.assign(value); }

    
    inline getLoggedInUserRequest& WithBirthdateYear(const Aws::String& value) { SetBirthdateYear(value); return *this;}

    
    inline getLoggedInUserRequest& WithBirthdateYear(Aws::String&& value) { SetBirthdateYear(value); return *this;}

    
    inline getLoggedInUserRequest& WithBirthdateYear(const char* value) { SetBirthdateYear(value); return *this;}

    
    inline const Aws::String& GetFirstTime() const{ return m_firstTime; }

    
    inline void SetFirstTime(const Aws::String& value) { m_firstTimeHasBeenSet = true; m_firstTime = value; }

    
    inline void SetFirstTime(Aws::String&& value) { m_firstTimeHasBeenSet = true; m_firstTime = value; }

    
    inline void SetFirstTime(const char* value) { m_firstTimeHasBeenSet = true; m_firstTime.assign(value); }

    
    inline getLoggedInUserRequest& WithFirstTime(const Aws::String& value) { SetFirstTime(value); return *this;}

    
    inline getLoggedInUserRequest& WithFirstTime(Aws::String&& value) { SetFirstTime(value); return *this;}

    
    inline getLoggedInUserRequest& WithFirstTime(const char* value) { SetFirstTime(value); return *this;}

    
    inline const Aws::String& GetDoctorId() const{ return m_doctorId; }

    
    inline void SetDoctorId(const Aws::String& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(Aws::String&& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(const char* value) { m_doctorIdHasBeenSet = true; m_doctorId.assign(value); }

    
    inline getLoggedInUserRequest& WithDoctorId(const Aws::String& value) { SetDoctorId(value); return *this;}

    
    inline getLoggedInUserRequest& WithDoctorId(Aws::String&& value) { SetDoctorId(value); return *this;}

    
    inline getLoggedInUserRequest& WithDoctorId(const char* value) { SetDoctorId(value); return *this;}

    
    inline const Aws::String& GetString4() const{ return m_string4; }

    
    inline void SetString4(const Aws::String& value) { m_string4HasBeenSet = true; m_string4 = value; }

    
    inline void SetString4(Aws::String&& value) { m_string4HasBeenSet = true; m_string4 = value; }

    
    inline void SetString4(const char* value) { m_string4HasBeenSet = true; m_string4.assign(value); }

    
    inline getLoggedInUserRequest& WithString4(const Aws::String& value) { SetString4(value); return *this;}

    
    inline getLoggedInUserRequest& WithString4(Aws::String&& value) { SetString4(value); return *this;}

    
    inline getLoggedInUserRequest& WithString4(const char* value) { SetString4(value); return *this;}

    
    inline const Aws::String& GetCardToken() const{ return m_cardToken; }

    
    inline void SetCardToken(const Aws::String& value) { m_cardTokenHasBeenSet = true; m_cardToken = value; }

    
    inline void SetCardToken(Aws::String&& value) { m_cardTokenHasBeenSet = true; m_cardToken = value; }

    
    inline void SetCardToken(const char* value) { m_cardTokenHasBeenSet = true; m_cardToken.assign(value); }

    
    inline getLoggedInUserRequest& WithCardToken(const Aws::String& value) { SetCardToken(value); return *this;}

    
    inline getLoggedInUserRequest& WithCardToken(Aws::String&& value) { SetCardToken(value); return *this;}

    
    inline getLoggedInUserRequest& WithCardToken(const char* value) { SetCardToken(value); return *this;}

    
    inline const Aws::String& GetEmail() const{ return m_email; }

    
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = value; }

    
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    
    inline getLoggedInUserRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    
    inline getLoggedInUserRequest& WithEmail(Aws::String&& value) { SetEmail(value); return *this;}

    
    inline getLoggedInUserRequest& WithEmail(const char* value) { SetEmail(value); return *this;}

    
    inline bool GetGetPatients() const{ return m_getPatients; }

    
    inline void SetGetPatients(bool value) { m_getPatientsHasBeenSet = true; m_getPatients = value; }

    
    inline getLoggedInUserRequest& WithGetPatients(bool value) { SetGetPatients(value); return *this;}

    
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }

    
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }

    
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }

    
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }

    
    inline getLoggedInUserRequest& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}

    
    inline getLoggedInUserRequest& WithSourceId(Aws::String&& value) { SetSourceId(value); return *this;}

    
    inline getLoggedInUserRequest& WithSourceId(const char* value) { SetSourceId(value); return *this;}

    
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    
    inline getLoggedInUserRequest& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    
    inline getLoggedInUserRequest& WithPostalCode(Aws::String&& value) { SetPostalCode(value); return *this;}

    
    inline getLoggedInUserRequest& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}

    
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    
    inline getLoggedInUserRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    
    inline getLoggedInUserRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    
    inline getLoggedInUserRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

    
    inline const Aws::String& GetBirthdateDay() const{ return m_birthdateDay; }

    
    inline void SetBirthdateDay(const Aws::String& value) { m_birthdateDayHasBeenSet = true; m_birthdateDay = value; }

    
    inline void SetBirthdateDay(Aws::String&& value) { m_birthdateDayHasBeenSet = true; m_birthdateDay = value; }

    
    inline void SetBirthdateDay(const char* value) { m_birthdateDayHasBeenSet = true; m_birthdateDay.assign(value); }

    
    inline getLoggedInUserRequest& WithBirthdateDay(const Aws::String& value) { SetBirthdateDay(value); return *this;}

    
    inline getLoggedInUserRequest& WithBirthdateDay(Aws::String&& value) { SetBirthdateDay(value); return *this;}

    
    inline getLoggedInUserRequest& WithBirthdateDay(const char* value) { SetBirthdateDay(value); return *this;}

    
    inline const Aws::String& GetAppointmentId() const{ return m_appointmentId; }

    
    inline void SetAppointmentId(const Aws::String& value) { m_appointmentIdHasBeenSet = true; m_appointmentId = value; }

    
    inline void SetAppointmentId(Aws::String&& value) { m_appointmentIdHasBeenSet = true; m_appointmentId = value; }

    
    inline void SetAppointmentId(const char* value) { m_appointmentIdHasBeenSet = true; m_appointmentId.assign(value); }

    
    inline getLoggedInUserRequest& WithAppointmentId(const Aws::String& value) { SetAppointmentId(value); return *this;}

    
    inline getLoggedInUserRequest& WithAppointmentId(Aws::String&& value) { SetAppointmentId(value); return *this;}

    
    inline getLoggedInUserRequest& WithAppointmentId(const char* value) { SetAppointmentId(value); return *this;}

    
    inline const Aws::String& GetLastTime() const{ return m_lastTime; }

    
    inline void SetLastTime(const Aws::String& value) { m_lastTimeHasBeenSet = true; m_lastTime = value; }

    
    inline void SetLastTime(Aws::String&& value) { m_lastTimeHasBeenSet = true; m_lastTime = value; }

    
    inline void SetLastTime(const char* value) { m_lastTimeHasBeenSet = true; m_lastTime.assign(value); }

    
    inline getLoggedInUserRequest& WithLastTime(const Aws::String& value) { SetLastTime(value); return *this;}

    
    inline getLoggedInUserRequest& WithLastTime(Aws::String&& value) { SetLastTime(value); return *this;}

    
    inline getLoggedInUserRequest& WithLastTime(const char* value) { SetLastTime(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetAppointmentIds() const{ return m_appointmentIds; }

    
    inline void SetAppointmentIds(const Aws::Vector<Aws::String>& value) { m_appointmentIdsHasBeenSet = true; m_appointmentIds = value; }

    
    inline void SetAppointmentIds(Aws::Vector<Aws::String>&& value) { m_appointmentIdsHasBeenSet = true; m_appointmentIds = value; }

    
    inline getLoggedInUserRequest& WithAppointmentIds(const Aws::Vector<Aws::String>& value) { SetAppointmentIds(value); return *this;}

    
    inline getLoggedInUserRequest& WithAppointmentIds(Aws::Vector<Aws::String>&& value) { SetAppointmentIds(value); return *this;}

    
    inline getLoggedInUserRequest& AddAppointmentIds(const Aws::String& value) { m_appointmentIdsHasBeenSet = true; m_appointmentIds.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddAppointmentIds(Aws::String&& value) { m_appointmentIdsHasBeenSet = true; m_appointmentIds.push_back(value); return *this; }

    
    inline getLoggedInUserRequest& AddAppointmentIds(const char* value) { m_appointmentIdsHasBeenSet = true; m_appointmentIds.push_back(value); return *this; }

    
    inline const Aws::String& GetPriceDollars() const{ return m_priceDollars; }

    
    inline void SetPriceDollars(const Aws::String& value) { m_priceDollarsHasBeenSet = true; m_priceDollars = value; }

    
    inline void SetPriceDollars(Aws::String&& value) { m_priceDollarsHasBeenSet = true; m_priceDollars = value; }

    
    inline void SetPriceDollars(const char* value) { m_priceDollarsHasBeenSet = true; m_priceDollars.assign(value); }

    
    inline getLoggedInUserRequest& WithPriceDollars(const Aws::String& value) { SetPriceDollars(value); return *this;}

    
    inline getLoggedInUserRequest& WithPriceDollars(Aws::String&& value) { SetPriceDollars(value); return *this;}

    
    inline getLoggedInUserRequest& WithPriceDollars(const char* value) { SetPriceDollars(value); return *this;}

    
    inline const Aws::String& GetBillVersion() const{ return m_billVersion; }

    
    inline void SetBillVersion(const Aws::String& value) { m_billVersionHasBeenSet = true; m_billVersion = value; }

    
    inline void SetBillVersion(Aws::String&& value) { m_billVersionHasBeenSet = true; m_billVersion = value; }

    
    inline void SetBillVersion(const char* value) { m_billVersionHasBeenSet = true; m_billVersion.assign(value); }

    
    inline getLoggedInUserRequest& WithBillVersion(const Aws::String& value) { SetBillVersion(value); return *this;}

    
    inline getLoggedInUserRequest& WithBillVersion(Aws::String&& value) { SetBillVersion(value); return *this;}

    
    inline getLoggedInUserRequest& WithBillVersion(const char* value) { SetBillVersion(value); return *this;}

    
    inline const Aws::String& GetState() const{ return m_state; }

    
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    
    inline getLoggedInUserRequest& WithState(const Aws::String& value) { SetState(value); return *this;}

    
    inline getLoggedInUserRequest& WithState(Aws::String&& value) { SetState(value); return *this;}

    
    inline getLoggedInUserRequest& WithState(const char* value) { SetState(value); return *this;}

    
    inline const Aws::String& GetOperation() const{ return m_operation; }

    
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }

    
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = value; }

    
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }

    
    inline getLoggedInUserRequest& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}

    
    inline getLoggedInUserRequest& WithOperation(Aws::String&& value) { SetOperation(value); return *this;}

    
    inline getLoggedInUserRequest& WithOperation(const char* value) { SetOperation(value); return *this;}

    
    inline const Aws::String& GetSuite() const{ return m_suite; }

    
    inline void SetSuite(const Aws::String& value) { m_suiteHasBeenSet = true; m_suite = value; }

    
    inline void SetSuite(Aws::String&& value) { m_suiteHasBeenSet = true; m_suite = value; }

    
    inline void SetSuite(const char* value) { m_suiteHasBeenSet = true; m_suite.assign(value); }

    
    inline getLoggedInUserRequest& WithSuite(const Aws::String& value) { SetSuite(value); return *this;}

    
    inline getLoggedInUserRequest& WithSuite(Aws::String&& value) { SetSuite(value); return *this;}

    
    inline getLoggedInUserRequest& WithSuite(const char* value) { SetSuite(value); return *this;}

    
    inline const Aws::String& GetString3() const{ return m_string3; }

    
    inline void SetString3(const Aws::String& value) { m_string3HasBeenSet = true; m_string3 = value; }

    
    inline void SetString3(Aws::String&& value) { m_string3HasBeenSet = true; m_string3 = value; }

    
    inline void SetString3(const char* value) { m_string3HasBeenSet = true; m_string3.assign(value); }

    
    inline getLoggedInUserRequest& WithString3(const Aws::String& value) { SetString3(value); return *this;}

    
    inline getLoggedInUserRequest& WithString3(Aws::String&& value) { SetString3(value); return *this;}

    
    inline getLoggedInUserRequest& WithString3(const char* value) { SetString3(value); return *this;}

  private:
    Aws::String m_businessName;
    bool m_businessNameHasBeenSet;
    double m_latitude;
    bool m_latitudeHasBeenSet;
    Aws::String m_birthdateMonth;
    bool m_birthdateMonthHasBeenSet;
    Aws::Vector<Aws::String> m_doctorIds;
    bool m_doctorIdsHasBeenSet;
    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;
    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;
    Aws::String m_streetNumberAndName;
    bool m_streetNumberAndNameHasBeenSet;
    Aws::String m_string1;
    bool m_string1HasBeenSet;
    bool m_lateCancellation;
    bool m_lateCancellationHasBeenSet;
    Aws::String m_patientId;
    bool m_patientIdHasBeenSet;
    Aws::String m_string2;
    bool m_string2HasBeenSet;
    Aws::Vector<Aws::String> m_unavailableTimeSlots;
    bool m_unavailableTimeSlotsHasBeenSet;
    Aws::String m_officeNumber;
    bool m_officeNumberHasBeenSet;
    Aws::String m_ssnLast4;
    bool m_ssnLast4HasBeenSet;
    Aws::String m_file;
    bool m_fileHasBeenSet;
    Aws::String m_pictureUrl;
    bool m_pictureUrlHasBeenSet;
    Aws::String m_mobileNumber;
    bool m_mobileNumberHasBeenSet;
    Aws::Vector<Aws::String> m_serviceIds;
    bool m_serviceIdsHasBeenSet;
    Aws::String m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::String m_employerIdentificationNumber;
    bool m_employerIdentificationNumberHasBeenSet;
    bool m_getDoctors;
    bool m_getDoctorsHasBeenSet;
    Aws::String m_specialtyId;
    bool m_specialtyIdHasBeenSet;
    double m_longitude;
    bool m_longitudeHasBeenSet;
    Aws::Vector<Aws::String> m_availableTimeSlots;
    bool m_availableTimeSlotsHasBeenSet;
    Aws::Vector<Aws::String> m_patientIds;
    bool m_patientIdsHasBeenSet;
    Aws::String m_city;
    bool m_cityHasBeenSet;
    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;
    Aws::String m_durationMinutes;
    bool m_durationMinutesHasBeenSet;
    Aws::String m_bankAccountToken;
    bool m_bankAccountTokenHasBeenSet;
    Aws::String m_birthdateYear;
    bool m_birthdateYearHasBeenSet;
    Aws::String m_firstTime;
    bool m_firstTimeHasBeenSet;
    Aws::String m_doctorId;
    bool m_doctorIdHasBeenSet;
    Aws::String m_string4;
    bool m_string4HasBeenSet;
    Aws::String m_cardToken;
    bool m_cardTokenHasBeenSet;
    Aws::String m_email;
    bool m_emailHasBeenSet;
    bool m_getPatients;
    bool m_getPatientsHasBeenSet;
    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet;
    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet;
    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;
    Aws::String m_birthdateDay;
    bool m_birthdateDayHasBeenSet;
    Aws::String m_appointmentId;
    bool m_appointmentIdHasBeenSet;
    Aws::String m_lastTime;
    bool m_lastTimeHasBeenSet;
    Aws::Vector<Aws::String> m_appointmentIds;
    bool m_appointmentIdsHasBeenSet;
    Aws::String m_priceDollars;
    bool m_priceDollarsHasBeenSet;
    Aws::String m_billVersion;
    bool m_billVersionHasBeenSet;
    Aws::String m_state;
    bool m_stateHasBeenSet;
    Aws::String m_operation;
    bool m_operationHasBeenSet;
    Aws::String m_suite;
    bool m_suiteHasBeenSet;
    Aws::String m_string3;
    bool m_string3HasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
