/*
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

#include <aws/dms/model/ReplicationInstanceTaskLog.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ReplicationInstanceTaskLog::ReplicationInstanceTaskLog() : 
    m_replicationTaskNameHasBeenSet(false),
    m_replicationTaskArnHasBeenSet(false),
    m_replicationInstanceTaskLogSize(0),
    m_replicationInstanceTaskLogSizeHasBeenSet(false)
{
}

ReplicationInstanceTaskLog::ReplicationInstanceTaskLog(const JsonValue& jsonValue) : 
    m_replicationTaskNameHasBeenSet(false),
    m_replicationTaskArnHasBeenSet(false),
    m_replicationInstanceTaskLogSize(0),
    m_replicationInstanceTaskLogSizeHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationInstanceTaskLog& ReplicationInstanceTaskLog::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ReplicationTaskName"))
  {
    m_replicationTaskName = jsonValue.GetString("ReplicationTaskName");

    m_replicationTaskNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskArn"))
  {
    m_replicationTaskArn = jsonValue.GetString("ReplicationTaskArn");

    m_replicationTaskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceTaskLogSize"))
  {
    m_replicationInstanceTaskLogSize = jsonValue.GetInt64("ReplicationInstanceTaskLogSize");

    m_replicationInstanceTaskLogSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationInstanceTaskLog::Jsonize() const
{
  JsonValue payload;

  if(m_replicationTaskNameHasBeenSet)
  {
   payload.WithString("ReplicationTaskName", m_replicationTaskName);

  }

  if(m_replicationTaskArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskArn", m_replicationTaskArn);

  }

  if(m_replicationInstanceTaskLogSizeHasBeenSet)
  {
   payload.WithInt64("ReplicationInstanceTaskLogSize", m_replicationInstanceTaskLogSize);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
