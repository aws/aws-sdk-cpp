/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ReplicationSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

ReplicationSet::ReplicationSet() : 
    m_arnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_deletionProtected(false),
    m_deletionProtectedHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_regionMapHasBeenSet(false),
    m_status(ReplicationSetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ReplicationSet::ReplicationSet(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_deletionProtected(false),
    m_deletionProtectedHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_regionMapHasBeenSet(false),
    m_status(ReplicationSetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationSet& ReplicationSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deletionProtected"))
  {
    m_deletionProtected = jsonValue.GetBool("deletionProtected");

    m_deletionProtectedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("lastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("lastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regionMap"))
  {
    Aws::Map<Aws::String, JsonView> regionMapJsonMap = jsonValue.GetObject("regionMap").GetAllObjects();
    for(auto& regionMapItem : regionMapJsonMap)
    {
      m_regionMap[regionMapItem.first] = regionMapItem.second.AsObject();
    }
    m_regionMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReplicationSetStatusMapper::GetReplicationSetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationSet::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_deletionProtectedHasBeenSet)
  {
   payload.WithBool("deletionProtected", m_deletionProtected);

  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("lastModifiedBy", m_lastModifiedBy);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("lastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_regionMapHasBeenSet)
  {
   JsonValue regionMapJsonMap;
   for(auto& regionMapItem : m_regionMap)
   {
     regionMapJsonMap.WithObject(regionMapItem.first, regionMapItem.second.Jsonize());
   }
   payload.WithObject("regionMap", std::move(regionMapJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReplicationSetStatusMapper::GetNameForReplicationSetStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
