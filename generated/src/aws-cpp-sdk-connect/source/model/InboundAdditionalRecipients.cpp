/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InboundAdditionalRecipients.h>
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

InboundAdditionalRecipients::InboundAdditionalRecipients(JsonView jsonValue)
{
  *this = jsonValue;
}

InboundAdditionalRecipients& InboundAdditionalRecipients::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ToAddresses"))
  {
    Aws::Utils::Array<JsonView> toAddressesJsonList = jsonValue.GetArray("ToAddresses");
    for(unsigned toAddressesIndex = 0; toAddressesIndex < toAddressesJsonList.GetLength(); ++toAddressesIndex)
    {
      m_toAddresses.push_back(toAddressesJsonList[toAddressesIndex].AsObject());
    }
    m_toAddressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CcAddresses"))
  {
    Aws::Utils::Array<JsonView> ccAddressesJsonList = jsonValue.GetArray("CcAddresses");
    for(unsigned ccAddressesIndex = 0; ccAddressesIndex < ccAddressesJsonList.GetLength(); ++ccAddressesIndex)
    {
      m_ccAddresses.push_back(ccAddressesJsonList[ccAddressesIndex].AsObject());
    }
    m_ccAddressesHasBeenSet = true;
  }
  return *this;
}

JsonValue InboundAdditionalRecipients::Jsonize() const
{
  JsonValue payload;

  if(m_toAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> toAddressesJsonList(m_toAddresses.size());
   for(unsigned toAddressesIndex = 0; toAddressesIndex < toAddressesJsonList.GetLength(); ++toAddressesIndex)
   {
     toAddressesJsonList[toAddressesIndex].AsObject(m_toAddresses[toAddressesIndex].Jsonize());
   }
   payload.WithArray("ToAddresses", std::move(toAddressesJsonList));

  }

  if(m_ccAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ccAddressesJsonList(m_ccAddresses.size());
   for(unsigned ccAddressesIndex = 0; ccAddressesIndex < ccAddressesJsonList.GetLength(); ++ccAddressesIndex)
   {
     ccAddressesJsonList[ccAddressesIndex].AsObject(m_ccAddresses[ccAddressesIndex].Jsonize());
   }
   payload.WithArray("CcAddresses", std::move(ccAddressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
