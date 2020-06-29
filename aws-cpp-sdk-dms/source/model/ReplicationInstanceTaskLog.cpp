/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ReplicationInstanceTaskLog::ReplicationInstanceTaskLog(JsonView jsonValue) : 
    m_replicationTaskNameHasBeenSet(false),
    m_replicationTaskArnHasBeenSet(false),
    m_replicationInstanceTaskLogSize(0),
    m_replicationInstanceTaskLogSizeHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationInstanceTaskLog& ReplicationInstanceTaskLog::operator =(JsonView jsonValue)
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
