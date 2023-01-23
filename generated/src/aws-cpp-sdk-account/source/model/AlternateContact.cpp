/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/AlternateContact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Account
{
namespace Model
{

AlternateContact::AlternateContact() : 
    m_alternateContactType(AlternateContactType::NOT_SET),
    m_alternateContactTypeHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

AlternateContact::AlternateContact(JsonView jsonValue) : 
    m_alternateContactType(AlternateContactType::NOT_SET),
    m_alternateContactTypeHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_titleHasBeenSet(false)
{
  *this = jsonValue;
}

AlternateContact& AlternateContact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlternateContactType"))
  {
    m_alternateContactType = AlternateContactTypeMapper::GetAlternateContactTypeForName(jsonValue.GetString("AlternateContactType"));

    m_alternateContactTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  return *this;
}

JsonValue AlternateContact::Jsonize() const
{
  JsonValue payload;

  if(m_alternateContactTypeHasBeenSet)
  {
   payload.WithString("AlternateContactType", AlternateContactTypeMapper::GetNameForAlternateContactType(m_alternateContactType));
  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  return payload;
}

} // namespace Model
} // namespace Account
} // namespace Aws
