/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/MinimalWorkflow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

MinimalWorkflow::MinimalWorkflow(JsonView jsonValue)
{
  *this = jsonValue;
}

MinimalWorkflow& MinimalWorkflow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = ExecutionActionMapper::GetExecutionActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue MinimalWorkflow::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", ExecutionActionMapper::GetNameForExecutionAction(m_action));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
