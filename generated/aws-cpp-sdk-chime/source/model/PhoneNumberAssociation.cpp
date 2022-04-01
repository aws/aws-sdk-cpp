﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/PhoneNumberAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

PhoneNumberAssociation::PhoneNumberAssociation() : 
    m_valueHasBeenSet(false),
    m_name(PhoneNumberAssociationName::NOT_SET),
    m_nameHasBeenSet(false),
    m_associatedTimestampHasBeenSet(false)
{
}

PhoneNumberAssociation::PhoneNumberAssociation(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_name(PhoneNumberAssociationName::NOT_SET),
    m_nameHasBeenSet(false),
    m_associatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumberAssociation& PhoneNumberAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = PhoneNumberAssociationNameMapper::GetPhoneNumberAssociationNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatedTimestamp"))
  {
    m_associatedTimestamp = jsonValue.GetString("AssociatedTimestamp");

    m_associatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue PhoneNumberAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", PhoneNumberAssociationNameMapper::GetNameForPhoneNumberAssociationName(m_name));
  }

  if(m_associatedTimestampHasBeenSet)
  {
   payload.WithString("AssociatedTimestamp", m_associatedTimestamp.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
