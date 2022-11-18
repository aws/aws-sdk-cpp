/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/UpdatePhoneNumberRequestItem.h>
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

UpdatePhoneNumberRequestItem::UpdatePhoneNumberRequestItem() : 
    m_phoneNumberIdHasBeenSet(false),
    m_productType(PhoneNumberProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_callingNameHasBeenSet(false)
{
}

UpdatePhoneNumberRequestItem::UpdatePhoneNumberRequestItem(JsonView jsonValue) : 
    m_phoneNumberIdHasBeenSet(false),
    m_productType(PhoneNumberProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_callingNameHasBeenSet(false)
{
  *this = jsonValue;
}

UpdatePhoneNumberRequestItem& UpdatePhoneNumberRequestItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PhoneNumberId"))
  {
    m_phoneNumberId = jsonValue.GetString("PhoneNumberId");

    m_phoneNumberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductType"))
  {
    m_productType = PhoneNumberProductTypeMapper::GetPhoneNumberProductTypeForName(jsonValue.GetString("ProductType"));

    m_productTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CallingName"))
  {
    m_callingName = jsonValue.GetString("CallingName");

    m_callingNameHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdatePhoneNumberRequestItem::Jsonize() const
{
  JsonValue payload;

  if(m_phoneNumberIdHasBeenSet)
  {
   payload.WithString("PhoneNumberId", m_phoneNumberId);

  }

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("ProductType", PhoneNumberProductTypeMapper::GetNameForPhoneNumberProductType(m_productType));
  }

  if(m_callingNameHasBeenSet)
  {
   payload.WithString("CallingName", m_callingName);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
