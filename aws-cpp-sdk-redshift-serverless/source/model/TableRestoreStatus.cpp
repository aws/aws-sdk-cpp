/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/TableRestoreStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

TableRestoreStatus::TableRestoreStatus() : 
    m_messageHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_newTableNameHasBeenSet(false),
    m_progressInMegaBytes(0),
    m_progressInMegaBytesHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_sourceDatabaseNameHasBeenSet(false),
    m_sourceSchemaNameHasBeenSet(false),
    m_sourceTableNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tableRestoreRequestIdHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetSchemaNameHasBeenSet(false),
    m_totalDataInMegaBytes(0),
    m_totalDataInMegaBytesHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
}

TableRestoreStatus::TableRestoreStatus(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_newTableNameHasBeenSet(false),
    m_progressInMegaBytes(0),
    m_progressInMegaBytesHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_sourceDatabaseNameHasBeenSet(false),
    m_sourceSchemaNameHasBeenSet(false),
    m_sourceTableNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tableRestoreRequestIdHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetSchemaNameHasBeenSet(false),
    m_totalDataInMegaBytes(0),
    m_totalDataInMegaBytesHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

TableRestoreStatus& TableRestoreStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

    m_namespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("newTableName"))
  {
    m_newTableName = jsonValue.GetString("newTableName");

    m_newTableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progressInMegaBytes"))
  {
    m_progressInMegaBytes = jsonValue.GetInt64("progressInMegaBytes");

    m_progressInMegaBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestTime"))
  {
    m_requestTime = jsonValue.GetDouble("requestTime");

    m_requestTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotName"))
  {
    m_snapshotName = jsonValue.GetString("snapshotName");

    m_snapshotNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceDatabaseName"))
  {
    m_sourceDatabaseName = jsonValue.GetString("sourceDatabaseName");

    m_sourceDatabaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceSchemaName"))
  {
    m_sourceSchemaName = jsonValue.GetString("sourceSchemaName");

    m_sourceSchemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceTableName"))
  {
    m_sourceTableName = jsonValue.GetString("sourceTableName");

    m_sourceTableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tableRestoreRequestId"))
  {
    m_tableRestoreRequestId = jsonValue.GetString("tableRestoreRequestId");

    m_tableRestoreRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetDatabaseName"))
  {
    m_targetDatabaseName = jsonValue.GetString("targetDatabaseName");

    m_targetDatabaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetSchemaName"))
  {
    m_targetSchemaName = jsonValue.GetString("targetSchemaName");

    m_targetSchemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalDataInMegaBytes"))
  {
    m_totalDataInMegaBytes = jsonValue.GetInt64("totalDataInMegaBytes");

    m_totalDataInMegaBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workgroupName"))
  {
    m_workgroupName = jsonValue.GetString("workgroupName");

    m_workgroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TableRestoreStatus::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_newTableNameHasBeenSet)
  {
   payload.WithString("newTableName", m_newTableName);

  }

  if(m_progressInMegaBytesHasBeenSet)
  {
   payload.WithInt64("progressInMegaBytes", m_progressInMegaBytes);

  }

  if(m_requestTimeHasBeenSet)
  {
   payload.WithDouble("requestTime", m_requestTime.SecondsWithMSPrecision());
  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("snapshotName", m_snapshotName);

  }

  if(m_sourceDatabaseNameHasBeenSet)
  {
   payload.WithString("sourceDatabaseName", m_sourceDatabaseName);

  }

  if(m_sourceSchemaNameHasBeenSet)
  {
   payload.WithString("sourceSchemaName", m_sourceSchemaName);

  }

  if(m_sourceTableNameHasBeenSet)
  {
   payload.WithString("sourceTableName", m_sourceTableName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_tableRestoreRequestIdHasBeenSet)
  {
   payload.WithString("tableRestoreRequestId", m_tableRestoreRequestId);

  }

  if(m_targetDatabaseNameHasBeenSet)
  {
   payload.WithString("targetDatabaseName", m_targetDatabaseName);

  }

  if(m_targetSchemaNameHasBeenSet)
  {
   payload.WithString("targetSchemaName", m_targetSchemaName);

  }

  if(m_totalDataInMegaBytesHasBeenSet)
  {
   payload.WithInt64("totalDataInMegaBytes", m_totalDataInMegaBytes);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
