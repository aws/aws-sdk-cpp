/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListedWorkflow.h>
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

ListedWorkflow::ListedWorkflow() : 
    m_workflowIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

ListedWorkflow::ListedWorkflow(JsonView jsonValue) : 
    m_workflowIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

ListedWorkflow& ListedWorkflow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkflowId"))
  {
    m_workflowId = jsonValue.GetString("WorkflowId");

    m_workflowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedWorkflow::Jsonize() const
{
  JsonValue payload;

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("WorkflowId", m_workflowId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
