﻿/*
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

#include <aws/alexaforbusiness/model/UserData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

UserData::UserData() : 
    m_userArnHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_enrollmentStatus(EnrollmentStatus::NOT_SET),
    m_enrollmentStatusHasBeenSet(false),
    m_enrollmentIdHasBeenSet(false)
{
}

UserData::UserData(const JsonValue& jsonValue) : 
    m_userArnHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_enrollmentStatus(EnrollmentStatus::NOT_SET),
    m_enrollmentStatusHasBeenSet(false),
    m_enrollmentIdHasBeenSet(false)
{
  *this = jsonValue;
}

UserData& UserData::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("UserArn"))
  {
    m_userArn = jsonValue.GetString("UserArn");

    m_userArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirstName"))
  {
    m_firstName = jsonValue.GetString("FirstName");

    m_firstNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastName"))
  {
    m_lastName = jsonValue.GetString("LastName");

    m_lastNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnrollmentStatus"))
  {
    m_enrollmentStatus = EnrollmentStatusMapper::GetEnrollmentStatusForName(jsonValue.GetString("EnrollmentStatus"));

    m_enrollmentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnrollmentId"))
  {
    m_enrollmentId = jsonValue.GetString("EnrollmentId");

    m_enrollmentIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UserData::Jsonize() const
{
  JsonValue payload;

  if(m_userArnHasBeenSet)
  {
   payload.WithString("UserArn", m_userArn);

  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("FirstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("LastName", m_lastName);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_enrollmentStatusHasBeenSet)
  {
   payload.WithString("EnrollmentStatus", EnrollmentStatusMapper::GetNameForEnrollmentStatus(m_enrollmentStatus));
  }

  if(m_enrollmentIdHasBeenSet)
  {
   payload.WithString("EnrollmentId", m_enrollmentId);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
