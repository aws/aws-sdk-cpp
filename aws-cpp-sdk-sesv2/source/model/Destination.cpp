/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Destination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

Destination::Destination() : 
    m_toAddressesHasBeenSet(false),
    m_ccAddressesHasBeenSet(false),
    m_bccAddressesHasBeenSet(false)
{
}

Destination::Destination(JsonView jsonValue) : 
    m_toAddressesHasBeenSet(false),
    m_ccAddressesHasBeenSet(false),
    m_bccAddressesHasBeenSet(false)
{
  *this = jsonValue;
}

Destination& Destination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ToAddresses"))
  {
    Aws::Utils::Array<JsonView> toAddressesJsonList = jsonValue.GetArray("ToAddresses");
    for(unsigned toAddressesIndex = 0; toAddressesIndex < toAddressesJsonList.GetLength(); ++toAddressesIndex)
    {
      m_toAddresses.push_back(toAddressesJsonList[toAddressesIndex].AsString());
    }
    m_toAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CcAddresses"))
  {
    Aws::Utils::Array<JsonView> ccAddressesJsonList = jsonValue.GetArray("CcAddresses");
    for(unsigned ccAddressesIndex = 0; ccAddressesIndex < ccAddressesJsonList.GetLength(); ++ccAddressesIndex)
    {
      m_ccAddresses.push_back(ccAddressesJsonList[ccAddressesIndex].AsString());
    }
    m_ccAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BccAddresses"))
  {
    Aws::Utils::Array<JsonView> bccAddressesJsonList = jsonValue.GetArray("BccAddresses");
    for(unsigned bccAddressesIndex = 0; bccAddressesIndex < bccAddressesJsonList.GetLength(); ++bccAddressesIndex)
    {
      m_bccAddresses.push_back(bccAddressesJsonList[bccAddressesIndex].AsString());
    }
    m_bccAddressesHasBeenSet = true;
  }

  return *this;
}

JsonValue Destination::Jsonize() const
{
  JsonValue payload;

  if(m_toAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> toAddressesJsonList(m_toAddresses.size());
   for(unsigned toAddressesIndex = 0; toAddressesIndex < toAddressesJsonList.GetLength(); ++toAddressesIndex)
   {
     toAddressesJsonList[toAddressesIndex].AsString(m_toAddresses[toAddressesIndex]);
   }
   payload.WithArray("ToAddresses", std::move(toAddressesJsonList));

  }

  if(m_ccAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ccAddressesJsonList(m_ccAddresses.size());
   for(unsigned ccAddressesIndex = 0; ccAddressesIndex < ccAddressesJsonList.GetLength(); ++ccAddressesIndex)
   {
     ccAddressesJsonList[ccAddressesIndex].AsString(m_ccAddresses[ccAddressesIndex]);
   }
   payload.WithArray("CcAddresses", std::move(ccAddressesJsonList));

  }

  if(m_bccAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bccAddressesJsonList(m_bccAddresses.size());
   for(unsigned bccAddressesIndex = 0; bccAddressesIndex < bccAddressesJsonList.GetLength(); ++bccAddressesIndex)
   {
     bccAddressesJsonList[bccAddressesIndex].AsString(m_bccAddresses[bccAddressesIndex]);
   }
   payload.WithArray("BccAddresses", std::move(bccAddressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
