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

#include <aws/chime/model/PhoneNumberOrder.h>
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

PhoneNumberOrder::PhoneNumberOrder() : 
    m_phoneNumberOrderIdHasBeenSet(false),
    m_productType(PhoneNumberProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_status(PhoneNumberOrderStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_orderedPhoneNumbersHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

PhoneNumberOrder::PhoneNumberOrder(JsonView jsonValue) : 
    m_phoneNumberOrderIdHasBeenSet(false),
    m_productType(PhoneNumberProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_status(PhoneNumberOrderStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_orderedPhoneNumbersHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumberOrder& PhoneNumberOrder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PhoneNumberOrderId"))
  {
    m_phoneNumberOrderId = jsonValue.GetString("PhoneNumberOrderId");

    m_phoneNumberOrderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductType"))
  {
    m_productType = PhoneNumberProductTypeMapper::GetPhoneNumberProductTypeForName(jsonValue.GetString("ProductType"));

    m_productTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = PhoneNumberOrderStatusMapper::GetPhoneNumberOrderStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrderedPhoneNumbers"))
  {
    Array<JsonView> orderedPhoneNumbersJsonList = jsonValue.GetArray("OrderedPhoneNumbers");
    for(unsigned orderedPhoneNumbersIndex = 0; orderedPhoneNumbersIndex < orderedPhoneNumbersJsonList.GetLength(); ++orderedPhoneNumbersIndex)
    {
      m_orderedPhoneNumbers.push_back(orderedPhoneNumbersJsonList[orderedPhoneNumbersIndex].AsObject());
    }
    m_orderedPhoneNumbersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue PhoneNumberOrder::Jsonize() const
{
  JsonValue payload;

  if(m_phoneNumberOrderIdHasBeenSet)
  {
   payload.WithString("PhoneNumberOrderId", m_phoneNumberOrderId);

  }

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("ProductType", PhoneNumberProductTypeMapper::GetNameForPhoneNumberProductType(m_productType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PhoneNumberOrderStatusMapper::GetNameForPhoneNumberOrderStatus(m_status));
  }

  if(m_orderedPhoneNumbersHasBeenSet)
  {
   Array<JsonValue> orderedPhoneNumbersJsonList(m_orderedPhoneNumbers.size());
   for(unsigned orderedPhoneNumbersIndex = 0; orderedPhoneNumbersIndex < orderedPhoneNumbersJsonList.GetLength(); ++orderedPhoneNumbersIndex)
   {
     orderedPhoneNumbersJsonList[orderedPhoneNumbersIndex].AsObject(m_orderedPhoneNumbers[orderedPhoneNumbersIndex].Jsonize());
   }
   payload.WithArray("OrderedPhoneNumbers", std::move(orderedPhoneNumbersJsonList));

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
