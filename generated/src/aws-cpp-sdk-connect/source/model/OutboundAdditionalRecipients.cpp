/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OutboundAdditionalRecipients.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

OutboundAdditionalRecipients::OutboundAdditionalRecipients(JsonView jsonValue)
{
  *this = jsonValue;
}

OutboundAdditionalRecipients& OutboundAdditionalRecipients::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CcEmailAddresses"))
  {
    Aws::Utils::Array<JsonView> ccEmailAddressesJsonList = jsonValue.GetArray("CcEmailAddresses");
    for(unsigned ccEmailAddressesIndex = 0; ccEmailAddressesIndex < ccEmailAddressesJsonList.GetLength(); ++ccEmailAddressesIndex)
    {
      m_ccEmailAddresses.push_back(ccEmailAddressesJsonList[ccEmailAddressesIndex].AsObject());
    }
    m_ccEmailAddressesHasBeenSet = true;
  }
  return *this;
}

JsonValue OutboundAdditionalRecipients::Jsonize() const
{
  JsonValue payload;

  if(m_ccEmailAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ccEmailAddressesJsonList(m_ccEmailAddresses.size());
   for(unsigned ccEmailAddressesIndex = 0; ccEmailAddressesIndex < ccEmailAddressesJsonList.GetLength(); ++ccEmailAddressesIndex)
   {
     ccEmailAddressesJsonList[ccEmailAddressesIndex].AsObject(m_ccEmailAddresses[ccEmailAddressesIndex].Jsonize());
   }
   payload.WithArray("CcEmailAddresses", std::move(ccEmailAddressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
