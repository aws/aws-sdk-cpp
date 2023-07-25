/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/AttributeTypesSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

AttributeTypesSelector::AttributeTypesSelector() : 
    m_attributeMatchingModel(AttributeMatchingModel::NOT_SET),
    m_attributeMatchingModelHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailAddressHasBeenSet(false)
{
}

AttributeTypesSelector::AttributeTypesSelector(JsonView jsonValue) : 
    m_attributeMatchingModel(AttributeMatchingModel::NOT_SET),
    m_attributeMatchingModelHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailAddressHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeTypesSelector& AttributeTypesSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeMatchingModel"))
  {
    m_attributeMatchingModel = AttributeMatchingModelMapper::GetAttributeMatchingModelForName(jsonValue.GetString("AttributeMatchingModel"));

    m_attributeMatchingModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Address"))
  {
    Aws::Utils::Array<JsonView> addressJsonList = jsonValue.GetArray("Address");
    for(unsigned addressIndex = 0; addressIndex < addressJsonList.GetLength(); ++addressIndex)
    {
      m_address.push_back(addressJsonList[addressIndex].AsString());
    }
    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    Aws::Utils::Array<JsonView> phoneNumberJsonList = jsonValue.GetArray("PhoneNumber");
    for(unsigned phoneNumberIndex = 0; phoneNumberIndex < phoneNumberJsonList.GetLength(); ++phoneNumberIndex)
    {
      m_phoneNumber.push_back(phoneNumberJsonList[phoneNumberIndex].AsString());
    }
    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailAddress"))
  {
    Aws::Utils::Array<JsonView> emailAddressJsonList = jsonValue.GetArray("EmailAddress");
    for(unsigned emailAddressIndex = 0; emailAddressIndex < emailAddressJsonList.GetLength(); ++emailAddressIndex)
    {
      m_emailAddress.push_back(emailAddressJsonList[emailAddressIndex].AsString());
    }
    m_emailAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeTypesSelector::Jsonize() const
{
  JsonValue payload;

  if(m_attributeMatchingModelHasBeenSet)
  {
   payload.WithString("AttributeMatchingModel", AttributeMatchingModelMapper::GetNameForAttributeMatchingModel(m_attributeMatchingModel));
  }

  if(m_addressHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addressJsonList(m_address.size());
   for(unsigned addressIndex = 0; addressIndex < addressJsonList.GetLength(); ++addressIndex)
   {
     addressJsonList[addressIndex].AsString(m_address[addressIndex]);
   }
   payload.WithArray("Address", std::move(addressJsonList));

  }

  if(m_phoneNumberHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phoneNumberJsonList(m_phoneNumber.size());
   for(unsigned phoneNumberIndex = 0; phoneNumberIndex < phoneNumberJsonList.GetLength(); ++phoneNumberIndex)
   {
     phoneNumberJsonList[phoneNumberIndex].AsString(m_phoneNumber[phoneNumberIndex]);
   }
   payload.WithArray("PhoneNumber", std::move(phoneNumberJsonList));

  }

  if(m_emailAddressHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> emailAddressJsonList(m_emailAddress.size());
   for(unsigned emailAddressIndex = 0; emailAddressIndex < emailAddressJsonList.GetLength(); ++emailAddressIndex)
   {
     emailAddressJsonList[emailAddressIndex].AsString(m_emailAddress[emailAddressIndex]);
   }
   payload.WithArray("EmailAddress", std::move(emailAddressJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
