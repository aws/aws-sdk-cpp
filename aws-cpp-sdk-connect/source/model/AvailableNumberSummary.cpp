/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AvailableNumberSummary.h>
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

AvailableNumberSummary::AvailableNumberSummary() : 
    m_phoneNumberHasBeenSet(false),
    m_phoneNumberCountryCode(PhoneNumberCountryCode::NOT_SET),
    m_phoneNumberCountryCodeHasBeenSet(false),
    m_phoneNumberType(PhoneNumberType::NOT_SET),
    m_phoneNumberTypeHasBeenSet(false)
{
}

AvailableNumberSummary::AvailableNumberSummary(JsonView jsonValue) : 
    m_phoneNumberHasBeenSet(false),
    m_phoneNumberCountryCode(PhoneNumberCountryCode::NOT_SET),
    m_phoneNumberCountryCodeHasBeenSet(false),
    m_phoneNumberType(PhoneNumberType::NOT_SET),
    m_phoneNumberTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AvailableNumberSummary& AvailableNumberSummary::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue AvailableNumberSummary::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
