/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/NotebookExecutionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

NotebookExecutionSummary::NotebookExecutionSummary() : 
    m_notebookExecutionIdHasBeenSet(false),
    m_editorIdHasBeenSet(false),
    m_notebookExecutionNameHasBeenSet(false),
    m_status(NotebookExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

NotebookExecutionSummary::NotebookExecutionSummary(JsonView jsonValue) : 
    m_notebookExecutionIdHasBeenSet(false),
    m_editorIdHasBeenSet(false),
    m_notebookExecutionNameHasBeenSet(false),
    m_status(NotebookExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

NotebookExecutionSummary& NotebookExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotebookExecutionId"))
  {
    m_notebookExecutionId = jsonValue.GetString("NotebookExecutionId");

    m_notebookExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EditorId"))
  {
    m_editorId = jsonValue.GetString("EditorId");

    m_editorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotebookExecutionName"))
  {
    m_notebookExecutionName = jsonValue.GetString("NotebookExecutionName");

    m_notebookExecutionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = NotebookExecutionStatusMapper::GetNotebookExecutionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue NotebookExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_notebookExecutionIdHasBeenSet)
  {
   payload.WithString("NotebookExecutionId", m_notebookExecutionId);

  }

  if(m_editorIdHasBeenSet)
  {
   payload.WithString("EditorId", m_editorId);

  }

  if(m_notebookExecutionNameHasBeenSet)
  {
   payload.WithString("NotebookExecutionName", m_notebookExecutionName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", NotebookExecutionStatusMapper::GetNameForNotebookExecutionStatus(m_status));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
