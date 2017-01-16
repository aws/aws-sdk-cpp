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
#include <aws/vitalservices/model/GetAppointmentsResult_patientsItem.h>
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

GetAppointmentsResult_patientsItem::GetAppointmentsResult_patientsItem() : 
    m_firstNameHasBeenSet(false),
    m_mobileNumberHasBeenSet(false),
    m_profilePhotoUrlHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastNameHasBeenSet(false)
{
}

GetAppointmentsResult_patientsItem::GetAppointmentsResult_patientsItem(const JsonValue& jsonValue) : 
    m_firstNameHasBeenSet(false),
    m_mobileNumberHasBeenSet(false),
    m_profilePhotoUrlHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastNameHasBeenSet(false)
{
  *this = jsonValue;
}

GetAppointmentsResult_patientsItem& GetAppointmentsResult_patientsItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("firstName"))
  {
    m_firstName = jsonValue.GetString("firstName");

    m_firstNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mobileNumber"))
  {
    m_mobileNumber = jsonValue.GetString("mobileNumber");

    m_mobileNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profilePhotoUrl"))
  {
    m_profilePhotoUrl = jsonValue.GetString("profilePhotoUrl");

    m_profilePhotoUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastName"))
  {
    m_lastName = jsonValue.GetString("lastName");

    m_lastNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GetAppointmentsResult_patientsItem::Jsonize() const
{
  JsonValue payload;

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("firstName", m_firstName);

  }

  if(m_mobileNumberHasBeenSet)
  {
   payload.WithString("mobileNumber", m_mobileNumber);

  }

  if(m_profilePhotoUrlHasBeenSet)
  {
   payload.WithString("profilePhotoUrl", m_profilePhotoUrl);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("lastName", m_lastName);

  }

  return payload;
}

} // namespace Model
} // namespace VitalServices
} // namespace Aws