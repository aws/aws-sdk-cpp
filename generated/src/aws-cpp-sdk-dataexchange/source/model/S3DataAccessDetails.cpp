/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/S3DataAccessDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

S3DataAccessDetails::S3DataAccessDetails() : 
    m_keyPrefixesHasBeenSet(false),
    m_keysHasBeenSet(false)
{
}

S3DataAccessDetails::S3DataAccessDetails(JsonView jsonValue) : 
    m_keyPrefixesHasBeenSet(false),
    m_keysHasBeenSet(false)
{
  *this = jsonValue;
}

S3DataAccessDetails& S3DataAccessDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyPrefixes"))
  {
    Aws::Utils::Array<JsonView> keyPrefixesJsonList = jsonValue.GetArray("KeyPrefixes");
    for(unsigned keyPrefixesIndex = 0; keyPrefixesIndex < keyPrefixesJsonList.GetLength(); ++keyPrefixesIndex)
    {
      m_keyPrefixes.push_back(keyPrefixesJsonList[keyPrefixesIndex].AsString());
    }
    m_keyPrefixesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Keys"))
  {
    Aws::Utils::Array<JsonView> keysJsonList = jsonValue.GetArray("Keys");
    for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
    {
      m_keys.push_back(keysJsonList[keysIndex].AsString());
    }
    m_keysHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DataAccessDetails::Jsonize() const
{
  JsonValue payload;

  if(m_keyPrefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keyPrefixesJsonList(m_keyPrefixes.size());
   for(unsigned keyPrefixesIndex = 0; keyPrefixesIndex < keyPrefixesJsonList.GetLength(); ++keyPrefixesIndex)
   {
     keyPrefixesJsonList[keyPrefixesIndex].AsString(m_keyPrefixes[keyPrefixesIndex]);
   }
   payload.WithArray("KeyPrefixes", std::move(keyPrefixesJsonList));

  }

  if(m_keysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keysJsonList(m_keys.size());
   for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
   {
     keysJsonList[keysIndex].AsString(m_keys[keysIndex]);
   }
   payload.WithArray("Keys", std::move(keysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
