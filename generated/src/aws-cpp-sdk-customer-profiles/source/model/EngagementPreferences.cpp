/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/EngagementPreferences.h>
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

EngagementPreferences::EngagementPreferences(JsonView jsonValue)
{
  *this = jsonValue;
}

EngagementPreferences& EngagementPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Phone"))
  {
    Aws::Utils::Array<JsonView> phoneJsonList = jsonValue.GetArray("Phone");
    for(unsigned phoneIndex = 0; phoneIndex < phoneJsonList.GetLength(); ++phoneIndex)
    {
      m_phone.push_back(phoneJsonList[phoneIndex].AsObject());
    }
    m_phoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Email"))
  {
    Aws::Utils::Array<JsonView> emailJsonList = jsonValue.GetArray("Email");
    for(unsigned emailIndex = 0; emailIndex < emailJsonList.GetLength(); ++emailIndex)
    {
      m_email.push_back(emailJsonList[emailIndex].AsObject());
    }
    m_emailHasBeenSet = true;
  }
  return *this;
}

JsonValue EngagementPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_phoneHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phoneJsonList(m_phone.size());
   for(unsigned phoneIndex = 0; phoneIndex < phoneJsonList.GetLength(); ++phoneIndex)
   {
     phoneJsonList[phoneIndex].AsObject(m_phone[phoneIndex].Jsonize());
   }
   payload.WithArray("Phone", std::move(phoneJsonList));

  }

  if(m_emailHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> emailJsonList(m_email.size());
   for(unsigned emailIndex = 0; emailIndex < emailJsonList.GetLength(); ++emailIndex)
   {
     emailJsonList[emailIndex].AsObject(m_email[emailIndex].Jsonize());
   }
   payload.WithArray("Email", std::move(emailJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
