/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListPhoneNumbersSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ListPhoneNumbersSummary::ListPhoneNumbersSummary() : 
    m_phoneNumberIdHasBeenSet(false),
    m_phoneNumberArnHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_phoneNumberCountryCode(PhoneNumberCountryCode::NOT_SET),
    m_phoneNumberCountryCodeHasBeenSet(false),
    m_phoneNumberType(PhoneNumberType::NOT_SET),
    m_phoneNumberTypeHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_phoneNumberDescriptionHasBeenSet(false),
    m_sourcePhoneNumberArnHasBeenSet(false)
{
}

ListPhoneNumbersSummary::ListPhoneNumbersSummary(JsonView jsonValue) : 
    m_phoneNumberIdHasBeenSet(false),
    m_phoneNumberArnHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_phoneNumberCountryCode(PhoneNumberCountryCode::NOT_SET),
    m_phoneNumberCountryCodeHasBeenSet(false),
    m_phoneNumberType(PhoneNumberType::NOT_SET),
    m_phoneNumberTypeHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_phoneNumberDescriptionHasBeenSet(false),
    m_sourcePhoneNumberArnHasBeenSet(false)
{
  *this = jsonValue;
}

ListPhoneNumbersSummary& ListPhoneNumbersSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PhoneNumberId"))
  {
    m_phoneNumberId = jsonValue.GetString("PhoneNumberId");

    m_phoneNumberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberArn"))
  {
    m_phoneNumberArn = jsonValue.GetString("PhoneNumberArn");

    m_phoneNumberArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberCountryCode"))
  {
    m_phoneNumberCountryCode = PhoneNumberCountryCodeMapper::GetPhoneNumberCountryCodeForName(jsonValue.GetString("PhoneNumberCountryCode"));

    m_phoneNumberCountryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberType"))
  {
    m_phoneNumberType = PhoneNumberTypeMapper::GetPhoneNumberTypeForName(jsonValue.GetString("PhoneNumberType"));

    m_phoneNumberTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetArn"))
  {
    m_targetArn = jsonValue.GetString("TargetArn");

    m_targetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberDescription"))
  {
    m_phoneNumberDescription = jsonValue.GetString("PhoneNumberDescription");

    m_phoneNumberDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourcePhoneNumberArn"))
  {
    m_sourcePhoneNumberArn = jsonValue.GetString("SourcePhoneNumberArn");

    m_sourcePhoneNumberArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ListPhoneNumbersSummary::Jsonize() const
{
  JsonValue payload;

  if(m_phoneNumberIdHasBeenSet)
  {
   payload.WithString("PhoneNumberId", m_phoneNumberId);

  }

  if(m_phoneNumberArnHasBeenSet)
  {
   payload.WithString("PhoneNumberArn", m_phoneNumberArn);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_phoneNumberCountryCodeHasBeenSet)
  {
   payload.WithString("PhoneNumberCountryCode", PhoneNumberCountryCodeMapper::GetNameForPhoneNumberCountryCode(m_phoneNumberCountryCode));
  }

  if(m_phoneNumberTypeHasBeenSet)
  {
   payload.WithString("PhoneNumberType", PhoneNumberTypeMapper::GetNameForPhoneNumberType(m_phoneNumberType));
  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("TargetArn", m_targetArn);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_phoneNumberDescriptionHasBeenSet)
  {
   payload.WithString("PhoneNumberDescription", m_phoneNumberDescription);

  }

  if(m_sourcePhoneNumberArnHasBeenSet)
  {
   payload.WithString("SourcePhoneNumberArn", m_sourcePhoneNumberArn);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
