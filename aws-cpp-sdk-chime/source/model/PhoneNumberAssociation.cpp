/*
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
