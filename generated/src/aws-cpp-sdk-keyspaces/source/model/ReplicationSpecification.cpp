/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/ReplicationSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

ReplicationSpecification::ReplicationSpecification() : 
    m_replicationStrategy(Rs::NOT_SET),
    m_replicationStrategyHasBeenSet(false),
    m_regionListHasBeenSet(false)
{
}

ReplicationSpecification::ReplicationSpecification(JsonView jsonValue) : 
    m_replicationStrategy(Rs::NOT_SET),
    m_replicationStrategyHasBeenSet(false),
    m_regionListHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationSpecification& ReplicationSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("replicationStrategy"))
  {
    m_replicationStrategy = RsMapper::GetRsForName(jsonValue.GetString("replicationStrategy"));

    m_replicationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regionList"))
  {
    Aws::Utils::Array<JsonView> regionListJsonList = jsonValue.GetArray("regionList");
    for(unsigned regionListIndex = 0; regionListIndex < regionListJsonList.GetLength(); ++regionListIndex)
    {
      m_regionList.push_back(regionListJsonList[regionListIndex].AsString());
    }
    m_regionListHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_replicationStrategyHasBeenSet)
  {
   payload.WithString("replicationStrategy", RsMapper::GetNameForRs(m_replicationStrategy));
  }

  if(m_regionListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionListJsonList(m_regionList.size());
   for(unsigned regionListIndex = 0; regionListIndex < regionListJsonList.GetLength(); ++regionListIndex)
   {
     regionListJsonList[regionListIndex].AsString(m_regionList[regionListIndex]);
   }
   payload.WithArray("regionList", std::move(regionListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
