﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/dynamodb/model/GlobalTableDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

GlobalTableDescription::GlobalTableDescription() : 
    m_replicationGroupHasBeenSet(false),
    m_globalTableArnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_globalTableStatus(GlobalTableStatus::NOT_SET),
    m_globalTableStatusHasBeenSet(false),
    m_globalTableNameHasBeenSet(false)
{
}

GlobalTableDescription::GlobalTableDescription(const JsonValue& jsonValue) : 
    m_replicationGroupHasBeenSet(false),
    m_globalTableArnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_globalTableStatus(GlobalTableStatus::NOT_SET),
    m_globalTableStatusHasBeenSet(false),
    m_globalTableNameHasBeenSet(false)
{
  *this = jsonValue;
}

GlobalTableDescription& GlobalTableDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ReplicationGroup"))
  {
    Array<JsonValue> replicationGroupJsonList = jsonValue.GetArray("ReplicationGroup");
    for(unsigned replicationGroupIndex = 0; replicationGroupIndex < replicationGroupJsonList.GetLength(); ++replicationGroupIndex)
    {
      m_replicationGroup.push_back(replicationGroupJsonList[replicationGroupIndex].AsObject());
    }
    m_replicationGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalTableArn"))
  {
    m_globalTableArn = jsonValue.GetString("GlobalTableArn");

    m_globalTableArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalTableStatus"))
  {
    m_globalTableStatus = GlobalTableStatusMapper::GetGlobalTableStatusForName(jsonValue.GetString("GlobalTableStatus"));

    m_globalTableStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalTableName"))
  {
    m_globalTableName = jsonValue.GetString("GlobalTableName");

    m_globalTableNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GlobalTableDescription::Jsonize() const
{
  JsonValue payload;

  if(m_replicationGroupHasBeenSet)
  {
   Array<JsonValue> replicationGroupJsonList(m_replicationGroup.size());
   for(unsigned replicationGroupIndex = 0; replicationGroupIndex < replicationGroupJsonList.GetLength(); ++replicationGroupIndex)
   {
     replicationGroupJsonList[replicationGroupIndex].AsObject(m_replicationGroup[replicationGroupIndex].Jsonize());
   }
   payload.WithArray("ReplicationGroup", std::move(replicationGroupJsonList));

  }

  if(m_globalTableArnHasBeenSet)
  {
   payload.WithString("GlobalTableArn", m_globalTableArn);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("CreationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_globalTableStatusHasBeenSet)
  {
   payload.WithString("GlobalTableStatus", GlobalTableStatusMapper::GetNameForGlobalTableStatus(m_globalTableStatus));
  }

  if(m_globalTableNameHasBeenSet)
  {
   payload.WithString("GlobalTableName", m_globalTableName);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
