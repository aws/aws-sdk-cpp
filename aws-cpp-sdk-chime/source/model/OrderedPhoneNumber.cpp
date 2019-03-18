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

#include <aws/chime/model/OrderedPhoneNumber.h>
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

OrderedPhoneNumber::OrderedPhoneNumber() : 
    m_e164PhoneNumberHasBeenSet(false),
    m_status(OrderedPhoneNumberStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

OrderedPhoneNumber::OrderedPhoneNumber(JsonView jsonValue) : 
    m_e164PhoneNumberHasBeenSet(false),
    m_status(OrderedPhoneNumberStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

OrderedPhoneNumber& OrderedPhoneNumber::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("E164PhoneNumber"))
  {
    m_e164PhoneNumber = jsonValue.GetString("E164PhoneNumber");

    m_e164PhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OrderedPhoneNumberStatusMapper::GetOrderedPhoneNumberStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue OrderedPhoneNumber::Jsonize() const
{
  JsonValue payload;

  if(m_e164PhoneNumberHasBeenSet)
  {
   payload.WithString("E164PhoneNumber", m_e164PhoneNumber);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OrderedPhoneNumberStatusMapper::GetNameForOrderedPhoneNumberStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
