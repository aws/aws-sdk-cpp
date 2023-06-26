/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PhoneNumberSummary.h>
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

PhoneNumberSummary::PhoneNumberSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_phoneNumberType(PhoneNumberType::NOT_SET),
    m_phoneNumberTypeHasBeenSet(false),
    m_phoneNumberCountryCode(PhoneNumberCountryCode::NOT_SET),
    m_phoneNumberCountryCodeHasBeenSet(false)
{
}

PhoneNumberSummary::PhoneNumberSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_phoneNumberType(PhoneNumberType::NOT_SET),
    m_phoneNumberTypeHasBeenSet(false),
    m_phoneNumberCountryCode(PhoneNumberCountryCode::NOT_SET),
    m_phoneNumberCountryCodeHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumberSummary& PhoneNumberSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberType"))
  {
    m_phoneNumberType = PhoneNumberTypeMapper::GetPhoneNumberTypeForName(jsonValue.GetString("PhoneNumberType"));

    m_phoneNumberTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberCountryCode"))
  {
    m_phoneNumberCountryCode = PhoneNumberCountryCodeMapper::GetPhoneNumberCountryCodeForName(jsonValue.GetString("PhoneNumberCountryCode"));

    m_phoneNumberCountryCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue PhoneNumberSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_phoneNumberTypeHasBeenSet)
  {
   payload.WithString("PhoneNumberType", PhoneNumberTypeMapper::GetNameForPhoneNumberType(m_phoneNumberType));
  }

  if(m_phoneNumberCountryCodeHasBeenSet)
  {
   payload.WithString("PhoneNumberCountryCode", PhoneNumberCountryCodeMapper::GetNameForPhoneNumberCountryCode(m_phoneNumberCountryCode));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
