/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/WorkflowDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

WorkflowDetail::WorkflowDetail() : 
    m_workflowIdHasBeenSet(false),
    m_executionRoleHasBeenSet(false)
{
}

WorkflowDetail::WorkflowDetail(JsonView jsonValue) : 
    m_workflowIdHasBeenSet(false),
    m_executionRoleHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowDetail& WorkflowDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkflowId"))
  {
    m_workflowId = jsonValue.GetString("WorkflowId");

    m_workflowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionRole"))
  {
    m_executionRole = jsonValue.GetString("ExecutionRole");

    m_executionRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowDetail::Jsonize() const
{
  JsonValue payload;

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("WorkflowId", m_workflowId);

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("ExecutionRole", m_executionRole);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
