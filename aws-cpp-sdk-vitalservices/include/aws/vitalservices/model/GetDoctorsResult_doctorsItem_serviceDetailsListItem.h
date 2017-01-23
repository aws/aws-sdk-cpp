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

  class AWS_VITALSERVICES_API GetDoctorsResult_doctorsItem_serviceDetailsListItem
  {
  public:
    GetDoctorsResult_doctorsItem_serviceDetailsListItem();
    GetDoctorsResult_doctorsItem_serviceDetailsListItem(const Aws::Utils::Json::JsonValue& jsonValue);
    GetDoctorsResult_doctorsItem_serviceDetailsListItem& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetPriceDollars() const{ return m_priceDollars; }

    
    inline void SetPriceDollars(const Aws::String& value) { m_priceDollarsHasBeenSet = true; m_priceDollars = value; }

    
    inline void SetPriceDollars(Aws::String&& value) { m_priceDollarsHasBeenSet = true; m_priceDollars = value; }

    
    inline void SetPriceDollars(const char* value) { m_priceDollarsHasBeenSet = true; m_priceDollars.assign(value); }

    
    inline GetDoctorsResult_doctorsItem_serviceDetailsListItem& WithPriceDollars(const Aws::String& value) { SetPriceDollars(value); return *this;}

    
    inline GetDoctorsResult_doctorsItem_serviceDetailsListItem& WithPriceDollars(Aws::String&& value) { SetPriceDollars(value); return *this;}

    
    inline GetDoctorsResult_doctorsItem_serviceDetailsListItem& WithPriceDollars(const char* value) { SetPriceDollars(value); return *this;}

    
    inline double GetDurationSeconds() const{ return m_durationSeconds; }

    
    inline void SetDurationSeconds(double value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    
    inline GetDoctorsResult_doctorsItem_serviceDetailsListItem& WithDurationSeconds(double value) { SetDurationSeconds(value); return *this;}

    
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    
    inline GetDoctorsResult_doctorsItem_serviceDetailsListItem& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    
    inline GetDoctorsResult_doctorsItem_serviceDetailsListItem& WithServiceId(Aws::String&& value) { SetServiceId(value); return *this;}

    
    inline GetDoctorsResult_doctorsItem_serviceDetailsListItem& WithServiceId(const char* value) { SetServiceId(value); return *this;}

    
    inline const Aws::String& GetDoctorId() const{ return m_doctorId; }

    
    inline void SetDoctorId(const Aws::String& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(Aws::String&& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(const char* value) { m_doctorIdHasBeenSet = true; m_doctorId.assign(value); }

    
    inline GetDoctorsResult_doctorsItem_serviceDetailsListItem& WithDoctorId(const Aws::String& value) { SetDoctorId(value); return *this;}

    
    inline GetDoctorsResult_doctorsItem_serviceDetailsListItem& WithDoctorId(Aws::String&& value) { SetDoctorId(value); return *this;}

    
    inline GetDoctorsResult_doctorsItem_serviceDetailsListItem& WithDoctorId(const char* value) { SetDoctorId(value); return *this;}

  private:
    Aws::String m_priceDollars;
    bool m_priceDollarsHasBeenSet;
    double m_durationSeconds;
    bool m_durationSecondsHasBeenSet;
    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;
    Aws::String m_doctorId;
    bool m_doctorIdHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
