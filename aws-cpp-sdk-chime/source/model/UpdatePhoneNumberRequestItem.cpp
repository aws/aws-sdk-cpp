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

#include <aws/chime/model/UpdatePhoneNumberRequestItem.h>
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
} // namespace Chime
} // namespace Aws
