﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DescribeSourceServersRequestFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

DescribeSourceServersRequestFilters::DescribeSourceServersRequestFilters() : 
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_lifeCycleStatesHasBeenSet(false),
    m_replicationTypesHasBeenSet(false),
    m_sourceServerIDsHasBeenSet(false)
{
}

DescribeSourceServersRequestFilters::DescribeSourceServersRequestFilters(JsonView jsonValue) : 
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_lifeCycleStatesHasBeenSet(false),
    m_replicationTypesHasBeenSet(false),
    m_sourceServerIDsHasBeenSet(false)
{
  *this = jsonValue;
}

DescribeSourceServersRequestFilters& DescribeSourceServersRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isArchived"))
  {
    m_isArchived = jsonValue.GetBool("isArchived");

    m_isArchivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifeCycleStates"))
  {
    Array<JsonView> lifeCycleStatesJsonList = jsonValue.GetArray("lifeCycleStates");
    for(unsigned lifeCycleStatesIndex = 0; lifeCycleStatesIndex < lifeCycleStatesJsonList.GetLength(); ++lifeCycleStatesIndex)
    {
      m_lifeCycleStates.push_back(LifeCycleStateMapper::GetLifeCycleStateForName(lifeCycleStatesJsonList[lifeCycleStatesIndex].AsString()));
    }
    m_lifeCycleStatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationTypes"))
  {
    Array<JsonView> replicationTypesJsonList = jsonValue.GetArray("replicationTypes");
    for(unsigned replicationTypesIndex = 0; replicationTypesIndex < replicationTypesJsonList.GetLength(); ++replicationTypesIndex)
    {
      m_replicationTypes.push_back(ReplicationTypeMapper::GetReplicationTypeForName(replicationTypesJsonList[replicationTypesIndex].AsString()));
    }
    m_replicationTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServerIDs"))
  {
    Array<JsonView> sourceServerIDsJsonList = jsonValue.GetArray("sourceServerIDs");
    for(unsigned sourceServerIDsIndex = 0; sourceServerIDsIndex < sourceServerIDsJsonList.GetLength(); ++sourceServerIDsIndex)
    {
      m_sourceServerIDs.push_back(sourceServerIDsJsonList[sourceServerIDsIndex].AsString());
    }
    m_sourceServerIDsHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribeSourceServersRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_isArchivedHasBeenSet)
  {
   payload.WithBool("isArchived", m_isArchived);

  }

  if(m_lifeCycleStatesHasBeenSet)
  {
   Array<JsonValue> lifeCycleStatesJsonList(m_lifeCycleStates.size());
   for(unsigned lifeCycleStatesIndex = 0; lifeCycleStatesIndex < lifeCycleStatesJsonList.GetLength(); ++lifeCycleStatesIndex)
   {
     lifeCycleStatesJsonList[lifeCycleStatesIndex].AsString(LifeCycleStateMapper::GetNameForLifeCycleState(m_lifeCycleStates[lifeCycleStatesIndex]));
   }
   payload.WithArray("lifeCycleStates", std::move(lifeCycleStatesJsonList));

  }

  if(m_replicationTypesHasBeenSet)
  {
   Array<JsonValue> replicationTypesJsonList(m_replicationTypes.size());
   for(unsigned replicationTypesIndex = 0; replicationTypesIndex < replicationTypesJsonList.GetLength(); ++replicationTypesIndex)
   {
     replicationTypesJsonList[replicationTypesIndex].AsString(ReplicationTypeMapper::GetNameForReplicationType(m_replicationTypes[replicationTypesIndex]));
   }
   payload.WithArray("replicationTypes", std::move(replicationTypesJsonList));

  }

  if(m_sourceServerIDsHasBeenSet)
  {
   Array<JsonValue> sourceServerIDsJsonList(m_sourceServerIDs.size());
   for(unsigned sourceServerIDsIndex = 0; sourceServerIDsIndex < sourceServerIDsJsonList.GetLength(); ++sourceServerIDsIndex)
   {
     sourceServerIDsJsonList[sourceServerIDsIndex].AsString(m_sourceServerIDs[sourceServerIDsIndex]);
   }
   payload.WithArray("sourceServerIDs", std::move(sourceServerIDsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
