/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressIsInAddressList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

IngressIsInAddressList::IngressIsInAddressList(JsonView jsonValue)
{
  *this = jsonValue;
}

IngressIsInAddressList& IngressIsInAddressList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = IngressAddressListEmailAttributeMapper::GetIngressAddressListEmailAttributeForName(jsonValue.GetString("Attribute"));
    m_attributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddressLists"))
  {
    Aws::Utils::Array<JsonView> addressListsJsonList = jsonValue.GetArray("AddressLists");
    for(unsigned addressListsIndex = 0; addressListsIndex < addressListsJsonList.GetLength(); ++addressListsIndex)
    {
      m_addressLists.push_back(addressListsJsonList[addressListsIndex].AsString());
    }
    m_addressListsHasBeenSet = true;
  }
  return *this;
}

JsonValue IngressIsInAddressList::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", IngressAddressListEmailAttributeMapper::GetNameForIngressAddressListEmailAttribute(m_attribute));
  }

  if(m_addressListsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addressListsJsonList(m_addressLists.size());
   for(unsigned addressListsIndex = 0; addressListsIndex < addressListsJsonList.GetLength(); ++addressListsIndex)
   {
     addressListsJsonList[addressListsIndex].AsString(m_addressLists[addressListsIndex]);
   }
   payload.WithArray("AddressLists", std::move(addressListsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
