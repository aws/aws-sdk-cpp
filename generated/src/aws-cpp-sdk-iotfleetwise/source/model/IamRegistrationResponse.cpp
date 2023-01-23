/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/IamRegistrationResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

IamRegistrationResponse::IamRegistrationResponse() : 
    m_roleArnHasBeenSet(false),
    m_registrationStatus(RegistrationStatus::NOT_SET),
    m_registrationStatusHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

IamRegistrationResponse::IamRegistrationResponse(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_registrationStatus(RegistrationStatus::NOT_SET),
    m_registrationStatusHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

IamRegistrationResponse& IamRegistrationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registrationStatus"))
  {
    m_registrationStatus = RegistrationStatusMapper::GetRegistrationStatusForName(jsonValue.GetString("registrationStatus"));

    m_registrationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue IamRegistrationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_registrationStatusHasBeenSet)
  {
   payload.WithString("registrationStatus", RegistrationStatusMapper::GetNameForRegistrationStatus(m_registrationStatus));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
