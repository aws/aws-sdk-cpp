/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/RdsLimitlessDbDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

RdsLimitlessDbDetails::RdsLimitlessDbDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

RdsLimitlessDbDetails& RdsLimitlessDbDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dbShardGroupIdentifier"))
  {
    m_dbShardGroupIdentifier = jsonValue.GetString("dbShardGroupIdentifier");
    m_dbShardGroupIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbShardGroupResourceId"))
  {
    m_dbShardGroupResourceId = jsonValue.GetString("dbShardGroupResourceId");
    m_dbShardGroupResourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbShardGroupArn"))
  {
    m_dbShardGroupArn = jsonValue.GetString("dbShardGroupArn");
    m_dbShardGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engine"))
  {
    m_engine = jsonValue.GetString("engine");
    m_engineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");
    m_engineVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbClusterIdentifier"))
  {
    m_dbClusterIdentifier = jsonValue.GetString("dbClusterIdentifier");
    m_dbClusterIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue RdsLimitlessDbDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dbShardGroupIdentifierHasBeenSet)
  {
   payload.WithString("dbShardGroupIdentifier", m_dbShardGroupIdentifier);

  }

  if(m_dbShardGroupResourceIdHasBeenSet)
  {
   payload.WithString("dbShardGroupResourceId", m_dbShardGroupResourceId);

  }

  if(m_dbShardGroupArnHasBeenSet)
  {
   payload.WithString("dbShardGroupArn", m_dbShardGroupArn);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("engine", m_engine);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_dbClusterIdentifierHasBeenSet)
  {
   payload.WithString("dbClusterIdentifier", m_dbClusterIdentifier);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
