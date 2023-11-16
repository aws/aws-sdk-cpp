/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecycleExecutionResourceAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LifecycleExecutionResourceAction::LifecycleExecutionResourceAction() : 
    m_name(LifecycleExecutionResourceActionName::NOT_SET),
    m_nameHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

LifecycleExecutionResourceAction::LifecycleExecutionResourceAction(JsonView jsonValue) : 
    m_name(LifecycleExecutionResourceActionName::NOT_SET),
    m_nameHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

LifecycleExecutionResourceAction& LifecycleExecutionResourceAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = LifecycleExecutionResourceActionNameMapper::GetLifecycleExecutionResourceActionNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecycleExecutionResourceAction::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", LifecycleExecutionResourceActionNameMapper::GetNameForLifecycleExecutionResourceActionName(m_name));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
