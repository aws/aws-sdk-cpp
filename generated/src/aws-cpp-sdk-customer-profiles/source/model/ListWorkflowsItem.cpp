/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ListWorkflowsItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ListWorkflowsItem::ListWorkflowsItem() : 
    m_workflowType(WorkflowType::NOT_SET),
    m_workflowTypeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDescriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
}

ListWorkflowsItem::ListWorkflowsItem(JsonView jsonValue) : 
    m_workflowType(WorkflowType::NOT_SET),
    m_workflowTypeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDescriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ListWorkflowsItem& ListWorkflowsItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkflowType"))
  {
    m_workflowType = WorkflowTypeMapper::GetWorkflowTypeForName(jsonValue.GetString("WorkflowType"));

    m_workflowTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkflowId"))
  {
    m_workflowId = jsonValue.GetString("WorkflowId");

    m_workflowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDescription"))
  {
    m_statusDescription = jsonValue.GetString("StatusDescription");

    m_statusDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ListWorkflowsItem::Jsonize() const
{
  JsonValue payload;

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithString("WorkflowType", WorkflowTypeMapper::GetNameForWorkflowType(m_workflowType));
  }

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("WorkflowId", m_workflowId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_statusDescriptionHasBeenSet)
  {
   payload.WithString("StatusDescription", m_statusDescription);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
