/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/NotebookExecution.h>
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

NotebookExecution::NotebookExecution() : 
    m_notebookExecutionIdHasBeenSet(false),
    m_editorIdHasBeenSet(false),
    m_executionEngineHasBeenSet(false),
    m_notebookExecutionNameHasBeenSet(false),
    m_notebookParamsHasBeenSet(false),
    m_status(NotebookExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_outputNotebookURIHasBeenSet(false),
    m_lastStateChangeReasonHasBeenSet(false),
    m_notebookInstanceSecurityGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

NotebookExecution::NotebookExecution(JsonView jsonValue) : 
    m_notebookExecutionIdHasBeenSet(false),
    m_editorIdHasBeenSet(false),
    m_executionEngineHasBeenSet(false),
    m_notebookExecutionNameHasBeenSet(false),
    m_notebookParamsHasBeenSet(false),
    m_status(NotebookExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_outputNotebookURIHasBeenSet(false),
    m_lastStateChangeReasonHasBeenSet(false),
    m_notebookInstanceSecurityGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

NotebookExecution& NotebookExecution::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ExecutionEngine"))
  {
    m_executionEngine = jsonValue.GetObject("ExecutionEngine");

    m_executionEngineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotebookExecutionName"))
  {
    m_notebookExecutionName = jsonValue.GetString("NotebookExecutionName");

    m_notebookExecutionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotebookParams"))
  {
    m_notebookParams = jsonValue.GetString("NotebookParams");

    m_notebookParamsHasBeenSet = true;
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

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputNotebookURI"))
  {
    m_outputNotebookURI = jsonValue.GetString("OutputNotebookURI");

    m_outputNotebookURIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStateChangeReason"))
  {
    m_lastStateChangeReason = jsonValue.GetString("LastStateChangeReason");

    m_lastStateChangeReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotebookInstanceSecurityGroupId"))
  {
    m_notebookInstanceSecurityGroupId = jsonValue.GetString("NotebookInstanceSecurityGroupId");

    m_notebookInstanceSecurityGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue NotebookExecution::Jsonize() const
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

  if(m_executionEngineHasBeenSet)
  {
   payload.WithObject("ExecutionEngine", m_executionEngine.Jsonize());

  }

  if(m_notebookExecutionNameHasBeenSet)
  {
   payload.WithString("NotebookExecutionName", m_notebookExecutionName);

  }

  if(m_notebookParamsHasBeenSet)
  {
   payload.WithString("NotebookParams", m_notebookParams);

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

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_outputNotebookURIHasBeenSet)
  {
   payload.WithString("OutputNotebookURI", m_outputNotebookURI);

  }

  if(m_lastStateChangeReasonHasBeenSet)
  {
   payload.WithString("LastStateChangeReason", m_lastStateChangeReason);

  }

  if(m_notebookInstanceSecurityGroupIdHasBeenSet)
  {
   payload.WithString("NotebookInstanceSecurityGroupId", m_notebookInstanceSecurityGroupId);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
