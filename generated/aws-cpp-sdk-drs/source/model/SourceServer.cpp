﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/SourceServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

SourceServer::SourceServer() : 
    m_arnHasBeenSet(false),
    m_dataReplicationInfoHasBeenSet(false),
    m_lastLaunchResult(LastLaunchResult::NOT_SET),
    m_lastLaunchResultHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_recoveryInstanceIdHasBeenSet(false),
    m_sourcePropertiesHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

SourceServer::SourceServer(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_dataReplicationInfoHasBeenSet(false),
    m_lastLaunchResult(LastLaunchResult::NOT_SET),
    m_lastLaunchResultHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_recoveryInstanceIdHasBeenSet(false),
    m_sourcePropertiesHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceServer& SourceServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataReplicationInfo"))
  {
    m_dataReplicationInfo = jsonValue.GetObject("dataReplicationInfo");

    m_dataReplicationInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastLaunchResult"))
  {
    m_lastLaunchResult = LastLaunchResultMapper::GetLastLaunchResultForName(jsonValue.GetString("lastLaunchResult"));

    m_lastLaunchResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifeCycle"))
  {
    m_lifeCycle = jsonValue.GetObject("lifeCycle");

    m_lifeCycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recoveryInstanceId"))
  {
    m_recoveryInstanceId = jsonValue.GetString("recoveryInstanceId");

    m_recoveryInstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceProperties"))
  {
    m_sourceProperties = jsonValue.GetObject("sourceProperties");

    m_sourcePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

    m_sourceServerIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceServer::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_dataReplicationInfoHasBeenSet)
  {
   payload.WithObject("dataReplicationInfo", m_dataReplicationInfo.Jsonize());

  }

  if(m_lastLaunchResultHasBeenSet)
  {
   payload.WithString("lastLaunchResult", LastLaunchResultMapper::GetNameForLastLaunchResult(m_lastLaunchResult));
  }

  if(m_lifeCycleHasBeenSet)
  {
   payload.WithObject("lifeCycle", m_lifeCycle.Jsonize());

  }

  if(m_recoveryInstanceIdHasBeenSet)
  {
   payload.WithString("recoveryInstanceId", m_recoveryInstanceId);

  }

  if(m_sourcePropertiesHasBeenSet)
  {
   payload.WithObject("sourceProperties", m_sourceProperties.Jsonize());

  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
