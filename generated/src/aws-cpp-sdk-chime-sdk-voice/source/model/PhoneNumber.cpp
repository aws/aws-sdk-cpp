﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PhoneNumber.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

PhoneNumber::PhoneNumber(JsonView jsonValue)
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
  if(jsonValue.ValueExists("OrderId"))
  {
    m_orderId = jsonValue.GetString("OrderId");
    m_orderIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
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

  if(m_orderIdHasBeenSet)
  {
   payload.WithString("OrderId", m_orderId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
