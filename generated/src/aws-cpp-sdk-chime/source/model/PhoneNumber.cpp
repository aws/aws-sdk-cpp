/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/PhoneNumber.h>
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

PhoneNumber::PhoneNumber() : 
    m_phoneNumberIdHasBeenSet(false),
    m_e164PhoneNumberHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_type(PhoneNumberType::NOT_SET),
    m_typeHasBeenSet(false),
    m_productType(PhoneNumberProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_status(PhoneNumberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_associationsHasBeenSet(false),
    m_callingNameHasBeenSet(false),
    m_callingNameStatus(CallingNameStatus::NOT_SET),
    m_callingNameStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_deletionTimestampHasBeenSet(false)
{
}

PhoneNumber::PhoneNumber(JsonView jsonValue) : 
    m_phoneNumberIdHasBeenSet(false),
    m_e164PhoneNumberHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_type(PhoneNumberType::NOT_SET),
    m_typeHasBeenSet(false),
    m_productType(PhoneNumberProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_status(PhoneNumberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_associationsHasBeenSet(false),
    m_callingNameHasBeenSet(false),
    m_callingNameStatus(CallingNameStatus::NOT_SET),
    m_callingNameStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_deletionTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumber& PhoneNumber::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PhoneNumberId"))
  {
    m_phoneNumberId = jsonValue.GetString("PhoneNumberId");

    m_phoneNumberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("E164PhoneNumber"))
  {
    m_e164PhoneNumber = jsonValue.GetString("E164PhoneNumber");

    m_e164PhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = PhoneNumberTypeMapper::GetPhoneNumberTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductType"))
  {
    m_productType = PhoneNumberProductTypeMapper::GetPhoneNumberProductTypeForName(jsonValue.GetString("ProductType"));

    m_productTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = PhoneNumberStatusMapper::GetPhoneNumberStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Capabilities"))
  {
    m_capabilities = jsonValue.GetObject("Capabilities");

    m_capabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Associations"))
  {
    Aws::Utils::Array<JsonView> associationsJsonList = jsonValue.GetArray("Associations");
    for(unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex)
    {
      m_associations.push_back(associationsJsonList[associationsIndex].AsObject());
    }
    m_associationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CallingName"))
  {
    m_callingName = jsonValue.GetString("CallingName");

    m_callingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CallingNameStatus"))
  {
    m_callingNameStatus = CallingNameStatusMapper::GetCallingNameStatusForName(jsonValue.GetString("CallingNameStatus"));

    m_callingNameStatusHasBeenSet = true;
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

  if(jsonValue.ValueExists("DeletionTimestamp"))
  {
    m_deletionTimestamp = jsonValue.GetString("DeletionTimestamp");

    m_deletionTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue PhoneNumber::Jsonize() const
{
  JsonValue payload;

  if(m_phoneNumberIdHasBeenSet)
  {
   payload.WithString("PhoneNumberId", m_phoneNumberId);

  }

  if(m_e164PhoneNumberHasBeenSet)
  {
   payload.WithString("E164PhoneNumber", m_e164PhoneNumber);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PhoneNumberTypeMapper::GetNameForPhoneNumberType(m_type));
  }

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("ProductType", PhoneNumberProductTypeMapper::GetNameForPhoneNumberProductType(m_productType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PhoneNumberStatusMapper::GetNameForPhoneNumberStatus(m_status));
  }

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("Capabilities", m_capabilities.Jsonize());

  }

  if(m_associationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associationsJsonList(m_associations.size());
   for(unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex)
   {
     associationsJsonList[associationsIndex].AsObject(m_associations[associationsIndex].Jsonize());
   }
   payload.WithArray("Associations", std::move(associationsJsonList));

  }

  if(m_callingNameHasBeenSet)
  {
   payload.WithString("CallingName", m_callingName);

  }

  if(m_callingNameStatusHasBeenSet)
  {
   payload.WithString("CallingNameStatus", CallingNameStatusMapper::GetNameForCallingNameStatus(m_callingNameStatus));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_deletionTimestampHasBeenSet)
  {
   payload.WithString("DeletionTimestamp", m_deletionTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
