/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ActionContext::ActionContext() : 
    m_nameHasBeenSet(false),
    m_actionExecutionIdHasBeenSet(false)
{
}

ActionContext::ActionContext(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_actionExecutionIdHasBeenSet(false)
{
  *this = jsonValue;
}

ActionContext& ActionContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionExecutionId"))
  {
    m_actionExecutionId = jsonValue.GetString("actionExecutionId");

    m_actionExecutionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionContext::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_actionExecutionIdHasBeenSet)
  {
   payload.WithString("actionExecutionId", m_actionExecutionId);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
