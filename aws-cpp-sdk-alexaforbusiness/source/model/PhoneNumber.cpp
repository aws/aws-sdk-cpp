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

#include <aws/alexaforbusiness/model/PhoneNumber.h>
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

PhoneNumber::PhoneNumber() : 
    m_numberHasBeenSet(false),
    m_type(PhoneNumberType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

PhoneNumber::PhoneNumber(JsonView jsonValue) : 
    m_numberHasBeenSet(false),
    m_type(PhoneNumberType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumber& PhoneNumber::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Number"))
  {
    m_number = jsonValue.GetString("Number");

    m_numberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = PhoneNumberTypeMapper::GetPhoneNumberTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue PhoneNumber::Jsonize() const
{
  JsonValue payload;

  if(m_numberHasBeenSet)
  {
   payload.WithString("Number", m_number);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PhoneNumberTypeMapper::GetNameForPhoneNumberType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
