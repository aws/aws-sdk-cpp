/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/WorkflowSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

WorkflowSummary::WorkflowSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceRepositoryNameHasBeenSet(false),
    m_sourceBranchNameHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_runMode(WorkflowRunMode::NOT_SET),
    m_runModeHasBeenSet(false),
    m_status(WorkflowStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

WorkflowSummary::WorkflowSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceRepositoryNameHasBeenSet(false),
    m_sourceBranchNameHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_runMode(WorkflowRunMode::NOT_SET),
    m_runModeHasBeenSet(false),
    m_status(WorkflowStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowSummary& WorkflowSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceRepositoryName"))
  {
    m_sourceRepositoryName = jsonValue.GetString("sourceRepositoryName");

    m_sourceRepositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceBranchName"))
  {
    m_sourceBranchName = jsonValue.GetString("sourceBranchName");

    m_sourceBranchNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetString("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runMode"))
  {
    m_runMode = WorkflowRunModeMapper::GetWorkflowRunModeForName(jsonValue.GetString("runMode"));

    m_runModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkflowStatusMapper::GetWorkflowStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourceRepositoryNameHasBeenSet)
  {
   payload.WithString("sourceRepositoryName", m_sourceRepositoryName);

  }

  if(m_sourceBranchNameHasBeenSet)
  {
   payload.WithString("sourceBranchName", m_sourceBranchName);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("createdTime", m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedTime", m_lastUpdatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_runModeHasBeenSet)
  {
   payload.WithString("runMode", WorkflowRunModeMapper::GetNameForWorkflowRunMode(m_runMode));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkflowStatusMapper::GetNameForWorkflowStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
