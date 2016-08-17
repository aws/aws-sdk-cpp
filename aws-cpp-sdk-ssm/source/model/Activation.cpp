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
#include <aws/ssm/model/Activation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

Activation::Activation() : 
    m_activationIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultInstanceNameHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_registrationLimit(0),
    m_registrationLimitHasBeenSet(false),
    m_registrationsCount(0),
    m_registrationsCountHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_expired(false),
    m_expiredHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
}

Activation::Activation(const JsonValue& jsonValue) : 
    m_activationIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultInstanceNameHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_registrationLimit(0),
    m_registrationLimitHasBeenSet(false),
    m_registrationsCount(0),
    m_registrationsCountHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_expired(false),
    m_expiredHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
  *this = jsonValue;
}

Activation& Activation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ActivationId"))
  {
    m_activationId = jsonValue.GetString("ActivationId");

    m_activationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultInstanceName"))
  {
    m_defaultInstanceName = jsonValue.GetString("DefaultInstanceName");

    m_defaultInstanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRole"))
  {
    m_iamRole = jsonValue.GetString("IamRole");

    m_iamRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationLimit"))
  {
    m_registrationLimit = jsonValue.GetInteger("RegistrationLimit");

    m_registrationLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationsCount"))
  {
    m_registrationsCount = jsonValue.GetInteger("RegistrationsCount");

    m_registrationsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("ExpirationDate");

    m_expirationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expired"))
  {
    m_expired = jsonValue.GetBool("Expired");

    m_expiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  return *this;
}

JsonValue Activation::Jsonize() const
{
  JsonValue payload;

  if(m_activationIdHasBeenSet)
  {
   payload.WithString("ActivationId", m_activationId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_defaultInstanceNameHasBeenSet)
  {
   payload.WithString("DefaultInstanceName", m_defaultInstanceName);

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithString("IamRole", m_iamRole);

  }

  if(m_registrationLimitHasBeenSet)
  {
   payload.WithInteger("RegistrationLimit", m_registrationLimit);

  }

  if(m_registrationsCountHasBeenSet)
  {
   payload.WithInteger("RegistrationsCount", m_registrationsCount);

  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithDouble("ExpirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  if(m_expiredHasBeenSet)
  {
   payload.WithBool("Expired", m_expired);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws