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
#include <aws/vitalservices/model/QueryDoctorScheduleResult_timeSlotsItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VitalServices
{
namespace Model
{

QueryDoctorScheduleResult_timeSlotsItem::QueryDoctorScheduleResult_timeSlotsItem() : 
    m_appointmentIdHasBeenSet(false),
    m_timeSlotHasBeenSet(false)
{
}

QueryDoctorScheduleResult_timeSlotsItem::QueryDoctorScheduleResult_timeSlotsItem(const JsonValue& jsonValue) : 
    m_appointmentIdHasBeenSet(false),
    m_timeSlotHasBeenSet(false)
{
  *this = jsonValue;
}

QueryDoctorScheduleResult_timeSlotsItem& QueryDoctorScheduleResult_timeSlotsItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("appointmentId"))
  {
    m_appointmentId = jsonValue.GetString("appointmentId");

    m_appointmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeSlot"))
  {
    m_timeSlot = jsonValue.GetString("timeSlot");

    m_timeSlotHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryDoctorScheduleResult_timeSlotsItem::Jsonize() const
{
  JsonValue payload;

  if(m_appointmentIdHasBeenSet)
  {
   payload.WithString("appointmentId", m_appointmentId);

  }

  if(m_timeSlotHasBeenSet)
  {
   payload.WithString("timeSlot", m_timeSlot);

  }

  return payload;
}

} // namespace Model
} // namespace VitalServices
} // namespace Aws