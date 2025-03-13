/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/BrokerCountUpdateInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

BrokerCountUpdateInfo::BrokerCountUpdateInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

BrokerCountUpdateInfo& BrokerCountUpdateInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdBrokerIds"))
  {
    Aws::Utils::Array<JsonView> createdBrokerIdsJsonList = jsonValue.GetArray("createdBrokerIds");
    for(unsigned createdBrokerIdsIndex = 0; createdBrokerIdsIndex < createdBrokerIdsJsonList.GetLength(); ++createdBrokerIdsIndex)
    {
      m_createdBrokerIds.push_back(createdBrokerIdsJsonList[createdBrokerIdsIndex].AsDouble());
    }
    m_createdBrokerIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deletedBrokerIds"))
  {
    Aws::Utils::Array<JsonView> deletedBrokerIdsJsonList = jsonValue.GetArray("deletedBrokerIds");
    for(unsigned deletedBrokerIdsIndex = 0; deletedBrokerIdsIndex < deletedBrokerIdsJsonList.GetLength(); ++deletedBrokerIdsIndex)
    {
      m_deletedBrokerIds.push_back(deletedBrokerIdsJsonList[deletedBrokerIdsIndex].AsDouble());
    }
    m_deletedBrokerIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue BrokerCountUpdateInfo::Jsonize() const
{
  JsonValue payload;

  if(m_createdBrokerIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> createdBrokerIdsJsonList(m_createdBrokerIds.size());
   for(unsigned createdBrokerIdsIndex = 0; createdBrokerIdsIndex < createdBrokerIdsJsonList.GetLength(); ++createdBrokerIdsIndex)
   {
     createdBrokerIdsJsonList[createdBrokerIdsIndex].AsDouble(m_createdBrokerIds[createdBrokerIdsIndex]);
   }
   payload.WithArray("createdBrokerIds", std::move(createdBrokerIdsJsonList));

  }

  if(m_deletedBrokerIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deletedBrokerIdsJsonList(m_deletedBrokerIds.size());
   for(unsigned deletedBrokerIdsIndex = 0; deletedBrokerIdsIndex < deletedBrokerIdsJsonList.GetLength(); ++deletedBrokerIdsIndex)
   {
     deletedBrokerIdsJsonList[deletedBrokerIdsIndex].AsDouble(m_deletedBrokerIds[deletedBrokerIdsIndex]);
   }
   payload.WithArray("deletedBrokerIds", std::move(deletedBrokerIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
